#ifndef INCLUDED_FloatExtensions
#define INCLUDED_FloatExtensions

#include <hxcpp.h>

HX_DECLARE_CLASS0(FloatExtensions)
HX_DECLARE_CLASS3(haxe,text,json,JValue)


class FloatExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FloatExtensions_obj OBJ_;
		FloatExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FloatExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FloatExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("FloatExtensions"); }

		static int round( double v);
		static Dynamic round_dyn();

		static int ceil( double v);
		static Dynamic ceil_dyn();

		static int floor( double v);
		static Dynamic floor_dyn();

		static double max( double v1,double v2);
		static Dynamic max_dyn();

		static double min( double v1,double v2);
		static Dynamic min_dyn();

		static int toInt( double v);
		static Dynamic toInt_dyn();

		static int compare( double v1,double v2);
		static Dynamic compare_dyn();

		static bool equals( double v1,double v2);
		static Dynamic equals_dyn();

		static ::String toString( double v);
		static Dynamic toString_dyn();

		static int hashCode( double v);
		static Dynamic hashCode_dyn();

		static ::haxe::text::json::JValue decompose( double v);
		static Dynamic decompose_dyn();

		static double extract( ::Class c,::haxe::text::json::JValue v);
		static Dynamic extract_dyn();

};


#endif /* INCLUDED_FloatExtensions */ 
