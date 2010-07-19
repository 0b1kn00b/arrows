#include <hxObject.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
namespace haxe{

Void Log_obj::__construct()
{
	return null();
}

Log_obj::~Log_obj() { }

Dynamic Log_obj::__CreateEmpty() { return  new Log_obj; }
hxObjectPtr<Log_obj > Log_obj::__new()
{  hxObjectPtr<Log_obj > result = new Log_obj();
	result->__construct();
	return result;}

Dynamic Log_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Log_obj > result = new Log_obj();
	result->__construct();
	return result;}

Void Log_obj::trace( Dynamic v,Dynamic infos){
{
		__trace(v,infos);
	}
return null();
}


STATIC_DEFINE_DYNAMIC_FUNC2(Log_obj,trace,(void))

Void Log_obj::clear( ){
{
	}
return null();
}


STATIC_DEFINE_DYNAMIC_FUNC0(Log_obj,clear,(void))


Log_obj::Log_obj()
{
}

Dynamic Log_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 5:
		if (!memcmp(inName.__s,L"trace",sizeof(wchar_t)*5) ) { return trace_dyn(); }
		if (!memcmp(inName.__s,L"clear",sizeof(wchar_t)*5) ) { return clear_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_trace = __hxcpp_field_to_id("trace");
static int __id_clear = __hxcpp_field_to_id("clear");


Dynamic Log_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_trace) return trace_dyn();
	if (inFieldID==__id_clear) return clear_dyn();
	return super::__IField(inFieldID);
}

Dynamic Log_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Log_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"trace",
	L"clear",
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class Log_obj::__mClass;

void Log_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"haxe.Log",8), TCanCast<Log_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Log_obj::__boot()
{
}

} // end namespace haxe
