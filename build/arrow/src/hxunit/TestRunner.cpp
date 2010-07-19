#include <hxObject.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_hxunit_TestGenerator
#include <hxunit/TestGenerator.h>
#endif
#ifndef INCLUDED_hxunit_TestMonitor
#include <hxunit/TestMonitor.h>
#endif
#ifndef INCLUDED_hxunit_TestRunner
#include <hxunit/TestRunner.h>
#endif
#ifndef INCLUDED_hxunit_responder_SimpleResponder
#include <hxunit/responder/SimpleResponder.h>
#endif
#ifndef INCLUDED_hxunit_responder_TestResponder
#include <hxunit/responder/TestResponder.h>
#endif
namespace hxunit{

Void TestRunner_obj::__construct()
{
{
	this->gen = hxunit::TestGenerator_obj::__new();
	this->responder = hxunit::responder::SimpleResponder_obj::__new();
}
;
	return null();
}

TestRunner_obj::~TestRunner_obj() { }

Dynamic TestRunner_obj::__CreateEmpty() { return  new TestRunner_obj; }
hxObjectPtr<TestRunner_obj > TestRunner_obj::__new()
{  hxObjectPtr<TestRunner_obj > result = new TestRunner_obj();
	result->__construct();
	return result;}

Dynamic TestRunner_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<TestRunner_obj > result = new TestRunner_obj();
	result->__construct();
	return result;}

Void TestRunner_obj::addSuite( Class value){
{
		this->gen->addSuite(value);
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(TestRunner_obj,addSuite,(void))

Void TestRunner_obj::addCase( Class value){
{
		this->gen->addCase(value,null());
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(TestRunner_obj,addCase,(void))

Void TestRunner_obj::addTest( Dynamic __o_name,Dynamic method){
String name = __o_name.Default(null());
{
		this->gen->addTest(name,method,null(),null());
	}
return null();
}


DEFINE_DYNAMIC_FUNC2(TestRunner_obj,addTest,(void))

Void TestRunner_obj::run( ){
{
		this->responder->begin();
		this->advance();
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(TestRunner_obj,run,(void))

Void TestRunner_obj::advance( ){
{
		Dynamic test = this->gen->tests->first();
		if (test != null()){
			this->gen->tests->remove(test);
			this->monitor = hxunit::TestMonitor_obj::__new(test,this);
			this->monitor->run();
		}
		else{
			this->responder->end();
		}
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(TestRunner_obj,advance,(void))


TestRunner_obj::TestRunner_obj()
{
	InitMember(gen);
	InitMember(monitor);
	InitMember(responder);
}

Dynamic TestRunner_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"gen",sizeof(wchar_t)*3) ) { return gen; }
		if (!memcmp(inName.__s,L"run",sizeof(wchar_t)*3) ) { return run_dyn(); }
		break;
	case 7:
		if (!memcmp(inName.__s,L"monitor",sizeof(wchar_t)*7) ) { return monitor; }
		if (!memcmp(inName.__s,L"addCase",sizeof(wchar_t)*7) ) { return addCase_dyn(); }
		if (!memcmp(inName.__s,L"addTest",sizeof(wchar_t)*7) ) { return addTest_dyn(); }
		if (!memcmp(inName.__s,L"advance",sizeof(wchar_t)*7) ) { return advance_dyn(); }
		if (!memcmp(inName.__s,L"observe",sizeof(wchar_t)*7) ) { return observe; }
		break;
	case 8:
		if (!memcmp(inName.__s,L"addSuite",sizeof(wchar_t)*8) ) { return addSuite_dyn(); }
		break;
	case 9:
		if (!memcmp(inName.__s,L"responder",sizeof(wchar_t)*9) ) { return responder; }
	}
	return super::__Field(inName);
}

static int __id_gen = __hxcpp_field_to_id("gen");
static int __id_monitor = __hxcpp_field_to_id("monitor");
static int __id_responder = __hxcpp_field_to_id("responder");
static int __id_addSuite = __hxcpp_field_to_id("addSuite");
static int __id_addCase = __hxcpp_field_to_id("addCase");
static int __id_addTest = __hxcpp_field_to_id("addTest");
static int __id_run = __hxcpp_field_to_id("run");
static int __id_advance = __hxcpp_field_to_id("advance");
static int __id_observe = __hxcpp_field_to_id("observe");


Dynamic TestRunner_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_gen) return gen;
	if (inFieldID==__id_monitor) return monitor;
	if (inFieldID==__id_responder) return responder;
	if (inFieldID==__id_addSuite) return addSuite_dyn();
	if (inFieldID==__id_addCase) return addCase_dyn();
	if (inFieldID==__id_addTest) return addTest_dyn();
	if (inFieldID==__id_run) return run_dyn();
	if (inFieldID==__id_advance) return advance_dyn();
	if (inFieldID==__id_observe) return observe;
	return super::__IField(inFieldID);
}

Dynamic TestRunner_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"gen",sizeof(wchar_t)*3) ) { gen=inValue.Cast<hxunit::TestGenerator >();return inValue; }
		break;
	case 7:
		if (!memcmp(inName.__s,L"monitor",sizeof(wchar_t)*7) ) { monitor=inValue.Cast<hxunit::TestMonitor >();return inValue; }
		if (!memcmp(inName.__s,L"observe",sizeof(wchar_t)*7) ) { observe=inValue.Cast<Dynamic >();return inValue; }
		break;
	case 9:
		if (!memcmp(inName.__s,L"responder",sizeof(wchar_t)*9) ) { responder=inValue.Cast<hxunit::responder::TestResponder >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void TestRunner_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"gen",3));
	outFields->push(String(L"monitor",7));
	outFields->push(String(L"responder",9));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"gen",
	L"monitor",
	L"responder",
	L"addSuite",
	L"addCase",
	L"addTest",
	L"run",
	L"advance",
	L"observe",
	0 };

Class TestRunner_obj::__mClass;

void TestRunner_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"hxunit.TestRunner",17), TCanCast<TestRunner_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void TestRunner_obj::__boot()
{
}

} // end namespace hxunit
