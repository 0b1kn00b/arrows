#ifndef INCLUDED_haxe_functional__PartialFunctionExtensions_PartialFunction4Impl
#define INCLUDED_haxe_functional__PartialFunctionExtensions_PartialFunction4Impl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/PartialFunction4.h>
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple2)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction4)
HX_DECLARE_CLASS3(haxe,functional,_PartialFunctionExtensions,PartialFunction4Impl)
namespace haxe{
namespace functional{
namespace _PartialFunctionExtensions{


class PartialFunction4Impl_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PartialFunction4Impl_obj OBJ_;
		PartialFunction4Impl_obj();
		Void __construct(Array< ::Tuple2 > def);

	public:
		static hx::ObjectPtr< PartialFunction4Impl_obj > __new(Array< ::Tuple2 > def);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PartialFunction4Impl_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::haxe::functional::PartialFunction4_obj *()
			{ return new ::haxe::functional::PartialFunction4_delegate_< PartialFunction4Impl_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("PartialFunction4Impl"); }

		Array< ::Tuple2 > _def; /* REM */ 
		virtual bool isDefinedAt( Dynamic _tmp_a,Dynamic _tmp_b,Dynamic _tmp_c,Dynamic _tmp_d);
		Dynamic isDefinedAt_dyn();

		virtual ::haxe::functional::PartialFunction4 orElse( ::haxe::functional::PartialFunction4 _tmp_that);
		Dynamic orElse_dyn();

		virtual ::haxe::functional::PartialFunction4 orAlways( Dynamic _tmp_f);
		Dynamic orAlways_dyn();

		virtual ::haxe::functional::PartialFunction4 orAlwaysC( Dynamic _tmp_$t1);
		Dynamic orAlwaysC_dyn();

		virtual Dynamic call( Dynamic _tmp_a,Dynamic _tmp_b,Dynamic _tmp_c,Dynamic _tmp_d);
		Dynamic call_dyn();

		virtual Dynamic toFunction( );
		Dynamic toFunction_dyn();

		static ::haxe::functional::_PartialFunctionExtensions::PartialFunction4Impl create( Array< ::Tuple2 > def);
		static Dynamic create_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace _PartialFunctionExtensions

#endif /* INCLUDED_haxe_functional__PartialFunctionExtensions_PartialFunction4Impl */ 
