#ifndef INCLUDED_haxe_test_Must
#define INCLUDED_haxe_test_Must

#include <hxcpp.h>

HX_DECLARE_CLASS0(Either)
HX_DECLARE_CLASS3(haxe,data,collections,Collection)
HX_DECLARE_CLASS2(haxe,functional,Foldable)
HX_DECLARE_CLASS2(haxe,test,Must)
namespace haxe{
namespace test{


class Must_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Must_obj OBJ_;
		Must_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Must_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Must_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Must"); }

		static Dynamic equal( Dynamic $t1,Dynamic $t2);
		static Dynamic equal_dyn();

		static Dynamic beTrue( );
		static Dynamic beTrue_dyn();

		static Dynamic beFalse( );
		static Dynamic beFalse_dyn();

		static Dynamic beGreaterThan( double $t1);
		static Dynamic beGreaterThan_dyn();

		static Dynamic beLessThan( double $t1);
		static Dynamic beLessThan_dyn();

		static Dynamic beGreaterThanInt( int $t1);
		static Dynamic beGreaterThanInt_dyn();

		static Dynamic beLessThanInt( int $t1);
		static Dynamic beLessThanInt_dyn();

		static Dynamic haveLength( int $t1);
		static Dynamic haveLength_dyn();

		static Dynamic haveClass( ::Class $t1);
		static Dynamic haveClass_dyn();

		static Dynamic containElement( Dynamic $t1);
		static Dynamic containElement_dyn();

		static Dynamic containString( ::String $t1);
		static Dynamic containString_dyn();

		static Dynamic startWithString( ::String $t1);
		static Dynamic startWithString_dyn();

		static Dynamic endWithString( ::String $t1);
		static Dynamic endWithString_dyn();

		static Dynamic beNull( );
		static Dynamic beNull_dyn();

		static Dynamic beNonNull( );
		static Dynamic beNonNull_dyn();

};

} // end namespace haxe
} // end namespace test

#endif /* INCLUDED_haxe_test_Must */ 
