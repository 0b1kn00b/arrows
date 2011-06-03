#ifndef INCLUDED_Tuple3
#define INCLUDED_Tuple3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <_Prelude/AbstractProduct.h>
HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple3)
HX_DECLARE_CLASS0(Tuple4)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS3(haxe,text,json,JValue)


class Tuple3_obj : public ::_Prelude::AbstractProduct_obj{
	public:
		typedef ::_Prelude::AbstractProduct_obj super;
		typedef Tuple3_obj OBJ_;
		Tuple3_obj();
		Void __construct(Dynamic first,Dynamic second,Dynamic third);

	public:
		static hx::ObjectPtr< Tuple3_obj > __new(Dynamic first,Dynamic second,Dynamic third);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Tuple3_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Tuple3"); }

		Dynamic _1; /* REM */ 
		Dynamic _2; /* REM */ 
		Dynamic _3; /* REM */ 
		virtual ::String getProductPrefix( );
		Dynamic getProductPrefix_dyn();

		virtual int getProductArity( );
		Dynamic getProductArity_dyn();

		virtual ::Tuple4 entuple( Dynamic d);
		Dynamic entuple_dyn();

		virtual int compare( ::Tuple3 other);
		Dynamic compare_dyn();

		virtual bool equals( ::Tuple3 other);
		Dynamic equals_dyn();

		virtual ::haxe::text::json::JValue decompose( );
		Dynamic decompose_dyn();

		static ::Tuple3 create( Dynamic a,Dynamic b,Dynamic c);
		static Dynamic create_dyn();

		static ::Tuple3 extract( ::haxe::text::json::JValue v,Dynamic e1,Dynamic e2,Dynamic e3);
		static Dynamic extract_dyn();

};


#endif /* INCLUDED_Tuple3 */ 
