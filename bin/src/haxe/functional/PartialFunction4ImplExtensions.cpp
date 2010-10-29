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
#ifndef INCLUDED_haxe_functional_PartialFunction4
#include <haxe/functional/PartialFunction4.h>
#endif
#ifndef INCLUDED_haxe_functional_PartialFunction4ImplExtensions
#include <haxe/functional/PartialFunction4ImplExtensions.h>
#endif
#ifndef INCLUDED_haxe_functional__PartialFunctionExtensions_PartialFunction4Impl
#include <haxe/functional/_PartialFunctionExtensions/PartialFunction4Impl.h>
#endif
namespace haxe{
namespace functional{

Void PartialFunction4ImplExtensions_obj::__construct()
{
	return null();
}

PartialFunction4ImplExtensions_obj::~PartialFunction4ImplExtensions_obj() { }

Dynamic PartialFunction4ImplExtensions_obj::__CreateEmpty() { return  new PartialFunction4ImplExtensions_obj; }
hx::ObjectPtr< PartialFunction4ImplExtensions_obj > PartialFunction4ImplExtensions_obj::__new()
{  hx::ObjectPtr< PartialFunction4ImplExtensions_obj > result = new PartialFunction4ImplExtensions_obj();
	result->__construct();
	return result;}

Dynamic PartialFunction4ImplExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PartialFunction4ImplExtensions_obj > result = new PartialFunction4ImplExtensions_obj();
	result->__construct();
	return result;}

::haxe::functional::_PartialFunctionExtensions::PartialFunction4Impl PartialFunction4ImplExtensions_obj::toPartialFunction( Array< ::Tuple2 > def){
	__SAFE_POINT
	HX_SOURCE_PUSH("PartialFunction4ImplExtensions_obj::toPartialFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",264)
	return ::haxe::functional::_PartialFunctionExtensions::PartialFunction4Impl_obj::create(def);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PartialFunction4ImplExtensions_obj,toPartialFunction,return )


PartialFunction4ImplExtensions_obj::PartialFunction4ImplExtensions_obj()
{
}

void PartialFunction4ImplExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PartialFunction4ImplExtensions);
	HX_MARK_END_CLASS();
}

Dynamic PartialFunction4ImplExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"toPartialFunction") ) { return toPartialFunction_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic PartialFunction4ImplExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void PartialFunction4ImplExtensions_obj::__GetFields(Array< ::String> &outFields)
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

Class PartialFunction4ImplExtensions_obj::__mClass;

void PartialFunction4ImplExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.PartialFunction4ImplExtensions"), hx::TCanCast< PartialFunction4ImplExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void PartialFunction4ImplExtensions_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
