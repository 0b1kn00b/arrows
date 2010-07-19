#ifndef INCLUDED_hxunit_AnonymousTestCase
#define INCLUDED_hxunit_AnonymousTestCase

#include <hxObject.h>

#include <hxunit/TestCase.h>
DECLARE_CLASS1(hxunit,AnonymousTestCase)
DECLARE_CLASS1(hxunit,TestCase)
DECLARE_CLASS1(hxunit,TestFrameworkPrimitive)
namespace hxunit{


class AnonymousTestCase_obj : public hxunit::TestCase_obj
{
	public:
		typedef hxunit::TestCase_obj super;
		typedef AnonymousTestCase_obj OBJ_;

	protected:
		AnonymousTestCase_obj();
		Void __construct();

	public:
		static hxObjectPtr<AnonymousTestCase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~AnonymousTestCase_obj();

		DO_RTTI;
		DECLARE_IMPLEMENT_DYNAMIC;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"AnonymousTestCase",17); }

};

} // end namespace hxunit

#endif /* INCLUDED_hxunit_AnonymousTestCase */ 
