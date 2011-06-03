#ifndef INCLUDED_haxe_functional_arrows_combinators_AnimateThunk
#define INCLUDED_haxe_functional_arrows_combinators_AnimateThunk

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/Arrow.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,AnimateThunk)
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{


class AnimateThunk_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef AnimateThunk_obj OBJ_;
		AnimateThunk_obj();
		Void __construct(Dynamic $t1,int $t2);

	public:
		static hx::ObjectPtr< AnimateThunk_obj > __new(Dynamic $t1,int $t2);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AnimateThunk_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("AnimateThunk"); }

		virtual ::String getName( );
		Dynamic getName_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators

#endif /* INCLUDED_haxe_functional_arrows_combinators_AnimateThunk */ 
