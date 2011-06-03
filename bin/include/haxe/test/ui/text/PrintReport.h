#ifndef INCLUDED_haxe_test_ui_text_PrintReport
#define INCLUDED_haxe_test_ui_text_PrintReport

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/test/ui/text/PlainTextReport.h>
HX_DECLARE_CLASS2(haxe,test,Runner)
HX_DECLARE_CLASS4(haxe,test,ui,common,IReport)
HX_DECLARE_CLASS4(haxe,test,ui,text,PlainTextReport)
HX_DECLARE_CLASS4(haxe,test,ui,text,PrintReport)
namespace haxe{
namespace test{
namespace ui{
namespace text{


class PrintReport_obj : public ::haxe::test::ui::text::PlainTextReport_obj{
	public:
		typedef ::haxe::test::ui::text::PlainTextReport_obj super;
		typedef PrintReport_obj OBJ_;
		PrintReport_obj();
		Void __construct(::haxe::test::Runner runner);

	public:
		static hx::ObjectPtr< PrintReport_obj > __new(::haxe::test::Runner runner);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PrintReport_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("PrintReport"); }

		bool useTrace; /* REM */ 
		virtual Void _handler( ::haxe::test::ui::text::PlainTextReport report);
		Dynamic _handler_dyn();

		virtual Void _trace( ::String s);
		Dynamic _trace_dyn();

		virtual Void _print( ::String s);
		Dynamic _print_dyn();

};

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace text

#endif /* INCLUDED_haxe_test_ui_text_PrintReport */ 
