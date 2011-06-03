#ifndef INCLUDED_test_arrow_TestDynamic
#define INCLUDED_test_arrow_TestDynamic

#include <hxcpp.h>

HX_DECLARE_CLASS2(test,arrow,TestDynamic)
HX_DECLARE_CLASS2(test,arrow,TestDynamicFunctionSource)
namespace test{
namespace arrow{


class TestDynamic_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestDynamic_obj OBJ_;
		TestDynamic_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TestDynamic_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TestDynamic_obj();

		HX_DO_RTTI;
		HX_DECLARE_IMPLEMENT_DYNAMIC;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("TestDynamic"); }

		virtual Dynamic resolve( Dynamic key);
		Dynamic resolve_dyn();

};

} // end namespace test
} // end namespace arrow

#endif /* INCLUDED_test_arrow_TestDynamic */ 
