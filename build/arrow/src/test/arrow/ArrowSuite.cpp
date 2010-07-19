#include <hxObject.h>

#ifndef INCLUDED_hxunit_TestCase
#include <hxunit/TestCase.h>
#endif
#ifndef INCLUDED_hxunit_TestFrameworkPrimitive
#include <hxunit/TestFrameworkPrimitive.h>
#endif
#ifndef INCLUDED_hxunit_TestSuite
#include <hxunit/TestSuite.h>
#endif
#ifndef INCLUDED_test_arrow_ArrowSuite
#include <test/arrow/ArrowSuite.h>
#endif
#ifndef INCLUDED_test_arrow_ArrowTest
#include <test/arrow/ArrowTest.h>
#endif
#ifndef INCLUDED_test_arrow_ComplexTest
#include <test/arrow/ComplexTest.h>
#endif
namespace test{
namespace arrow{

Void ArrowSuite_obj::__construct()
{
{
	super::__construct();
	this->addCase(hxClassOf<test::arrow::ArrowTest >());
	this->addCase(hxClassOf<test::arrow::ComplexTest >());
}
;
	return null();
}

ArrowSuite_obj::~ArrowSuite_obj() { }

Dynamic ArrowSuite_obj::__CreateEmpty() { return  new ArrowSuite_obj; }
hxObjectPtr<ArrowSuite_obj > ArrowSuite_obj::__new()
{  hxObjectPtr<ArrowSuite_obj > result = new ArrowSuite_obj();
	result->__construct();
	return result;}

Dynamic ArrowSuite_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<ArrowSuite_obj > result = new ArrowSuite_obj();
	result->__construct();
	return result;}


ArrowSuite_obj::ArrowSuite_obj()
{
}

Dynamic ArrowSuite_obj::__Field(const String &inName)
{
	return super::__Field(inName);
}



Dynamic ArrowSuite_obj::__IField(int inFieldID)
{
	return super::__IField(inFieldID);
}

Dynamic ArrowSuite_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ArrowSuite_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class ArrowSuite_obj::__mClass;

void ArrowSuite_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"test.arrow.ArrowSuite",21), TCanCast<ArrowSuite_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void ArrowSuite_obj::__boot()
{
}

} // end namespace test
} // end namespace arrow
