#ifndef INCLUDED_haxe_test_ui_common_HeaderDisplayMode
#define INCLUDED_haxe_test_ui_common_HeaderDisplayMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,test,ui,common,HeaderDisplayMode)
namespace haxe{
namespace test{
namespace ui{
namespace common{


class HeaderDisplayMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef HeaderDisplayMode_obj OBJ_;

	public:
		HeaderDisplayMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("haxe.test.ui.common.HeaderDisplayMode"); }
		::String __ToString() const { return HX_CSTRING("HeaderDisplayMode.") + tag; }

		static ::haxe::test::ui::common::HeaderDisplayMode AlwaysShowHeader;
		static ::haxe::test::ui::common::HeaderDisplayMode NeverShowHeader;
		static ::haxe::test::ui::common::HeaderDisplayMode ShowHeaderWithResults;
};

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace common

#endif /* INCLUDED_haxe_test_ui_common_HeaderDisplayMode */ 
