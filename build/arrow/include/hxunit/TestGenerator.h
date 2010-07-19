#ifndef INCLUDED_hxunit_TestGenerator
#define INCLUDED_hxunit_TestGenerator

#include <hxObject.h>

DECLARE_CLASS0(List)
DECLARE_CLASS1(hxunit,AnonymousTestCase)
DECLARE_CLASS1(hxunit,TestCase)
DECLARE_CLASS1(hxunit,TestFrameworkPrimitive)
DECLARE_CLASS1(hxunit,TestGenerator)
DECLARE_CLASS1(hxunit,TestSuite)
namespace hxunit{


class TestGenerator_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef TestGenerator_obj OBJ_;

	protected:
		TestGenerator_obj();
		Void __construct();

	public:
		static hxObjectPtr<TestGenerator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~TestGenerator_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"TestGenerator",13); }

		Class defaultCase;
		Class defaultSuite;
		List tests;
		int anonCount;
		virtual Void addTest( Dynamic name,Dynamic method,Class testCase,Class testSuite);
		Dynamic addTest_dyn();

		virtual Void addCase( Class testCase,Class testSuite);
		Dynamic addCase_dyn();

		virtual Void addSuite( Class suite);
		Dynamic addSuite_dyn();

		static String DEFAULT_CASE;
		static String DEFAULT_SUITE;
};

} // end namespace hxunit

#endif /* INCLUDED_hxunit_TestGenerator */ 
