#ifndef INCLUDED_haxe_functional_arrows_combinators_EventArrow
#define INCLUDED_haxe_functional_arrows_combinators_EventArrow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/Arrow.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,EventArrow)
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{


class EventArrow_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef EventArrow_obj OBJ_;
		EventArrow_obj();
		Void __construct(::String $t3);

	public:
		static hx::ObjectPtr< EventArrow_obj > __new(::String $t3);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~EventArrow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("EventArrow"); }

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators

#endif /* INCLUDED_haxe_functional_arrows_combinators_EventArrow */ 
