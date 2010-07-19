#include <hxObject.h>

#ifndef INCLUDED_arrow_FunctionProfile
#include <arrow/FunctionProfile.h>
#endif
namespace arrow{

FunctionProfile FunctionProfile_obj::both;

FunctionProfile FunctionProfile_obj::output;

FunctionProfile FunctionProfile_obj::parameter;

DEFINE_CREATE_ENUM(FunctionProfile_obj)

int FunctionProfile_obj::__FindIndex(String inName)
{
	if (inName==String(L"both",4)) return 2;
	if (inName==String(L"output",6)) return 1;
	if (inName==String(L"parameter",9)) return 0;
	return super::__FindIndex(inName);
}

int FunctionProfile_obj::__FindArgCount(String inName)
{
	if (inName==String(L"both",4)) return 0;
	if (inName==String(L"output",6)) return 0;
	if (inName==String(L"parameter",9)) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FunctionProfile_obj::__Field(const String &inName)
{
	if (inName==String(L"both",4)) return both;
	if (inName==String(L"output",6)) return output;
	if (inName==String(L"parameter",9)) return parameter;
	return super::__Field(inName);
}

static wchar_t *sStaticFields[] = {
	L"both",
	L"output",
	L"parameter",
	0 };

static wchar_t *sMemberFields[] = { 0 };
Class FunctionProfile_obj::__mClass;

Dynamic __Create_FunctionProfile_obj() { return new FunctionProfile_obj; }

void FunctionProfile_obj::__register()
{

Static(__mClass) = RegisterClass(String(L"arrow.FunctionProfile",21), TCanCast<FunctionProfile_obj >,sStaticFields,sMemberFields,
	&__Create_FunctionProfile_obj, &__Create,
	&super::__SGetClass(), &CreateFunctionProfile_obj);
}

void FunctionProfile_obj::__boot()
{
Static(both) = CreateEnum<FunctionProfile_obj >(String(L"both",4),2);
Static(output) = CreateEnum<FunctionProfile_obj >(String(L"output",6),1);
Static(parameter) = CreateEnum<FunctionProfile_obj >(String(L"parameter",9),0);
}


} // end namespace arrow
