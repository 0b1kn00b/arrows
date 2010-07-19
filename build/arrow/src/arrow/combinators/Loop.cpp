#include <hxObject.h>

#ifndef INCLUDED_arrow_combinators_Loop
#include <arrow/combinators/Loop.h>
#endif
namespace arrow{
namespace combinators{

Loop Loop_obj::done;

Loop Loop_obj::repeat;

DEFINE_CREATE_ENUM(Loop_obj)

int Loop_obj::__FindIndex(String inName)
{
	if (inName==String(L"done",4)) return 1;
	if (inName==String(L"repeat",6)) return 0;
	return super::__FindIndex(inName);
}

int Loop_obj::__FindArgCount(String inName)
{
	if (inName==String(L"done",4)) return 0;
	if (inName==String(L"repeat",6)) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Loop_obj::__Field(const String &inName)
{
	if (inName==String(L"done",4)) return done;
	if (inName==String(L"repeat",6)) return repeat;
	return super::__Field(inName);
}

static wchar_t *sStaticFields[] = {
	L"done",
	L"repeat",
	0 };

static wchar_t *sMemberFields[] = { 0 };
Class Loop_obj::__mClass;

Dynamic __Create_Loop_obj() { return new Loop_obj; }

void Loop_obj::__register()
{

Static(__mClass) = RegisterClass(String(L"arrow.combinators.Loop",22), TCanCast<Loop_obj >,sStaticFields,sMemberFields,
	&__Create_Loop_obj, &__Create,
	&super::__SGetClass(), &CreateLoop_obj);
}

void Loop_obj::__boot()
{
Static(done) = CreateEnum<Loop_obj >(String(L"done",4),1);
Static(repeat) = CreateEnum<Loop_obj >(String(L"repeat",6),0);
}


} // end namespace arrow
} // end namespace combinators
