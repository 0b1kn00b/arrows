#ifndef INCLUDED_haxe_test_TestHandler
#define INCLUDED_haxe_test_TestHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS2(haxe,test,Dispatcher)
HX_DECLARE_CLASS2(haxe,test,TestFixture)
HX_DECLARE_CLASS2(haxe,test,TestHandler)
namespace haxe{
namespace test{


class TestHandler_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestHandler_obj OBJ_;
		TestHandler_obj();
		Void __construct(::haxe::test::TestFixture fixture);

	public:
		static hx::ObjectPtr< TestHandler_obj > __new(::haxe::test::TestFixture fixture);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TestHandler_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("TestHandler"); }

		::List results; /* REM */ 
		::haxe::test::TestFixture fixture; /* REM */ 
		::List asyncStack; /* REM */ 
		::haxe::test::Dispatcher onTested; /* REM */ 
		::haxe::test::Dispatcher onTimeout; /* REM */ 
		::haxe::test::Dispatcher onComplete; /* REM */ 
		virtual Void execute( );
		Dynamic execute_dyn();

		virtual Void checkTested( );
		Dynamic checkTested_dyn();

		Dynamic expireson; /* REM */ 
		virtual Void setTimeout( int timeout);
		Dynamic setTimeout_dyn();

		virtual Void bindHandler( );
		Dynamic bindHandler_dyn();

		virtual Void unbindHandler( );
		Dynamic unbindHandler_dyn();

		virtual Dynamic addAsync( Dynamic $t1,Dynamic timeout);
		Dynamic addAsync_dyn();

		virtual Dynamic addEvent( Dynamic $t1,Dynamic timeout);
		Dynamic addEvent_dyn();

		virtual Void executeMethodByName( ::String name);
		Dynamic executeMethodByName_dyn();

		virtual Void executeMethod( Dynamic f);
		Dynamic executeMethod_dyn();

		virtual Void tested( );
		Dynamic tested_dyn();

		virtual Void timeout( );
		Dynamic timeout_dyn();

		virtual Void completed( );
		Dynamic completed_dyn();

		static int POLLING_TIME; /* REM */ 
		static Array< ::haxe::StackItem > exceptionStack( Dynamic pops);
		static Dynamic exceptionStack_dyn();

};

} // end namespace haxe
} // end namespace test

#endif /* INCLUDED_haxe_test_TestHandler */ 
