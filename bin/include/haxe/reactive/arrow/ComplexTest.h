#ifndef INCLUDED_haxe_reactive_arrow_ComplexTest
#define INCLUDED_haxe_reactive_arrow_ComplexTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/test/TestCase.h>
HX_DECLARE_CLASS3(haxe,reactive,arrow,ComplexTest)
HX_DECLARE_CLASS2(haxe,test,TestCase)
namespace haxe{
namespace reactive{
namespace arrow{


class ComplexTest_obj : public ::haxe::test::TestCase_obj{
	public:
		typedef ::haxe::test::TestCase_obj super;
		typedef ComplexTest_obj OBJ_;
		ComplexTest_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ComplexTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ComplexTest_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ComplexTest"); }

		virtual Dynamic debug( Dynamic x);
		Dynamic debug_dyn();

		virtual Void testOr( );
		Dynamic testOr_dyn();

		virtual Void testRepeat( );
		Dynamic testRepeat_dyn();

		virtual Void testAnimate( );
		Dynamic testAnimate_dyn();

		virtual Void testIndependentLoop( );
		Dynamic testIndependentLoop_dyn();

};

} // end namespace haxe
} // end namespace reactive
} // end namespace arrow

#endif /* INCLUDED_haxe_reactive_arrow_ComplexTest */ 
