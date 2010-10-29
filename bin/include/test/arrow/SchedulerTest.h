#ifndef INCLUDED_test_arrow_SchedulerTest
#define INCLUDED_test_arrow_SchedulerTest

#include <hxcpp.h>

#include <haxe/test/TestCase.h>
HX_DECLARE_CLASS2(haxe,test,TestCase)
HX_DECLARE_CLASS2(test,arrow,SchedulerTest)
namespace test{
namespace arrow{


class SchedulerTest_obj : public ::haxe::test::TestCase_obj{
	public:
		typedef ::haxe::test::TestCase_obj super;
		typedef SchedulerTest_obj OBJ_;
		SchedulerTest_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SchedulerTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SchedulerTest_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("SchedulerTest"); }

		virtual Void testSimpleCancel( );
		Dynamic testSimpleCancel_dyn();

};

} // end namespace test
} // end namespace arrow

#endif /* INCLUDED_test_arrow_SchedulerTest */ 
