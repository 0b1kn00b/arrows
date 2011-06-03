#ifndef INCLUDED_haxe_text_json_JValueExtensions
#define INCLUDED_haxe_text_json_JValueExtensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple2)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS3(haxe,text,json,JValue)
HX_DECLARE_CLASS3(haxe,text,json,JValueExtensions)
namespace haxe{
namespace text{
namespace json{


class JValueExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef JValueExtensions_obj OBJ_;
		JValueExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< JValueExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~JValueExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("JValueExtensions"); }

		static Dynamic fold( ::haxe::text::json::JValue v,Dynamic initial,Dynamic $t1);
		static Dynamic fold_dyn();

		static ::haxe::text::json::JValue path( ::haxe::text::json::JValue v,::String s);
		static Dynamic path_dyn();

		static ::haxe::text::json::JValue map( ::haxe::text::json::JValue v,Dynamic $t1);
		static Dynamic map_dyn();

		static ::Option getOption( ::haxe::text::json::JValue v,::String k);
		static Dynamic getOption_dyn();

		static ::haxe::text::json::JValue get( ::haxe::text::json::JValue v,::String k);
		static Dynamic get_dyn();

		static ::haxe::text::json::JValue getOrElse( ::haxe::text::json::JValue v,::String k,Dynamic def);
		static Dynamic getOrElse_dyn();

		static ::String extractString( ::haxe::text::json::JValue v);
		static Dynamic extractString_dyn();

		static double extractNumber( ::haxe::text::json::JValue v);
		static Dynamic extractNumber_dyn();

		static bool extractBool( ::haxe::text::json::JValue v);
		static Dynamic extractBool_dyn();

		static ::String extractKey( ::haxe::text::json::JValue v);
		static Dynamic extractKey_dyn();

		static ::haxe::text::json::JValue extractValue( ::haxe::text::json::JValue v);
		static Dynamic extractValue_dyn();

		static ::Tuple2 extractField( ::haxe::text::json::JValue v);
		static Dynamic extractField_dyn();

		static ::Hash extractHash( ::haxe::text::json::JValue v);
		static Dynamic extractHash_dyn();

		static Array< ::Tuple2 > extractFields( ::haxe::text::json::JValue v);
		static Dynamic extractFields_dyn();

		static Array< ::haxe::text::json::JValue > extractArray( ::haxe::text::json::JValue v);
		static Dynamic extractArray_dyn();

};

} // end namespace haxe
} // end namespace text
} // end namespace json

#endif /* INCLUDED_haxe_text_json_JValueExtensions */ 
