#ifndef INCLUDED_Tuple2
#define INCLUDED_Tuple2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <_Prelude/AbstractProduct.h>
HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple2)
HX_DECLARE_CLASS0(Tuple3)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS3(haxe,text,json,JValue)


class Tuple2_obj : public ::_Prelude::AbstractProduct_obj{
	public:
		typedef ::_Prelude::AbstractProduct_obj super;
		typedef Tuple2_obj OBJ_;
		Tuple2_obj();
		Void __construct(Dynamic first,Dynamic second);

	public:
		static hx::ObjectPtr< Tuple2_obj > __new(Dynamic first,Dynamic second);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Tuple2_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Tuple2"); }

		Dynamic _1; /* REM */ 
		Dynamic _2; /* REM */ 
		virtual ::String getProductPrefix( );
		Dynamic getProductPrefix_dyn();

		virtual int getProductArity( );
		Dynamic getProductArity_dyn();

		virtual ::Tuple3 entuple( Dynamic c);
		Dynamic entuple_dyn();

		virtual int compare( ::Tuple2 other);
		Dynamic compare_dyn();

		virtual bool equals( ::Tuple2 other);
		Dynamic equals_dyn();

		virtual ::haxe::text::json::JValue decompose( );
		Dynamic decompose_dyn();

		static ::Tuple2 create( Dynamic a,Dynamic b);
		static Dynamic create_dyn();

		static ::Tuple2 extract( ::haxe::text::json::JValue v,Dynamic e1,Dynamic e2);
		static Dynamic extract_dyn();

};


#endif /* INCLUDED_Tuple2 */ 
