#ifndef INCLUDED_hxunit_TestCase
#define INCLUDED_hxunit_TestCase

#include <hxObject.h>

#include <hxunit/TestFrameworkPrimitive.h>
DECLARE_CLASS2(data,type,Time)
DECLARE_CLASS1(hxunit,AType)
DECLARE_CLASS1(hxunit,TestCase)
DECLARE_CLASS1(hxunit,TestFrameworkPrimitive)
DECLARE_CLASS1(hxunit,TestMonitor)
namespace hxunit{


class TestCase_obj : public hxunit::TestFrameworkPrimitive_obj
{
	public:
		typedef hxunit::TestFrameworkPrimitive_obj super;
		typedef TestCase_obj OBJ_;

	protected:
		TestCase_obj();
		Void __construct();

	public:
		static hxObjectPtr<TestCase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~TestCase_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"TestCase",8); }

		hxunit::TestMonitor monitor;
		data::type::Time timeout;
		virtual Void setup( );
		Dynamic setup_dyn();

		virtual Void teardown( );
		Dynamic teardown_dyn();

		virtual Void assert( hxunit::AType type,Dynamic expected,Dynamic actual,Dynamic pos);
		Dynamic assert_dyn();

		virtual Void assertTrue( bool value,Dynamic pos);
		Dynamic assertTrue_dyn();

		virtual Void assertFalse( bool value,Dynamic pos);
		Dynamic assertFalse_dyn();

		virtual Void assertEqual( Dynamic value0,Dynamic value1,Dynamic pos);
		Dynamic assertEqual_dyn();

		virtual Void assertNotNull( Dynamic value,Dynamic pos);
		Dynamic assertNotNull_dyn();

		virtual Void assertNull( Dynamic value,Dynamic pos);
		Dynamic assertNull_dyn();

		virtual Dynamic asyncHandler( Dynamic method,data::type::Time timeout,Dynamic $t3);
		Dynamic asyncHandler_dyn();

		virtual String toString( );
		Dynamic toString_dyn();

		Dynamic filtrate;
	Dynamic &filtrate_dyn() { return filtrate;}
};

} // end namespace hxunit

#endif /* INCLUDED_hxunit_TestCase */ 
