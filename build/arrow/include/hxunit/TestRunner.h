#ifndef INCLUDED_hxunit_TestRunner
#define INCLUDED_hxunit_TestRunner

#include <hxObject.h>

DECLARE_CLASS1(hxunit,TestGenerator)
DECLARE_CLASS1(hxunit,TestMonitor)
DECLARE_CLASS1(hxunit,TestRunner)
DECLARE_CLASS2(hxunit,responder,TestResponder)
namespace hxunit{


class TestRunner_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef TestRunner_obj OBJ_;

	protected:
		TestRunner_obj();
		Void __construct();

	public:
		static hxObjectPtr<TestRunner_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~TestRunner_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"TestRunner",10); }

		hxunit::TestGenerator gen;
		hxunit::TestMonitor monitor;
		hxunit::responder::TestResponder responder;
		virtual Void addSuite( Class value);
		Dynamic addSuite_dyn();

		virtual Void addCase( Class value);
		Dynamic addCase_dyn();

		virtual Void addTest( Dynamic name,Dynamic method);
		Dynamic addTest_dyn();

		virtual Void run( );
		Dynamic run_dyn();

		virtual Void advance( );
		Dynamic advance_dyn();

		Dynamic observe;
	Dynamic &observe_dyn() { return observe;}
};

} // end namespace hxunit

#endif /* INCLUDED_hxunit_TestRunner */ 
