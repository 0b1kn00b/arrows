#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Function2Arrow
#include <haxe/functional/arrows/Function2Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_FunctionThunk
#include <haxe/functional/arrows/combinators/FunctionThunk.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{

Void Function2Arrow_obj::__construct()
{
	return null();
}

Function2Arrow_obj::~Function2Arrow_obj() { }

Dynamic Function2Arrow_obj::__CreateEmpty() { return  new Function2Arrow_obj; }
hx::ObjectPtr< Function2Arrow_obj > Function2Arrow_obj::__new()
{  hx::ObjectPtr< Function2Arrow_obj > result = new Function2Arrow_obj();
	result->__construct();
	return result;}

Dynamic Function2Arrow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Function2Arrow_obj > result = new Function2Arrow_obj();
	result->__construct();
	return result;}

::haxe::functional::arrows::Arrow Function2Arrow_obj::lift( Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function2Arrow_obj::lift")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",294)
	return ::haxe::functional::arrows::Arrow_obj::liftF(f);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function2Arrow_obj,lift,return )


Function2Arrow_obj::Function2Arrow_obj()
{
}

void Function2Arrow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Function2Arrow);
	HX_MARK_END_CLASS();
}

Dynamic Function2Arrow_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lift") ) { return lift_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Function2Arrow_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Function2Arrow_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lift"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Function2Arrow_obj::__mClass;

void Function2Arrow_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.Function2Arrow"), hx::TCanCast< Function2Arrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Function2Arrow_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
