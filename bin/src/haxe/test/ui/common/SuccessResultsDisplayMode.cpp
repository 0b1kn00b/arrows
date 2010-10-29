#include <hxcpp.h>

#ifndef INCLUDED_haxe_test_ui_common_SuccessResultsDisplayMode
#include <haxe/test/ui/common/SuccessResultsDisplayMode.h>
#endif
namespace haxe{
namespace test{
namespace ui{
namespace common{

SuccessResultsDisplayMode SuccessResultsDisplayMode_obj::AlwaysShowSuccessResults;

SuccessResultsDisplayMode SuccessResultsDisplayMode_obj::NeverShowSuccessResults;

SuccessResultsDisplayMode SuccessResultsDisplayMode_obj::ShowSuccessResultsWithNoErrors;

HX_DEFINE_CREATE_ENUM(SuccessResultsDisplayMode_obj)

int SuccessResultsDisplayMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("AlwaysShowSuccessResults")) return 0;
	if (inName==HX_CSTRING("NeverShowSuccessResults")) return 1;
	if (inName==HX_CSTRING("ShowSuccessResultsWithNoErrors")) return 2;
	return super::__FindIndex(inName);
}

int SuccessResultsDisplayMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("AlwaysShowSuccessResults")) return 0;
	if (inName==HX_CSTRING("NeverShowSuccessResults")) return 0;
	if (inName==HX_CSTRING("ShowSuccessResultsWithNoErrors")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic SuccessResultsDisplayMode_obj::__Field(const ::String &inName)
{
	if (inName==HX_CSTRING("AlwaysShowSuccessResults")) return AlwaysShowSuccessResults;
	if (inName==HX_CSTRING("NeverShowSuccessResults")) return NeverShowSuccessResults;
	if (inName==HX_CSTRING("ShowSuccessResultsWithNoErrors")) return ShowSuccessResultsWithNoErrors;
	return super::__Field(inName);
}

static ::String sStaticFields[] = {
	HX_CSTRING("AlwaysShowSuccessResults"),
	HX_CSTRING("NeverShowSuccessResults"),
	HX_CSTRING("ShowSuccessResultsWithNoErrors"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SuccessResultsDisplayMode_obj::AlwaysShowSuccessResults,"AlwaysShowSuccessResults");
	HX_MARK_MEMBER_NAME(SuccessResultsDisplayMode_obj::NeverShowSuccessResults,"NeverShowSuccessResults");
	HX_MARK_MEMBER_NAME(SuccessResultsDisplayMode_obj::ShowSuccessResultsWithNoErrors,"ShowSuccessResultsWithNoErrors");
};

static ::String sMemberFields[] = { ::String(null()) };
Class SuccessResultsDisplayMode_obj::__mClass;

Dynamic __Create_SuccessResultsDisplayMode_obj() { return new SuccessResultsDisplayMode_obj; }

void SuccessResultsDisplayMode_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.ui.common.SuccessResultsDisplayMode"), hx::TCanCast< SuccessResultsDisplayMode_obj >,sStaticFields,sMemberFields,
	&__Create_SuccessResultsDisplayMode_obj, &__Create,
	&super::__SGetClass(), &CreateSuccessResultsDisplayMode_obj, sMarkStatics);
}

void SuccessResultsDisplayMode_obj::__boot()
{
Static(AlwaysShowSuccessResults) = hx::CreateEnum< SuccessResultsDisplayMode_obj >(HX_CSTRING("AlwaysShowSuccessResults"),0);
Static(NeverShowSuccessResults) = hx::CreateEnum< SuccessResultsDisplayMode_obj >(HX_CSTRING("NeverShowSuccessResults"),1);
Static(ShowSuccessResultsWithNoErrors) = hx::CreateEnum< SuccessResultsDisplayMode_obj >(HX_CSTRING("ShowSuccessResultsWithNoErrors"),2);
}


} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace common
