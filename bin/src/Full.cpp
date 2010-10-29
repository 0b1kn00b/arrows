#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Full
#include <Full.h>
#endif
#ifndef INCLUDED_haxe_reactive_arrow_ArrowTest
#include <haxe/reactive/arrow/ArrowTest.h>
#endif
#ifndef INCLUDED_haxe_reactive_arrow_CancellerTest
#include <haxe/reactive/arrow/CancellerTest.h>
#endif
#ifndef INCLUDED_haxe_reactive_arrow_ComplexTest
#include <haxe/reactive/arrow/ComplexTest.h>
#endif
#ifndef INCLUDED_haxe_test_Runner
#include <haxe/test/Runner.h>
#endif
#ifndef INCLUDED_haxe_test_TestCase
#include <haxe/test/TestCase.h>
#endif
#ifndef INCLUDED_haxe_test_ui_Report
#include <haxe/test/ui/Report.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_HeaderDisplayMode
#include <haxe/test/ui/common/HeaderDisplayMode.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_IReport
#include <haxe/test/ui/common/IReport.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_SuccessResultsDisplayMode
#include <haxe/test/ui/common/SuccessResultsDisplayMode.h>
#endif

Void Full_obj::__construct()
{
{
	HX_SOURCE_POS("Full.hx",23)
	::haxe::test::Runner t = ::haxe::test::Runner_obj::__new();
	HX_SOURCE_POS("Full.hx",24)
	t->add(::haxe::reactive::arrow::ArrowTest_obj::__new(),null(),null());
	HX_SOURCE_POS("Full.hx",25)
	t->add(::haxe::reactive::arrow::CancellerTest_obj::__new(),null(),null());
	HX_SOURCE_POS("Full.hx",26)
	t->add(::haxe::reactive::arrow::ComplexTest_obj::__new(),null(),null());
	HX_SOURCE_POS("Full.hx",33)
	::haxe::test::ui::common::IReport r = ::haxe::test::ui::Report_obj::create(t,null(),null());
	HX_SOURCE_POS("Full.hx",39)
	t->run();
}
;
	return null();
}

Full_obj::~Full_obj() { }

Dynamic Full_obj::__CreateEmpty() { return  new Full_obj; }
hx::ObjectPtr< Full_obj > Full_obj::__new()
{  hx::ObjectPtr< Full_obj > result = new Full_obj();
	result->__construct();
	return result;}

Dynamic Full_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Full_obj > result = new Full_obj();
	result->__construct();
	return result;}

Void Full_obj::main( ){
{
		HX_SOURCE_PUSH("Full_obj::main")
		HX_SOURCE_POS("Full.hx",19)
		::Full a = ::Full_obj::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Full_obj,main,(void))


Full_obj::Full_obj()
{
}

void Full_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Full);
	HX_MARK_END_CLASS();
}

Dynamic Full_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Full_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Full_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Full_obj::__mClass;

void Full_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Full"), hx::TCanCast< Full_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Full_obj::__boot()
{
}

