#ifndef INCLUDED_haxe_functional_arrows_combinators_OrThunk
#define INCLUDED_haxe_functional_arrows_combinators_OrThunk

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/Arrow.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,OrThunk)
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{


class OrThunk_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef OrThunk_obj OBJ_;
		OrThunk_obj();
		Void __construct(::haxe::functional::arrows::Arrow $t2,::haxe::functional::arrows::Arrow $t3);

	public:
		static hx::ObjectPtr< OrThunk_obj > __new(::haxe::functional::arrows::Arrow $t2,::haxe::functional::arrows::Arrow $t3);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~OrThunk_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("OrThunk"); }

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators

#endif /* INCLUDED_haxe_functional_arrows_combinators_OrThunk */ 
