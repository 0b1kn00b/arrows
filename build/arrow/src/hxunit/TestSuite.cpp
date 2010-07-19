#include <hxObject.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_hxunit_TestFrameworkPrimitive
#include <hxunit/TestFrameworkPrimitive.h>
#endif
#ifndef INCLUDED_hxunit_TestSuite
#include <hxunit/TestSuite.h>
#endif
namespace hxunit{

Void TestSuite_obj::__construct()
{
{
	super::__construct();
	this->cases = List_obj::__new();
}
;
	return null();
}

TestSuite_obj::~TestSuite_obj() { }

Dynamic TestSuite_obj::__CreateEmpty() { return  new TestSuite_obj; }
hxObjectPtr<TestSuite_obj > TestSuite_obj::__new()
{  hxObjectPtr<TestSuite_obj > result = new TestSuite_obj();
	result->__construct();
	return result;}

Dynamic TestSuite_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<TestSuite_obj > result = new TestSuite_obj();
	result->__construct();
	return result;}

Void TestSuite_obj::addCase( Class value){
{
		this->cases->add(value);
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(TestSuite_obj,addCase,(void))


TestSuite_obj::TestSuite_obj()
{
	InitMember(cases);
}

Dynamic TestSuite_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 5:
		if (!memcmp(inName.__s,L"cases",sizeof(wchar_t)*5) ) { return cases; }
		break;
	case 7:
		if (!memcmp(inName.__s,L"addCase",sizeof(wchar_t)*7) ) { return addCase_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_cases = __hxcpp_field_to_id("cases");
static int __id_addCase = __hxcpp_field_to_id("addCase");


Dynamic TestSuite_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_cases) return cases;
	if (inFieldID==__id_addCase) return addCase_dyn();
	return super::__IField(inFieldID);
}

Dynamic TestSuite_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (!memcmp(inName.__s,L"cases",sizeof(wchar_t)*5) ) { cases=inValue.Cast<List >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void TestSuite_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"cases",5));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"cases",
	L"addCase",
	0 };

Class TestSuite_obj::__mClass;

void TestSuite_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"hxunit.TestSuite",16), TCanCast<TestSuite_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void TestSuite_obj::__boot()
{
}

} // end namespace hxunit
