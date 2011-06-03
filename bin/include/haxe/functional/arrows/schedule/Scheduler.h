#ifndef INCLUDED_haxe_functional_arrows_schedule_Scheduler
#define INCLUDED_haxe_functional_arrows_schedule_Scheduler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,Scheduler)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{


class Scheduler_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Scheduler_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Dynamic invoke( )=0;
		Dynamic invoke_dyn();
};

#define DELEGATE_haxe_functional_arrows_schedule_Scheduler \
virtual Dynamic invoke( ) { return mDelegate->invoke();}  \
virtual Dynamic invoke_dyn() { return mDelegate->invoke_dyn();}  \


template<typename IMPL>
class Scheduler_delegate_ : public Scheduler_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Scheduler_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_haxe_functional_arrows_schedule_Scheduler
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule

#endif /* INCLUDED_haxe_functional_arrows_schedule_Scheduler */ 
