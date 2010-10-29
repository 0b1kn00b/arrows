#ifndef INCLUDED_Tuple5
#define INCLUDED_Tuple5

#include <hxcpp.h>

#include <_Prelude/AbstractProduct.h>
HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple5)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS3(haxe,text,json,JValue)


class Tuple5_obj : public ::_Prelude::AbstractProduct_obj{
	public:
		typedef ::_Prelude::AbstractProduct_obj super;
		typedef Tuple5_obj OBJ_;
		Tuple5_obj();
		Void __construct(Dynamic first,Dynamic second,Dynamic third,Dynamic fourth,Dynamic fifth);

	public:
		static hx::ObjectPtr< Tuple5_obj > __new(Dynamic first,Dynamic second,Dynamic third,Dynamic fourth,Dynamic fifth);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Tuple5_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Tuple5"); }

		Dynamic _1; /* REM */ 
		Dynamic _2; /* REM */ 
		Dynamic _3; /* REM */ 
		Dynamic _4; /* REM */ 
		Dynamic _5; /* REM */ 
		virtual ::String getProductPrefix( );
		Dynamic getProductPrefix_dyn();

		virtual int getProductArity( );
		Dynamic getProductArity_dyn();

		virtual int compare( ::Tuple5 other);
		Dynamic compare_dyn();

		virtual bool equals( ::Tuple5 other);
		Dynamic equals_dyn();

		virtual ::haxe::text::json::JValue decompose( );
		Dynamic decompose_dyn();

		static ::Tuple5 create( Dynamic a,Dynamic b,Dynamic c,Dynamic d,Dynamic e);
		static Dynamic create_dyn();

		static ::Tuple5 extract( ::haxe::text::json::JValue v,Dynamic e1,Dynamic e2,Dynamic e3,Dynamic e4,Dynamic e5);
		static Dynamic extract_dyn();

};


#endif /* INCLUDED_Tuple5 */ 
