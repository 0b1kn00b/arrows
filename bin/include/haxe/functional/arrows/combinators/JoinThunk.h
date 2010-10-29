#ifndef INCLUDED_haxe_functional_arrows_combinators_JoinThunk
#define INCLUDED_haxe_functional_arrows_combinators_JoinThunk

#include <hxcpp.h>

#include <haxe/functional/arrows/combinators/ComposeThunk.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,ComposeThunk)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,JoinThunk)
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{


class JoinThunk_obj : public ::haxe::functional::arrows::combinators::ComposeThunk_obj{
	public:
		typedef ::haxe::functional::arrows::combinators::ComposeThunk_obj super;
		typedef JoinThunk_obj OBJ_;
		JoinThunk_obj();
		Void __construct(::haxe::functional::arrows::Arrow f,::haxe::functional::arrows::Arrow g);

	public:
		static hx::ObjectPtr< JoinThunk_obj > __new(::haxe::functional::arrows::Arrow f,::haxe::functional::arrows::Arrow g);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~JoinThunk_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("JoinThunk"); }

		virtual ::String getName( );
		Dynamic getName_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators

#endif /* INCLUDED_haxe_functional_arrows_combinators_JoinThunk */ 
