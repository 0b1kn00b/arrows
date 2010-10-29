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
#ifndef INCLUDED_haxe_functional_arrows_combinators_ProgressArrow
#include <haxe/functional/arrows/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_haxe_reactive_arrow_CancellerTest
#include <haxe/reactive/arrow/CancellerTest.h>
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
namespace haxe{
namespace reactive{
namespace arrow{

Void CancellerTest_obj::__construct()
{
{
	HX_SOURCE_POS("unit/haxe/reactive/arrow/CancellerTest.hx",18)
	super::__construct();
}
;
	return null();
}

CancellerTest_obj::~CancellerTest_obj() { }

Dynamic CancellerTest_obj::__CreateEmpty() { return  new CancellerTest_obj; }
hx::ObjectPtr< CancellerTest_obj > CancellerTest_obj::__new()
{  hx::ObjectPtr< CancellerTest_obj > result = new CancellerTest_obj();
	result->__construct();
	return result;}

Dynamic CancellerTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CancellerTest_obj > result = new CancellerTest_obj();
	result->__construct();
	return result;}

Void CancellerTest_obj::testCanceller( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("CancellerTest_obj::testCanceller")
		HX_SOURCE_POS("unit/haxe/reactive/arrow/CancellerTest.hx",21)
		Array< ::haxe::reactive::arrow::CancellerTest > self = Array_obj< ::haxe::reactive::arrow::CancellerTest >::__new().Add(this);

		HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::haxe::reactive::arrow::CancellerTest >,self)
		Void run(Dynamic x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/haxe/reactive/arrow/CancellerTest.hx",24)
				self[0]->assertTrue(true,null(),hx::SourceInfo(HX_CSTRING("CancellerTest.hx"),24,HX_CSTRING("haxe.reactive.arrow.CancellerTest"),HX_CSTRING("testCanceller")));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/haxe/reactive/arrow/CancellerTest.hx",22)
		Dynamic async = ::haxe::test::Assert_obj::createEvent( Dynamic(new _Function_1_1(self)),null());
		HX_SOURCE_POS("unit/haxe/reactive/arrow/CancellerTest.hx",27)
		::haxe::functional::arrows::Arrow a = ::haxe::functional::arrows::Arrow_obj::delayA(10);
		HX_SOURCE_POS("unit/haxe/reactive/arrow/CancellerTest.hx",28)
		::haxe::functional::arrows::combinators::ProgressArrow b = ::haxe::functional::arrows::Arrow_obj::returnA()->then(a)->run(null());
		HX_SOURCE_POS("unit/haxe/reactive/arrow/CancellerTest.hx",30)
		b->cancel();
		HX_SOURCE_POS("unit/haxe/reactive/arrow/CancellerTest.hx",31)
		::haxe::functional::arrows::Arrow_obj::begin();
		HX_SOURCE_POS("unit/haxe/reactive/arrow/CancellerTest.hx",33)
		::haxe::functional::arrows::Arrow_obj::returnA()->then(::haxe::functional::arrows::Function1Arrow_obj::lift(async))->run(null());
		HX_SOURCE_POS("unit/haxe/reactive/arrow/CancellerTest.hx",35)
		::haxe::functional::arrows::Arrow_obj::begin();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CancellerTest_obj,testCanceller,(void))


CancellerTest_obj::CancellerTest_obj()
{
}

void CancellerTest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CancellerTest);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic CancellerTest_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"testCanceller") ) { return testCanceller_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic CancellerTest_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void CancellerTest_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("testCanceller"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class CancellerTest_obj::__mClass;

void CancellerTest_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.reactive.arrow.CancellerTest"), hx::TCanCast< CancellerTest_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void CancellerTest_obj::__boot()
{
}

} // end namespace haxe
} // end namespace reactive
} // end namespace arrow
