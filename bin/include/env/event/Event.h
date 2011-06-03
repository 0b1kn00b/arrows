#ifndef INCLUDED_env_event_Event
#define INCLUDED_env_event_Event

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(env,event,Event)
namespace env{
namespace event{


class Event_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Event_obj OBJ_;
		Event_obj();
		Void __construct(::String name,Dynamic source);

	public:
		static hx::ObjectPtr< Event_obj > __new(::String name,Dynamic source);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Event_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Event"); }

		::String name; /* REM */ 
		Dynamic source; /* REM */ 
};

} // end namespace env
} // end namespace event

#endif /* INCLUDED_env_event_Event */ 
