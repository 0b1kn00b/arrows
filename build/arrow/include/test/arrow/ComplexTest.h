#ifndef INCLUDED_test_arrow_ComplexTest
#define INCLUDED_test_arrow_ComplexTest

#include <hxObject.h>

#include <hxunit/TestCase.h>
DECLARE_CLASS1(hxunit,TestCase)
DECLARE_CLASS1(hxunit,TestFrameworkPrimitive)
DECLARE_CLASS2(test,arrow,ComplexTest)
namespace test{
namespace arrow{


class ComplexTest_obj : public hxunit::TestCase_obj
{
	public:
		typedef hxunit::TestCase_obj super;
		typedef ComplexTest_obj OBJ_;

	protected:
		ComplexTest_obj();
		Void __construct();

	public:
		static hxObjectPtr<ComplexTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~ComplexTest_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"ComplexTest",11); }

		virtual Dynamic debug( Dynamic x);
		Dynamic debug_dyn();

		virtual Void testOr( );
		Dynamic testOr_dyn();

		virtual Void testRepeat( );
		Dynamic testRepeat_dyn();

};

} // end namespace test
} // end namespace arrow

#endif /* INCLUDED_test_arrow_ComplexTest */ 
