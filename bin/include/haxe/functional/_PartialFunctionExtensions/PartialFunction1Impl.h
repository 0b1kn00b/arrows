#ifndef INCLUDED_haxe_functional__PartialFunctionExtensions_PartialFunction1Impl
#define INCLUDED_haxe_functional__PartialFunctionExtensions_PartialFunction1Impl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/PartialFunction1.h>
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple2)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction1)
HX_DECLARE_CLASS3(haxe,functional,_PartialFunctionExtensions,PartialFunction1Impl)
namespace haxe{
namespace functional{
namespace _PartialFunctionExtensions{


class PartialFunction1Impl_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PartialFunction1Impl_obj OBJ_;
		PartialFunction1Impl_obj();
		Void __construct(Array< ::Tuple2 > def);

	public:
		static hx::ObjectPtr< PartialFunction1Impl_obj > __new(Array< ::Tuple2 > def);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PartialFunction1Impl_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::haxe::functional::PartialFunction1_obj *()
			{ return new ::haxe::functional::PartialFunction1_delegate_< PartialFunction1Impl_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("PartialFunction1Impl"); }

		Array< ::Tuple2 > _def; /* REM */ 
		virtual bool isDefinedAt( Dynamic _tmp_a);
		Dynamic isDefinedAt_dyn();

		virtual ::haxe::functional::PartialFunction1 orElse( ::haxe::functional::PartialFunction1 _tmp_that);
		Dynamic orElse_dyn();

		virtual ::haxe::functional::PartialFunction1 orAlways( Dynamic _tmp_f);
		Dynamic orAlways_dyn();

		virtual ::haxe::functional::PartialFunction1 orAlwaysC( Dynamic _tmp_$t1);
		Dynamic orAlwaysC_dyn();

		virtual Dynamic call( Dynamic _tmp_a);
		Dynamic call_dyn();

		virtual Dynamic toFunction( );
		Dynamic toFunction_dyn();

		static ::haxe::functional::_PartialFunctionExtensions::PartialFunction1Impl create( Array< ::Tuple2 > def);
		static Dynamic create_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace _PartialFunctionExtensions

#endif /* INCLUDED_haxe_functional__PartialFunctionExtensions_PartialFunction1Impl */ 
