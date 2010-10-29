#ifndef INCLUDED_haxe_test_TestResult
#define INCLUDED_haxe_test_TestResult

#include <hxcpp.h>

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(haxe,test,TestHandler)
HX_DECLARE_CLASS2(haxe,test,TestResult)
namespace haxe{
namespace test{


class TestResult_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestResult_obj OBJ_;
		TestResult_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TestResult_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TestResult_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("TestResult"); }

		::String pack; /* REM */ 
		::String cls; /* REM */ 
		::String method; /* REM */ 
		::String setup; /* REM */ 
		::String teardown; /* REM */ 
		::List assertations; /* REM */ 
		static ::haxe::test::TestResult ofHandler( ::haxe::test::TestHandler handler);
		static Dynamic ofHandler_dyn();

};

} // end namespace haxe
} // end namespace test

#endif /* INCLUDED_haxe_test_TestResult */ 
