#ifndef INCLUDED_env_event_EventDispatcher
#define INCLUDED_env_event_EventDispatcher

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(env,event,Event)
HX_DECLARE_CLASS2(env,event,EventDispatcher)
namespace env{
namespace event{


class EventDispatcher_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef EventDispatcher_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void dispatchEvent( ::env::event::Event m)=0;
		Dynamic dispatchEvent_dyn();
};

#define DELEGATE_env_event_EventDispatcher \
virtual Void dispatchEvent( ::env::event::Event m) { return mDelegate->dispatchEvent(m);}  \
virtual Dynamic dispatchEvent_dyn() { return mDelegate->dispatchEvent_dyn();}  \


template<typename IMPL>
class EventDispatcher_delegate_ : public EventDispatcher_obj
{
	protected:
		IMPL *mDelegate;
	public:
		EventDispatcher_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_env_event_EventDispatcher
};

} // end namespace env
} // end namespace event

#endif /* INCLUDED_env_event_EventDispatcher */ 
