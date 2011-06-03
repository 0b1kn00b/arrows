#ifndef INCLUDED_haxe_reactive_arrow_CancellerTest
#define INCLUDED_haxe_reactive_arrow_CancellerTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/test/TestCase.h>
HX_DECLARE_CLASS3(haxe,reactive,arrow,CancellerTest)
HX_DECLARE_CLASS2(haxe,test,TestCase)
namespace haxe{
namespace reactive{
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

} // end namespace haxe
} // end namespace reactive
} // end namespace arrow

#endif /* INCLUDED_haxe_reactive_arrow_CancellerTest */ 
