#ifndef INCLUDED_test_arrow_ArrowSuite
#define INCLUDED_test_arrow_ArrowSuite

#include <hxObject.h>

#include <hxunit/TestSuite.h>
DECLARE_CLASS1(hxunit,TestFrameworkPrimitive)
DECLARE_CLASS1(hxunit,TestSuite)
DECLARE_CLASS2(test,arrow,ArrowSuite)
namespace test{
namespace arrow{


class ArrowSuite_obj : public hxunit::TestSuite_obj
{
	public:
		typedef hxunit::TestSuite_obj super;
		typedef ArrowSuite_obj OBJ_;

	protected:
		ArrowSuite_obj();
		Void __construct();

	public:
		static hxObjectPtr<ArrowSuite_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~ArrowSuite_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"ArrowSuite",10); }

};

} // end namespace test
} // end namespace arrow

#endif /* INCLUDED_test_arrow_ArrowSuite */ 
