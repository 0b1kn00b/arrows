#ifndef INCLUDED_haxe_functional_arrows_schedule_Reactor
#define INCLUDED_haxe_functional_arrows_schedule_Reactor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/schedule/Scheduler.h>
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,Reactor)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,Scheduler)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,reactor,ReactorState)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{


class Reactor_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Reactor_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void start( )=0;
		Dynamic start_dyn();
		virtual Void terminate( )=0;
		Dynamic terminate_dyn();
		
};

#define DELEGATE_haxe_functional_arrows_schedule_Reactor \
virtual Void start( ) { return mDelegate->start();}  \
virtual Dynamic start_dyn() { return mDelegate->start_dyn();}  \
virtual Void terminate( ) { return mDelegate->terminate();}  \
virtual Dynamic terminate_dyn() { return mDelegate->terminate_dyn();}  \


template<typename IMPL>
class Reactor_delegate_ : public Reactor_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Reactor_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_haxe_functional_arrows_schedule_Reactor
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule

#endif /* INCLUDED_haxe_functional_arrows_schedule_Reactor */ 
