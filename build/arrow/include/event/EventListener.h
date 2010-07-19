#ifndef INCLUDED_event_EventListener
#define INCLUDED_event_EventListener

#include <hxObject.h>

DECLARE_CLASS1(event,Event)
DECLARE_CLASS1(event,EventListener)
namespace event{


class EventListener_obj : public virtual hxObject
{
	public:
	INTERFACE_DEF
		virtual Void addEventListener( String name,Dynamic listener,Dynamic params=null())=0;
		Dynamic addEventListener_dyn();
		virtual Void removeEventListener( String name,Dynamic listener,Dynamic params=null())=0;
		Dynamic removeEventListener_dyn();
};

} // end namespace event

#endif /* INCLUDED_event_EventListener */ 
