#ifndef INCLUDED_haxe_functional_arrows_combinators_TerminalArrow
#define INCLUDED_haxe_functional_arrows_combinators_TerminalArrow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/Arrow.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,TerminalArrow)
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{


class TerminalArrow_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef TerminalArrow_obj OBJ_;
		TerminalArrow_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TerminalArrow_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TerminalArrow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("TerminalArrow"); }

		virtual ::String getName( );
		Dynamic getName_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators

#endif /* INCLUDED_haxe_functional_arrows_combinators_TerminalArrow */ 
