#include <hxcpp.h>

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
hx::ObjectPtr< TestDynamic_obj > TestDynamic_obj::__new()
{  hx::ObjectPtr< TestDynamic_obj > result = new TestDynamic_obj();
	result->__construct();
	return result;}

Dynamic TestDynamic_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestDynamic_obj > result = new TestDynamic_obj();
	result->__construct();
	return result;}

Dynamic TestDynamic_obj::resolve( Dynamic key){
	HX_SOURCE_PUSH("TestDynamic_obj::resolve")
	HX_SOURCE_POS("unit/test/arrow/ArrowTest.hx",149)
	return ::test::arrow::TestDynamicFunctionSource_obj::__new()->whatAmI;
}


HX_DEFINE_DYNAMIC_FUNC1(TestDynamic_obj,resolve,return )


TestDynamic_obj::TestDynamic_obj()
{
	HX_INIT_IMPLEMENT_DYNAMIC;
}

void TestDynamic_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestDynamic);
	HX_MARK_DYNAMIC;
	HX_MARK_END_CLASS();
}

Dynamic TestDynamic_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName);
}

Dynamic TestDynamic_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	try { return super::__SetField(inName,inValue); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void TestDynamic_obj::__GetFields(Array< ::String> &outFields)
{
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("resolve"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class TestDynamic_obj::__mClass;

void TestDynamic_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("test.arrow.TestDynamic"), hx::TCanCast< TestDynamic_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void TestDynamic_obj::__boot()
{
}

} // end namespace test
} // end namespace arrow
