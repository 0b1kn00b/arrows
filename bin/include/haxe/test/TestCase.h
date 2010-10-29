#ifndef INCLUDED_haxe_test_TestCase
#define INCLUDED_haxe_test_TestCase

#include <hxcpp.h>

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS0(Either)
HX_DECLARE_CLASS0(Future)
HX_DECLARE_CLASS2(haxe,test,TestCase)
namespace haxe{
namespace test{


class TestCase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestCase_obj OBJ_;
		TestCase_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TestCase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TestCase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("TestCase"); }

		virtual Void before( );
		Dynamic before_dyn();

		virtual Void after( );
		Dynamic after_dyn();

		virtual Void beforeAll( );
		Dynamic beforeAll_dyn();

		virtual Void afterAll( );
		Dynamic afterAll_dyn();

		virtual Dynamic not( Dynamic c);
		Dynamic not_dyn();

		virtual Void assertThat( Dynamic obj,Dynamic cond,::String msg,Dynamic pos);
		Dynamic assertThat_dyn();

		virtual Void assertTrue( bool cond,::String msg,Dynamic pos);
		Dynamic assertTrue_dyn();

		virtual Void assertFalse( bool value,::String msg,Dynamic pos);
		Dynamic assertFalse_dyn();

		virtual Void assertNull( Dynamic value,::String msg,Dynamic pos);
		Dynamic assertNull_dyn();

		virtual Void assertNotNull( Dynamic value,::String msg,Dynamic pos);
		Dynamic assertNotNull_dyn();

		virtual Void assertIs( Dynamic value,Dynamic type,::String msg,Dynamic pos);
		Dynamic assertIs_dyn();

		virtual Void assertNotEquals( Dynamic expected,Dynamic value,::String msg,Dynamic pos);
		Dynamic assertNotEquals_dyn();

		virtual Void assertEquals( Dynamic expected,Dynamic value,Dynamic equal,::String msg,Dynamic pos);
		Dynamic assertEquals_dyn();

		virtual Void assertMatches( ::EReg pattern,Dynamic value,::String msg,Dynamic pos);
		Dynamic assertMatches_dyn();

		virtual Void assertFloatEquals( double expected,double value,Dynamic approx,::String msg,Dynamic pos);
		Dynamic assertFloatEquals_dyn();

		virtual Void assertLooksLike( Dynamic expected,Dynamic value,Dynamic recursive,::String msg,Dynamic pos);
		Dynamic assertLooksLike_dyn();

		virtual Void assertThrowsException( Dynamic method,::Class type,::String msg,Dynamic pos);
		Dynamic assertThrowsException_dyn();

		virtual Void assertEqualsOneOf( Dynamic value,Array< Dynamic > possibilities,::String msg,Dynamic pos);
		Dynamic assertEqualsOneOf_dyn();

		virtual Void assertContains( Dynamic values,Dynamic match,::String msg,Dynamic pos);
		Dynamic assertContains_dyn();

		virtual Void assertNotContains( Dynamic values,Dynamic match,::String msg,Dynamic pos);
		Dynamic assertNotContains_dyn();

		virtual Void assertStringContains( ::String match,::String value,::String msg,Dynamic pos);
		Dynamic assertStringContains_dyn();

		virtual Void assertStringSequence( Array< ::String > sequence,::String value,::String msg,Dynamic pos);
		Dynamic assertStringSequence_dyn();

		virtual Void assertDelivered( ::Future future,Dynamic assertions,Dynamic timeout);
		Dynamic assertDelivered_dyn();

		virtual Void assertCanceled( ::Future future,Dynamic assertions,Dynamic timeout);
		Dynamic assertCanceled_dyn();

		virtual Void assertNotDelivered( ::Future future,Dynamic timeout,Dynamic pos);
		Dynamic assertNotDelivered_dyn();

		virtual Void fail( Dynamic msg,Dynamic pos);
		Dynamic fail_dyn();

		virtual Void warn( ::String msg);
		Dynamic warn_dyn();

};

} // end namespace haxe
} // end namespace test

#endif /* INCLUDED_haxe_test_TestCase */ 
