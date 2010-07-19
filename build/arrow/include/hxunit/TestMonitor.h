#ifndef INCLUDED_hxunit_TestMonitor
#define INCLUDED_hxunit_TestMonitor

#include <hxObject.h>

DECLARE_CLASS0(Hash)
DECLARE_CLASS0(List)
DECLARE_CLASS1(haxe,Timer)
DECLARE_CLASS1(hxunit,Message)
DECLARE_CLASS1(hxunit,TestCase)
DECLARE_CLASS1(hxunit,TestFrameworkPrimitive)
DECLARE_CLASS1(hxunit,TestMonitor)
DECLARE_CLASS1(hxunit,TestResult)
DECLARE_CLASS1(hxunit,TestRunner)
namespace hxunit{


class TestMonitor_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef TestMonitor_obj OBJ_;

	protected:
		TestMonitor_obj();
		Void __construct(Dynamic unit,hxunit::TestRunner runner);

	public:
		static hxObjectPtr<TestMonitor_obj > __new(Dynamic unit,hxunit::TestRunner runner);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~TestMonitor_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"TestMonitor",11); }

		List observers;
		hxunit::TestRunner runner;
		hxunit::TestResult result;
		Dynamic unit;
		hxunit::TestCase atc;
		Hash waits;
		virtual Void notify( hxunit::Message value);
		Dynamic notify_dyn();

		virtual Void run( );
		Dynamic run_dyn();

		virtual bool call( String name);
		Dynamic call_dyn();

		virtual Void assert( Dynamic v);
		Dynamic assert_dyn();

		virtual Void handle( String name,Dynamic value,Dynamic passThrough);
		Dynamic handle_dyn();

		virtual Void callHandler( Dynamic method,Dynamic value,Dynamic passThrough);
		Dynamic callHandler_dyn();

		virtual Void error( Dynamic value);
		Dynamic error_dyn();

		virtual Void wait( );
		Dynamic wait_dyn();

		haxe::Timer timer;
		virtual Void tick( );
		Dynamic tick_dyn();

		virtual Void done( );
		Dynamic done_dyn();

};

} // end namespace hxunit

#endif /* INCLUDED_hxunit_TestMonitor */ 
