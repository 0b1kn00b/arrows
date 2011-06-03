#ifndef INCLUDED_haxe_test_ui_common_ResultStats
#define INCLUDED_haxe_test_ui_common_ResultStats

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,test,Dispatcher)
HX_DECLARE_CLASS4(haxe,test,ui,common,ResultStats)
namespace haxe{
namespace test{
namespace ui{
namespace common{


class ResultStats_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ResultStats_obj OBJ_;
		ResultStats_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ResultStats_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ResultStats_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ResultStats"); }

		int assertations; /* REM */ 
		int successes; /* REM */ 
		int failures; /* REM */ 
		int errors; /* REM */ 
		int warnings; /* REM */ 
		::haxe::test::Dispatcher onAddSuccesses; /* REM */ 
		::haxe::test::Dispatcher onAddFailures; /* REM */ 
		::haxe::test::Dispatcher onAddErrors; /* REM */ 
		::haxe::test::Dispatcher onAddWarnings; /* REM */ 
		bool isOk; /* REM */ 
		bool hasFailures; /* REM */ 
		bool hasErrors; /* REM */ 
		bool hasWarnings; /* REM */ 
		virtual Void addSuccesses( int v);
		Dynamic addSuccesses_dyn();

		virtual Void addFailures( int v);
		Dynamic addFailures_dyn();

		virtual Void addErrors( int v);
		Dynamic addErrors_dyn();

		virtual Void addWarnings( int v);
		Dynamic addWarnings_dyn();

		virtual Void sum( ::haxe::test::ui::common::ResultStats other);
		Dynamic sum_dyn();

		virtual Void subtract( ::haxe::test::ui::common::ResultStats other);
		Dynamic subtract_dyn();

		virtual Void wire( ::haxe::test::ui::common::ResultStats dependant);
		Dynamic wire_dyn();

		virtual Void unwire( ::haxe::test::ui::common::ResultStats dependant);
		Dynamic unwire_dyn();

};

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace common

#endif /* INCLUDED_haxe_test_ui_common_ResultStats */ 
