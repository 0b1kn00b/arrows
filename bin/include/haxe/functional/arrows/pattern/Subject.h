#ifndef INCLUDED_haxe_functional_arrows_pattern_Subject
#define INCLUDED_haxe_functional_arrows_pattern_Subject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,functional,arrows,pattern,Observer)
HX_DECLARE_CLASS4(haxe,functional,arrows,pattern,Subject)
namespace haxe{
namespace functional{
namespace arrows{
namespace pattern{


class Subject_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Subject_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual bool attach( ::haxe::functional::arrows::pattern::Observer observer)=0;
		Dynamic attach_dyn();
		virtual bool detach( ::haxe::functional::arrows::pattern::Observer observer)=0;
		Dynamic detach_dyn();
		virtual Void notify( )=0;
		Dynamic notify_dyn();
};

#define DELEGATE_haxe_functional_arrows_pattern_Subject \
virtual bool attach( ::haxe::functional::arrows::pattern::Observer observer) { return mDelegate->attach(observer);}  \
virtual Dynamic attach_dyn() { return mDelegate->attach_dyn();}  \
virtual bool detach( ::haxe::functional::arrows::pattern::Observer observer) { return mDelegate->detach(observer);}  \
virtual Dynamic detach_dyn() { return mDelegate->detach_dyn();}  \
virtual Void notify( ) { return mDelegate->notify();}  \
virtual Dynamic notify_dyn() { return mDelegate->notify_dyn();}  \


template<typename IMPL>
class Subject_delegate_ : public Subject_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Subject_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_haxe_functional_arrows_pattern_Subject
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace pattern

#endif /* INCLUDED_haxe_functional_arrows_pattern_Subject */ 
