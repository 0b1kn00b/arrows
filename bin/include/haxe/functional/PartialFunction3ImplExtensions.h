#ifndef INCLUDED_haxe_functional_PartialFunction3ImplExtensions
#define INCLUDED_haxe_functional_PartialFunction3ImplExtensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple2)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction3)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction3ImplExtensions)
HX_DECLARE_CLASS3(haxe,functional,_PartialFunctionExtensions,PartialFunction3Impl)
namespace haxe{
namespace functional{


class PartialFunction3ImplExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PartialFunction3ImplExtensions_obj OBJ_;
		PartialFunction3ImplExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PartialFunction3ImplExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PartialFunction3ImplExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("PartialFunction3ImplExtensions"); }

		static ::haxe::functional::_PartialFunctionExtensions::PartialFunction3Impl toPartialFunction( Array< ::Tuple2 > def);
		static Dynamic toPartialFunction_dyn();

};

} // end namespace haxe
} // end namespace functional

#endif /* INCLUDED_haxe_functional_PartialFunction3ImplExtensions */ 
