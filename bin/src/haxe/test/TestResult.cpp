#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_test_TestFixture
#include <haxe/test/TestFixture.h>
#endif
#ifndef INCLUDED_haxe_test_TestHandler
#include <haxe/test/TestHandler.h>
#endif
#ifndef INCLUDED_haxe_test_TestResult
#include <haxe/test/TestResult.h>
#endif
namespace haxe{
namespace test{

Void TestResult_obj::__construct()
{
{
}
;
	return null();
}

TestResult_obj::~TestResult_obj() { }

Dynamic TestResult_obj::__CreateEmpty() { return  new TestResult_obj; }
hx::ObjectPtr< TestResult_obj > TestResult_obj::__new()
{  hx::ObjectPtr< TestResult_obj > result = new TestResult_obj();
	result->__construct();
	return result;}

Dynamic TestResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestResult_obj > result = new TestResult_obj();
	result->__construct();
	return result;}

::haxe::test::TestResult TestResult_obj::ofHandler( ::haxe::test::TestHandler handler){
	__SAFE_POINT
	HX_SOURCE_PUSH("TestResult_obj::ofHandler")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestResult.hx",34)
	::haxe::test::TestResult r = ::haxe::test::TestResult_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestResult.hx",35)
	Array< ::String > path = ::Type_obj::getClassName(::Type_obj::getClass(handler->fixture->__Field(HX_CSTRING("target")))).split(HX_CSTRING("."));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestResult.hx",36)
	r->cls = path->pop();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestResult.hx",37)
	r->pack = path->join(HX_CSTRING("."));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestResult.hx",38)
	r->method = handler->fixture->methodName;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestResult.hx",39)
	r->setup = handler->fixture->setup;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestResult.hx",40)
	r->teardown = handler->fixture->teardown;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestResult.hx",41)
	r->assertations = handler->results;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestResult.hx",42)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TestResult_obj,ofHandler,return )


TestResult_obj::TestResult_obj()
{
}

void TestResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestResult);
	HX_MARK_MEMBER_NAME(pack,"pack");
	HX_MARK_MEMBER_NAME(cls,"cls");
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(setup,"setup");
	HX_MARK_MEMBER_NAME(teardown,"teardown");
	HX_MARK_MEMBER_NAME(assertations,"assertations");
	HX_MARK_END_CLASS();
}

Dynamic TestResult_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cls") ) { return cls; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pack") ) { return pack; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setup") ) { return setup; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"teardown") ) { return teardown; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ofHandler") ) { return ofHandler_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"assertations") ) { return assertations; }
	}
	return super::__Field(inName);
}

Dynamic TestResult_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cls") ) { cls=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pack") ) { pack=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setup") ) { setup=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"teardown") ) { teardown=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"assertations") ) { assertations=inValue.Cast< ::List >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void TestResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pack"));
	outFields->push(HX_CSTRING("cls"));
	outFields->push(HX_CSTRING("method"));
	outFields->push(HX_CSTRING("setup"));
	outFields->push(HX_CSTRING("teardown"));
	outFields->push(HX_CSTRING("assertations"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ofHandler"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("pack"),
	HX_CSTRING("cls"),
	HX_CSTRING("method"),
	HX_CSTRING("setup"),
	HX_CSTRING("teardown"),
	HX_CSTRING("assertations"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class TestResult_obj::__mClass;

void TestResult_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.TestResult"), hx::TCanCast< TestResult_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void TestResult_obj::__boot()
{
}

} // end namespace haxe
} // end namespace test
