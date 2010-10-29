#ifndef INCLUDED_test_arrow_TestDynamicFunctionSource
#define INCLUDED_test_arrow_TestDynamicFunctionSource

#include <hxcpp.h>

HX_DECLARE_CLASS2(test,arrow,TestDynamicFunctionSource)
namespace test{
namespace arrow{


class TestDynamicFunctionSource_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestDynamicFunctionSource_obj OBJ_;
		TestDynamicFunctionSource_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TestDynamicFunctionSource_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TestDynamicFunctionSource_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("TestDynamicFunctionSource"); }

		virtual ::test::arrow::TestDynamicFunctionSource whatAmI( );
		Dynamic whatAmI_dyn();

};

} // end namespace test
} // end namespace arrow

#endif /* INCLUDED_test_arrow_TestDynamicFunctionSource */ 
