#ifndef INCLUDED_haxe_functional_PartialFunction4
#define INCLUDED_haxe_functional_PartialFunction4

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction4)
namespace haxe{
namespace functional{


class PartialFunction4_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef PartialFunction4_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual bool isDefinedAt( Dynamic a,Dynamic b,Dynamic c,Dynamic d)=0;
		Dynamic isDefinedAt_dyn();
		virtual ::haxe::functional::PartialFunction4 orElse( ::haxe::functional::PartialFunction4 that)=0;
		Dynamic orElse_dyn();
		virtual ::haxe::functional::PartialFunction4 orAlways( Dynamic f)=0;
		Dynamic orAlways_dyn();
		virtual ::haxe::functional::PartialFunction4 orAlwaysC( Dynamic z)=0;
		Dynamic orAlwaysC_dyn();
		virtual Dynamic call( Dynamic a,Dynamic b,Dynamic c,Dynamic d)=0;
		Dynamic call_dyn();
		virtual Dynamic toFunction( )=0;
		Dynamic toFunction_dyn();
};

#define DELEGATE_haxe_functional_PartialFunction4 \
virtual bool isDefinedAt( Dynamic a,Dynamic b,Dynamic c,Dynamic d) { return mDelegate->isDefinedAt(a,b,c,d);}  \
virtual Dynamic isDefinedAt_dyn() { return mDelegate->isDefinedAt_dyn();}  \
virtual ::haxe::functional::PartialFunction4 orElse( ::haxe::functional::PartialFunction4 that) { return mDelegate->orElse(that);}  \
virtual Dynamic orElse_dyn() { return mDelegate->orElse_dyn();}  \
virtual ::haxe::functional::PartialFunction4 orAlways( Dynamic f) { return mDelegate->orAlways(f);}  \
virtual Dynamic orAlways_dyn() { return mDelegate->orAlways_dyn();}  \
virtual ::haxe::functional::PartialFunction4 orAlwaysC( Dynamic z) { return mDelegate->orAlwaysC(z);}  \
virtual Dynamic orAlwaysC_dyn() { return mDelegate->orAlwaysC_dyn();}  \
virtual Dynamic call( Dynamic a,Dynamic b,Dynamic c,Dynamic d) { return mDelegate->call(a,b,c,d);}  \
virtual Dynamic call_dyn() { return mDelegate->call_dyn();}  \
virtual Dynamic toFunction( ) { return mDelegate->toFunction();}  \
virtual Dynamic toFunction_dyn() { return mDelegate->toFunction_dyn();}  \


template<typename IMPL>
class PartialFunction4_delegate_ : public PartialFunction4_obj
{
	protected:
		IMPL *mDelegate;
	public:
		PartialFunction4_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_haxe_functional_PartialFunction4
};

} // end namespace haxe
} // end namespace functional

#endif /* INCLUDED_haxe_functional_PartialFunction4 */ 
