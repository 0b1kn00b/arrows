#ifndef INCLUDED_haxe_functional_arrows_combinators_DelayArrow
#define INCLUDED_haxe_functional_arrows_combinators_DelayArrow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/Arrow.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,DelayArrow)
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{


class DelayArrow_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef DelayArrow_obj OBJ_;
		DelayArrow_obj();
		Void __construct(int milliseconds);

	public:
		static hx::ObjectPtr< DelayArrow_obj > __new(int milliseconds);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DelayArrow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("DelayArrow"); }

		int ms; /* REM */ 
		Dynamic cancel; /* REM */ 
	Dynamic &cancel_dyn() { return cancel;}
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators

#endif /* INCLUDED_haxe_functional_arrows_combinators_DelayArrow */ 
