#ifndef INCLUDED_test_arrow_TestDynamicFunctionSource
#define INCLUDED_test_arrow_TestDynamicFunctionSource

#include <hxObject.h>

DECLARE_CLASS2(test,arrow,TestDynamicFunctionSource)
namespace test{
namespace arrow{


class TestDynamicFunctionSource_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef TestDynamicFunctionSource_obj OBJ_;

	protected:
		TestDynamicFunctionSource_obj();
		Void __construct();

	public:
		static hxObjectPtr<TestDynamicFunctionSource_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~TestDynamicFunctionSource_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"TestDynamicFunctionSource",25); }

		virtual test::arrow::TestDynamicFunctionSource whatAmI( );
		Dynamic whatAmI_dyn();

};

} // end namespace test
} // end namespace arrow

#endif /* INCLUDED_test_arrow_TestDynamicFunctionSource */ 
