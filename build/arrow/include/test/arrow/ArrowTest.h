#ifndef INCLUDED_test_arrow_ArrowTest
#define INCLUDED_test_arrow_ArrowTest

#include <hxObject.h>

#include <hxunit/TestCase.h>
DECLARE_CLASS1(hxunit,TestCase)
DECLARE_CLASS1(hxunit,TestFrameworkPrimitive)
DECLARE_CLASS2(test,arrow,ArrowTest)
namespace test{
namespace arrow{


class ArrowTest_obj : public hxunit::TestCase_obj
{
	public:
		typedef hxunit::TestCase_obj super;
		typedef ArrowTest_obj OBJ_;

	protected:
		ArrowTest_obj();
		Void __construct();

	public:
		static hxObjectPtr<ArrowTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~ArrowTest_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"ArrowTest",9); }

		virtual Void setup( );
		Dynamic setup_dyn();

		virtual Void teardown( );
		Dynamic teardown_dyn();

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

		virtual Void testBind( );
		Dynamic testBind_dyn();

		virtual Void testJoin( );
		Dynamic testJoin_dyn();

		virtual Void testRepeat( );
		Dynamic testRepeat_dyn();

		virtual Void testDelay( );
		Dynamic testDelay_dyn();

		virtual Void testEventA( );
		Dynamic testEventA_dyn();

		virtual Void testNormal( );
		Dynamic testNormal_dyn();

		virtual Void testReturnA( );
		Dynamic testReturnA_dyn();

		virtual Dynamic f0( Dynamic x);
		Dynamic f0_dyn();

		virtual Dynamic f1( Dynamic x);
		Dynamic f1_dyn();

		virtual Dynamic debug( Dynamic x);
		Dynamic debug_dyn();

		virtual Dynamic g( Dynamic x);
		Dynamic g_dyn();

};

} // end namespace test
} // end namespace arrow

#endif /* INCLUDED_test_arrow_ArrowTest */ 
