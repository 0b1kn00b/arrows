#include <hxcpp.h>

#ifndef INCLUDED_Product
#include <Product.h>
#endif
#ifndef INCLUDED_Stax
#include <Stax.h>
#endif
#ifndef INCLUDED_Tuple2
#include <Tuple2.h>
#endif
#ifndef INCLUDED_Tuple3
#include <Tuple3.h>
#endif
#ifndef INCLUDED_Tuple4
#include <Tuple4.h>
#endif
#ifndef INCLUDED_Tuple5
#include <Tuple5.h>
#endif
#ifndef INCLUDED__Prelude_AbstractProduct
#include <_Prelude/AbstractProduct.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_TupleArrowExtension
#include <haxe/functional/arrows/TupleArrowExtension.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{

Void TupleArrowExtension_obj::__construct()
{
	return null();
}

TupleArrowExtension_obj::~TupleArrowExtension_obj() { }

Dynamic TupleArrowExtension_obj::__CreateEmpty() { return  new TupleArrowExtension_obj; }
hx::ObjectPtr< TupleArrowExtension_obj > TupleArrowExtension_obj::__new()
{  hx::ObjectPtr< TupleArrowExtension_obj > result = new TupleArrowExtension_obj();
	result->__construct();
	return result;}

Dynamic TupleArrowExtension_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TupleArrowExtension_obj > result = new TupleArrowExtension_obj();
	result->__construct();
	return result;}

Void TupleArrowExtension_obj::flatten( Dynamic t){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TupleArrowExtension_obj::flatten")
		HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",306)
		if ((bool(!(t->__Field(HX_CSTRING("is"))(hx::ClassOf< ::Tuple2 >()))) || bool((bool(!(t->__Field(HX_CSTRING("is"))(hx::ClassOf< ::Tuple3 >()))) || bool((bool(!(t->__Field(HX_CSTRING("is"))(hx::ClassOf< ::Tuple4 >()))) || bool(t->__Field(HX_CSTRING("is"))(hx::ClassOf< ::Tuple5 >())))))))){
			HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",307)
			::Stax_obj::error(HX_CSTRING("cannot flatten type other than Tuple"));
		}
		else{
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TupleArrowExtension_obj,flatten,(void))


TupleArrowExtension_obj::TupleArrowExtension_obj()
{
}

void TupleArrowExtension_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TupleArrowExtension);
	HX_MARK_END_CLASS();
}

Dynamic TupleArrowExtension_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"flatten") ) { return flatten_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic TupleArrowExtension_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void TupleArrowExtension_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("flatten"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class TupleArrowExtension_obj::__mClass;

void TupleArrowExtension_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.TupleArrowExtension"), hx::TCanCast< TupleArrowExtension_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void TupleArrowExtension_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
