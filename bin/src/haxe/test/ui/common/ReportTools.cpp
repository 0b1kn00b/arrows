#include <hxcpp.h>

#ifndef INCLUDED_haxe_test_ui_common_HeaderDisplayMode
#include <haxe/test/ui/common/HeaderDisplayMode.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_IReport
#include <haxe/test/ui/common/IReport.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_ReportTools
#include <haxe/test/ui/common/ReportTools.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_ResultStats
#include <haxe/test/ui/common/ResultStats.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_SuccessResultsDisplayMode
#include <haxe/test/ui/common/SuccessResultsDisplayMode.h>
#endif
namespace haxe{
namespace test{
namespace ui{
namespace common{

Void ReportTools_obj::__construct()
{
	return null();
}

ReportTools_obj::~ReportTools_obj() { }

Dynamic ReportTools_obj::__CreateEmpty() { return  new ReportTools_obj; }
hx::ObjectPtr< ReportTools_obj > ReportTools_obj::__new()
{  hx::ObjectPtr< ReportTools_obj > result = new ReportTools_obj();
	result->__construct();
	return result;}

Dynamic ReportTools_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ReportTools_obj > result = new ReportTools_obj();
	result->__construct();
	return result;}

bool ReportTools_obj::hasHeader( ::haxe::test::ui::common::IReport report,::haxe::test::ui::common::ResultStats stats){
	HX_SOURCE_PUSH("ReportTools_obj::hasHeader")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ReportTools.hx",23)
	::haxe::test::ui::common::HeaderDisplayMode _switch_1 = (report->__Field(HX_CSTRING("displayHeader")).Cast< ::haxe::test::ui::common::HeaderDisplayMode >());
	switch((_switch_1)->GetIndex()){
		case 1: {
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ReportTools.hx",25)
			return false;
		}
		;break;
		case 2: {
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ReportTools.hx",27)
			if (!(stats->isOk))
				return true;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ReportTools.hx",29)
			::haxe::test::ui::common::SuccessResultsDisplayMode _switch_2 = (report->__Field(HX_CSTRING("displaySuccessResults")).Cast< ::haxe::test::ui::common::SuccessResultsDisplayMode >());
			switch((_switch_2)->GetIndex()){
				case 1: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ReportTools.hx",32)
					return false;
				}
				;break;
				case 0: case 2: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ReportTools.hx",34)
					return true;
				}
				;break;
			}
		}
		;break;
		case 0: {
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ReportTools.hx",37)
			return true;
		}
		;break;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ReportTools_obj,hasHeader,return )

bool ReportTools_obj::skipResult( ::haxe::test::ui::common::IReport report,::haxe::test::ui::common::ResultStats stats,bool isOk){
	HX_SOURCE_PUSH("ReportTools_obj::skipResult")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ReportTools.hx",42)
	if (!(stats->isOk))
		return false;
	struct _Function_1_1{
		inline static bool Block( ::haxe::test::ui::common::IReport &report,bool &isOk){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ReportTools.hx",43)
			::haxe::test::ui::common::SuccessResultsDisplayMode _switch_3 = (report->__Field(HX_CSTRING("displaySuccessResults")).Cast< ::haxe::test::ui::common::SuccessResultsDisplayMode >());
			switch((_switch_3)->GetIndex()){
				case 1: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ReportTools.hx",44)
					return true;
				}
				;break;
				case 0: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ReportTools.hx",45)
					return false;
				}
				;break;
				case 2: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ReportTools.hx",46)
					return !(isOk);
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ReportTools.hx",43)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ReportTools.hx",43)
	return _Function_1_1::Block(report,isOk);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ReportTools_obj,skipResult,return )

bool ReportTools_obj::hasOutput( ::haxe::test::ui::common::IReport report,::haxe::test::ui::common::ResultStats stats){
	__SAFE_POINT
	HX_SOURCE_PUSH("ReportTools_obj::hasOutput")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ReportTools.hx",51)
	if (!(stats->isOk))
		return true;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ReportTools.hx",52)
	return ::haxe::test::ui::common::ReportTools_obj::hasHeader(report,stats);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ReportTools_obj,hasOutput,return )


ReportTools_obj::ReportTools_obj()
{
}

void ReportTools_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ReportTools);
	HX_MARK_END_CLASS();
}

Dynamic ReportTools_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"hasHeader") ) { return hasHeader_dyn(); }
		if (HX_FIELD_EQ(inName,"hasOutput") ) { return hasOutput_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"skipResult") ) { return skipResult_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ReportTools_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ReportTools_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("hasHeader"),
	HX_CSTRING("skipResult"),
	HX_CSTRING("hasOutput"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ReportTools_obj::__mClass;

void ReportTools_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.ui.common.ReportTools"), hx::TCanCast< ReportTools_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ReportTools_obj::__boot()
{
}

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace common
