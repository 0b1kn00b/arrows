#ifndef INCLUDED_haxe_test_ui_common_ReportTools
#define INCLUDED_haxe_test_ui_common_ReportTools

#include <hxcpp.h>

HX_DECLARE_CLASS4(haxe,test,ui,common,IReport)
HX_DECLARE_CLASS4(haxe,test,ui,common,ReportTools)
HX_DECLARE_CLASS4(haxe,test,ui,common,ResultStats)
namespace haxe{
namespace test{
namespace ui{
namespace common{


class ReportTools_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ReportTools_obj OBJ_;
		ReportTools_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ReportTools_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ReportTools_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ReportTools"); }

		static bool hasHeader( ::haxe::test::ui::common::IReport report,::haxe::test::ui::common::ResultStats stats);
		static Dynamic hasHeader_dyn();

		static bool skipResult( ::haxe::test::ui::common::IReport report,::haxe::test::ui::common::ResultStats stats,bool isOk);
		static Dynamic skipResult_dyn();

		static bool hasOutput( ::haxe::test::ui::common::IReport report,::haxe::test::ui::common::ResultStats stats);
		static Dynamic hasOutput_dyn();

};

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace common

#endif /* INCLUDED_haxe_test_ui_common_ReportTools */ 
