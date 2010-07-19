#include <hxObject.h>

#ifndef INCLUDED_util_EventUtil
#include <util/EventUtil.h>
#endif
namespace util{

Void EventUtil_obj::__construct()
{
	return null();
}

EventUtil_obj::~EventUtil_obj() { }

Dynamic EventUtil_obj::__CreateEmpty() { return  new EventUtil_obj; }
hxObjectPtr<EventUtil_obj > EventUtil_obj::__new()
{  hxObjectPtr<EventUtil_obj > result = new EventUtil_obj();
	result->__construct();
	return result;}

Dynamic EventUtil_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<EventUtil_obj > result = new EventUtil_obj();
	result->__construct();
	return result;}


EventUtil_obj::EventUtil_obj()
{
}

Dynamic EventUtil_obj::__Field(const String &inName)
{
	return super::__Field(inName);
}



Dynamic EventUtil_obj::__IField(int inFieldID)
{
	return super::__IField(inFieldID);
}

Dynamic EventUtil_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void EventUtil_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class EventUtil_obj::__mClass;

void EventUtil_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"util.EventUtil",14), TCanCast<EventUtil_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void EventUtil_obj::__boot()
{
}

} // end namespace util
