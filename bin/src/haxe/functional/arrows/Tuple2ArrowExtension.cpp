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
#ifndef INCLUDED_haxe_functional_arrows_Tuple2ArrowExtension
#include <haxe/functional/arrows/Tuple2ArrowExtension.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{

Void Tuple2ArrowExtension_obj::__construct()
{
	return null();
}

Tuple2ArrowExtension_obj::~Tuple2ArrowExtension_obj() { }

Dynamic Tuple2ArrowExtension_obj::__CreateEmpty() { return  new Tuple2ArrowExtension_obj; }
hx::ObjectPtr< Tuple2ArrowExtension_obj > Tuple2ArrowExtension_obj::__new()
{  hx::ObjectPtr< Tuple2ArrowExtension_obj > result = new Tuple2ArrowExtension_obj();
	result->__construct();
	return result;}

Dynamic Tuple2ArrowExtension_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tuple2ArrowExtension_obj > result = new Tuple2ArrowExtension_obj();
	result->__construct();
	return result;}

Void Tuple2ArrowExtension_obj::flatten( ::Tuple2 t){
{
		HX_SOURCE_PUSH("Tuple2ArrowExtension_obj::flatten")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Tuple2ArrowExtension_obj,flatten,(void))


Tuple2ArrowExtension_obj::Tuple2ArrowExtension_obj()
{
}

void Tuple2ArrowExtension_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tuple2ArrowExtension);
	HX_MARK_END_CLASS();
}

Dynamic Tuple2ArrowExtension_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"flatten") ) { return flatten_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Tuple2ArrowExtension_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Tuple2ArrowExtension_obj::__GetFields(Array< ::String> &outFields)
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

Class Tuple2ArrowExtension_obj::__mClass;

void Tuple2ArrowExtension_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.Tuple2ArrowExtension"), hx::TCanCast< Tuple2ArrowExtension_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Tuple2ArrowExtension_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
