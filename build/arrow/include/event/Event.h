#ifndef INCLUDED_event_Event
#define INCLUDED_event_Event

#include <hxObject.h>

DECLARE_CLASS1(event,Event)
namespace event{


class Event_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef Event_obj OBJ_;

	protected:
		Event_obj();
		Void __construct(String name,Dynamic source);

	public:
		static hxObjectPtr<Event_obj > __new(String name,Dynamic source);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Event_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Event",5); }

		String name;
		Dynamic source;
};

} // end namespace event

#endif /* INCLUDED_event_Event */ 
