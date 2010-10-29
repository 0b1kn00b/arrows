#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Function1Arrow
#include <haxe/functional/arrows/Function1Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ProgressArrow
#include <haxe/functional/arrows/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_haxe_reactive_arrow_FunctionArrowTest
#include <haxe/reactive/arrow/FunctionArrowTest.h>
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

Void FunctionArrowTest_obj::__construct()
{
{
	HX_SOURCE_POS("unit/haxe/reactive/arrow/FunctionArrowTest.hx",20)
	super::__construct();
}
;
	return null();
}

FunctionArrowTest_obj::~FunctionArrowTest_obj() { }

Dynamic FunctionArrowTest_obj::__CreateEmpty() { return  new FunctionArrowTest_obj; }
hx::ObjectPtr< FunctionArrowTest_obj > FunctionArrowTest_obj::__new()
{  hx::ObjectPtr< FunctionArrowTest_obj > result = new FunctionArrowTest_obj();
	result->__construct();
	return result;}

Dynamic FunctionArrowTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FunctionArrowTest_obj > result = new FunctionArrowTest_obj();
	result->__construct();
	return result;}

Void FunctionArrowTest_obj::testLift( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("FunctionArrowTest_obj::testLift")

		HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
		int run(int x){
{
				HX_SOURCE_POS("unit/haxe/reactive/arrow/FunctionArrowTest.hx",24)
				return (x + 1);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_SOURCE_POS("unit/haxe/reactive/arrow/FunctionArrowTest.hx",23)
		Dynamic a =  Dynamic(new _Function_1_1());
		HX_SOURCE_POS("unit/haxe/reactive/arrow/FunctionArrowTest.hx",26)
		::haxe::functional::arrows::Function1Arrow_obj::lift(a)->run(1)->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FunctionArrowTest_obj,testLift,(void))


FunctionArrowTest_obj::FunctionArrowTest_obj()
{
}

void FunctionArrowTest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FunctionArrowTest);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic FunctionArrowTest_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"testLift") ) { return testLift_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic FunctionArrowTest_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void FunctionArrowTest_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("testLift"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class FunctionArrowTest_obj::__mClass;

void FunctionArrowTest_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.reactive.arrow.FunctionArrowTest"), hx::TCanCast< FunctionArrowTest_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void FunctionArrowTest_obj::__boot()
{
}

} // end namespace haxe
} // end namespace reactive
} // end namespace arrow
