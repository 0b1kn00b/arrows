#ifndef INCLUDED_haxe_functional__PartialFunctionExtensions_PartialFunction3Impl
#define INCLUDED_haxe_functional__PartialFunctionExtensions_PartialFunction3Impl

#include <hxcpp.h>

#include <haxe/functional/PartialFunction3.h>
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple2)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction3)
HX_DECLARE_CLASS3(haxe,functional,_PartialFunctionExtensions,PartialFunction3Impl)
namespace haxe{
namespace functional{
namespace _PartialFunctionExtensions{


class PartialFunction3Impl_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PartialFunction3Impl_obj OBJ_;
		PartialFunction3Impl_obj();
		Void __construct(Array< ::Tuple2 > def);

	public:
		static hx::ObjectPtr< PartialFunction3Impl_obj > __new(Array< ::Tuple2 > def);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PartialFunction3Impl_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::haxe::functional::PartialFunction3_obj *()
			{ return new ::haxe::functional::PartialFunction3_delegate_< PartialFunction3Impl_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("PartialFunction3Impl"); }

		Array< ::Tuple2 > _def; /* REM */ 
		virtual bool isDefinedAt( Dynamic a,Dynamic b,Dynamic c);
		Dynamic isDefinedAt_dyn();

		virtual ::haxe::functional::PartialFunction3 orElse( ::haxe::functional::PartialFunction3 that);
		Dynamic orElse_dyn();

		virtual ::haxe::functional::PartialFunction3 orAlways( Dynamic f);
		Dynamic orAlways_dyn();

		virtual ::haxe::functional::PartialFunction3 orAlwaysC( Dynamic $t1);
		Dynamic orAlwaysC_dyn();

		virtual Dynamic call( Dynamic a,Dynamic b,Dynamic c);
		Dynamic call_dyn();

		virtual Dynamic toFunction( );
		Dynamic toFunction_dyn();

		static ::haxe::functional::_PartialFunctionExtensions::PartialFunction3Impl create( Array< ::Tuple2 > def);
		static Dynamic create_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace _PartialFunctionExtensions

#endif /* INCLUDED_haxe_functional__PartialFunctionExtensions_PartialFunction3Impl */ 
