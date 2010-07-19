#include <hxObject.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_ion_log_Log
#include <ion/log/Log.h>
#endif
#ifndef INCLUDED_ion_log_LogInstance
#include <ion/log/LogInstance.h>
#endif
#ifndef INCLUDED_ion_log_Logger
#include <ion/log/Logger.h>
#endif
#ifndef INCLUDED_ion_log_SimpleLog
#include <ion/log/SimpleLog.h>
#endif
namespace ion{
namespace log{

Void Logger_obj::__construct()
{
{
	this->loggers = Hash_obj::__new();
}
;
	return null();
}

Logger_obj::~Logger_obj() { }

Dynamic Logger_obj::__CreateEmpty() { return  new Logger_obj; }
hxObjectPtr<Logger_obj > Logger_obj::__new()
{  hxObjectPtr<Logger_obj > result = new Logger_obj();
	result->__construct();
	return result;}

Dynamic Logger_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Logger_obj > result = new Logger_obj();
	result->__construct();
	return result;}

ion::log::Log Logger_obj::getLog( Dynamic __o_key){
String key = __o_key.Default(null());
{
		key = (key == null()) ? String( String(L"main",4) ) : String( key );
		if (!this->loggers->exists(key)){
			this->loggers->set(key,ion::log::LogInstance_obj::__new(ion::log::SimpleLog_obj::__new(key)));
		}
		ion::log::Log out = this->loggers->get(key).Cast<ion::log::LogInstance >()->log;
		return out;
	}
}


DEFINE_DYNAMIC_FUNC1(Logger_obj,getLog,return )

bool Logger_obj::isActive( String key){
	bool out = false;
	if (this->loggers->exists(key)){
		out = this->loggers->get(key).Cast<ion::log::LogInstance >()->active;
	}
	return out;
}


DEFINE_DYNAMIC_FUNC1(Logger_obj,isActive,return )

ion::log::Logger Logger_obj::instance;

ion::log::Logger Logger_obj::getInstance( ){
	if (ion::log::Logger_obj::instance == null()){
		ion::log::Logger_obj::instance = ion::log::Logger_obj::__new();
	}
	return ion::log::Logger_obj::instance;
}


STATIC_DEFINE_DYNAMIC_FUNC0(Logger_obj,getInstance,return )


Logger_obj::Logger_obj()
{
	InitMember(loggers);
}

Dynamic Logger_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 6:
		if (!memcmp(inName.__s,L"getLog",sizeof(wchar_t)*6) ) { return getLog_dyn(); }
		break;
	case 7:
		if (!memcmp(inName.__s,L"loggers",sizeof(wchar_t)*7) ) { return loggers; }
		break;
	case 8:
		if (!memcmp(inName.__s,L"instance",sizeof(wchar_t)*8) ) { return instance; }
		if (!memcmp(inName.__s,L"isActive",sizeof(wchar_t)*8) ) { return isActive_dyn(); }
		break;
	case 11:
		if (!memcmp(inName.__s,L"getInstance",sizeof(wchar_t)*11) ) { return getInstance_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_instance = __hxcpp_field_to_id("instance");
static int __id_getInstance = __hxcpp_field_to_id("getInstance");
static int __id_getLog = __hxcpp_field_to_id("getLog");
static int __id_isActive = __hxcpp_field_to_id("isActive");
static int __id_loggers = __hxcpp_field_to_id("loggers");


Dynamic Logger_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_instance) return instance;
	if (inFieldID==__id_getInstance) return getInstance_dyn();
	if (inFieldID==__id_getLog) return getLog_dyn();
	if (inFieldID==__id_isActive) return isActive_dyn();
	if (inFieldID==__id_loggers) return loggers;
	return super::__IField(inFieldID);
}

Dynamic Logger_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"loggers",sizeof(wchar_t)*7) ) { loggers=inValue.Cast<Hash >();return inValue; }
		break;
	case 8:
		if (!memcmp(inName.__s,L"instance",sizeof(wchar_t)*8) ) { instance=inValue.Cast<ion::log::Logger >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Logger_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"loggers",7));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"instance",
	L"getInstance",
	0 };

static wchar_t *sMemberFields[] = {
	L"getLog",
	L"isActive",
	L"loggers",
	0 };

Class Logger_obj::__mClass;

void Logger_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"ion.log.Logger",14), TCanCast<Logger_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Logger_obj::__boot()
{
	Static(instance);
}

} // end namespace ion
} // end namespace log
