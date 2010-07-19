#ifndef INCLUDED_hxunit_TestResult
#define INCLUDED_hxunit_TestResult

#include <hxObject.h>

DECLARE_CLASS0(List)
DECLARE_CLASS1(hxunit,TestResult)
namespace hxunit{


class TestResult_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef TestResult_obj OBJ_;

	protected:
		TestResult_obj();
		Void __construct(Dynamic unit);

	public:
		static hxObjectPtr<TestResult_obj > __new(Dynamic unit);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~TestResult_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"TestResult",10); }

		List errors;
		List assertions;
		Dynamic unit;
		virtual Void add( Dynamic value);
		Dynamic add_dyn();

		virtual String toString( );
		Dynamic toString_dyn();

};

} // end namespace hxunit

#endif /* INCLUDED_hxunit_TestResult */ 
