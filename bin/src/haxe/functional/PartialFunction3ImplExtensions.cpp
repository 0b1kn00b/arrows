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
#ifndef INCLUDED_haxe_functional_PartialFunction3
#include <haxe/functional/PartialFunction3.h>
#endif
#ifndef INCLUDED_haxe_functional_PartialFunction3ImplExtensions
#include <haxe/functional/PartialFunction3ImplExtensions.h>
#endif
#ifndef INCLUDED_haxe_functional__PartialFunctionExtensions_PartialFunction3Impl
#include <haxe/functional/_PartialFunctionExtensions/PartialFunction3Impl.h>
#endif
namespace haxe{
namespace functional{

Void PartialFunction3ImplExtensions_obj::__construct()
{
	return null();
}

PartialFunction3ImplExtensions_obj::~PartialFunction3ImplExtensions_obj() { }

Dynamic PartialFunction3ImplExtensions_obj::__CreateEmpty() { return  new PartialFunction3ImplExtensions_obj; }
hx::ObjectPtr< PartialFunction3ImplExtensions_obj > PartialFunction3ImplExtensions_obj::__new()
{  hx::ObjectPtr< PartialFunction3ImplExtensions_obj > result = new PartialFunction3ImplExtensions_obj();
	result->__construct();
	return result;}

Dynamic PartialFunction3ImplExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PartialFunction3ImplExtensions_obj > result = new PartialFunction3ImplExtensions_obj();
	result->__construct();
	return result;}

::haxe::functional::_PartialFunctionExtensions::PartialFunction3Impl PartialFunction3ImplExtensions_obj::toPartialFunction( Array< ::Tuple2 > def){
	__SAFE_POINT
	HX_SOURCE_PUSH("PartialFunction3ImplExtensions_obj::toPartialFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",203)
	return ::haxe::functional::_PartialFunctionExtensions::PartialFunction3Impl_obj::create(def);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PartialFunction3ImplExtensions_obj,toPartialFunction,return )


PartialFunction3ImplExtensions_obj::PartialFunction3ImplExtensions_obj()
{
}

void PartialFunction3ImplExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PartialFunction3ImplExtensions);
	HX_MARK_END_CLASS();
}

Dynamic PartialFunction3ImplExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"toPartialFunction") ) { return toPartialFunction_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic PartialFunction3ImplExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void PartialFunction3ImplExtensions_obj::__GetFields(Array< ::String> &outFields)
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

Class PartialFunction3ImplExtensions_obj::__mClass;

void PartialFunction3ImplExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.PartialFunction3ImplExtensions"), hx::TCanCast< PartialFunction3ImplExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void PartialFunction3ImplExtensions_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
