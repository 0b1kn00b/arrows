#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ProgressArrow
#include <haxe/functional/arrows/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_pattern_Subject
#include <haxe/functional/arrows/pattern/Subject.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_Buffer
#include <haxe/functional/arrows/schedule/Buffer.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_ScheduleManager
#include <haxe/functional/arrows/schedule/ScheduleManager.h>
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
#ifndef INCLUDED_test_arrow_SchedulerTest
#include <test/arrow/SchedulerTest.h>
#endif
namespace test{
namespace arrow{

Void SchedulerTest_obj::__construct()
{
{
	HX_SOURCE_POS("unit/test/arrow/SchedulerTest.hx",15)
	super::__construct();
}
;
	return null();
}

SchedulerTest_obj::~SchedulerTest_obj() { }

Dynamic SchedulerTest_obj::__CreateEmpty() { return  new SchedulerTest_obj; }
hx::ObjectPtr< SchedulerTest_obj > SchedulerTest_obj::__new()
{  hx::ObjectPtr< SchedulerTest_obj > result = new SchedulerTest_obj();
	result->__construct();
	return result;}

Dynamic SchedulerTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SchedulerTest_obj > result = new SchedulerTest_obj();
	result->__construct();
	return result;}

Void SchedulerTest_obj::testSimpleCancel( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("SchedulerTest_obj::testSimpleCancel")
		HX_SOURCE_POS("unit/test/arrow/SchedulerTest.hx",18)
		::haxe::functional::arrows::Arrow arr = null();

		HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
		Void run(){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/test/arrow/SchedulerTest.hx",22)
				::haxe::test::Assert_obj::isTrue((::haxe::functional::arrows::schedule::ScheduleManager_obj::getInstance()->buffer->getLength() == 0),null(),hx::SourceInfo(HX_CSTRING("SchedulerTest.hx"),22,HX_CSTRING("test.arrow.SchedulerTest"),HX_CSTRING("testSimpleCancel")));
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_SOURCE_POS("unit/test/arrow/SchedulerTest.hx",20)
		Dynamic a = ::haxe::test::Assert_obj::createAsync( Dynamic(new _Function_1_1()),null());
		HX_SOURCE_POS("unit/test/arrow/SchedulerTest.hx",27)
		arr = ::haxe::functional::arrows::Arrow_obj::returnA()->run(null());
		HX_SOURCE_POS("unit/test/arrow/SchedulerTest.hx",29)
		hx::TCast< haxe::functional::arrows::combinators::ProgressArrow >::cast(arr)->cancel();
		HX_SOURCE_POS("unit/test/arrow/SchedulerTest.hx",30)
		a();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SchedulerTest_obj,testSimpleCancel,(void))


SchedulerTest_obj::SchedulerTest_obj()
{
}

void SchedulerTest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SchedulerTest);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic SchedulerTest_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"testSimpleCancel") ) { return testSimpleCancel_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic SchedulerTest_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void SchedulerTest_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("testSimpleCancel"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class SchedulerTest_obj::__mClass;

void SchedulerTest_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("test.arrow.SchedulerTest"), hx::TCanCast< SchedulerTest_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void SchedulerTest_obj::__boot()
{
}

} // end namespace test
} // end namespace arrow
