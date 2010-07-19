#include <hxObject.h>

#ifndef INCLUDED_event_Event
#include <event/Event.h>
#endif
namespace event{

Void Event_obj::__construct(String name,Dynamic source)
{
{
	this->name = name;
	this->source = source;
}
;
	return null();
}

Event_obj::~Event_obj() { }

Dynamic Event_obj::__CreateEmpty() { return  new Event_obj; }
hxObjectPtr<Event_obj > Event_obj::__new(String name,Dynamic source)
{  hxObjectPtr<Event_obj > result = new Event_obj();
	result->__construct(name,source);
	return result;}

Dynamic Event_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Event_obj > result = new Event_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Event_obj::Event_obj()
{
	InitMember(name);
	InitMember(source);
}

Dynamic Event_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"name",sizeof(wchar_t)*4) ) { return name; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"source",sizeof(wchar_t)*6) ) { return source; }
	}
	return super::__Field(inName);
}

static int __id_name = __hxcpp_field_to_id("name");
static int __id_source = __hxcpp_field_to_id("source");


Dynamic Event_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_name) return name;
	if (inFieldID==__id_source) return source;
	return super::__IField(inFieldID);
}

Dynamic Event_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"name",sizeof(wchar_t)*4) ) { name=inValue.Cast<String >();return inValue; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"source",sizeof(wchar_t)*6) ) { source=inValue.Cast<Dynamic >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Event_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"name",4));
	outFields->push(String(L"source",6));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"name",
	L"source",
	0 };

Class Event_obj::__mClass;

void Event_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"event.Event",11), TCanCast<Event_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Event_obj::__boot()
{
}

} // end namespace event
