#ifndef INCLUDED_haxe_functional_arrows_combinators_RepeatThunk
#define INCLUDED_haxe_functional_arrows_combinators_RepeatThunk

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/Arrow.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,RepeatThunk)
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{


class RepeatThunk_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef RepeatThunk_obj OBJ_;
		RepeatThunk_obj();
		Void __construct(::haxe::functional::arrows::Arrow $t1);

	public:
		static hx::ObjectPtr< RepeatThunk_obj > __new(::haxe::functional::arrows::Arrow $t1);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RepeatThunk_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("RepeatThunk"); }

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators

#endif /* INCLUDED_haxe_functional_arrows_combinators_RepeatThunk */ 
