#ifndef INCLUDED_test_arrow_CancellerTest
#define INCLUDED_test_arrow_CancellerTest

#include <hxcpp.h>

#include <haxe/test/TestCase.h>
HX_DECLARE_CLASS2(haxe,test,TestCase)
HX_DECLARE_CLASS2(test,arrow,CancellerTest)
namespace test{
namespace arrow{


class CancellerTest_obj : public ::haxe::test::TestCase_obj{
	public:
		typedef ::haxe::test::TestCase_obj super;
		typedef CancellerTest_obj OBJ_;
		CancellerTest_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CancellerTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CancellerTest_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("CancellerTest"); }

		virtual Void testCanceller( );
		Dynamic testCanceller_dyn();

};

} // end namespace test
} // end namespace arrow

#endif /* INCLUDED_test_arrow_CancellerTest */ 
