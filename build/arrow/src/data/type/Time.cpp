#include <hxObject.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_data_type_Time
#include <data/type/Time.h>
#endif
#ifndef INCLUDED_data_type_TimeFormat
#include <data/type/TimeFormat.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
namespace data{
namespace type{

Void Time_obj::__construct(Dynamic timeDifference,data::type::TimeFormat format)
{
{
	format = format != null() ? data::type::TimeFormat( format ) : data::type::TimeFormat( data::type::TimeFormat_obj::millisecond );
	this->doEval = true;
	if (timeDifference != null()){
		this->setValue(timeDifference,format);
	}
}
;
	return null();
}

Time_obj::~Time_obj() { }

Dynamic Time_obj::__CreateEmpty() { return  new Time_obj; }
hxObjectPtr<Time_obj > Time_obj::__new(Dynamic timeDifference,data::type::TimeFormat format)
{  hxObjectPtr<Time_obj > result = new Time_obj();
	result->__construct(timeDifference,format);
	return result;}

Dynamic Time_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Time_obj > result = new Time_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

data::type::Time Time_obj::setValue( double timeDifference,data::type::TimeFormat format){
	data::type::TimeFormat _switch_1 = (format);
	switch((_switch_1)->GetIndex()){
		case 4: {
			this->ms = timeDifference * data::type::Time_obj::DAY;
		}
		break;
		case 3: {
			this->ms = timeDifference * data::type::Time_obj::HOUR;
		}
		break;
		case 2: {
			this->ms = timeDifference * data::type::Time_obj::MINUTE;
		}
		break;
		case 1: {
			this->ms = timeDifference * data::type::Time_obj::SECOND;
		}
		break;
		default: {
			this->ms = timeDifference;
		}
	}
	this->doEval = true;
	return this;
}


DEFINE_DYNAMIC_FUNC2(Time_obj,setValue,return )

data::type::Time Time_obj::plus( data::type::Time timeDifference){
	return data::type::Time_obj::__new(this->ms + timeDifference->inMilliSeconds(),null());
}


DEFINE_DYNAMIC_FUNC1(Time_obj,plus,return )

data::type::Time Time_obj::minus( data::type::Time timeDifference){
	return data::type::Time_obj::__new(this->ms - timeDifference->inMilliSeconds(),null());
}


DEFINE_DYNAMIC_FUNC1(Time_obj,minus,return )

double Time_obj::getMilliSeconds( Dynamic round){
	if (this->doEval)
		this->evaluate();
	if (round == null()){
		return this->milliSeconds;
	}
	else{
		struct _Function_1{
			static double Block( Dynamic &round,data::type::Time_obj *__this)/* DEF (ret block)(not intern) */{
				double r = Math_obj::pow(10,round);
				return double(Math_obj::floor(__this->milliSeconds * r)) / double(r);
			}
		};
		return _Function_1::Block(round,this);
	}
}


DEFINE_DYNAMIC_FUNC1(Time_obj,getMilliSeconds,return )

double Time_obj::inMilliSeconds( ){
	return this->ms;
}


DEFINE_DYNAMIC_FUNC0(Time_obj,inMilliSeconds,return )

double Time_obj::getSeconds( Dynamic round){
	if (this->doEval)
		this->evaluate();
	if (round == null()){
		return this->seconds;
	}
	else{
		struct _Function_1{
			static double Block( Dynamic &round,data::type::Time_obj *__this)/* DEF (ret block)(not intern) */{
				double r = Math_obj::pow(10,round);
				return double(Math_obj::floor(__this->seconds * r)) / double(r);
			}
		};
		return _Function_1::Block(round,this);
	}
}


DEFINE_DYNAMIC_FUNC1(Time_obj,getSeconds,return )

double Time_obj::inSeconds( ){
	return double(this->ms) / double(data::type::Time_obj::SECOND);
}


DEFINE_DYNAMIC_FUNC0(Time_obj,inSeconds,return )

double Time_obj::getMinutes( Dynamic round){
	if (this->doEval)
		this->evaluate();
	if (round == null()){
		return this->minutes;
	}
	else{
		struct _Function_1{
			static double Block( Dynamic &round,data::type::Time_obj *__this)/* DEF (ret block)(not intern) */{
				double r = Math_obj::pow(10,round);
				return double(Math_obj::floor(__this->minutes * r)) / double(r);
			}
		};
		return _Function_1::Block(round,this);
	}
}


DEFINE_DYNAMIC_FUNC1(Time_obj,getMinutes,return )

double Time_obj::inMinutes( ){
	return double(this->ms) / double(data::type::Time_obj::MINUTE);
}


DEFINE_DYNAMIC_FUNC0(Time_obj,inMinutes,return )

double Time_obj::getHours( Dynamic round){
	if (this->doEval)
		this->evaluate();
	if (round == null()){
		return this->hours;
	}
	else{
		struct _Function_1{
			static double Block( Dynamic &round,data::type::Time_obj *__this)/* DEF (ret block)(not intern) */{
				double r = Math_obj::pow(10,round);
				return double(Math_obj::floor(__this->hours * r)) / double(r);
			}
		};
		return _Function_1::Block(round,this);
	}
}


DEFINE_DYNAMIC_FUNC1(Time_obj,getHours,return )

double Time_obj::inHours( ){
	return double(this->ms) / double(data::type::Time_obj::HOUR);
}


DEFINE_DYNAMIC_FUNC0(Time_obj,inHours,return )

double Time_obj::getDays( Dynamic round){
	if (this->doEval)
		this->evaluate();
	if (round == null()){
		return this->days;
	}
	else{
		struct _Function_1{
			static double Block( Dynamic &round,data::type::Time_obj *__this)/* DEF (ret block)(not intern) */{
				double r = Math_obj::pow(10,round);
				return double(Math_obj::floor(__this->days * r)) / double(r);
			}
		};
		return _Function_1::Block(round,this);
	}
}


DEFINE_DYNAMIC_FUNC1(Time_obj,getDays,return )

double Time_obj::inDays( ){
	return double(this->ms) / double(data::type::Time_obj::DAY);
}


DEFINE_DYNAMIC_FUNC0(Time_obj,inDays,return )

String Time_obj::toString( ){
	return String(L"",0) + this->getDays(0) + String(L"d ",2) + this->getHours(0) + String(L":",1) + this->getMinutes(0) + String(L":",1) + this->getSeconds(0) + String(L".",1) + this->getMilliSeconds(0);
}


DEFINE_DYNAMIC_FUNC0(Time_obj,toString,return )

Void Time_obj::evaluate( ){
{
		int negative = (this->ms >= 0) ? int( 1 ) : int( -1 );
		double rest = this->ms;
		this->days = double(rest) / double(data::type::Time_obj::DAY);
		hxSubEq(rest,negative * Math_obj::floor(this->days) * data::type::Time_obj::DAY);
		this->hours = double(rest) / double(data::type::Time_obj::HOUR);
		hxSubEq(rest,negative * Math_obj::floor(this->hours) * data::type::Time_obj::HOUR);
		this->minutes = double(rest) / double(data::type::Time_obj::MINUTE);
		hxSubEq(rest,negative * Math_obj::floor(this->minutes) * data::type::Time_obj::MINUTE);
		this->seconds = double(rest) / double(data::type::Time_obj::SECOND);
		hxSubEq(rest,negative * Math_obj::floor(this->seconds) * data::type::Time_obj::SECOND);
		this->milliSeconds = rest;
		this->doEval = false;
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(Time_obj,evaluate,(void))

data::type::Time Time_obj::fromTimeStamp( ){
	return data::type::Time_obj::__new(haxe::Timer_obj::stamp(),data::type::TimeFormat_obj::second);
}


STATIC_DEFINE_DYNAMIC_FUNC0(Time_obj,fromTimeStamp,return )

double Time_obj::SECOND;

double Time_obj::MINUTE;

double Time_obj::HOUR;

double Time_obj::DAY;


Time_obj::Time_obj()
{
	InitMember(ms);
	InitMember(days);
	InitMember(hours);
	InitMember(minutes);
	InitMember(seconds);
	InitMember(milliSeconds);
	InitMember(doEval);
}

Dynamic Time_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 2:
		if (!memcmp(inName.__s,L"ms",sizeof(wchar_t)*2) ) { return ms; }
		break;
	case 3:
		if (!memcmp(inName.__s,L"DAY",sizeof(wchar_t)*3) ) { return DAY; }
		break;
	case 4:
		if (!memcmp(inName.__s,L"HOUR",sizeof(wchar_t)*4) ) { return HOUR; }
		if (!memcmp(inName.__s,L"plus",sizeof(wchar_t)*4) ) { return plus_dyn(); }
		if (!memcmp(inName.__s,L"days",sizeof(wchar_t)*4) ) { return days; }
		break;
	case 5:
		if (!memcmp(inName.__s,L"minus",sizeof(wchar_t)*5) ) { return minus_dyn(); }
		if (!memcmp(inName.__s,L"hours",sizeof(wchar_t)*5) ) { return hours; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"SECOND",sizeof(wchar_t)*6) ) { return SECOND; }
		if (!memcmp(inName.__s,L"MINUTE",sizeof(wchar_t)*6) ) { return MINUTE; }
		if (!memcmp(inName.__s,L"inDays",sizeof(wchar_t)*6) ) { return inDays_dyn(); }
		if (!memcmp(inName.__s,L"doEval",sizeof(wchar_t)*6) ) { return doEval; }
		break;
	case 7:
		if (!memcmp(inName.__s,L"inHours",sizeof(wchar_t)*7) ) { return inHours_dyn(); }
		if (!memcmp(inName.__s,L"getDays",sizeof(wchar_t)*7) ) { return getDays_dyn(); }
		if (!memcmp(inName.__s,L"minutes",sizeof(wchar_t)*7) ) { return minutes; }
		if (!memcmp(inName.__s,L"seconds",sizeof(wchar_t)*7) ) { return seconds; }
		break;
	case 8:
		if (!memcmp(inName.__s,L"setValue",sizeof(wchar_t)*8) ) { return setValue_dyn(); }
		if (!memcmp(inName.__s,L"getHours",sizeof(wchar_t)*8) ) { return getHours_dyn(); }
		if (!memcmp(inName.__s,L"toString",sizeof(wchar_t)*8) ) { return toString_dyn(); }
		if (!memcmp(inName.__s,L"evaluate",sizeof(wchar_t)*8) ) { return evaluate_dyn(); }
		break;
	case 9:
		if (!memcmp(inName.__s,L"inSeconds",sizeof(wchar_t)*9) ) { return inSeconds_dyn(); }
		if (!memcmp(inName.__s,L"inMinutes",sizeof(wchar_t)*9) ) { return inMinutes_dyn(); }
		break;
	case 10:
		if (!memcmp(inName.__s,L"getSeconds",sizeof(wchar_t)*10) ) { return getSeconds_dyn(); }
		if (!memcmp(inName.__s,L"getMinutes",sizeof(wchar_t)*10) ) { return getMinutes_dyn(); }
		break;
	case 12:
		if (!memcmp(inName.__s,L"milliSeconds",sizeof(wchar_t)*12) ) { return milliSeconds; }
		break;
	case 13:
		if (!memcmp(inName.__s,L"fromTimeStamp",sizeof(wchar_t)*13) ) { return fromTimeStamp_dyn(); }
		break;
	case 14:
		if (!memcmp(inName.__s,L"inMilliSeconds",sizeof(wchar_t)*14) ) { return inMilliSeconds_dyn(); }
		break;
	case 15:
		if (!memcmp(inName.__s,L"getMilliSeconds",sizeof(wchar_t)*15) ) { return getMilliSeconds_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_fromTimeStamp = __hxcpp_field_to_id("fromTimeStamp");
static int __id_SECOND = __hxcpp_field_to_id("SECOND");
static int __id_MINUTE = __hxcpp_field_to_id("MINUTE");
static int __id_HOUR = __hxcpp_field_to_id("HOUR");
static int __id_DAY = __hxcpp_field_to_id("DAY");
static int __id_setValue = __hxcpp_field_to_id("setValue");
static int __id_plus = __hxcpp_field_to_id("plus");
static int __id_minus = __hxcpp_field_to_id("minus");
static int __id_getMilliSeconds = __hxcpp_field_to_id("getMilliSeconds");
static int __id_inMilliSeconds = __hxcpp_field_to_id("inMilliSeconds");
static int __id_getSeconds = __hxcpp_field_to_id("getSeconds");
static int __id_inSeconds = __hxcpp_field_to_id("inSeconds");
static int __id_getMinutes = __hxcpp_field_to_id("getMinutes");
static int __id_inMinutes = __hxcpp_field_to_id("inMinutes");
static int __id_getHours = __hxcpp_field_to_id("getHours");
static int __id_inHours = __hxcpp_field_to_id("inHours");
static int __id_getDays = __hxcpp_field_to_id("getDays");
static int __id_inDays = __hxcpp_field_to_id("inDays");
static int __id_toString = __hxcpp_field_to_id("toString");
static int __id_evaluate = __hxcpp_field_to_id("evaluate");
static int __id_ms = __hxcpp_field_to_id("ms");
static int __id_days = __hxcpp_field_to_id("days");
static int __id_hours = __hxcpp_field_to_id("hours");
static int __id_minutes = __hxcpp_field_to_id("minutes");
static int __id_seconds = __hxcpp_field_to_id("seconds");
static int __id_milliSeconds = __hxcpp_field_to_id("milliSeconds");
static int __id_doEval = __hxcpp_field_to_id("doEval");


Dynamic Time_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_fromTimeStamp) return fromTimeStamp_dyn();
	if (inFieldID==__id_SECOND) return SECOND;
	if (inFieldID==__id_MINUTE) return MINUTE;
	if (inFieldID==__id_HOUR) return HOUR;
	if (inFieldID==__id_DAY) return DAY;
	if (inFieldID==__id_setValue) return setValue_dyn();
	if (inFieldID==__id_plus) return plus_dyn();
	if (inFieldID==__id_minus) return minus_dyn();
	if (inFieldID==__id_getMilliSeconds) return getMilliSeconds_dyn();
	if (inFieldID==__id_inMilliSeconds) return inMilliSeconds_dyn();
	if (inFieldID==__id_getSeconds) return getSeconds_dyn();
	if (inFieldID==__id_inSeconds) return inSeconds_dyn();
	if (inFieldID==__id_getMinutes) return getMinutes_dyn();
	if (inFieldID==__id_inMinutes) return inMinutes_dyn();
	if (inFieldID==__id_getHours) return getHours_dyn();
	if (inFieldID==__id_inHours) return inHours_dyn();
	if (inFieldID==__id_getDays) return getDays_dyn();
	if (inFieldID==__id_inDays) return inDays_dyn();
	if (inFieldID==__id_toString) return toString_dyn();
	if (inFieldID==__id_evaluate) return evaluate_dyn();
	if (inFieldID==__id_ms) return ms;
	if (inFieldID==__id_days) return days;
	if (inFieldID==__id_hours) return hours;
	if (inFieldID==__id_minutes) return minutes;
	if (inFieldID==__id_seconds) return seconds;
	if (inFieldID==__id_milliSeconds) return milliSeconds;
	if (inFieldID==__id_doEval) return doEval;
	return super::__IField(inFieldID);
}

Dynamic Time_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 2:
		if (!memcmp(inName.__s,L"ms",sizeof(wchar_t)*2) ) { ms=inValue.Cast<double >();return inValue; }
		break;
	case 3:
		if (!memcmp(inName.__s,L"DAY",sizeof(wchar_t)*3) ) { DAY=inValue.Cast<double >();return inValue; }
		break;
	case 4:
		if (!memcmp(inName.__s,L"HOUR",sizeof(wchar_t)*4) ) { HOUR=inValue.Cast<double >();return inValue; }
		if (!memcmp(inName.__s,L"days",sizeof(wchar_t)*4) ) { days=inValue.Cast<double >();return inValue; }
		break;
	case 5:
		if (!memcmp(inName.__s,L"hours",sizeof(wchar_t)*5) ) { hours=inValue.Cast<double >();return inValue; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"SECOND",sizeof(wchar_t)*6) ) { SECOND=inValue.Cast<double >();return inValue; }
		if (!memcmp(inName.__s,L"MINUTE",sizeof(wchar_t)*6) ) { MINUTE=inValue.Cast<double >();return inValue; }
		if (!memcmp(inName.__s,L"doEval",sizeof(wchar_t)*6) ) { doEval=inValue.Cast<bool >();return inValue; }
		break;
	case 7:
		if (!memcmp(inName.__s,L"minutes",sizeof(wchar_t)*7) ) { minutes=inValue.Cast<double >();return inValue; }
		if (!memcmp(inName.__s,L"seconds",sizeof(wchar_t)*7) ) { seconds=inValue.Cast<double >();return inValue; }
		break;
	case 12:
		if (!memcmp(inName.__s,L"milliSeconds",sizeof(wchar_t)*12) ) { milliSeconds=inValue.Cast<double >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Time_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"ms",2));
	outFields->push(String(L"days",4));
	outFields->push(String(L"hours",5));
	outFields->push(String(L"minutes",7));
	outFields->push(String(L"seconds",7));
	outFields->push(String(L"milliSeconds",12));
	outFields->push(String(L"doEval",6));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"fromTimeStamp",
	L"SECOND",
	L"MINUTE",
	L"HOUR",
	L"DAY",
	0 };

static wchar_t *sMemberFields[] = {
	L"setValue",
	L"plus",
	L"minus",
	L"getMilliSeconds",
	L"inMilliSeconds",
	L"getSeconds",
	L"inSeconds",
	L"getMinutes",
	L"inMinutes",
	L"getHours",
	L"inHours",
	L"getDays",
	L"inDays",
	L"toString",
	L"evaluate",
	L"ms",
	L"days",
	L"hours",
	L"minutes",
	L"seconds",
	L"milliSeconds",
	L"doEval",
	0 };

Class Time_obj::__mClass;

void Time_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"data.type.Time",14), TCanCast<Time_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Time_obj::__boot()
{
	Static(SECOND) = 1000;
	Static(MINUTE) = data::type::Time_obj::SECOND * 60;
	Static(HOUR) = data::type::Time_obj::MINUTE * 60;
	Static(DAY) = data::type::Time_obj::HOUR * 24;
}

} // end namespace data
} // end namespace type
