#ifndef INCLUDED_JValueExtensions
#define INCLUDED_JValueExtensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(JValueExtensions)
HX_DECLARE_CLASS3(haxe,text,json,JValue)


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

		static ::haxe::text::json::JValue decompose( ::haxe::text::json::JValue v);
		static Dynamic decompose_dyn();

		static ::haxe::text::json::JValue extract( ::Enum c,::haxe::text::json::JValue v);
		static Dynamic extract_dyn();

};


#endif /* INCLUDED_JValueExtensions */ 
