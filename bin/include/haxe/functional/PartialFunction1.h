#ifndef INCLUDED_haxe_functional_PartialFunction1
#define INCLUDED_haxe_functional_PartialFunction1

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction1)
namespace haxe{
namespace functional{


class PartialFunction1_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef PartialFunction1_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual bool isDefinedAt( Dynamic a)=0;
		Dynamic isDefinedAt_dyn();
		virtual ::haxe::functional::PartialFunction1 orElse( ::haxe::functional::PartialFunction1 that)=0;
		Dynamic orElse_dyn();
		virtual ::haxe::functional::PartialFunction1 orAlways( Dynamic f)=0;
		Dynamic orAlways_dyn();
		virtual ::haxe::functional::PartialFunction1 orAlwaysC( Dynamic z)=0;
		Dynamic orAlwaysC_dyn();
		virtual Dynamic call( Dynamic a)=0;
		Dynamic call_dyn();
		virtual Dynamic toFunction( )=0;
		Dynamic toFunction_dyn();
};

#define DELEGATE_haxe_functional_PartialFunction1 \
virtual bool isDefinedAt( Dynamic a) { return mDelegate->isDefinedAt(a);}  \
virtual Dynamic isDefinedAt_dyn() { return mDelegate->isDefinedAt_dyn();}  \
virtual ::haxe::functional::PartialFunction1 orElse( ::haxe::functional::PartialFunction1 that) { return mDelegate->orElse(that);}  \
virtual Dynamic orElse_dyn() { return mDelegate->orElse_dyn();}  \
virtual ::haxe::functional::PartialFunction1 orAlways( Dynamic f) { return mDelegate->orAlways(f);}  \
virtual Dynamic orAlways_dyn() { return mDelegate->orAlways_dyn();}  \
virtual ::haxe::functional::PartialFunction1 orAlwaysC( Dynamic z) { return mDelegate->orAlwaysC(z);}  \
virtual Dynamic orAlwaysC_dyn() { return mDelegate->orAlwaysC_dyn();}  \
virtual Dynamic call( Dynamic a) { return mDelegate->call(a);}  \
virtual Dynamic call_dyn() { return mDelegate->call_dyn();}  \
virtual Dynamic toFunction( ) { return mDelegate->toFunction();}  \
virtual Dynamic toFunction_dyn() { return mDelegate->toFunction_dyn();}  \


template<typename IMPL>
class PartialFunction1_delegate_ : public PartialFunction1_obj
{
	protected:
		IMPL *mDelegate;
	public:
		PartialFunction1_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_haxe_functional_PartialFunction1
};

} // end namespace haxe
} // end namespace functional

#endif /* INCLUDED_haxe_functional_PartialFunction1 */ 
