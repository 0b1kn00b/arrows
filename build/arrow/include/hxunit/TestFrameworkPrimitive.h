#ifndef INCLUDED_hxunit_TestFrameworkPrimitive
#define INCLUDED_hxunit_TestFrameworkPrimitive

#include <hxObject.h>

DECLARE_CLASS1(hxunit,TestFrameworkPrimitive)
namespace hxunit{


class TestFrameworkPrimitive_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef TestFrameworkPrimitive_obj OBJ_;

	protected:
		TestFrameworkPrimitive_obj();
		Void __construct();

	public:
		static hxObjectPtr<TestFrameworkPrimitive_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~TestFrameworkPrimitive_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"TestFrameworkPrimitive",22); }

		String name;
		virtual String getName( );
		Dynamic getName_dyn();

};

} // end namespace hxunit

#endif /* INCLUDED_hxunit_TestFrameworkPrimitive */ 
