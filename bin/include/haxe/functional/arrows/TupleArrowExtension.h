#ifndef INCLUDED_haxe_functional_arrows_TupleArrowExtension
#define INCLUDED_haxe_functional_arrows_TupleArrowExtension

#include <hxcpp.h>

HX_DECLARE_CLASS3(haxe,functional,arrows,TupleArrowExtension)
namespace haxe{
namespace functional{
namespace arrows{


class TupleArrowExtension_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TupleArrowExtension_obj OBJ_;
		TupleArrowExtension_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TupleArrowExtension_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TupleArrowExtension_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("TupleArrowExtension"); }

		static Void flatten( Dynamic t);
		static Dynamic flatten_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows

#endif /* INCLUDED_haxe_functional_arrows_TupleArrowExtension */ 
