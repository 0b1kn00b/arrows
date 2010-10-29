#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Function1Arrow
#include <haxe/functional/arrows/Function1Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ArrThunk
#include <haxe/functional/arrows/combinators/ArrThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ComposeThunk
#include <haxe/functional/arrows/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_FunctionThunk
#include <haxe/functional/arrows/combinators/FunctionThunk.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{

Void Function1Arrow_obj::__construct()
{
	return null();
}

Function1Arrow_obj::~Function1Arrow_obj() { }

Dynamic Function1Arrow_obj::__CreateEmpty() { return  new Function1Arrow_obj; }
hx::ObjectPtr< Function1Arrow_obj > Function1Arrow_obj::__new()
{  hx::ObjectPtr< Function1Arrow_obj > result = new Function1Arrow_obj();
	result->__construct();
	return result;}

Dynamic Function1Arrow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Function1Arrow_obj > result = new Function1Arrow_obj();
	result->__construct();
	return result;}

::haxe::functional::arrows::Arrow Function1Arrow_obj::lift( Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function1Arrow_obj::lift")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",283)
	return ::haxe::functional::arrows::Arrow_obj::liftF(f);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function1Arrow_obj,lift,return )

::haxe::functional::arrows::Arrow Function1Arrow_obj::tuple( Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function1Arrow_obj::tuple")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",286)
	return ::haxe::functional::arrows::Arrow_obj::tupleF(f);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function1Arrow_obj,tuple,return )

::haxe::functional::arrows::Arrow Function1Arrow_obj::then( Dynamic f0,Dynamic f1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function1Arrow_obj::then")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",289)
	return ::haxe::functional::arrows::Function1Arrow_obj::lift(f0)->then(::haxe::functional::arrows::Function1Arrow_obj::lift(f1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function1Arrow_obj,then,return )


Function1Arrow_obj::Function1Arrow_obj()
{
}

void Function1Arrow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Function1Arrow);
	HX_MARK_END_CLASS();
}

Dynamic Function1Arrow_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lift") ) { return lift_dyn(); }
		if (HX_FIELD_EQ(inName,"then") ) { return then_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tuple") ) { return tuple_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Function1Arrow_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Function1Arrow_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lift"),
	HX_CSTRING("tuple"),
	HX_CSTRING("then"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Function1Arrow_obj::__mClass;

void Function1Arrow_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.Function1Arrow"), hx::TCanCast< Function1Arrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Function1Arrow_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
