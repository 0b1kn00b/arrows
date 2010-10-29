#ifndef INCLUDED_haxe_functional_arrows_combinators_FunctionThunk
#define INCLUDED_haxe_functional_arrows_combinators_FunctionThunk

#include <hxcpp.h>

#include <haxe/functional/arrows/Arrow.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,FunctionThunk)
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{


class FunctionThunk_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef FunctionThunk_obj OBJ_;
		FunctionThunk_obj();
		Void __construct(Dynamic $t1);

	public:
		static hx::ObjectPtr< FunctionThunk_obj > __new(Dynamic $t1);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FunctionThunk_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("FunctionThunk"); }

		virtual ::String getName( );
		Dynamic getName_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators

#endif /* INCLUDED_haxe_functional_arrows_combinators_FunctionThunk */ 
