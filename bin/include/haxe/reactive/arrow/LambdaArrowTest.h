#ifndef INCLUDED_haxe_reactive_arrow_LambdaArrowTest
#define INCLUDED_haxe_reactive_arrow_LambdaArrowTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/test/TestCase.h>
HX_DECLARE_CLASS3(haxe,reactive,arrow,LambdaArrowTest)
HX_DECLARE_CLASS2(haxe,test,TestCase)
namespace haxe{
namespace reactive{
namespace arrow{


class LambdaArrowTest_obj : public ::haxe::test::TestCase_obj{
	public:
		typedef ::haxe::test::TestCase_obj super;
		typedef LambdaArrowTest_obj OBJ_;
		LambdaArrowTest_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< LambdaArrowTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~LambdaArrowTest_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("LambdaArrowTest"); }

		virtual Void testMap( );
		Dynamic testMap_dyn();

		virtual Void testIter( );
		Dynamic testIter_dyn();

		virtual Void testFilter( );
		Dynamic testFilter_dyn();

		virtual Void testLong( );
		Dynamic testLong_dyn();

};

} // end namespace haxe
} // end namespace reactive
} // end namespace arrow

#endif /* INCLUDED_haxe_reactive_arrow_LambdaArrowTest */ 
