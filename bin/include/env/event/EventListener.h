#ifndef INCLUDED_env_event_EventListener
#define INCLUDED_env_event_EventListener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(env,event,Event)
HX_DECLARE_CLASS2(env,event,EventListener)
namespace env{
namespace event{


class EventListener_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef EventListener_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void addEventListener( ::String name,Dynamic listener,Dynamic params=null())=0;
		Dynamic addEventListener_dyn();
		virtual Void removeEventListener( ::String name,Dynamic listener,Dynamic params=null())=0;
		Dynamic removeEventListener_dyn();
};

#define DELEGATE_env_event_EventListener \
virtual Void addEventListener( ::String name,Dynamic listener,Dynamic params=null()) { return mDelegate->addEventListener(name,listener,params);}  \
virtual Dynamic addEventListener_dyn() { return mDelegate->addEventListener_dyn();}  \
virtual Void removeEventListener( ::String name,Dynamic listener,Dynamic params=null()) { return mDelegate->removeEventListener(name,listener,params);}  \
virtual Dynamic removeEventListener_dyn() { return mDelegate->removeEventListener_dyn();}  \


template<typename IMPL>
class EventListener_delegate_ : public EventListener_obj
{
	protected:
		IMPL *mDelegate;
	public:
		EventListener_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_env_event_EventListener
};

} // end namespace env
} // end namespace event

#endif /* INCLUDED_env_event_EventListener */ 
