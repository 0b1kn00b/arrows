#ifndef INCLUDED_haxe_reactive_arrow_TraceObjectTest
#define INCLUDED_haxe_reactive_arrow_TraceObjectTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/test/TestCase.h>
HX_DECLARE_CLASS3(haxe,reactive,arrow,TraceObjectTest)
HX_DECLARE_CLASS2(haxe,test,TestCase)
namespace haxe{
namespace reactive{
namespace arrow{


class TraceObjectTest_obj : public ::haxe::test::TestCase_obj{
	public:
		typedef ::haxe::test::TestCase_obj super;
		typedef TraceObjectTest_obj OBJ_;
		TraceObjectTest_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TraceObjectTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TraceObjectTest_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("TraceObjectTest"); }

};

} // end namespace haxe
} // end namespace reactive
} // end namespace arrow

#endif /* INCLUDED_haxe_reactive_arrow_TraceObjectTest */ 
