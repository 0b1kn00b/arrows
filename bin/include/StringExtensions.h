#ifndef INCLUDED_StringExtensions
#define INCLUDED_StringExtensions

#include <hxcpp.h>

HX_DECLARE_CLASS0(StringExtensions)
HX_DECLARE_CLASS3(haxe,text,json,JValue)


class StringExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef StringExtensions_obj OBJ_;
		StringExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< StringExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~StringExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("StringExtensions"); }

		static bool toBool( ::String v,Dynamic d);
		static Dynamic toBool_dyn();

		static int toInt( ::String v,Dynamic d);
		static Dynamic toInt_dyn();

		static double toFloat( ::String v,Dynamic d);
		static Dynamic toFloat_dyn();

		static bool startsWith( ::String v,::String frag);
		static Dynamic startsWith_dyn();

		static bool endsWith( ::String v,::String frag);
		static Dynamic endsWith_dyn();

		static ::String urlEncode( ::String v);
		static Dynamic urlEncode_dyn();

		static ::String urlDecode( ::String v);
		static Dynamic urlDecode_dyn();

		static ::String htmlEscape( ::String v);
		static Dynamic htmlEscape_dyn();

		static ::String htmlUnescape( ::String v);
		static Dynamic htmlUnescape_dyn();

		static ::String trim( ::String v);
		static Dynamic trim_dyn();

		static bool contains( ::String v,::String s);
		static Dynamic contains_dyn();

		static ::String replace( ::String s,::String sub,::String by);
		static Dynamic replace_dyn();

		static int compare( ::String v1,::String v2);
		static Dynamic compare_dyn();

		static bool equals( ::String v1,::String v2);
		static Dynamic equals_dyn();

		static ::String toString( ::String v);
		static Dynamic toString_dyn();

		static int hashCode( ::String v);
		static Dynamic hashCode_dyn();

		static ::haxe::text::json::JValue decompose( ::String v);
		static Dynamic decompose_dyn();

		static ::String extract( ::Class c,::haxe::text::json::JValue v);
		static Dynamic extract_dyn();

};


#endif /* INCLUDED_StringExtensions */ 
