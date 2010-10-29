#include <hxcpp.h>

#ifndef INCLUDED_haxe_test_ui_common_HeaderDisplayMode
#include <haxe/test/ui/common/HeaderDisplayMode.h>
#endif
namespace haxe{
namespace test{
namespace ui{
namespace common{

HeaderDisplayMode HeaderDisplayMode_obj::AlwaysShowHeader;

HeaderDisplayMode HeaderDisplayMode_obj::NeverShowHeader;

HeaderDisplayMode HeaderDisplayMode_obj::ShowHeaderWithResults;

HX_DEFINE_CREATE_ENUM(HeaderDisplayMode_obj)

int HeaderDisplayMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("AlwaysShowHeader")) return 0;
	if (inName==HX_CSTRING("NeverShowHeader")) return 1;
	if (inName==HX_CSTRING("ShowHeaderWithResults")) return 2;
	return super::__FindIndex(inName);
}

int HeaderDisplayMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("AlwaysShowHeader")) return 0;
	if (inName==HX_CSTRING("NeverShowHeader")) return 0;
	if (inName==HX_CSTRING("ShowHeaderWithResults")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic HeaderDisplayMode_obj::__Field(const ::String &inName)
{
	if (inName==HX_CSTRING("AlwaysShowHeader")) return AlwaysShowHeader;
	if (inName==HX_CSTRING("NeverShowHeader")) return NeverShowHeader;
	if (inName==HX_CSTRING("ShowHeaderWithResults")) return ShowHeaderWithResults;
	return super::__Field(inName);
}

static ::String sStaticFields[] = {
	HX_CSTRING("AlwaysShowHeader"),
	HX_CSTRING("NeverShowHeader"),
	HX_CSTRING("ShowHeaderWithResults"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HeaderDisplayMode_obj::AlwaysShowHeader,"AlwaysShowHeader");
	HX_MARK_MEMBER_NAME(HeaderDisplayMode_obj::NeverShowHeader,"NeverShowHeader");
	HX_MARK_MEMBER_NAME(HeaderDisplayMode_obj::ShowHeaderWithResults,"ShowHeaderWithResults");
};

static ::String sMemberFields[] = { ::String(null()) };
Class HeaderDisplayMode_obj::__mClass;

Dynamic __Create_HeaderDisplayMode_obj() { return new HeaderDisplayMode_obj; }

void HeaderDisplayMode_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.ui.common.HeaderDisplayMode"), hx::TCanCast< HeaderDisplayMode_obj >,sStaticFields,sMemberFields,
	&__Create_HeaderDisplayMode_obj, &__Create,
	&super::__SGetClass(), &CreateHeaderDisplayMode_obj, sMarkStatics);
}

void HeaderDisplayMode_obj::__boot()
{
Static(AlwaysShowHeader) = hx::CreateEnum< HeaderDisplayMode_obj >(HX_CSTRING("AlwaysShowHeader"),0);
Static(NeverShowHeader) = hx::CreateEnum< HeaderDisplayMode_obj >(HX_CSTRING("NeverShowHeader"),1);
Static(ShowHeaderWithResults) = hx::CreateEnum< HeaderDisplayMode_obj >(HX_CSTRING("ShowHeaderWithResults"),2);
}


} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace common
