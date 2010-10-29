#ifndef INCLUDED_haxe_test_ui_common_PackageResult
#define INCLUDED_haxe_test_ui_common_PackageResult

#include <hxcpp.h>

HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS2(haxe,test,TestResult)
HX_DECLARE_CLASS4(haxe,test,ui,common,ClassResult)
HX_DECLARE_CLASS4(haxe,test,ui,common,FixtureResult)
HX_DECLARE_CLASS4(haxe,test,ui,common,PackageResult)
HX_DECLARE_CLASS4(haxe,test,ui,common,ResultStats)
namespace haxe{
namespace test{
namespace ui{
namespace common{


class PackageResult_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PackageResult_obj OBJ_;
		PackageResult_obj();
		Void __construct(::String packageName);

	public:
		static hx::ObjectPtr< PackageResult_obj > __new(::String packageName);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PackageResult_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("PackageResult"); }

		::String packageName; /* REM */ 
		::Hash classes; /* REM */ 
		::Hash packages; /* REM */ 
		::haxe::test::ui::common::ResultStats stats; /* REM */ 
		virtual Void addResult( ::haxe::test::TestResult result,bool flattenPackage);
		Dynamic addResult_dyn();

		virtual Void addClass( ::haxe::test::ui::common::ClassResult result);
		Dynamic addClass_dyn();

		virtual Void addPackage( ::haxe::test::ui::common::PackageResult result);
		Dynamic addPackage_dyn();

		virtual bool existsPackage( ::String name);
		Dynamic existsPackage_dyn();

		virtual bool existsClass( ::String name);
		Dynamic existsClass_dyn();

		virtual ::haxe::test::ui::common::PackageResult getPackage( ::String name);
		Dynamic getPackage_dyn();

		virtual ::haxe::test::ui::common::ClassResult getClass( ::String name);
		Dynamic getClass_dyn();

		virtual Array< ::String > classNames( Dynamic errorsHavePriority);
		Dynamic classNames_dyn();

		virtual Array< ::String > packageNames( Dynamic errorsHavePriority);
		Dynamic packageNames_dyn();

		virtual ::haxe::test::ui::common::FixtureResult createFixture( ::String method,Dynamic assertations);
		Dynamic createFixture_dyn();

		virtual ::haxe::test::ui::common::ClassResult getOrCreateClass( ::haxe::test::ui::common::PackageResult pack,::String cls,::String setup,::String teardown);
		Dynamic getOrCreateClass_dyn();

		virtual ::haxe::test::ui::common::PackageResult getOrCreatePackage( ::String pack,bool flat,::haxe::test::ui::common::PackageResult ref);
		Dynamic getOrCreatePackage_dyn();

};

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace common

#endif /* INCLUDED_haxe_test_ui_common_PackageResult */ 
