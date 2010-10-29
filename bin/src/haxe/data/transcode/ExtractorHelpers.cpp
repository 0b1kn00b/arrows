#include <hxcpp.h>

#ifndef INCLUDED_DynamicExtensions
#include <DynamicExtensions.h>
#endif
#ifndef INCLUDED_haxe_data_transcode_ExtractorHelpers
#include <haxe/data/transcode/ExtractorHelpers.h>
#endif
#ifndef INCLUDED_haxe_text_json_JValue
#include <haxe/text/json/JValue.h>
#endif
#ifndef INCLUDED_haxe_text_json_JValueExtensions
#include <haxe/text/json/JValueExtensions.h>
#endif
namespace haxe{
namespace data{
namespace transcode{

Void ExtractorHelpers_obj::__construct()
{
	return null();
}

ExtractorHelpers_obj::~ExtractorHelpers_obj() { }

Dynamic ExtractorHelpers_obj::__CreateEmpty() { return  new ExtractorHelpers_obj; }
hx::ObjectPtr< ExtractorHelpers_obj > ExtractorHelpers_obj::__new()
{  hx::ObjectPtr< ExtractorHelpers_obj > result = new ExtractorHelpers_obj();
	result->__construct();
	return result;}

Dynamic ExtractorHelpers_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExtractorHelpers_obj > result = new ExtractorHelpers_obj();
	result->__construct();
	return result;}

Dynamic ExtractorHelpers_obj::extractFieldValue( ::haxe::text::json::JValue j,::String n,Dynamic e,::haxe::text::json::JValue def){
	__SAFE_POINT
	HX_SOURCE_PUSH("ExtractorHelpers_obj::extractFieldValue")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",36)
	::haxe::text::json::JValue fieldValue = ::haxe::text::json::JValueExtensions_obj::getOrElse(j,n,::DynamicExtensions_obj::toThunk(def));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",38)
	try{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",39)
		return e(fieldValue);
	}
	catch(Dynamic __e){
		{
			Dynamic err = __e;{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",42)
				return e(def);
			}
		}
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ExtractorHelpers_obj,extractFieldValue,return )


ExtractorHelpers_obj::ExtractorHelpers_obj()
{
}

void ExtractorHelpers_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ExtractorHelpers);
	HX_MARK_END_CLASS();
}

Dynamic ExtractorHelpers_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"extractFieldValue") ) { return extractFieldValue_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ExtractorHelpers_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ExtractorHelpers_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("extractFieldValue"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ExtractorHelpers_obj::__mClass;

void ExtractorHelpers_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.data.transcode.ExtractorHelpers"), hx::TCanCast< ExtractorHelpers_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ExtractorHelpers_obj::__boot()
{
}

} // end namespace haxe
} // end namespace data
} // end namespace transcode
