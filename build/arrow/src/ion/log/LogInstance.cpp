#include <hxObject.h>

#ifndef INCLUDED_ion_log_Log
#include <ion/log/Log.h>
#endif
#ifndef INCLUDED_ion_log_LogInstance
#include <ion/log/LogInstance.h>
#endif
namespace ion{
namespace log{

Void LogInstance_obj::__construct(ion::log::Log log)
{
{
	this->log = log;
	this->active = true;
}
;
	return null();
}

LogInstance_obj::~LogInstance_obj() { }

Dynamic LogInstance_obj::__CreateEmpty() { return  new LogInstance_obj; }
hxObjectPtr<LogInstance_obj > LogInstance_obj::__new(ion::log::Log log)
{  hxObjectPtr<LogInstance_obj > result = new LogInstance_obj();
	result->__construct(log);
	return result;}

Dynamic LogInstance_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<LogInstance_obj > result = new LogInstance_obj();
	result->__construct(inArgs[0]);
	return result;}


LogInstance_obj::LogInstance_obj()
{
	InitMember(active);
	InitMember(log);
}

Dynamic LogInstance_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"log",sizeof(wchar_t)*3) ) { return log; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"active",sizeof(wchar_t)*6) ) { return active; }
	}
	return super::__Field(inName);
}

static int __id_active = __hxcpp_field_to_id("active");
static int __id_log = __hxcpp_field_to_id("log");


Dynamic LogInstance_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_active) return active;
	if (inFieldID==__id_log) return log;
	return super::__IField(inFieldID);
}

Dynamic LogInstance_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"log",sizeof(wchar_t)*3) ) { log=inValue.Cast<ion::log::Log >();return inValue; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"active",sizeof(wchar_t)*6) ) { active=inValue.Cast<bool >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void LogInstance_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"active",6));
	outFields->push(String(L"log",3));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"active",
	L"log",
	0 };

Class LogInstance_obj::__mClass;

void LogInstance_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"ion.log.LogInstance",19), TCanCast<LogInstance_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void LogInstance_obj::__boot()
{
}

} // end namespace ion
} // end namespace log
