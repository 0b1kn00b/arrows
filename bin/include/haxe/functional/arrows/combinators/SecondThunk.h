#ifndef INCLUDED_haxe_functional_arrows_combinators_SecondThunk
#define INCLUDED_haxe_functional_arrows_combinators_SecondThunk

#include <hxcpp.h>

#include <haxe/functional/arrows/combinators/ProductThunk.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,ProductThunk)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,SecondThunk)
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{


class SecondThunk_obj : public ::haxe::functional::arrows::combinators::ProductThunk_obj{
	public:
		typedef ::haxe::functional::arrows::combinators::ProductThunk_obj super;
		typedef SecondThunk_obj OBJ_;
		SecondThunk_obj();
		Void __construct(::haxe::functional::arrows::Arrow g);

	public:
		static hx::ObjectPtr< SecondThunk_obj > __new(::haxe::functional::arrows::Arrow g);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~SecondThunk_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("SecondThunk"); }

		virtual ::String getName( );
		Dynamic getName_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators

#endif /* INCLUDED_haxe_functional_arrows_combinators_SecondThunk */ 
