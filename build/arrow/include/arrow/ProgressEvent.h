#ifndef INCLUDED_arrow_ProgressEvent
#define INCLUDED_arrow_ProgressEvent

#include <hxObject.h>

#include <event/Event.h>
DECLARE_CLASS1(arrow,ProgressEvent)
DECLARE_CLASS1(event,Event)
namespace arrow{


class ProgressEvent_obj : public event::Event_obj
{
	public:
		typedef event::Event_obj super;
		typedef ProgressEvent_obj OBJ_;

	protected:
		ProgressEvent_obj();
		Void __construct(String name,Dynamic detail,Dynamic source);

	public:
		static hxObjectPtr<ProgressEvent_obj > __new(String name,Dynamic detail,Dynamic source);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~ProgressEvent_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"ProgressEvent",13); }

		Dynamic detail;
};

} // end namespace arrow

#endif /* INCLUDED_arrow_ProgressEvent */ 
