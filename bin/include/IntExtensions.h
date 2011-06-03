#ifndef INCLUDED_IntExtensions
#define INCLUDED_IntExtensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IntExtensions)
HX_DECLARE_CLASS3(haxe,text,json,JValue)


class IntExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IntExtensions_obj OBJ_;
		IntExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< IntExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~IntExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("IntExtensions"); }

		static int max( int v1,int v2);
		static Dynamic max_dyn();

		static int min( int v1,int v2);
		static Dynamic min_dyn();

		static bool toBool( int v);
		static Dynamic toBool_dyn();

		static double toFloat( int v);
		static Dynamic toFloat_dyn();

		static Dynamic to( int $t1,int $t2);
		static Dynamic to_dyn();

		static Dynamic until( int start,int end);
		static Dynamic until_dyn();

		static int compare( int v1,int v2);
		static Dynamic compare_dyn();

		static bool equals( int v1,int v2);
		static Dynamic equals_dyn();

		static ::String toString( int v);
		static Dynamic toString_dyn();

		static int hashCode( int v);
		static Dynamic hashCode_dyn();

		static ::haxe::text::json::JValue decompose( int v);
		static Dynamic decompose_dyn();

		static int extract( ::Class c,::haxe::text::json::JValue v);
		static Dynamic extract_dyn();

};


#endif /* INCLUDED_IntExtensions */ 
