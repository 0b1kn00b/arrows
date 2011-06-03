#ifndef INCLUDED_haxe_reactive_arrow_SpeedTest
#define INCLUDED_haxe_reactive_arrow_SpeedTest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/test/TestCase.h>
HX_DECLARE_CLASS3(haxe,reactive,arrow,SpeedTest)
HX_DECLARE_CLASS2(haxe,test,TestCase)
namespace haxe{
namespace reactive{
namespace arrow{


class SpeedTest_obj : public ::haxe::test::TestCase_obj{
	public:
		typedef ::haxe::test::TestCase_obj super;
		typedef SpeedTest_obj OBJ_;
		SpeedTest_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SpeedTest_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SpeedTest_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("SpeedTest"); }

		Dynamic out; /* REM */ 
		Dynamic in0; /* REM */ 
		virtual double lambda( double v);
		Dynamic lambda_dyn();

		virtual Void testStaxLambda( );
		Dynamic testStaxLambda_dyn();

		virtual Void testArrowLambda( );
		Dynamic testArrowLambda_dyn();

		virtual Array< double > genRandomArray( int length);
		Dynamic genRandomArray_dyn();

		static int how_many; /* REM */ 
};

} // end namespace haxe
} // end namespace reactive
} // end namespace arrow

#endif /* INCLUDED_haxe_reactive_arrow_SpeedTest */ 
