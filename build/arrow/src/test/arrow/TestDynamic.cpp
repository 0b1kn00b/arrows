#include <hxObject.h>

#ifndef INCLUDED_test_arrow_TestDynamic
#include <test/arrow/TestDynamic.h>
#endif
#ifndef INCLUDED_test_arrow_TestDynamicFunctionSource
#include <test/arrow/TestDynamicFunctionSource.h>
#endif
namespace test{
namespace arrow{

Void TestDynamic_obj::__construct()
{
{
}
;
	return null();
}

TestDynamic_obj::~TestDynamic_obj() { }

Dynamic TestDynamic_obj::__CreateEmpty() { return  new TestDynamic_obj; }
hxObjectPtr<TestDynamic_obj > TestDynamic_obj::__new()
{  hxObjectPtr<TestDynamic_obj > result = new TestDynamic_obj();
	result->__construct();
	return result;}

Dynamic TestDynamic_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<TestDynamic_obj > result = new TestDynamic_obj();
	result->__construct();
	return result;}

Dynamic TestDynamic_obj::resolve( Dynamic key){
	return test::arrow::TestDynamicFunctionSource_obj::__new()->whatAmI;
}


DEFINE_DYNAMIC_FUNC1(TestDynamic_obj,resolve,return )


TestDynamic_obj::TestDynamic_obj()
{
	INIT_IMPLEMENT_DYNAMIC;
}

Dynamic TestDynamic_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"resolve",sizeof(wchar_t)*7) ) { return resolve_dyn(); }
	}
	CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName);
}

static int __id_resolve = __hxcpp_field_to_id("resolve");


Dynamic TestDynamic_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_resolve) return resolve_dyn();
	CHECK_DYNAMIC_GET_INT_FIELD(inFieldID);
	return super::__IField(inFieldID);
}

Dynamic TestDynamic_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	try { return super::__SetField(inName,inValue); }
	catch(Dynamic e) { DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void TestDynamic_obj::__GetFields(Array<String> &outFields)
{
	APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"resolve",
	0 };

Class TestDynamic_obj::__mClass;

void TestDynamic_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"test.arrow.TestDynamic",22), TCanCast<TestDynamic_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void TestDynamic_obj::__boot()
{
}

} // end namespace test
} // end namespace arrow
