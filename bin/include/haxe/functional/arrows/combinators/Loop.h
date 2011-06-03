#ifndef INCLUDED_haxe_functional_arrows_combinators_Loop
#define INCLUDED_haxe_functional_arrows_combinators_Loop

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,Loop)
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{


class Loop_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Loop_obj OBJ_;

	public:
		Loop_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("haxe.functional.arrows.combinators.Loop"); }
		::String __ToString() const { return HX_CSTRING("Loop.") + tag; }

		static ::haxe::functional::arrows::combinators::Loop done;
		static ::haxe::functional::arrows::combinators::Loop repeat;
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators

#endif /* INCLUDED_haxe_functional_arrows_combinators_Loop */ 
