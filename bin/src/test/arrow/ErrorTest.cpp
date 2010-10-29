#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Function1Arrow
#include <haxe/functional/arrows/Function1Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ComposeThunk
#include <haxe/functional/arrows/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_FunctionThunk
#include <haxe/functional/arrows/combinators/FunctionThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ProgressArrow
#include <haxe/functional/arrows/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_haxe_test_Assert
#include <haxe/test/Assert.h>
#endif
#ifndef INCLUDED_haxe_test_TestCase
#include <haxe/test/TestCase.h>
#endif
#ifndef INCLUDED_hsl_haxe_Signaler
#include <hsl/haxe/Signaler.h>
#endif
#ifndef INCLUDED_test_arrow_ErrorTest
#include <test/arrow/ErrorTest.h>
#endif
namespace test{
namespace arrow{

Void ErrorTest_obj::__construct()
{
{
	HX_SOURCE_POS("unit/test/arrow/ErrorTest.hx",12)
	super::__construct();
}
;
	return null();
}

ErrorTest_obj::~ErrorTest_obj() { }

Dynamic ErrorTest_obj::__CreateEmpty() { return  new ErrorTest_obj; }
hx::ObjectPtr< ErrorTest_obj > ErrorTest_obj::__new()
{  hx::ObjectPtr< ErrorTest_obj > result = new ErrorTest_obj();
	result->__construct();
	return result;}

Dynamic ErrorTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ErrorTest_obj > result = new ErrorTest_obj();
	result->__construct();
	return result;}

Void ErrorTest_obj::testParameterMismatchNumberError_ExpectOneReceiveZero( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ErrorTest_obj::testParameterMismatchNumberError_ExpectOneReceiveZero")
		HX_SOURCE_POS("unit/test/arrow/ErrorTest.hx",15)
		::haxe::functional::arrows::Arrow_obj::liftF(this->__Field(HX_CSTRING("f0")))->then(this->simpleAssert())->run(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ErrorTest_obj,testParameterMismatchNumberError_ExpectOneReceiveZero,(void))

Void ErrorTest_obj::testParameterMismatchNumberError_ExpectZeroReceiveOne( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ErrorTest_obj::testParameterMismatchNumberError_ExpectZeroReceiveOne")
		HX_SOURCE_POS("unit/test/arrow/ErrorTest.hx",18)
		::haxe::functional::arrows::Arrow_obj::liftF(this->f1_dyn())->then(this->simpleAssert())->run(HX_CSTRING("bosh"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ErrorTest_obj,testParameterMismatchNumberError_ExpectZeroReceiveOne,(void))

Dynamic ErrorTest_obj::f0( Dynamic x){
	HX_SOURCE_PUSH("ErrorTest_obj::f0")
	HX_SOURCE_POS("unit/test/arrow/ErrorTest.hx",21)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ErrorTest_obj,f0,return )

Void ErrorTest_obj::f1( ){
{
		HX_SOURCE_PUSH("ErrorTest_obj::f1")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ErrorTest_obj,f1,(void))

::haxe::functional::arrows::Arrow ErrorTest_obj::simpleAssert( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("ErrorTest_obj::simpleAssert")
	HX_SOURCE_POS("unit/test/arrow/ErrorTest.hx",26)
	Array< ::test::arrow::ErrorTest > self = Array_obj< ::test::arrow::ErrorTest >::__new().Add(this);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::test::arrow::ErrorTest >,self)
	Void run(Dynamic x){
{
			__SAFE_POINT
			HX_SOURCE_POS("unit/test/arrow/ErrorTest.hx",29)
			self[0]->assertTrue(true,null(),hx::SourceInfo(HX_CSTRING("ErrorTest.hx"),29,HX_CSTRING("test.arrow.ErrorTest"),HX_CSTRING("simpleAssert")));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_SOURCE_POS("unit/test/arrow/ErrorTest.hx",27)
	return ::haxe::functional::arrows::Function1Arrow_obj::lift(::haxe::test::Assert_obj::createEvent( Dynamic(new _Function_1_1(self)),null()));
}


HX_DEFINE_DYNAMIC_FUNC0(ErrorTest_obj,simpleAssert,return )


ErrorTest_obj::ErrorTest_obj()
{
}

void ErrorTest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ErrorTest);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic ErrorTest_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"f0") ) { return f0_dyn(); }
		if (HX_FIELD_EQ(inName,"f1") ) { return f1_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simpleAssert") ) { return simpleAssert_dyn(); }
		break;
	case 53:
		if (HX_FIELD_EQ(inName,"testParameterMismatchNumberError_ExpectOneReceiveZero") ) { return testParameterMismatchNumberError_ExpectOneReceiveZero_dyn(); }
		if (HX_FIELD_EQ(inName,"testParameterMismatchNumberError_ExpectZeroReceiveOne") ) { return testParameterMismatchNumberError_ExpectZeroReceiveOne_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ErrorTest_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ErrorTest_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("testParameterMismatchNumberError_ExpectOneReceiveZero"),
	HX_CSTRING("testParameterMismatchNumberError_ExpectZeroReceiveOne"),
	HX_CSTRING("f0"),
	HX_CSTRING("f1"),
	HX_CSTRING("simpleAssert"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ErrorTest_obj::__mClass;

void ErrorTest_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("test.arrow.ErrorTest"), hx::TCanCast< ErrorTest_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ErrorTest_obj::__boot()
{
}

} // end namespace test
} // end namespace arrow
