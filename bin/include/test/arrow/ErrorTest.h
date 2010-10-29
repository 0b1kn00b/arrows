#ifndef INCLUDED_test_arrow_ErrorTest
#define INCLUDED_test_arrow_ErrorTest

#include <hxcpp.h>

#include <haxe/test/TestCase.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS2(haxe,test,TestCase)
HX_DECLARE_CLASS2(test,arrow,ErrorTest)
namespace test{
namespace arrow{


class ErrorTest_obj : public ::haxe::test::TestCase_obj{
	public:
		typedef ::haxe::test::TestCase_obj super;
		typedef ErrorTest_obj OBJ_;
		ErrorTest_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ErrorTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ErrorTest_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ErrorTest"); }

		virtual Void testParameterMismatchNumberError_ExpectOneReceiveZero( );
		Dynamic testParameterMismatchNumberError_ExpectOneReceiveZero_dyn();

		virtual Void testParameterMismatchNumberError_ExpectZeroReceiveOne( );
		Dynamic testParameterMismatchNumberError_ExpectZeroReceiveOne_dyn();

		virtual Dynamic f0( Dynamic x);
		Dynamic f0_dyn();

		virtual Void f1( );
		Dynamic f1_dyn();

		virtual ::haxe::functional::arrows::Arrow simpleAssert( );
		Dynamic simpleAssert_dyn();

};

} // end namespace test
} // end namespace arrow

#endif /* INCLUDED_test_arrow_ErrorTest */ 
