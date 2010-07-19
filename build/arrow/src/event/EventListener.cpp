#include <hxObject.h>

#ifndef INCLUDED_event_Event
#include <event/Event.h>
#endif
#ifndef INCLUDED_event_EventListener
#include <event/EventListener.h>
#endif
namespace event{

DEFINE_DYNAMIC_FUNC3(EventListener_obj,addEventListener,)

DEFINE_DYNAMIC_FUNC3(EventListener_obj,removeEventListener,)


} // end namespace event
