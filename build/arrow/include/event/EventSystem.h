#ifndef INCLUDED_event_EventSystem
#define INCLUDED_event_EventSystem

#include <hxObject.h>

#include <event/EventListener.h>
#include <event/EventDispatcher.h>
DECLARE_CLASS0(Hash)
DECLARE_CLASS1(event,Event)
DECLARE_CLASS1(event,EventDispatcher)
DECLARE_CLASS1(event,EventListener)
DECLARE_CLASS1(event,EventSystem)
namespace event{


class EventSystem_obj : public virtual hxObject, public event::EventListener_obj, public event::EventDispatcher_obj
{
	public:
		typedef hxObject super;
		typedef EventSystem_obj OBJ_;

	protected:
		EventSystem_obj();
		Void __construct(Dynamic target);

	public:
		static hxObjectPtr<EventSystem_obj > __new(Dynamic target);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~EventSystem_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"EventSystem",11); }

		Hash listeners;
		Dynamic target;
		virtual Void addEventListener( String name,Dynamic $t1,Dynamic params);
		Dynamic addEventListener_dyn();

		virtual Void removeEventListener( String name,Dynamic $t1,Dynamic params);
		Dynamic removeEventListener_dyn();

		virtual Void dispatchEvent( event::Event e);
		Dynamic dispatchEvent_dyn();

};

} // end namespace event

#endif /* INCLUDED_event_EventSystem */ 
