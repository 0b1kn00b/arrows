#ifndef INCLUDED_BoolExtensions
#define INCLUDED_BoolExtensions

#include <hxcpp.h>

HX_DECLARE_CLASS0(BoolExtensions)
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS3(haxe,text,json,JValue)


class BoolExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BoolExtensions_obj OBJ_;
		BoolExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< BoolExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BoolExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("BoolExtensions"); }

		static double toInt( bool v);
		static Dynamic toInt_dyn();

		static ::Option ifTrue( bool v,Dynamic f);
		static Dynamic ifTrue_dyn();

		static ::Option ifFalse( bool v,Dynamic f);
		static Dynamic ifFalse_dyn();

		static Dynamic ifElse( bool v,Dynamic f1,Dynamic f2);
		static Dynamic ifElse_dyn();

		static int compare( bool v1,bool v2);
		static Dynamic compare_dyn();

		static bool equals( bool v1,bool v2);
		static Dynamic equals_dyn();

		static int hashCode( bool v);
		static Dynamic hashCode_dyn();

		static ::String toString( bool v);
		static Dynamic toString_dyn();

		static ::haxe::text::json::JValue decompose( bool v);
		static Dynamic decompose_dyn();

		static bool extract( ::Enum c,::haxe::text::json::JValue v);
		static Dynamic extract_dyn();

};


#endif /* INCLUDED_BoolExtensions */ 
