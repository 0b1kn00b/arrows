#ifndef INCLUDED_Tuple4
#define INCLUDED_Tuple4

#include <hxcpp.h>

#include <_Prelude/AbstractProduct.h>
HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple4)
HX_DECLARE_CLASS0(Tuple5)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS3(haxe,text,json,JValue)


class Tuple4_obj : public ::_Prelude::AbstractProduct_obj{
	public:
		typedef ::_Prelude::AbstractProduct_obj super;
		typedef Tuple4_obj OBJ_;
		Tuple4_obj();
		Void __construct(Dynamic first,Dynamic second,Dynamic third,Dynamic fourth);

	public:
		static hx::ObjectPtr< Tuple4_obj > __new(Dynamic first,Dynamic second,Dynamic third,Dynamic fourth);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Tuple4_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Tuple4"); }

		Dynamic _1; /* REM */ 
		Dynamic _2; /* REM */ 
		Dynamic _3; /* REM */ 
		Dynamic _4; /* REM */ 
		virtual ::String getProductPrefix( );
		Dynamic getProductPrefix_dyn();

		virtual int getProductArity( );
		Dynamic getProductArity_dyn();

		virtual ::Tuple5 entuple( Dynamic e);
		Dynamic entuple_dyn();

		virtual int compare( ::Tuple4 other);
		Dynamic compare_dyn();

		virtual bool equals( ::Tuple4 other);
		Dynamic equals_dyn();

		virtual ::haxe::text::json::JValue decompose( );
		Dynamic decompose_dyn();

		static ::Tuple4 create( Dynamic a,Dynamic b,Dynamic c,Dynamic d);
		static Dynamic create_dyn();

		static ::Tuple4 extract( ::haxe::text::json::JValue v,Dynamic e1,Dynamic e2,Dynamic e3,Dynamic e4);
		static Dynamic extract_dyn();

};


#endif /* INCLUDED_Tuple4 */ 
