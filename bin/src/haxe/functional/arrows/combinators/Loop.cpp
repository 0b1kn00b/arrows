#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_combinators_Loop
#include <haxe/functional/arrows/combinators/Loop.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{

Loop Loop_obj::done;

Loop Loop_obj::repeat;

HX_DEFINE_CREATE_ENUM(Loop_obj)

int Loop_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("done")) return 1;
	if (inName==HX_CSTRING("repeat")) return 0;
	return super::__FindIndex(inName);
}

int Loop_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("done")) return 0;
	if (inName==HX_CSTRING("repeat")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Loop_obj::__Field(const ::String &inName)
{
	if (inName==HX_CSTRING("done")) return done;
	if (inName==HX_CSTRING("repeat")) return repeat;
	return super::__Field(inName);
}

static ::String sStaticFields[] = {
	HX_CSTRING("repeat"),
	HX_CSTRING("done"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loop_obj::done,"done");
	HX_MARK_MEMBER_NAME(Loop_obj::repeat,"repeat");
};

static ::String sMemberFields[] = { ::String(null()) };
Class Loop_obj::__mClass;

Dynamic __Create_Loop_obj() { return new Loop_obj; }

void Loop_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.Loop"), hx::TCanCast< Loop_obj >,sStaticFields,sMemberFields,
	&__Create_Loop_obj, &__Create,
	&super::__SGetClass(), &CreateLoop_obj, sMarkStatics);
}

void Loop_obj::__boot()
{
Static(done) = hx::CreateEnum< Loop_obj >(HX_CSTRING("done"),1);
Static(repeat) = hx::CreateEnum< Loop_obj >(HX_CSTRING("repeat"),0);
}


} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
