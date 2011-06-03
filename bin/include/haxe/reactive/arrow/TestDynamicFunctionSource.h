#ifndef INCLUDED_haxe_reactive_arrow_TestDynamicFunctionSource
#define INCLUDED_haxe_reactive_arrow_TestDynamicFunctionSource

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,reactive,arrow,TestDynamicFunctionSource)
namespace haxe{
namespace reactive{
namespace arrow{


class TestDynamicFunctionSource_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestDynamicFunctionSource_obj OBJ_;
		TestDynamicFunctionSource_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TestDynamicFunctionSource_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TestDynamicFunctionSource_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("TestDynamicFunctionSource"); }

		virtual ::haxe::reactive::arrow::TestDynamicFunctionSource whatAmI( );
		Dynamic whatAmI_dyn();

};

} // end namespace haxe
} // end namespace reactive
} // end namespace arrow

#endif /* INCLUDED_haxe_reactive_arrow_TestDynamicFunctionSource */ 
