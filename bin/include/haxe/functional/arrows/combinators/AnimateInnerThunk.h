#ifndef INCLUDED_haxe_functional_arrows_combinators_AnimateInnerThunk
#define INCLUDED_haxe_functional_arrows_combinators_AnimateInnerThunk

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/Arrow.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,AnimateInnerThunk)
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{


class AnimateInnerThunk_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef AnimateInnerThunk_obj OBJ_;
		AnimateInnerThunk_obj();
		Void __construct(::haxe::functional::arrows::Arrow $t3,int $t4);

	public:
		static hx::ObjectPtr< AnimateInnerThunk_obj > __new(::haxe::functional::arrows::Arrow $t3,int $t4);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AnimateInnerThunk_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("AnimateInnerThunk"); }

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators

#endif /* INCLUDED_haxe_functional_arrows_combinators_AnimateInnerThunk */ 
