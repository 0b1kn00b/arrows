#ifndef INCLUDED_haxe_functional_arrows_ThunkArrow
#define INCLUDED_haxe_functional_arrows_ThunkArrow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS3(haxe,functional,arrows,ThunkArrow)
namespace haxe{
namespace functional{
namespace arrows{


class ThunkArrow_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ThunkArrow_obj OBJ_;
		ThunkArrow_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ThunkArrow_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ThunkArrow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ThunkArrow"); }

		virtual ::haxe::functional::arrows::Arrow lift( Dynamic f);
		Dynamic lift_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows

#endif /* INCLUDED_haxe_functional_arrows_ThunkArrow */ 
