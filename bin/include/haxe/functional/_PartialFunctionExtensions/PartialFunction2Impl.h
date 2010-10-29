#ifndef INCLUDED_haxe_functional__PartialFunctionExtensions_PartialFunction2Impl
#define INCLUDED_haxe_functional__PartialFunctionExtensions_PartialFunction2Impl

#include <hxcpp.h>

#include <haxe/functional/PartialFunction2.h>
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple2)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction2)
HX_DECLARE_CLASS3(haxe,functional,_PartialFunctionExtensions,PartialFunction2Impl)
namespace haxe{
namespace functional{
namespace _PartialFunctionExtensions{


class PartialFunction2Impl_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PartialFunction2Impl_obj OBJ_;
		PartialFunction2Impl_obj();
		Void __construct(Array< ::Tuple2 > def);

	public:
		static hx::ObjectPtr< PartialFunction2Impl_obj > __new(Array< ::Tuple2 > def);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PartialFunction2Impl_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::haxe::functional::PartialFunction2_obj *()
			{ return new ::haxe::functional::PartialFunction2_delegate_< PartialFunction2Impl_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("PartialFunction2Impl"); }

		Array< ::Tuple2 > _def; /* REM */ 
		virtual bool isDefinedAt( Dynamic a,Dynamic b);
		Dynamic isDefinedAt_dyn();

		virtual ::haxe::functional::PartialFunction2 orElse( ::haxe::functional::PartialFunction2 that);
		Dynamic orElse_dyn();

		virtual ::haxe::functional::PartialFunction2 orAlways( Dynamic f);
		Dynamic orAlways_dyn();

		virtual ::haxe::functional::PartialFunction2 orAlwaysC( Dynamic $t1);
		Dynamic orAlwaysC_dyn();

		virtual Dynamic call( Dynamic a,Dynamic b);
		Dynamic call_dyn();

		virtual Dynamic toFunction( );
		Dynamic toFunction_dyn();

		static ::haxe::functional::_PartialFunctionExtensions::PartialFunction2Impl create( Array< ::Tuple2 > def);
		static Dynamic create_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace _PartialFunctionExtensions

#endif /* INCLUDED_haxe_functional__PartialFunctionExtensions_PartialFunction2Impl */ 
