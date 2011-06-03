#ifndef INCLUDED_haxe_functional_PartialFunction2
#define INCLUDED_haxe_functional_PartialFunction2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction2)
namespace haxe{
namespace functional{


class PartialFunction2_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef PartialFunction2_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual bool isDefinedAt( Dynamic a,Dynamic b)=0;
		Dynamic isDefinedAt_dyn();
		virtual ::haxe::functional::PartialFunction2 orElse( ::haxe::functional::PartialFunction2 that)=0;
		Dynamic orElse_dyn();
		virtual ::haxe::functional::PartialFunction2 orAlways( Dynamic f)=0;
		Dynamic orAlways_dyn();
		virtual ::haxe::functional::PartialFunction2 orAlwaysC( Dynamic z)=0;
		Dynamic orAlwaysC_dyn();
		virtual Dynamic call( Dynamic a,Dynamic b)=0;
		Dynamic call_dyn();
		virtual Dynamic toFunction( )=0;
		Dynamic toFunction_dyn();
};

#define DELEGATE_haxe_functional_PartialFunction2 \
virtual bool isDefinedAt( Dynamic a,Dynamic b) { return mDelegate->isDefinedAt(a,b);}  \
virtual Dynamic isDefinedAt_dyn() { return mDelegate->isDefinedAt_dyn();}  \
virtual ::haxe::functional::PartialFunction2 orElse( ::haxe::functional::PartialFunction2 that) { return mDelegate->orElse(that);}  \
virtual Dynamic orElse_dyn() { return mDelegate->orElse_dyn();}  \
virtual ::haxe::functional::PartialFunction2 orAlways( Dynamic f) { return mDelegate->orAlways(f);}  \
virtual Dynamic orAlways_dyn() { return mDelegate->orAlways_dyn();}  \
virtual ::haxe::functional::PartialFunction2 orAlwaysC( Dynamic z) { return mDelegate->orAlwaysC(z);}  \
virtual Dynamic orAlwaysC_dyn() { return mDelegate->orAlwaysC_dyn();}  \
virtual Dynamic call( Dynamic a,Dynamic b) { return mDelegate->call(a,b);}  \
virtual Dynamic call_dyn() { return mDelegate->call_dyn();}  \
virtual Dynamic toFunction( ) { return mDelegate->toFunction();}  \
virtual Dynamic toFunction_dyn() { return mDelegate->toFunction_dyn();}  \


template<typename IMPL>
class PartialFunction2_delegate_ : public PartialFunction2_obj
{
	protected:
		IMPL *mDelegate;
	public:
		PartialFunction2_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_haxe_functional_PartialFunction2
};

} // end namespace haxe
} // end namespace functional

#endif /* INCLUDED_haxe_functional_PartialFunction2 */ 
