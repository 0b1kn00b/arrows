#ifndef INCLUDED_haxe_functional_PartialFunction4ImplExtensions
#define INCLUDED_haxe_functional_PartialFunction4ImplExtensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple2)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction4)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction4ImplExtensions)
HX_DECLARE_CLASS3(haxe,functional,_PartialFunctionExtensions,PartialFunction4Impl)
namespace haxe{
namespace functional{


class PartialFunction4ImplExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PartialFunction4ImplExtensions_obj OBJ_;
		PartialFunction4ImplExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PartialFunction4ImplExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PartialFunction4ImplExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("PartialFunction4ImplExtensions"); }

		static ::haxe::functional::_PartialFunctionExtensions::PartialFunction4Impl toPartialFunction( Array< ::Tuple2 > def);
		static Dynamic toPartialFunction_dyn();

};

} // end namespace haxe
} // end namespace functional

#endif /* INCLUDED_haxe_functional_PartialFunction4ImplExtensions */ 
