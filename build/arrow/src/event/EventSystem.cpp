#include <hxObject.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_event_Event
#include <event/Event.h>
#endif
#ifndef INCLUDED_event_EventDispatcher
#include <event/EventDispatcher.h>
#endif
#ifndef INCLUDED_event_EventListener
#include <event/EventListener.h>
#endif
#ifndef INCLUDED_event_EventSystem
#include <event/EventSystem.h>
#endif
namespace event{

Void EventSystem_obj::__construct(Dynamic target)
{
{
	this->target = target;
	this->listeners = Hash_obj::__new();
}
;
	return null();
}

EventSystem_obj::~EventSystem_obj() { }

Dynamic EventSystem_obj::__CreateEmpty() { return  new EventSystem_obj; }
hxObjectPtr<EventSystem_obj > EventSystem_obj::__new(Dynamic target)
{  hxObjectPtr<EventSystem_obj > result = new EventSystem_obj();
	result->__construct(target);
	return result;}

Dynamic EventSystem_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<EventSystem_obj > result = new EventSystem_obj();
	result->__construct(inArgs[0]);
	return result;}

Void EventSystem_obj::addEventListener( String name,Dynamic $t1,Dynamic params){
{
		Array<Dynamic > method = Array_obj<Dynamic >::__new().Add($t1);
		if (!this->listeners->exists(name)){
			this->listeners->set(name,List_obj::__new());
		}
		List list = this->listeners->get(name).Cast<List >();
		event::EventSystem self = this;

		BEGIN_LOCAL_FUNC1(_Function_1,Array<Dynamic >,method)
		bool run(Dynamic x){
{
				return Reflect_obj::compareMethods(x,method->__get(0));
			}
			return null();
		}
		END_LOCAL_FUNC1(return)

		if (!Lambda_obj::exists(list, Dynamic(new _Function_1(method)))){
			list->push(method->__get(0));
		}
	}
return null();
}


DEFINE_DYNAMIC_FUNC3(EventSystem_obj,addEventListener,(void))

Void EventSystem_obj::removeEventListener( String name,Dynamic $t1,Dynamic params){
{
		Array<Dynamic > method = Array_obj<Dynamic >::__new().Add($t1);
		if (!this->listeners->exists(name)){
			return null();
		}

		BEGIN_LOCAL_FUNC1(_Function_1,Array<Dynamic >,method)
		bool run(Dynamic x){
{
				return Reflect_obj::compareMethods(method->__get(0),x);
			}
			return null();
		}
		END_LOCAL_FUNC1(return)

		this->listeners->set(name,this->listeners->get(name).Cast<List >()->filter( Dynamic(new _Function_1(method))));
	}
return null();
}


DEFINE_DYNAMIC_FUNC3(EventSystem_obj,removeEventListener,(void))

Void EventSystem_obj::dispatchEvent( event::Event e){
{
		List these = this->listeners->get(e->name).Cast<List >();
		e->source = this->target;
		if (these != null()){
			for(Dynamic __it = these->iterator();  __it->__Field(String(L"hasNext",7))(); ){
Dynamic listener = __it->__Field(String(L"next",4))();
				{
					Reflect_obj::callMethod(null(),listener,Array_obj<event::Event >::__new().Add(e));
				}
;
			}
		}
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(EventSystem_obj,dispatchEvent,(void))


EventSystem_obj::EventSystem_obj()
{
	InitMember(listeners);
	InitMember(target);
}

Dynamic EventSystem_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 6:
		if (!memcmp(inName.__s,L"target",sizeof(wchar_t)*6) ) { return target; }
		break;
	case 9:
		if (!memcmp(inName.__s,L"listeners",sizeof(wchar_t)*9) ) { return listeners; }
		break;
	case 13:
		if (!memcmp(inName.__s,L"dispatchEvent",sizeof(wchar_t)*13) ) { return dispatchEvent_dyn(); }
		break;
	case 16:
		if (!memcmp(inName.__s,L"addEventListener",sizeof(wchar_t)*16) ) { return addEventListener_dyn(); }
		break;
	case 19:
		if (!memcmp(inName.__s,L"removeEventListener",sizeof(wchar_t)*19) ) { return removeEventListener_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_listeners = __hxcpp_field_to_id("listeners");
static int __id_target = __hxcpp_field_to_id("target");
static int __id_addEventListener = __hxcpp_field_to_id("addEventListener");
static int __id_removeEventListener = __hxcpp_field_to_id("removeEventListener");
static int __id_dispatchEvent = __hxcpp_field_to_id("dispatchEvent");


Dynamic EventSystem_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_listeners) return listeners;
	if (inFieldID==__id_target) return target;
	if (inFieldID==__id_addEventListener) return addEventListener_dyn();
	if (inFieldID==__id_removeEventListener) return removeEventListener_dyn();
	if (inFieldID==__id_dispatchEvent) return dispatchEvent_dyn();
	return super::__IField(inFieldID);
}

Dynamic EventSystem_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (!memcmp(inName.__s,L"target",sizeof(wchar_t)*6) ) { target=inValue.Cast<Dynamic >();return inValue; }
		break;
	case 9:
		if (!memcmp(inName.__s,L"listeners",sizeof(wchar_t)*9) ) { listeners=inValue.Cast<Hash >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void EventSystem_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"listeners",9));
	outFields->push(String(L"target",6));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"listeners",
	L"target",
	L"addEventListener",
	L"removeEventListener",
	L"dispatchEvent",
	0 };

Class EventSystem_obj::__mClass;

void EventSystem_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"event.EventSystem",17), TCanCast<EventSystem_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void EventSystem_obj::__boot()
{
}

} // end namespace event
