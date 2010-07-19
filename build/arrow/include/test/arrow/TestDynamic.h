#ifndef INCLUDED_test_arrow_TestDynamic
#define INCLUDED_test_arrow_TestDynamic

#include <hxObject.h>

DECLARE_CLASS2(test,arrow,TestDynamic)
DECLARE_CLASS2(test,arrow,TestDynamicFunctionSource)
namespace test{
namespace arrow{


class TestDynamic_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef TestDynamic_obj OBJ_;

	protected:
		TestDynamic_obj();
		Void __construct();

	public:
		static hxObjectPtr<TestDynamic_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~TestDynamic_obj();

		DO_RTTI;
		DECLARE_IMPLEMENT_DYNAMIC;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"TestDynamic",11); }

		virtual Dynamic resolve( Dynamic key);
		Dynamic resolve_dyn();

};

} // end namespace test
} // end namespace arrow

#endif /* INCLUDED_test_arrow_TestDynamic */ 
