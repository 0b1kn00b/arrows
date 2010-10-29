#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Either
#include <Either.h>
#endif
#ifndef INCLUDED_Future
#include <Future.h>
#endif
#ifndef INCLUDED_haxe_test_Assert
#include <haxe/test/Assert.h>
#endif
#ifndef INCLUDED_haxe_test_MustMatcherExtensions
#include <haxe/test/MustMatcherExtensions.h>
#endif
#ifndef INCLUDED_haxe_test_TestCase
#include <haxe/test/TestCase.h>
#endif
namespace haxe{
namespace test{

Void TestCase_obj::__construct()
{
{
}
;
	return null();
}

TestCase_obj::~TestCase_obj() { }

Dynamic TestCase_obj::__CreateEmpty() { return  new TestCase_obj; }
hx::ObjectPtr< TestCase_obj > TestCase_obj::__new()
{  hx::ObjectPtr< TestCase_obj > result = new TestCase_obj();
	result->__construct();
	return result;}

Dynamic TestCase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestCase_obj > result = new TestCase_obj();
	result->__construct();
	return result;}

Void TestCase_obj::before( ){
{
		HX_SOURCE_PUSH("TestCase_obj::before")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestCase_obj,before,(void))

Void TestCase_obj::after( ){
{
		HX_SOURCE_PUSH("TestCase_obj::after")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestCase_obj,after,(void))

Void TestCase_obj::beforeAll( ){
{
		HX_SOURCE_PUSH("TestCase_obj::beforeAll")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestCase_obj,beforeAll,(void))

Void TestCase_obj::afterAll( ){
{
		HX_SOURCE_PUSH("TestCase_obj::afterAll")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestCase_obj,afterAll,(void))

Dynamic TestCase_obj::not( Dynamic c){
	__SAFE_POINT
	HX_SOURCE_PUSH("TestCase_obj::not")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",43)
	return ::haxe::test::MustMatcherExtensions_obj::negate(c);
}


HX_DEFINE_DYNAMIC_FUNC1(TestCase_obj,not,return )

Void TestCase_obj::assertThat( Dynamic obj,Dynamic cond,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertThat")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",47)
		::haxe::test::Assert_obj::that(obj,cond,msg,pos);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TestCase_obj,assertThat,(void))

Void TestCase_obj::assertTrue( bool cond,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertTrue")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",51)
		::haxe::test::Assert_obj::isTrue(cond,msg,pos);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TestCase_obj,assertTrue,(void))

Void TestCase_obj::assertFalse( bool value,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertFalse")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",55)
		::haxe::test::Assert_obj::isFalse(value,msg,pos);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TestCase_obj,assertFalse,(void))

Void TestCase_obj::assertNull( Dynamic value,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertNull")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",59)
		::haxe::test::Assert_obj::isNull(value,msg,pos);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TestCase_obj,assertNull,(void))

Void TestCase_obj::assertNotNull( Dynamic value,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertNotNull")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",63)
		::haxe::test::Assert_obj::notNull(value,msg,pos);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TestCase_obj,assertNotNull,(void))

Void TestCase_obj::assertIs( Dynamic value,Dynamic type,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertIs")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",67)
		::haxe::test::Assert_obj::is(value,type,msg,pos);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TestCase_obj,assertIs,(void))

Void TestCase_obj::assertNotEquals( Dynamic expected,Dynamic value,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertNotEquals")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",71)
		::haxe::test::Assert_obj::notEquals(expected,value,msg,pos);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TestCase_obj,assertNotEquals,(void))

Void TestCase_obj::assertEquals( Dynamic expected,Dynamic value,Dynamic equal,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertEquals")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",75)
		if ((equal != null())){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",76)
			::haxe::test::Assert_obj::isTrue(equal(expected,value),((  ((msg != null())) ? ::String(msg) : ::String((((((HX_CSTRING("expected ") + expected)) + HX_CSTRING(" but found "))) + value)) )),pos);
		}
		else{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",79)
			::haxe::test::Assert_obj::equals(expected,value,null(),msg,pos);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(TestCase_obj,assertEquals,(void))

Void TestCase_obj::assertMatches( ::EReg pattern,Dynamic value,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertMatches")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",84)
		::haxe::test::Assert_obj::matches(pattern,value,msg,pos);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TestCase_obj,assertMatches,(void))

Void TestCase_obj::assertFloatEquals( double expected,double value,Dynamic approx,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertFloatEquals")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",88)
		::haxe::test::Assert_obj::floatEquals(expected,value,approx,msg,pos);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(TestCase_obj,assertFloatEquals,(void))

Void TestCase_obj::assertLooksLike( Dynamic expected,Dynamic value,Dynamic recursive,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertLooksLike")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",92)
		::haxe::test::Assert_obj::looksLike(expected,value,recursive,msg,pos);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(TestCase_obj,assertLooksLike,(void))

Void TestCase_obj::assertThrowsException( Dynamic method,::Class type,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertThrowsException")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",96)
		::haxe::test::Assert_obj::throwsException(method,type,msg,pos);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TestCase_obj,assertThrowsException,(void))

Void TestCase_obj::assertEqualsOneOf( Dynamic value,Array< Dynamic > possibilities,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertEqualsOneOf")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",100)
		::haxe::test::Assert_obj::equalsOneOf(value,possibilities,msg,pos);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TestCase_obj,assertEqualsOneOf,(void))

Void TestCase_obj::assertContains( Dynamic values,Dynamic match,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertContains")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",104)
		::haxe::test::Assert_obj::contains(values,match,msg,pos);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TestCase_obj,assertContains,(void))

Void TestCase_obj::assertNotContains( Dynamic values,Dynamic match,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertNotContains")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",108)
		::haxe::test::Assert_obj::notContains(values,match,msg,pos);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TestCase_obj,assertNotContains,(void))

Void TestCase_obj::assertStringContains( ::String match,::String value,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertStringContains")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",112)
		::haxe::test::Assert_obj::stringContains(match,value,msg,pos);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TestCase_obj,assertStringContains,(void))

Void TestCase_obj::assertStringSequence( Array< ::String > sequence,::String value,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertStringSequence")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",116)
		::haxe::test::Assert_obj::stringSequence(sequence,value,msg,pos);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TestCase_obj,assertStringSequence,(void))

Void TestCase_obj::assertDelivered( ::Future future,Dynamic assertions,Dynamic timeout){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertDelivered")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",120)
		return ::haxe::test::Assert_obj::delivered(future,assertions,timeout);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TestCase_obj,assertDelivered,(void))

Void TestCase_obj::assertCanceled( ::Future future,Dynamic assertions,Dynamic timeout){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertCanceled")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",124)
		return ::haxe::test::Assert_obj::canceled(future,assertions,timeout);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TestCase_obj,assertCanceled,(void))

Void TestCase_obj::assertNotDelivered( ::Future future,Dynamic timeout,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::assertNotDelivered")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",128)
		return ::haxe::test::Assert_obj::notDelivered(future,timeout,pos);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TestCase_obj,assertNotDelivered,(void))

Void TestCase_obj::fail( Dynamic __o_msg,Dynamic pos){
::String msg = __o_msg.Default(HX_CSTRING("failure expected"));
	HX_SOURCE_PUSH("TestCase_obj::fail");
{
		__SAFE_POINT
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",132)
		::haxe::test::Assert_obj::fail(msg,pos);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TestCase_obj,fail,(void))

Void TestCase_obj::warn( ::String msg){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestCase_obj::warn")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestCase.hx",136)
		::haxe::test::Assert_obj::warn(msg);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestCase_obj,warn,(void))


TestCase_obj::TestCase_obj()
{
}

void TestCase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestCase);
	HX_MARK_END_CLASS();
}

Dynamic TestCase_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"not") ) { return not_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fail") ) { return fail_dyn(); }
		if (HX_FIELD_EQ(inName,"warn") ) { return warn_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"after") ) { return after_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"before") ) { return before_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"afterAll") ) { return afterAll_dyn(); }
		if (HX_FIELD_EQ(inName,"assertIs") ) { return assertIs_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"beforeAll") ) { return beforeAll_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"assertThat") ) { return assertThat_dyn(); }
		if (HX_FIELD_EQ(inName,"assertTrue") ) { return assertTrue_dyn(); }
		if (HX_FIELD_EQ(inName,"assertNull") ) { return assertNull_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"assertFalse") ) { return assertFalse_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"assertEquals") ) { return assertEquals_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"assertNotNull") ) { return assertNotNull_dyn(); }
		if (HX_FIELD_EQ(inName,"assertMatches") ) { return assertMatches_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"assertContains") ) { return assertContains_dyn(); }
		if (HX_FIELD_EQ(inName,"assertCanceled") ) { return assertCanceled_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"assertNotEquals") ) { return assertNotEquals_dyn(); }
		if (HX_FIELD_EQ(inName,"assertLooksLike") ) { return assertLooksLike_dyn(); }
		if (HX_FIELD_EQ(inName,"assertDelivered") ) { return assertDelivered_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"assertFloatEquals") ) { return assertFloatEquals_dyn(); }
		if (HX_FIELD_EQ(inName,"assertEqualsOneOf") ) { return assertEqualsOneOf_dyn(); }
		if (HX_FIELD_EQ(inName,"assertNotContains") ) { return assertNotContains_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"assertNotDelivered") ) { return assertNotDelivered_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"assertStringContains") ) { return assertStringContains_dyn(); }
		if (HX_FIELD_EQ(inName,"assertStringSequence") ) { return assertStringSequence_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"assertThrowsException") ) { return assertThrowsException_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic TestCase_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void TestCase_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("before"),
	HX_CSTRING("after"),
	HX_CSTRING("beforeAll"),
	HX_CSTRING("afterAll"),
	HX_CSTRING("not"),
	HX_CSTRING("assertThat"),
	HX_CSTRING("assertTrue"),
	HX_CSTRING("assertFalse"),
	HX_CSTRING("assertNull"),
	HX_CSTRING("assertNotNull"),
	HX_CSTRING("assertIs"),
	HX_CSTRING("assertNotEquals"),
	HX_CSTRING("assertEquals"),
	HX_CSTRING("assertMatches"),
	HX_CSTRING("assertFloatEquals"),
	HX_CSTRING("assertLooksLike"),
	HX_CSTRING("assertThrowsException"),
	HX_CSTRING("assertEqualsOneOf"),
	HX_CSTRING("assertContains"),
	HX_CSTRING("assertNotContains"),
	HX_CSTRING("assertStringContains"),
	HX_CSTRING("assertStringSequence"),
	HX_CSTRING("assertDelivered"),
	HX_CSTRING("assertCanceled"),
	HX_CSTRING("assertNotDelivered"),
	HX_CSTRING("fail"),
	HX_CSTRING("warn"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class TestCase_obj::__mClass;

void TestCase_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.TestCase"), hx::TCanCast< TestCase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void TestCase_obj::__boot()
{
}

} // end namespace haxe
} // end namespace test
