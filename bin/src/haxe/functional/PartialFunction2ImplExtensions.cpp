#include <hxcpp.h>

#ifndef INCLUDED_Product
#include <Product.h>
#endif
#ifndef INCLUDED_Tuple2
#include <Tuple2.h>
#endif
#ifndef INCLUDED__Prelude_AbstractProduct
#include <_Prelude/AbstractProduct.h>
#endif
#ifndef INCLUDED_haxe_functional_PartialFunction2
#include <haxe/functional/PartialFunction2.h>
#endif
#ifndef INCLUDED_haxe_functional_PartialFunction2ImplExtensions
#include <haxe/functional/PartialFunction2ImplExtensions.h>
#endif
#ifndef INCLUDED_haxe_functional__PartialFunctionExtensions_PartialFunction2Impl
#include <haxe/functional/_PartialFunctionExtensions/PartialFunction2Impl.h>
#endif
namespace haxe{
namespace functional{

Void PartialFunction2ImplExtensions_obj::__construct()
{
	return null();
}

PartialFunction2ImplExtensions_obj::~PartialFunction2ImplExtensions_obj() { }

Dynamic PartialFunction2ImplExtensions_obj::__CreateEmpty() { return  new PartialFunction2ImplExtensions_obj; }
hx::ObjectPtr< PartialFunction2ImplExtensions_obj > PartialFunction2ImplExtensions_obj::__new()
{  hx::ObjectPtr< PartialFunction2ImplExtensions_obj > result = new PartialFunction2ImplExtensions_obj();
	result->__construct();
	return result;}

Dynamic PartialFunction2ImplExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PartialFunction2ImplExtensions_obj > result = new PartialFunction2ImplExtensions_obj();
	result->__construct();
	return result;}

::haxe::functional::_PartialFunctionExtensions::PartialFunction2Impl PartialFunction2ImplExtensions_obj::toPartialFunction( Array< ::Tuple2 > def){
	__SAFE_POINT
	HX_SOURCE_PUSH("PartialFunction2ImplExtensions_obj::toPartialFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",142)
	return ::haxe::functional::_PartialFunctionExtensions::PartialFunction2Impl_obj::create(def);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PartialFunction2ImplExtensions_obj,toPartialFunction,return )


PartialFunction2ImplExtensions_obj::PartialFunction2ImplExtensions_obj()
{
}

void PartialFunction2ImplExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PartialFunction2ImplExtensions);
	HX_MARK_END_CLASS();
}

Dynamic PartialFunction2ImplExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"toPartialFunction") ) { return toPartialFunction_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic PartialFunction2ImplExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void PartialFunction2ImplExtensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("toPartialFunction"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class PartialFunction2ImplExtensions_obj::__mClass;

void PartialFunction2ImplExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.PartialFunction2ImplExtensions"), hx::TCanCast< PartialFunction2ImplExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void PartialFunction2ImplExtensions_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
