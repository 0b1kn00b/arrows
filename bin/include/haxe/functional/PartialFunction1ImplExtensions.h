#ifndef INCLUDED_haxe_functional_PartialFunction1ImplExtensions
#define INCLUDED_haxe_functional_PartialFunction1ImplExtensions

#include <hxcpp.h>

HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple2)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction1)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction1ImplExtensions)
HX_DECLARE_CLASS3(haxe,functional,_PartialFunctionExtensions,PartialFunction1Impl)
namespace haxe{
namespace functional{


class PartialFunction1ImplExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PartialFunction1ImplExtensions_obj OBJ_;
		PartialFunction1ImplExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< PartialFunction1ImplExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PartialFunction1ImplExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("PartialFunction1ImplExtensions"); }

		static ::haxe::functional::_PartialFunctionExtensions::PartialFunction1Impl toPartialFunction( Array< ::Tuple2 > def);
		static Dynamic toPartialFunction_dyn();

};

} // end namespace haxe
} // end namespace functional

#endif /* INCLUDED_haxe_functional_PartialFunction1ImplExtensions */ 
