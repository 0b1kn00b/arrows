#include <hxObject.h>

#ifndef INCLUDED_arrow_ProgressEvent
#include <arrow/ProgressEvent.h>
#endif
#ifndef INCLUDED_event_Event
#include <event/Event.h>
#endif
namespace arrow{

Void ProgressEvent_obj::__construct(String name,Dynamic detail,Dynamic source)
{
{
	this->detail = detail;
	super::__construct(name,source);
}
;
	return null();
}

ProgressEvent_obj::~ProgressEvent_obj() { }

Dynamic ProgressEvent_obj::__CreateEmpty() { return  new ProgressEvent_obj; }
hxObjectPtr<ProgressEvent_obj > ProgressEvent_obj::__new(String name,Dynamic detail,Dynamic source)
{  hxObjectPtr<ProgressEvent_obj > result = new ProgressEvent_obj();
	result->__construct(name,detail,source);
	return result;}

Dynamic ProgressEvent_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<ProgressEvent_obj > result = new ProgressEvent_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


ProgressEvent_obj::ProgressEvent_obj()
{
	InitMember(detail);
}

Dynamic ProgressEvent_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 6:
		if (!memcmp(inName.__s,L"detail",sizeof(wchar_t)*6) ) { return detail; }
	}
	return super::__Field(inName);
}

static int __id_detail = __hxcpp_field_to_id("detail");


Dynamic ProgressEvent_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_detail) return detail;
	return super::__IField(inFieldID);
}

Dynamic ProgressEvent_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (!memcmp(inName.__s,L"detail",sizeof(wchar_t)*6) ) { detail=inValue.Cast<Dynamic >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void ProgressEvent_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"detail",6));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"detail",
	0 };

Class ProgressEvent_obj::__mClass;

void ProgressEvent_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.ProgressEvent",19), TCanCast<ProgressEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void ProgressEvent_obj::__boot()
{
}

} // end namespace arrow
