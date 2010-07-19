#include <hxObject.h>

#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrowInstance
#include <arrow/AsyncArrowInstance.h>
#endif
#ifndef INCLUDED_arrow_combinators_ProgressArrow
#include <arrow/combinators/ProgressArrow.h>
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
namespace arrow{
namespace combinators{

Void ProgressArrow_obj::__construct(arrow::AsyncArrowInstance instance)
{
{
	this->instance = instance;
	Array<arrow::combinators::ProgressArrow > self = Array_obj<arrow::combinators::ProgressArrow >::__new().Add(this);
	this->event_sys = event::EventSystem_obj::__new(this);

	BEGIN_LOCAL_FUNC1(_Function_1,Array<arrow::combinators::ProgressArrow >,self)
	Void run(Dynamic x,Dynamic a){
{
			a->__Field(String(L"cont",4))(self->__get(0));
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	super::__construct( Dynamic(new _Function_1(self)));
}
;
	return null();
}

ProgressArrow_obj::~ProgressArrow_obj() { }

Dynamic ProgressArrow_obj::__CreateEmpty() { return  new ProgressArrow_obj; }
hxObjectPtr<ProgressArrow_obj > ProgressArrow_obj::__new(arrow::AsyncArrowInstance instance)
{  hxObjectPtr<ProgressArrow_obj > result = new ProgressArrow_obj();
	result->__construct(instance);
	return result;}

Dynamic ProgressArrow_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<ProgressArrow_obj > result = new ProgressArrow_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ProgressArrow_obj::cancel( ){
{
		this->instance->cancel();
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(ProgressArrow_obj,cancel,(void))

Void ProgressArrow_obj::addEventListener( String name,Dynamic method,Dynamic params){
{
		this->event_sys->addEventListener(name,method,null());
	}
return null();
}


DEFINE_DYNAMIC_FUNC3(ProgressArrow_obj,addEventListener,(void))

Void ProgressArrow_obj::removeEventListener( String name,Dynamic method,Dynamic params){
{
		this->event_sys->removeEventListener(name,method,null());
	}
return null();
}


DEFINE_DYNAMIC_FUNC3(ProgressArrow_obj,removeEventListener,(void))

Void ProgressArrow_obj::dispatchEvent( event::Event e){
{
		this->event_sys->dispatchEvent(e);
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(ProgressArrow_obj,dispatchEvent,(void))


ProgressArrow_obj::ProgressArrow_obj()
{
	InitMember(instance);
	InitMember(event_sys);
}

Dynamic ProgressArrow_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 6:
		if (!memcmp(inName.__s,L"cancel",sizeof(wchar_t)*6) ) { return cancel_dyn(); }
		break;
	case 8:
		if (!memcmp(inName.__s,L"instance",sizeof(wchar_t)*8) ) { return instance; }
		break;
	case 9:
		if (!memcmp(inName.__s,L"event_sys",sizeof(wchar_t)*9) ) { return event_sys; }
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

static int __id_instance = __hxcpp_field_to_id("instance");
static int __id_event_sys = __hxcpp_field_to_id("event_sys");
static int __id_cancel = __hxcpp_field_to_id("cancel");
static int __id_addEventListener = __hxcpp_field_to_id("addEventListener");
static int __id_removeEventListener = __hxcpp_field_to_id("removeEventListener");
static int __id_dispatchEvent = __hxcpp_field_to_id("dispatchEvent");


Dynamic ProgressArrow_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_instance) return instance;
	if (inFieldID==__id_event_sys) return event_sys;
	if (inFieldID==__id_cancel) return cancel_dyn();
	if (inFieldID==__id_addEventListener) return addEventListener_dyn();
	if (inFieldID==__id_removeEventListener) return removeEventListener_dyn();
	if (inFieldID==__id_dispatchEvent) return dispatchEvent_dyn();
	return super::__IField(inFieldID);
}

Dynamic ProgressArrow_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 8:
		if (!memcmp(inName.__s,L"instance",sizeof(wchar_t)*8) ) { instance=inValue.Cast<arrow::AsyncArrowInstance >();return inValue; }
		break;
	case 9:
		if (!memcmp(inName.__s,L"event_sys",sizeof(wchar_t)*9) ) { event_sys=inValue.Cast<event::EventSystem >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void ProgressArrow_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"instance",8));
	outFields->push(String(L"event_sys",9));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"instance",
	L"event_sys",
	L"cancel",
	L"addEventListener",
	L"removeEventListener",
	L"dispatchEvent",
	0 };

Class ProgressArrow_obj::__mClass;

void ProgressArrow_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.combinators.ProgressArrow",31), TCanCast<ProgressArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void ProgressArrow_obj::__boot()
{
}

} // end namespace arrow
} // end namespace combinators
