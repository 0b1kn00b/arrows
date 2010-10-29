#include <hxcpp.h>

#ifndef INCLUDED_haxe_test_Runner
#include <haxe/test/Runner.h>
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
#ifndef INCLUDED_haxe_test_ui_text_PlainTextReport
#include <haxe/test/ui/text/PlainTextReport.h>
#endif
#ifndef INCLUDED_haxe_test_ui_text_PrintReport
#include <haxe/test/ui/text/PrintReport.h>
#endif
namespace haxe{
namespace test{
namespace ui{

Void Report_obj::__construct()
{
	return null();
}

Report_obj::~Report_obj() { }

Dynamic Report_obj::__CreateEmpty() { return  new Report_obj; }
hx::ObjectPtr< Report_obj > Report_obj::__new()
{  hx::ObjectPtr< Report_obj > result = new Report_obj();
	result->__construct();
	return result;}

Dynamic Report_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Report_obj > result = new Report_obj();
	result->__construct();
	return result;}

::haxe::test::ui::common::IReport Report_obj::create( ::haxe::test::Runner runner,::haxe::test::ui::common::SuccessResultsDisplayMode displaySuccessResults,::haxe::test::ui::common::HeaderDisplayMode headerDisplayMode){
	HX_SOURCE_PUSH("Report_obj::create")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/Report.hx",32)
	::haxe::test::ui::common::IReport report;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/Report.hx",46)
	report = ::haxe::test::ui::text::PrintReport_obj::__new(runner);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/Report.hx",48)
	if ((null() == displaySuccessResults)){
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/Report.hx",49)
		report->__FieldRef(HX_CSTRING("displaySuccessResults")) = ::haxe::test::ui::common::SuccessResultsDisplayMode_obj::ShowSuccessResultsWithNoErrors;
	}
	else{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/Report.hx",51)
		report->__FieldRef(HX_CSTRING("displaySuccessResults")) = displaySuccessResults;
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/Report.hx",53)
	if ((null() == headerDisplayMode)){
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/Report.hx",54)
		report->__FieldRef(HX_CSTRING("displayHeader")) = ::haxe::test::ui::common::HeaderDisplayMode_obj::ShowHeaderWithResults;
	}
	else{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/Report.hx",56)
		report->__FieldRef(HX_CSTRING("displayHeader")) = headerDisplayMode;
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/Report.hx",58)
	return report;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Report_obj,create,return )


Report_obj::Report_obj()
{
}

void Report_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Report);
	HX_MARK_END_CLASS();
}

Dynamic Report_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Report_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Report_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Report_obj::__mClass;

void Report_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.ui.Report"), hx::TCanCast< Report_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Report_obj::__boot()
{
}

} // end namespace haxe
} // end namespace test
} // end namespace ui
