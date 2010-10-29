#ifndef INCLUDED_haxe_test_ui_text_HtmlReport
#define INCLUDED_haxe_test_ui_text_HtmlReport

#include <hxcpp.h>

#include <haxe/test/ui/common/IReport.h>
HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS2(haxe,test,Runner)
HX_DECLARE_CLASS4(haxe,test,ui,common,ClassResult)
HX_DECLARE_CLASS4(haxe,test,ui,common,FixtureResult)
HX_DECLARE_CLASS4(haxe,test,ui,common,HeaderDisplayMode)
HX_DECLARE_CLASS4(haxe,test,ui,common,IReport)
HX_DECLARE_CLASS4(haxe,test,ui,common,PackageResult)
HX_DECLARE_CLASS4(haxe,test,ui,common,ResultAggregator)
HX_DECLARE_CLASS4(haxe,test,ui,common,ResultStats)
HX_DECLARE_CLASS4(haxe,test,ui,common,SuccessResultsDisplayMode)
HX_DECLARE_CLASS4(haxe,test,ui,text,HtmlReport)
namespace haxe{
namespace test{
namespace ui{
namespace text{


class HtmlReport_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HtmlReport_obj OBJ_;
		HtmlReport_obj();
		Void __construct(::haxe::test::Runner runner,Dynamic outputHandler,Dynamic __o_traceRedirected);

	public:
		static hx::ObjectPtr< HtmlReport_obj > __new(::haxe::test::Runner runner,Dynamic outputHandler,Dynamic __o_traceRedirected);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~HtmlReport_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::haxe::test::ui::common::IReport_obj *()
			{ return new ::haxe::test::ui::common::IReport_delegate_< HtmlReport_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("HtmlReport"); }

		bool traceRedirected; /* REM */ 
		::haxe::test::ui::common::SuccessResultsDisplayMode displaySuccessResults; /* REM */ 
		::haxe::test::ui::common::HeaderDisplayMode displayHeader; /* REM */ 
		Dynamic handler; /* REM */ 
	Dynamic &handler_dyn() { return handler;}
		::haxe::test::ui::common::ResultAggregator aggregator; /* REM */ 
		Dynamic oldTrace; /* REM */ 
		Array< Dynamic > _traces; /* REM */ 
		virtual Void setHandler( Dynamic handler);
		Dynamic setHandler_dyn();

		virtual Void redirectTrace( );
		Dynamic redirectTrace_dyn();

		virtual Void restoreTrace( );
		Dynamic restoreTrace_dyn();

		Dynamic _traceTime; /* REM */ 
		virtual Void _trace( Dynamic v,Dynamic infos);
		Dynamic _trace_dyn();

		double startTime; /* REM */ 
		virtual Void start( ::haxe::test::Runner e);
		Dynamic start_dyn();

		virtual ::String cls( ::haxe::test::ui::common::ResultStats stats);
		Dynamic cls_dyn();

		virtual Void resultNumbers( ::StringBuf buf,::haxe::test::ui::common::ResultStats stats);
		Dynamic resultNumbers_dyn();

		virtual Void blockNumbers( ::StringBuf buf,::haxe::test::ui::common::ResultStats stats);
		Dynamic blockNumbers_dyn();

		virtual ::String formatStack( Array< ::haxe::StackItem > stack,Dynamic addNL);
		Dynamic formatStack_dyn();

		virtual Void addFixture( ::StringBuf buf,::haxe::test::ui::common::FixtureResult result,::String name,bool isOk);
		Dynamic addFixture_dyn();

		virtual Void addClass( ::StringBuf buf,::haxe::test::ui::common::ClassResult result,::String name,bool isOk);
		Dynamic addClass_dyn();

		virtual Void addPackages( ::StringBuf buf,::haxe::test::ui::common::PackageResult result,bool isOk);
		Dynamic addPackages_dyn();

		virtual Void addPackage( ::StringBuf buf,::haxe::test::ui::common::PackageResult result,::String name,bool isOk);
		Dynamic addPackage_dyn();

		virtual ::String getHeader( );
		Dynamic getHeader_dyn();

		virtual ::String getTrace( );
		Dynamic getTrace_dyn();

		virtual ::String getResults( );
		Dynamic getResults_dyn();

		virtual ::String getAll( );
		Dynamic getAll_dyn();

		virtual ::String getHtml( ::String title);
		Dynamic getHtml_dyn();

		::haxe::test::ui::common::PackageResult result; /* REM */ 
		virtual Void complete( ::haxe::test::ui::common::PackageResult result);
		Dynamic complete_dyn();

		virtual ::String formatTime( double t);
		Dynamic formatTime_dyn();

		virtual ::String cssStyle( );
		Dynamic cssStyle_dyn();

		virtual ::String jsScript( );
		Dynamic jsScript_dyn();

		virtual ::String wrapHtml( ::String title,::String s);
		Dynamic wrapHtml_dyn();

		virtual Void _handler( ::haxe::test::ui::text::HtmlReport report);
		Dynamic _handler_dyn();

		static ::String platform; /* REM */ 
};

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace text

#endif /* INCLUDED_haxe_test_ui_text_HtmlReport */ 
