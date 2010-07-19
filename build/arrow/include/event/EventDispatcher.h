#ifndef INCLUDED_event_EventDispatcher
#define INCLUDED_event_EventDispatcher

#include <hxObject.h>

DECLARE_CLASS1(event,Event)
DECLARE_CLASS1(event,EventDispatcher)
namespace event{


class EventDispatcher_obj : public virtual hxObject
{
	public:
	INTERFACE_DEF
		virtual Void dispatchEvent( event::Event m)=0;
		Dynamic dispatchEvent_dyn();
};

} // end namespace event

#endif /* INCLUDED_event_EventDispatcher */ 
