#include <hxObject.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxunit_TestResult
#include <hxunit/TestResult.h>
#endif
#ifndef INCLUDED_hxunit_responder_SimpleResponder
#include <hxunit/responder/SimpleResponder.h>
#endif
#ifndef INCLUDED_hxunit_responder_TestResponder
#include <hxunit/responder/TestResponder.h>
#endif
namespace hxunit{
namespace responder{

Void SimpleResponder_obj::__construct()
{
{
}
;
	return null();
}

SimpleResponder_obj::~SimpleResponder_obj() { }

Dynamic SimpleResponder_obj::__CreateEmpty() { return  new SimpleResponder_obj; }
hxObjectPtr<SimpleResponder_obj > SimpleResponder_obj::__new()
{  hxObjectPtr<SimpleResponder_obj > result = new SimpleResponder_obj();
	result->__construct();
	return result;}

Dynamic SimpleResponder_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<SimpleResponder_obj > result = new SimpleResponder_obj();
	result->__construct();
	return result;}

Void SimpleResponder_obj::begin( ){
{
		haxe::Log_obj::trace(String(L"testing...",10),hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"SimpleResponder.hx",18))->Add( String(L"lineNumber",10) , 6)->Add( String(L"className",9) , String(L"hxunit.responder.SimpleResponder",32))->Add( String(L"methodName",10) , String(L"begin",5)));
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(SimpleResponder_obj,begin,(void))

Void SimpleResponder_obj::consume( hxunit::TestResult v){
{
		haxe::Log_obj::trace(v,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"SimpleResponder.hx",18))->Add( String(L"lineNumber",10) , 9)->Add( String(L"className",9) , String(L"hxunit.responder.SimpleResponder",32))->Add( String(L"methodName",10) , String(L"consume",7)));
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(SimpleResponder_obj,consume,(void))

Void SimpleResponder_obj::end( ){
{
		haxe::Log_obj::trace(String(L"done",4),hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"SimpleResponder.hx",18))->Add( String(L"lineNumber",10) , 12)->Add( String(L"className",9) , String(L"hxunit.responder.SimpleResponder",32))->Add( String(L"methodName",10) , String(L"end",3)));
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(SimpleResponder_obj,end,(void))


SimpleResponder_obj::SimpleResponder_obj()
{
}

Dynamic SimpleResponder_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"end",sizeof(wchar_t)*3) ) { return end_dyn(); }
		break;
	case 5:
		if (!memcmp(inName.__s,L"begin",sizeof(wchar_t)*5) ) { return begin_dyn(); }
		break;
	case 7:
		if (!memcmp(inName.__s,L"consume",sizeof(wchar_t)*7) ) { return consume_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_begin = __hxcpp_field_to_id("begin");
static int __id_consume = __hxcpp_field_to_id("consume");
static int __id_end = __hxcpp_field_to_id("end");


Dynamic SimpleResponder_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_begin) return begin_dyn();
	if (inFieldID==__id_consume) return consume_dyn();
	if (inFieldID==__id_end) return end_dyn();
	return super::__IField(inFieldID);
}

Dynamic SimpleResponder_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void SimpleResponder_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"begin",
	L"consume",
	L"end",
	0 };

Class SimpleResponder_obj::__mClass;

void SimpleResponder_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"hxunit.responder.SimpleResponder",32), TCanCast<SimpleResponder_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void SimpleResponder_obj::__boot()
{
}

} // end namespace hxunit
} // end namespace responder
