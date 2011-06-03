#ifndef INCLUDED_haxe_text_json_JValue
#define INCLUDED_haxe_text_json_JValue

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,text,json,JValue)
namespace haxe{
namespace text{
namespace json{


class JValue_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef JValue_obj OBJ_;

	public:
		JValue_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("haxe.text.json.JValue"); }
		::String __ToString() const { return HX_CSTRING("JValue.") + tag; }

		static ::haxe::text::json::JValue JArray(Array< ::haxe::text::json::JValue > v);
		static Dynamic JArray_dyn();
		static ::haxe::text::json::JValue JBool(bool v);
		static Dynamic JBool_dyn();
		static ::haxe::text::json::JValue JField(::String k,::haxe::text::json::JValue v);
		static Dynamic JField_dyn();
		static ::haxe::text::json::JValue JNull;
		static ::haxe::text::json::JValue JNumber(double v);
		static Dynamic JNumber_dyn();
		static ::haxe::text::json::JValue JObject(Array< ::haxe::text::json::JValue > v);
		static Dynamic JObject_dyn();
		static ::haxe::text::json::JValue JString(::String v);
		static Dynamic JString_dyn();
};

} // end namespace haxe
} // end namespace text
} // end namespace json

#endif /* INCLUDED_haxe_text_json_JValue */ 
