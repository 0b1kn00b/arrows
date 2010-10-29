#ifndef INCLUDED_haxe_functional_arrows_pattern_Observer
#define INCLUDED_haxe_functional_arrows_pattern_Observer

#include <hxcpp.h>

HX_DECLARE_CLASS4(haxe,functional,arrows,pattern,Observer)
HX_DECLARE_CLASS4(haxe,functional,arrows,pattern,Subject)
namespace haxe{
namespace functional{
namespace arrows{
namespace pattern{


class Observer_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Observer_obj OBJ_;
		virtual Void update( )=0;
		Dynamic update_dyn();
		
};

#define DELEGATE_haxe_functional_arrows_pattern_Observer \
virtual Void update( ) { return mDelegate->update();}  \
virtual Dynamic update_dyn() { return mDelegate->update_dyn();}  \


template<typename IMPL>
class Observer_delegate_ : public Observer_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Observer_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_haxe_functional_arrows_pattern_Observer
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace pattern

#endif /* INCLUDED_haxe_functional_arrows_pattern_Observer */ 
