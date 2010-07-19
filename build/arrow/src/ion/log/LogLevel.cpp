#include <hxObject.h>

#ifndef INCLUDED_ion_log_LogLevel
#include <ion/log/LogLevel.h>
#endif
namespace ion{
namespace log{

LogLevel  LogLevel_obj::custom(String id)
	{ return CreateEnum<LogLevel_obj >(String(L"custom",6),5,DynamicArray(0,1).Add(id)); }

LogLevel LogLevel_obj::debug;

LogLevel LogLevel_obj::error;

LogLevel LogLevel_obj::fatal;

LogLevel LogLevel_obj::info;

LogLevel LogLevel_obj::warn;

DEFINE_CREATE_ENUM(LogLevel_obj)

int LogLevel_obj::__FindIndex(String inName)
{
	if (inName==String(L"custom",6)) return 5;
	if (inName==String(L"debug",5)) return 1;
	if (inName==String(L"error",5)) return 3;
	if (inName==String(L"fatal",5)) return 4;
	if (inName==String(L"info",4)) return 0;
	if (inName==String(L"warn",4)) return 2;
	return super::__FindIndex(inName);
}

STATIC_DEFINE_DYNAMIC_FUNC1(LogLevel_obj,custom,return)

int LogLevel_obj::__FindArgCount(String inName)
{
	if (inName==String(L"custom",6)) return 1;
	if (inName==String(L"debug",5)) return 0;
	if (inName==String(L"error",5)) return 0;
	if (inName==String(L"fatal",5)) return 0;
	if (inName==String(L"info",4)) return 0;
	if (inName==String(L"warn",4)) return 0;
	return super::__FindArgCount(inName);
}

Dynamic LogLevel_obj::__Field(const String &inName)
{
	if (inName==String(L"custom",6)) return custom_dyn();
	if (inName==String(L"debug",5)) return debug;
	if (inName==String(L"error",5)) return error;
	if (inName==String(L"fatal",5)) return fatal;
	if (inName==String(L"info",4)) return info;
	if (inName==String(L"warn",4)) return warn;
	return super::__Field(inName);
}

static wchar_t *sStaticFields[] = {
	L"custom",
	L"debug",
	L"error",
	L"fatal",
	L"info",
	L"warn",
	0 };

static wchar_t *sMemberFields[] = { 0 };
Class LogLevel_obj::__mClass;

Dynamic __Create_LogLevel_obj() { return new LogLevel_obj; }

void LogLevel_obj::__register()
{

Static(__mClass) = RegisterClass(String(L"ion.log.LogLevel",16), TCanCast<LogLevel_obj >,sStaticFields,sMemberFields,
	&__Create_LogLevel_obj, &__Create,
	&super::__SGetClass(), &CreateLogLevel_obj);
}

void LogLevel_obj::__boot()
{
Static(debug) = CreateEnum<LogLevel_obj >(String(L"debug",5),1);
Static(error) = CreateEnum<LogLevel_obj >(String(L"error",5),3);
Static(fatal) = CreateEnum<LogLevel_obj >(String(L"fatal",5),4);
Static(info) = CreateEnum<LogLevel_obj >(String(L"info",4),0);
Static(warn) = CreateEnum<LogLevel_obj >(String(L"warn",4),2);
}


} // end namespace ion
} // end namespace log
