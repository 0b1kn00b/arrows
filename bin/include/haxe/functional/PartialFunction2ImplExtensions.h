#ifndef INCLUDED_haxe_functional_PartialFunction2ImplExtensions
#define INCLUDED_haxe_functional_PartialFunction2ImplExtensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple2)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction2)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction2ImplExtensions)
HX_DECLARE_CLASS3(haxe,functional,_PartialFunctionExtensions,PartialFunction2Impl)
namespace haxe{
namespace functional{


class PartialFunction2ImplExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PartialFunction2ImplExtensions_obj OBJ_;
		PartialFunction2ImplExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PartialFunction2ImplExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PartialFunction2ImplExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("PartialFunction2ImplExtensions"); }

		static ::haxe::functional::_PartialFunctionExtensions::PartialFunction2Impl toPartialFunction( Array< ::Tuple2 > def);
		static Dynamic toPartialFunction_dyn();

};

} // end namespace haxe
} // end namespace functional

#endif /* INCLUDED_haxe_functional_PartialFunction2ImplExtensions */ 
