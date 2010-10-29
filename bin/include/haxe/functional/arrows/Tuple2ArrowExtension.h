#ifndef INCLUDED_haxe_functional_arrows_Tuple2ArrowExtension
#define INCLUDED_haxe_functional_arrows_Tuple2ArrowExtension

#include <hxcpp.h>

HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple2)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS3(haxe,functional,arrows,Tuple2ArrowExtension)
namespace haxe{
namespace functional{
namespace arrows{


class Tuple2ArrowExtension_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tuple2ArrowExtension_obj OBJ_;
		Tuple2ArrowExtension_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Tuple2ArrowExtension_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Tuple2ArrowExtension_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Tuple2ArrowExtension"); }

		static Void flatten( ::Tuple2 t);
		static Dynamic flatten_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows

#endif /* INCLUDED_haxe_functional_arrows_Tuple2ArrowExtension */ 
