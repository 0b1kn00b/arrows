#ifndef INCLUDED_haxe_test_ui_Report
#define INCLUDED_haxe_test_ui_Report

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,test,Runner)
HX_DECLARE_CLASS3(haxe,test,ui,Report)
HX_DECLARE_CLASS4(haxe,test,ui,common,HeaderDisplayMode)
HX_DECLARE_CLASS4(haxe,test,ui,common,IReport)
HX_DECLARE_CLASS4(haxe,test,ui,common,SuccessResultsDisplayMode)
namespace haxe{
namespace test{
namespace ui{


class Report_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Report_obj OBJ_;
		Report_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Report_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Report_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Report"); }

		static ::haxe::test::ui::common::IReport create( ::haxe::test::Runner runner,::haxe::test::ui::common::SuccessResultsDisplayMode displaySuccessResults,::haxe::test::ui::common::HeaderDisplayMode headerDisplayMode);
		static Dynamic create_dyn();

};

} // end namespace haxe
} // end namespace test
} // end namespace ui

#endif /* INCLUDED_haxe_test_ui_Report */ 
