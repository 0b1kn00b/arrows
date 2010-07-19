#ifndef INCLUDED_hxunit_TestSuite
#define INCLUDED_hxunit_TestSuite

#include <hxObject.h>

#include <hxunit/TestFrameworkPrimitive.h>
DECLARE_CLASS0(List)
DECLARE_CLASS1(hxunit,TestFrameworkPrimitive)
DECLARE_CLASS1(hxunit,TestSuite)
namespace hxunit{


class TestSuite_obj : public hxunit::TestFrameworkPrimitive_obj
{
	public:
		typedef hxunit::TestFrameworkPrimitive_obj super;
		typedef TestSuite_obj OBJ_;

	protected:
		TestSuite_obj();
		Void __construct();

	public:
		static hxObjectPtr<TestSuite_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~TestSuite_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"TestSuite",9); }

		List cases;
		virtual Void addCase( Class value);
		Dynamic addCase_dyn();

};

} // end namespace hxunit

#endif /* INCLUDED_hxunit_TestSuite */ 
