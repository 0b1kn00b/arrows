#ifndef INCLUDED_haxe_test_ui_common_SuccessResultsDisplayMode
#define INCLUDED_haxe_test_ui_common_SuccessResultsDisplayMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,test,ui,common,SuccessResultsDisplayMode)
namespace haxe{
namespace test{
namespace ui{
namespace common{


class SuccessResultsDisplayMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef SuccessResultsDisplayMode_obj OBJ_;

	public:
		SuccessResultsDisplayMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("haxe.test.ui.common.SuccessResultsDisplayMode"); }
		::String __ToString() const { return HX_CSTRING("SuccessResultsDisplayMode.") + tag; }

		static ::haxe::test::ui::common::SuccessResultsDisplayMode AlwaysShowSuccessResults;
		static ::haxe::test::ui::common::SuccessResultsDisplayMode NeverShowSuccessResults;
		static ::haxe::test::ui::common::SuccessResultsDisplayMode ShowSuccessResultsWithNoErrors;
};

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace common

#endif /* INCLUDED_haxe_test_ui_common_SuccessResultsDisplayMode */ 
