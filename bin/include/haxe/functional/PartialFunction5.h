#ifndef INCLUDED_haxe_functional_PartialFunction5
#define INCLUDED_haxe_functional_PartialFunction5

#include <hxcpp.h>

HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction5)
namespace haxe{
namespace functional{


class PartialFunction5_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef PartialFunction5_obj OBJ_;
		virtual bool isDefinedAt( Dynamic a,Dynamic b,Dynamic c,Dynamic d,Dynamic e)=0;
		Dynamic isDefinedAt_dyn();
		virtual ::haxe::functional::PartialFunction5 orElse( ::haxe::functional::PartialFunction5 that)=0;
		Dynamic orElse_dyn();
		virtual ::haxe::functional::PartialFunction5 orAlways( Dynamic f)=0;
		Dynamic orAlways_dyn();
		virtual ::haxe::functional::PartialFunction5 orAlwaysC( Dynamic z)=0;
		Dynamic orAlwaysC_dyn();
		virtual Dynamic call( Dynamic a,Dynamic b,Dynamic c,Dynamic d,Dynamic e)=0;
		Dynamic call_dyn();
		virtual Dynamic toFunction( )=0;
		Dynamic toFunction_dyn();
};

#define DELEGATE_haxe_functional_PartialFunction5 \
virtual bool isDefinedAt( Dynamic a,Dynamic b,Dynamic c,Dynamic d,Dynamic e) { return mDelegate->isDefinedAt(a,b,c,d,e);}  \
virtual Dynamic isDefinedAt_dyn() { return mDelegate->isDefinedAt_dyn();}  \
virtual ::haxe::functional::PartialFunction5 orElse( ::haxe::functional::PartialFunction5 that) { return mDelegate->orElse(that);}  \
virtual Dynamic orElse_dyn() { return mDelegate->orElse_dyn();}  \
virtual ::haxe::functional::PartialFunction5 orAlways( Dynamic f) { return mDelegate->orAlways(f);}  \
virtual Dynamic orAlways_dyn() { return mDelegate->orAlways_dyn();}  \
virtual ::haxe::functional::PartialFunction5 orAlwaysC( Dynamic z) { return mDelegate->orAlwaysC(z);}  \
virtual Dynamic orAlwaysC_dyn() { return mDelegate->orAlwaysC_dyn();}  \
virtual Dynamic call( Dynamic a,Dynamic b,Dynamic c,Dynamic d,Dynamic e) { return mDelegate->call(a,b,c,d,e);}  \
virtual Dynamic call_dyn() { return mDelegate->call_dyn();}  \
virtual Dynamic toFunction( ) { return mDelegate->toFunction();}  \
virtual Dynamic toFunction_dyn() { return mDelegate->toFunction_dyn();}  \


template<typename IMPL>
class PartialFunction5_delegate_ : public PartialFunction5_obj
{
	protected:
		IMPL *mDelegate;
	public:
		PartialFunction5_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_haxe_functional_PartialFunction5
};

} // end namespace haxe
} // end namespace functional

#endif /* INCLUDED_haxe_functional_PartialFunction5 */ 
