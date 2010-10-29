#ifndef INCLUDED_test_arrow_FunctionArrowTest
#define INCLUDED_test_arrow_FunctionArrowTest

#include <hxcpp.h>

#include <haxe/test/TestCase.h>
HX_DECLARE_CLASS2(haxe,test,TestCase)
HX_DECLARE_CLASS2(test,arrow,FunctionArrowTest)
namespace test{
namespace arrow{


class FunctionArrowTest_obj : public ::haxe::test::TestCase_obj{
	public:
		typedef ::haxe::test::TestCase_obj super;
		typedef FunctionArrowTest_obj OBJ_;
		FunctionArrowTest_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FunctionArrowTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FunctionArrowTest_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("FunctionArrowTest"); }

		virtual Void testLift( );
		Dynamic testLift_dyn();

};

} // end namespace test
} // end namespace arrow

#endif /* INCLUDED_test_arrow_FunctionArrowTest */ 
