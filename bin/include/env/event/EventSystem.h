#ifndef INCLUDED_env_event_EventSystem
#define INCLUDED_env_event_EventSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <env/event/EventListener.h>
#include <env/event/EventDispatcher.h>
HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS2(env,event,Event)
HX_DECLARE_CLASS2(env,event,EventDispatcher)
HX_DECLARE_CLASS2(env,event,EventListener)
HX_DECLARE_CLASS2(env,event,EventSystem)
namespace env{
namespace event{


class EventSystem_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EventSystem_obj OBJ_;
		EventSystem_obj();
		Void __construct(Dynamic source);

	public:
		static hx::ObjectPtr< EventSystem_obj > __new(Dynamic source);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~EventSystem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::env::event::EventListener_obj *()
			{ return new ::env::event::EventListener_delegate_< EventSystem_obj >(this); }
		inline operator ::env::event::EventDispatcher_obj *()
			{ return new ::env::event::EventDispatcher_delegate_< EventSystem_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("EventSystem"); }

		::Hash listeners; /* REM */ 
		Dynamic source; /* REM */ 
		virtual Void addEventListener( ::String name,Dynamic $t1,Dynamic params);
		Dynamic addEventListener_dyn();

		virtual Void removeEventListener( ::String name,Dynamic $t1,Dynamic params);
		Dynamic removeEventListener_dyn();

		virtual Void dispatchEvent( ::env::event::Event e);
		Dynamic dispatchEvent_dyn();

};

} // end namespace env
} // end namespace event

#endif /* INCLUDED_env_event_EventSystem */ 
