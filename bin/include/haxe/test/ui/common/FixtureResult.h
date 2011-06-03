#ifndef INCLUDED_haxe_test_ui_common_FixtureResult
#define INCLUDED_haxe_test_ui_common_FixtureResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(haxe,test,Assertation)
HX_DECLARE_CLASS4(haxe,test,ui,common,FixtureResult)
HX_DECLARE_CLASS4(haxe,test,ui,common,ResultStats)
namespace haxe{
namespace test{
namespace ui{
namespace common{


class FixtureResult_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FixtureResult_obj OBJ_;
		FixtureResult_obj();
		Void __construct(::String methodName);

	public:
		static hx::ObjectPtr< FixtureResult_obj > __new(::String methodName);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FixtureResult_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("FixtureResult"); }

		::String methodName; /* REM */ 
		bool hasTestError; /* REM */ 
		bool hasSetupError; /* REM */ 
		bool hasTeardownError; /* REM */ 
		bool hasTimeoutError; /* REM */ 
		bool hasAsyncError; /* REM */ 
		::haxe::test::ui::common::ResultStats stats; /* REM */ 
		::List list; /* REM */ 
		virtual Dynamic iterator( );
		Dynamic iterator_dyn();

		virtual Void add( ::haxe::test::Assertation assertation);
		Dynamic add_dyn();

};

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace common

#endif /* INCLUDED_haxe_test_ui_common_FixtureResult */ 
