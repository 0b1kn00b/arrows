#ifndef INCLUDED_haxe_functional_arrows_combinators_SignalArrow
#define INCLUDED_haxe_functional_arrows_combinators_SignalArrow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/Arrow.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,SignalArrow)
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{


class SignalArrow_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef SignalArrow_obj OBJ_;
		SignalArrow_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< SignalArrow_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SignalArrow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("SignalArrow"); }

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators

#endif /* INCLUDED_haxe_functional_arrows_combinators_SignalArrow */ 
