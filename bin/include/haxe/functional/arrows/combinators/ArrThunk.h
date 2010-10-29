#ifndef INCLUDED_haxe_functional_arrows_combinators_ArrThunk
#define INCLUDED_haxe_functional_arrows_combinators_ArrThunk

#include <hxcpp.h>

#include <haxe/functional/arrows/Arrow.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,ArrThunk)
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{


class ArrThunk_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef ArrThunk_obj OBJ_;
		ArrThunk_obj();
		Void __construct(Dynamic $t1);

	public:
		static hx::ObjectPtr< ArrThunk_obj > __new(Dynamic $t1);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ArrThunk_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ArrThunk"); }

		virtual ::String getName( );
		Dynamic getName_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators

#endif /* INCLUDED_haxe_functional_arrows_combinators_ArrThunk */ 
