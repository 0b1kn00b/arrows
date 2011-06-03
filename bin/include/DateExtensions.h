#ifndef INCLUDED_DateExtensions
#define INCLUDED_DateExtensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS0(DateExtensions)
HX_DECLARE_CLASS3(haxe,text,json,JValue)


class DateExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DateExtensions_obj OBJ_;
		DateExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< DateExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DateExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("DateExtensions"); }

		static int compare( ::Date v1,::Date v2);
		static Dynamic compare_dyn();

		static bool equals( ::Date v1,::Date v2);
		static Dynamic equals_dyn();

		static ::String toString( ::Date v);
		static Dynamic toString_dyn();

		static int hashCode( ::Date v);
		static Dynamic hashCode_dyn();

		static ::haxe::text::json::JValue decompose( ::Date v);
		static Dynamic decompose_dyn();

		static ::Date extract( ::Class c,::haxe::text::json::JValue v);
		static Dynamic extract_dyn();

};


#endif /* INCLUDED_DateExtensions */ 
