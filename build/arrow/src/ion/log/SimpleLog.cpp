#include <hxObject.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_ion_log_Log
#include <ion/log/Log.h>
#endif
#ifndef INCLUDED_ion_log_LogLevel
#include <ion/log/LogLevel.h>
#endif
#ifndef INCLUDED_ion_log_Logger
#include <ion/log/Logger.h>
#endif
#ifndef INCLUDED_ion_log_SimpleLog
#include <ion/log/SimpleLog.h>
#endif
namespace ion{
namespace log{

Void SimpleLog_obj::__construct(String name)
{
{
	this->logger = ion::log::Logger_obj::getInstance();
	this->name = name;
}
;
	return null();
}

SimpleLog_obj::~SimpleLog_obj() { }

Dynamic SimpleLog_obj::__CreateEmpty() { return  new SimpleLog_obj; }
hxObjectPtr<SimpleLog_obj > SimpleLog_obj::__new(String name)
{  hxObjectPtr<SimpleLog_obj > result = new SimpleLog_obj();
	result->__construct(name);
	return result;}

Dynamic SimpleLog_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<SimpleLog_obj > result = new SimpleLog_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic SimpleLog_obj::getLog( ){
	return Reflect_obj::makeVarArgs(this->_log_dyn());
}


DEFINE_DYNAMIC_FUNC0(SimpleLog_obj,getLog,return )

Void SimpleLog_obj::_log( Array<Dynamic > arr){
{
		ion::log::LogLevel level;
		ValueType _switch_1 = (Type_obj::_typeof(arr->__get(arr->length - 1)));
		switch((_switch_1)->GetIndex()){
			case 7: {
				Enum o = _switch_1->__Param(0);
{
					level = arr->pop();
				}
			}
			break;
			default: {
				level = ion::log::LogLevel_obj::info;
			}
		}
		Reflect_obj::callMethod(this,this->__Field(Std_obj::string(level)),Array_obj<Array<Dynamic > >::__new().Add(arr));
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(SimpleLog_obj,_log,(void))

Void SimpleLog_obj::info( Array<Dynamic > message){
{
		this->__trace(String(L"INFO: ",6),message);
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(SimpleLog_obj,info,(void))

Void SimpleLog_obj::debug( Array<Dynamic > message){
{
		this->__trace(String(L"DEBUG: ",7),message);
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(SimpleLog_obj,debug,(void))

Void SimpleLog_obj::warn( Array<Dynamic > message){
{
		this->__trace(String(L"WARN:",5),message);
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(SimpleLog_obj,warn,(void))

Void SimpleLog_obj::error( Array<Dynamic > message){
{
		this->__trace(String(L"ERROR: ",7),message);
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(SimpleLog_obj,error,(void))

Void SimpleLog_obj::fatal( Array<Dynamic > message){
{
		this->__trace(String(L"FATAL: ",7),message);
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(SimpleLog_obj,fatal,(void))

Void SimpleLog_obj::__trace( String begin,Array<Dynamic > message){
{
		if (this->logger->isActive(this->name)){
			haxe::Log_obj::trace(begin + this->parseString(message->shift(),message),hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"SimpleLog.hx",12))->Add( String(L"lineNumber",10) , 41)->Add( String(L"className",9) , String(L"ion.log.SimpleLog",17))->Add( String(L"methodName",10) , String(L"__trace",7)));
		}
	}
return null();
}


DEFINE_DYNAMIC_FUNC2(SimpleLog_obj,__trace,(void))

String SimpleLog_obj::parseString( String str,Array<Dynamic > $t1){
	Array<Array<Dynamic > > array = Array_obj<Array<Dynamic > >::__new().Add($t1);

	BEGIN_LOCAL_FUNC1(_Function_1,Array<Array<Dynamic > >,array)
	String run(EReg val){
{
			return array[0]->shift();
		}
		return null();
	}
	END_LOCAL_FUNC1(return)

	return ion::log::SimpleLog_obj::pattern->customReplace(str, Dynamic(new _Function_1(array)));
}


DEFINE_DYNAMIC_FUNC2(SimpleLog_obj,parseString,return )

EReg SimpleLog_obj::pattern;


SimpleLog_obj::SimpleLog_obj()
{
	InitMember(log);
	InitMember(logger);
	InitMember(name);
}

Dynamic SimpleLog_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"log",sizeof(wchar_t)*3) ) { return log; }
		break;
	case 4:
		if (!memcmp(inName.__s,L"_log",sizeof(wchar_t)*4) ) { return _log_dyn(); }
		if (!memcmp(inName.__s,L"info",sizeof(wchar_t)*4) ) { return info_dyn(); }
		if (!memcmp(inName.__s,L"warn",sizeof(wchar_t)*4) ) { return warn_dyn(); }
		if (!memcmp(inName.__s,L"name",sizeof(wchar_t)*4) ) { return name; }
		break;
	case 5:
		if (!memcmp(inName.__s,L"debug",sizeof(wchar_t)*5) ) { return debug_dyn(); }
		if (!memcmp(inName.__s,L"error",sizeof(wchar_t)*5) ) { return error_dyn(); }
		if (!memcmp(inName.__s,L"fatal",sizeof(wchar_t)*5) ) { return fatal_dyn(); }
		break;
	case 6:
		if (!memcmp(inName.__s,L"getLog",sizeof(wchar_t)*6) ) { return getLog_dyn(); }
		if (!memcmp(inName.__s,L"logger",sizeof(wchar_t)*6) ) { return logger; }
		break;
	case 7:
		if (!memcmp(inName.__s,L"pattern",sizeof(wchar_t)*7) ) { return pattern; }
		if (!memcmp(inName.__s,L"__trace",sizeof(wchar_t)*7) ) { return __trace_dyn(); }
		break;
	case 11:
		if (!memcmp(inName.__s,L"parseString",sizeof(wchar_t)*11) ) { return parseString_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_pattern = __hxcpp_field_to_id("pattern");
static int __id_log = __hxcpp_field_to_id("log");
static int __id_getLog = __hxcpp_field_to_id("getLog");
static int __id__log = __hxcpp_field_to_id("_log");
static int __id_info = __hxcpp_field_to_id("info");
static int __id_debug = __hxcpp_field_to_id("debug");
static int __id_warn = __hxcpp_field_to_id("warn");
static int __id_error = __hxcpp_field_to_id("error");
static int __id_fatal = __hxcpp_field_to_id("fatal");
static int __id___trace = __hxcpp_field_to_id("__trace");
static int __id_parseString = __hxcpp_field_to_id("parseString");
static int __id_logger = __hxcpp_field_to_id("logger");
static int __id_name = __hxcpp_field_to_id("name");


Dynamic SimpleLog_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_pattern) return pattern;
	if (inFieldID==__id_log) return log;
	if (inFieldID==__id_getLog) return getLog_dyn();
	if (inFieldID==__id__log) return _log_dyn();
	if (inFieldID==__id_info) return info_dyn();
	if (inFieldID==__id_debug) return debug_dyn();
	if (inFieldID==__id_warn) return warn_dyn();
	if (inFieldID==__id_error) return error_dyn();
	if (inFieldID==__id_fatal) return fatal_dyn();
	if (inFieldID==__id___trace) return __trace_dyn();
	if (inFieldID==__id_parseString) return parseString_dyn();
	if (inFieldID==__id_logger) return logger;
	if (inFieldID==__id_name) return name;
	return super::__IField(inFieldID);
}

Dynamic SimpleLog_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"log",sizeof(wchar_t)*3) ) { log=inValue.Cast<Dynamic >();return inValue; }
		break;
	case 4:
		if (!memcmp(inName.__s,L"name",sizeof(wchar_t)*4) ) { name=inValue.Cast<String >();return inValue; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"logger",sizeof(wchar_t)*6) ) { logger=inValue.Cast<ion::log::Logger >();return inValue; }
		break;
	case 7:
		if (!memcmp(inName.__s,L"pattern",sizeof(wchar_t)*7) ) { pattern=inValue.Cast<EReg >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void SimpleLog_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"log",3));
	outFields->push(String(L"logger",6));
	outFields->push(String(L"name",4));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"pattern",
	0 };

static wchar_t *sMemberFields[] = {
	L"log",
	L"getLog",
	L"_log",
	L"info",
	L"debug",
	L"warn",
	L"error",
	L"fatal",
	L"__trace",
	L"parseString",
	L"logger",
	L"name",
	0 };

Class SimpleLog_obj::__mClass;

void SimpleLog_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"ion.log.SimpleLog",17), TCanCast<SimpleLog_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void SimpleLog_obj::__boot()
{
	Static(pattern) = EReg_obj::__new(String(L"\\$[0-9]",7),String(L"g",1));
}

} // end namespace ion
} // end namespace log
