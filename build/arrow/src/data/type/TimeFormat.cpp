#include <hxObject.h>

#ifndef INCLUDED_data_type_TimeFormat
#include <data/type/TimeFormat.h>
#endif
namespace data{
namespace type{

TimeFormat TimeFormat_obj::day;

TimeFormat TimeFormat_obj::hour;

TimeFormat TimeFormat_obj::millisecond;

TimeFormat TimeFormat_obj::minute;

TimeFormat TimeFormat_obj::second;

DEFINE_CREATE_ENUM(TimeFormat_obj)

int TimeFormat_obj::__FindIndex(String inName)
{
	if (inName==String(L"day",3)) return 4;
	if (inName==String(L"hour",4)) return 3;
	if (inName==String(L"millisecond",11)) return 0;
	if (inName==String(L"minute",6)) return 2;
	if (inName==String(L"second",6)) return 1;
	return super::__FindIndex(inName);
}

int TimeFormat_obj::__FindArgCount(String inName)
{
	if (inName==String(L"day",3)) return 0;
	if (inName==String(L"hour",4)) return 0;
	if (inName==String(L"millisecond",11)) return 0;
	if (inName==String(L"minute",6)) return 0;
	if (inName==String(L"second",6)) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TimeFormat_obj::__Field(const String &inName)
{
	if (inName==String(L"day",3)) return day;
	if (inName==String(L"hour",4)) return hour;
	if (inName==String(L"millisecond",11)) return millisecond;
	if (inName==String(L"minute",6)) return minute;
	if (inName==String(L"second",6)) return second;
	return super::__Field(inName);
}

static wchar_t *sStaticFields[] = {
	L"day",
	L"hour",
	L"millisecond",
	L"minute",
	L"second",
	0 };

static wchar_t *sMemberFields[] = { 0 };
Class TimeFormat_obj::__mClass;

Dynamic __Create_TimeFormat_obj() { return new TimeFormat_obj; }

void TimeFormat_obj::__register()
{

Static(__mClass) = RegisterClass(String(L"data.type.TimeFormat",20), TCanCast<TimeFormat_obj >,sStaticFields,sMemberFields,
	&__Create_TimeFormat_obj, &__Create,
	&super::__SGetClass(), &CreateTimeFormat_obj);
}

void TimeFormat_obj::__boot()
{
Static(day) = CreateEnum<TimeFormat_obj >(String(L"day",3),4);
Static(hour) = CreateEnum<TimeFormat_obj >(String(L"hour",4),3);
Static(millisecond) = CreateEnum<TimeFormat_obj >(String(L"millisecond",11),0);
Static(minute) = CreateEnum<TimeFormat_obj >(String(L"minute",6),2);
Static(second) = CreateEnum<TimeFormat_obj >(String(L"second",6),1);
}


} // end namespace data
} // end namespace type
