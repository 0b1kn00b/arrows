#ifndef INCLUDED_haxe_reactive_arrow_ArrowTest
#define INCLUDED_haxe_reactive_arrow_ArrowTest

#include <hxcpp.h>

#include <haxe/test/TestCase.h>
HX_DECLARE_CLASS3(haxe,reactive,arrow,ArrowTest)
HX_DECLARE_CLASS2(haxe,test,TestCase)
namespace haxe{
namespace reactive{
namespace arrow{


class ArrowTest_obj : public ::haxe::test::TestCase_obj{
	public:
		typedef ::haxe::test::TestCase_obj super;
		typedef ArrowTest_obj OBJ_;
		ArrowTest_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ArrowTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ArrowTest_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ArrowTest"); }

		virtual Void testSimpleArrow( );
		Dynamic testSimpleArrow_dyn();

		virtual Void testPair( );
		Dynamic testPair_dyn();

		virtual Void testFirst( );
		Dynamic testFirst_dyn();

		virtual Void testSecond( );
		Dynamic testSecond_dyn();

		virtual Void testFanout( );
		Dynamic testFanout_dyn();

		virtual Void testTie( );
		Dynamic testTie_dyn();

		virtual Void testJoin( );
		Dynamic testJoin_dyn();

		virtual Void testRepeat( );
		Dynamic testRepeat_dyn();

		virtual Void testDelay( );
		Dynamic testDelay_dyn();

		virtual Void testReturnA( );
		Dynamic testReturnA_dyn();

		virtual Dynamic f0( double x);
		Dynamic f0_dyn();

		virtual Dynamic f1( double x);
		Dynamic f1_dyn();

		virtual Dynamic debug( Dynamic x);
		Dynamic debug_dyn();

		virtual Dynamic g( Dynamic x);
		Dynamic g_dyn();

};

} // end namespace haxe
} // end namespace reactive
} // end namespace arrow

#endif /* INCLUDED_haxe_reactive_arrow_ArrowTest */ 
