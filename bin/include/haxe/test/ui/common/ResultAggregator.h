#ifndef INCLUDED_haxe_test_ui_common_ResultAggregator
#define INCLUDED_haxe_test_ui_common_ResultAggregator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,test,Dispatcher)
HX_DECLARE_CLASS2(haxe,test,Notifier)
HX_DECLARE_CLASS2(haxe,test,Runner)
HX_DECLARE_CLASS2(haxe,test,TestResult)
HX_DECLARE_CLASS4(haxe,test,ui,common,ClassResult)
HX_DECLARE_CLASS4(haxe,test,ui,common,FixtureResult)
HX_DECLARE_CLASS4(haxe,test,ui,common,PackageResult)
HX_DECLARE_CLASS4(haxe,test,ui,common,ResultAggregator)
namespace haxe{
namespace test{
namespace ui{
namespace common{


class ResultAggregator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ResultAggregator_obj OBJ_;
		ResultAggregator_obj();
		Void __construct(::haxe::test::Runner runner,Dynamic __o_flattenPackage);

	public:
		static hx::ObjectPtr< ResultAggregator_obj > __new(::haxe::test::Runner runner,Dynamic __o_flattenPackage);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ResultAggregator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ResultAggregator"); }

		::haxe::test::Runner runner; /* REM */ 
		bool flattenPackage; /* REM */ 
		::haxe::test::ui::common::PackageResult root; /* REM */ 
		::haxe::test::Notifier onStart; /* REM */ 
		::haxe::test::Dispatcher onComplete; /* REM */ 
		::haxe::test::Dispatcher onProgress; /* REM */ 
		virtual Void start( ::haxe::test::Runner runner);
		Dynamic start_dyn();

		virtual ::haxe::test::ui::common::PackageResult getOrCreatePackage( ::String pack,bool flat,::haxe::test::ui::common::PackageResult ref);
		Dynamic getOrCreatePackage_dyn();

		virtual ::haxe::test::ui::common::ClassResult getOrCreateClass( ::haxe::test::ui::common::PackageResult pack,::String cls,::String setup,::String teardown);
		Dynamic getOrCreateClass_dyn();

		virtual ::haxe::test::ui::common::FixtureResult createFixture( ::haxe::test::TestResult result);
		Dynamic createFixture_dyn();

		virtual Void progress( Dynamic e);
		Dynamic progress_dyn();

		virtual Void complete( ::haxe::test::Runner runner);
		Dynamic complete_dyn();

};

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace common

#endif /* INCLUDED_haxe_test_ui_common_ResultAggregator */ 
