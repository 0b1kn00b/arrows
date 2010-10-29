#ifndef INCLUDED_haxe_test_ui_text_PlainTextReport
#define INCLUDED_haxe_test_ui_text_PlainTextReport

#include <hxcpp.h>

#include <haxe/test/ui/common/IReport.h>
HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS2(haxe,test,Runner)
HX_DECLARE_CLASS4(haxe,test,ui,common,HeaderDisplayMode)
HX_DECLARE_CLASS4(haxe,test,ui,common,IReport)
HX_DECLARE_CLASS4(haxe,test,ui,common,PackageResult)
HX_DECLARE_CLASS4(haxe,test,ui,common,ResultAggregator)
HX_DECLARE_CLASS4(haxe,test,ui,common,SuccessResultsDisplayMode)
HX_DECLARE_CLASS4(haxe,test,ui,text,PlainTextReport)
namespace haxe{
namespace test{
namespace ui{
namespace text{


class PlainTextReport_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PlainTextReport_obj OBJ_;
		PlainTextReport_obj();
		Void __construct(::haxe::test::Runner runner,Dynamic outputHandler);

	public:
		static hx::ObjectPtr< PlainTextReport_obj > __new(::haxe::test::Runner runner,Dynamic outputHandler);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PlainTextReport_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::haxe::test::ui::common::IReport_obj *()
			{ return new ::haxe::test::ui::common::IReport_delegate_< PlainTextReport_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("PlainTextReport"); }

		::haxe::test::ui::common::SuccessResultsDisplayMode displaySuccessResults; /* REM */ 
		::haxe::test::ui::common::HeaderDisplayMode displayHeader; /* REM */ 
		Dynamic handler; /* REM */ 
	Dynamic &handler_dyn() { return handler;}
		::haxe::test::ui::common::ResultAggregator aggregator; /* REM */ 
		::String newline; /* REM */ 
		::String indent; /* REM */ 
		virtual Void setHandler( Dynamic handler);
		Dynamic setHandler_dyn();

		double startTime; /* REM */ 
		virtual Void start( ::haxe::test::Runner e);
		Dynamic start_dyn();

		virtual ::String indents( int c);
		Dynamic indents_dyn();

		virtual ::String dumpStack( Array< ::haxe::StackItem > stack);
		Dynamic dumpStack_dyn();

		virtual Void addHeader( ::StringBuf buf,::haxe::test::ui::common::PackageResult result);
		Dynamic addHeader_dyn();

		::haxe::test::ui::common::PackageResult result; /* REM */ 
		virtual ::String getResults( );
		Dynamic getResults_dyn();

		virtual Void complete( ::haxe::test::ui::common::PackageResult result);
		Dynamic complete_dyn();

};

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace text

#endif /* INCLUDED_haxe_test_ui_text_PlainTextReport */ 
