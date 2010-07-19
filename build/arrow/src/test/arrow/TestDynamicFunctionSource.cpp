#include <hxObject.h>

#ifndef INCLUDED_test_arrow_TestDynamicFunctionSource
#include <test/arrow/TestDynamicFunctionSource.h>
#endif
namespace test{
namespace arrow{

Void TestDynamicFunctionSource_obj::__construct()
{
{
}
;
	return null();
}

TestDynamicFunctionSource_obj::~TestDynamicFunctionSource_obj() { }

Dynamic TestDynamicFunctionSource_obj::__CreateEmpty() { return  new TestDynamicFunctionSource_obj; }
hxObjectPtr<TestDynamicFunctionSource_obj > TestDynamicFunctionSource_obj::__new()
{  hxObjectPtr<TestDynamicFunctionSource_obj > result = new TestDynamicFunctionSource_obj();
	result->__construct();
	return result;}

Dynamic TestDynamicFunctionSource_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<TestDynamicFunctionSource_obj > result = new TestDynamicFunctionSource_obj();
	result->__construct();
	return result;}

test::arrow::TestDynamicFunctionSource TestDynamicFunctionSource_obj::whatAmI( ){
	return this;
}


DEFINE_DYNAMIC_FUNC0(TestDynamicFunctionSource_obj,whatAmI,return )


TestDynamicFunctionSource_obj::TestDynamicFunctionSource_obj()
{
}

Dynamic TestDynamicFunctionSource_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"whatAmI",sizeof(wchar_t)*7) ) { return whatAmI_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_whatAmI = __hxcpp_field_to_id("whatAmI");


Dynamic TestDynamicFunctionSource_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_whatAmI) return whatAmI_dyn();
	return super::__IField(inFieldID);
}

Dynamic TestDynamicFunctionSource_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void TestDynamicFunctionSource_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"whatAmI",
	0 };

Class TestDynamicFunctionSource_obj::__mClass;

void TestDynamicFunctionSource_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"test.arrow.TestDynamicFunctionSource",36), TCanCast<TestDynamicFunctionSource_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void TestDynamicFunctionSource_obj::__boot()
{
}

} // end namespace test
} // end namespace arrow
