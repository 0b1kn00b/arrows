#include <hxObject.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
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
#ifndef INCLUDED_data_type_Time
#include <data/type/Time.h>
#endif
#ifndef INCLUDED_data_type_TimeFormat
#include <data/type/TimeFormat.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_hxunit_AType
#include <hxunit/AType.h>
#endif
#ifndef INCLUDED_hxunit_AnonymousTestCase
#include <hxunit/AnonymousTestCase.h>
#endif
#ifndef INCLUDED_hxunit_Data
#include <hxunit/Data.h>
#endif
#ifndef INCLUDED_hxunit_Message
#include <hxunit/Message.h>
#endif
#ifndef INCLUDED_hxunit_Test
#include <hxunit/Test.h>
#endif
#ifndef INCLUDED_hxunit_TestCase
#include <hxunit/TestCase.h>
#endif
#ifndef INCLUDED_hxunit_TestFrameworkPrimitive
#include <hxunit/TestFrameworkPrimitive.h>
#endif
#ifndef INCLUDED_hxunit_TestMonitor
#include <hxunit/TestMonitor.h>
#endif
#ifndef INCLUDED_hxunit_TestResult
#include <hxunit/TestResult.h>
#endif
#ifndef INCLUDED_hxunit_TestRunner
#include <hxunit/TestRunner.h>
#endif
#ifndef INCLUDED_hxunit_error_AssertionError
#include <hxunit/error/AssertionError.h>
#endif
#ifndef INCLUDED_hxunit_error_HxUnitError
#include <hxunit/error/HxUnitError.h>
#endif
#ifndef INCLUDED_hxunit_error_TestError
#include <hxunit/error/TestError.h>
#endif
#ifndef INCLUDED_hxunit_responder_TestResponder
#include <hxunit/responder/TestResponder.h>
#endif
namespace hxunit{

Void TestMonitor_obj::__construct(Dynamic unit,hxunit::TestRunner runner)
{
{
	this->waits = Hash_obj::__new();
	this->unit = unit;
	this->runner = runner;
	this->observers = List_obj::__new();
	this->atc = Type_obj::createInstance(unit->__Field(String(L"testcase",8)).Cast<Class >(),Array_obj<Dynamic >::__new());
	if (Std_obj::is(this->atc,hxClassOf<hxunit::AnonymousTestCase >())){
		this->atc->__SetField(unit->__Field(String(L"test",4)).Cast<hxunit::Test >()->name,unit->__Field(String(L"test",4)).Cast<hxunit::Test >()->method_dyn());
	}
	this->atc->monitor = this;
}
;
	return null();
}

TestMonitor_obj::~TestMonitor_obj() { }

Dynamic TestMonitor_obj::__CreateEmpty() { return  new TestMonitor_obj; }
hxObjectPtr<TestMonitor_obj > TestMonitor_obj::__new(Dynamic unit,hxunit::TestRunner runner)
{  hxObjectPtr<TestMonitor_obj > result = new TestMonitor_obj();
	result->__construct(unit,runner);
	return result;}

Dynamic TestMonitor_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<TestMonitor_obj > result = new TestMonitor_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void TestMonitor_obj::notify( hxunit::Message value){
{
		for(Dynamic __it = this->observers->iterator();  __it->__Field(String(L"hasNext",7))(); ){
Dynamic method = __it->__Field(String(L"next",4))();
			{
				method(value);
			}
;
		}
		hxunit::Message _switch_1 = (value);
		switch((_switch_1)->GetIndex()){
			case 3: {
				Dynamic v = _switch_1->__Param(0);
{
					this->error(v);
				}
			}
			break;
			case 0: {
				Dynamic v = _switch_1->__Param(0);
{
					this->assert(v);
				}
			}
			break;
			case 1: {
				Dynamic v = _switch_1->__Param(0);
{
					this->waits->set(v->__Field(String(L"name",4)).Cast<String >(),v);
				}
			}
			break;
			case 2: {
				Dynamic p = _switch_1->__Param(2);
				Dynamic v = _switch_1->__Param(1);
				String n = _switch_1->__Param(0);
{
					this->handle(n,v,p);
				}
			}
			break;
		}
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(TestMonitor_obj,notify,(void))

Void TestMonitor_obj::run( ){
{
		this->result = hxunit::TestResult_obj::__new(this->unit);
		if (/* Block function _Function_1 not found */){
			{
				bool hasError = false;
				try{
					Reflect_obj::callMethod(this->atc,this->atc->__Field(String(L"teardown",8)),Array_obj<Dynamic >::__new());
				}
				catch(Dynamic __e){
					{
						Dynamic e = __e;{
							this->notify(hxunit::Message_obj::error(e));
							hasError = true;
						}
					}
				}
				hasError;
			}
			this->done();
			return null();
		}
		if (/* Block function _Function_2 not found */){
			{
				bool hasError = false;
				try{
					Reflect_obj::callMethod(this->atc,this->atc->__Field(String(L"teardown",8)),Array_obj<Dynamic >::__new());
				}
				catch(Dynamic __e){
					{
						Dynamic e = __e;{
							this->notify(hxunit::Message_obj::error(e));
							hasError = true;
						}
					}
				}
				hasError;
			}
			this->done();
			return null();
		}
		if (Lambda_obj::count(this->waits) > 0){
			this->wait();
		}
		else{
			{
				bool hasError = false;
				try{
					Reflect_obj::callMethod(this->atc,this->atc->__Field(String(L"teardown",8)),Array_obj<Dynamic >::__new());
				}
				catch(Dynamic __e){
					{
						Dynamic e = __e;{
							this->notify(hxunit::Message_obj::error(e));
							hasError = true;
						}
					}
				}
				hasError;
			}
		}
		if (Lambda_obj::count(this->waits) == 0){
			this->done();
		}
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(TestMonitor_obj,run,(void))

bool TestMonitor_obj::call( String name){
	bool hasError = false;
	try{
		Reflect_obj::callMethod(this->atc,this->atc->__Field(name),Array_obj<Dynamic >::__new());
	}
	catch(Dynamic __e){
		{
			Dynamic e = __e;{
				this->notify(hxunit::Message_obj::error(e));
				hasError = true;
			}
		}
	}
	return hasError;
}


DEFINE_DYNAMIC_FUNC1(TestMonitor_obj,call,return )

Void TestMonitor_obj::assert( Dynamic v){
{
		this->result->add(v);
		try{
			hxunit::Data_obj::aTypeFunction(v->__Field(String(L"type",4)).Cast<hxunit::AType >())(v->__Field(String(L"expected",8)),v->__Field(String(L"actual",6)));
		}
		catch(Dynamic __e){
			{
				Dynamic e = __e;{
					this->notify(hxunit::Message_obj::error(e));
				}
			}
		}
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(TestMonitor_obj,assert,(void))

Void TestMonitor_obj::handle( String name,Dynamic value,Dynamic passThrough){
{
		if (this->waits->exists(name)){
			Dynamic method = this->waits->get(name)->__Field(String(L"method",6));
			this->waits->remove(name);
			try{
				{
					Array<Dynamic > arr = Array_obj<Dynamic >::__new();
					arr->push(value);
					if (passThrough != null()){
						arr->push(passThrough);
					}
					Reflect_obj::callMethod(null(),method,arr);
				}
			}
			catch(Dynamic __e){
				{
					Dynamic e = __e;{
						this->notify(hxunit::Message_obj::error(e));
					}
				}
			}
		}
		else{
		}
	}
return null();
}


DEFINE_DYNAMIC_FUNC3(TestMonitor_obj,handle,(void))

Void TestMonitor_obj::callHandler( Dynamic method,Dynamic value,Dynamic passThrough){
{
		Array<Dynamic > arr = Array_obj<Dynamic >::__new();
		arr->push(value);
		if (passThrough != null()){
			arr->push(passThrough);
		}
		Reflect_obj::callMethod(null(),method,arr);
	}
return null();
}


DEFINE_DYNAMIC_FUNC3(TestMonitor_obj,callHandler,(void))

Void TestMonitor_obj::error( Dynamic value){
{
		if (bool(Std_obj::is(value,hxClassOf<hxunit::error::AssertionError >())) || bool(Std_obj::is(value,hxClassOf<hxunit::error::TestError >()))){
			this->result->errors->add(value);
		}
		else{
			this->result->errors->add(hxunit::error::TestError_obj::__new(String(L"an error was encountered",24),value,null()));
		}
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(TestMonitor_obj,error,(void))

Void TestMonitor_obj::wait( ){
{
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(TestMonitor_obj,wait,(void))

Void TestMonitor_obj::tick( ){
{
		for(Dynamic __it = this->waits->iterator();  __it->__Field(String(L"hasNext",7))(); ){
Dynamic item = __it->__Field(String(L"next",4))();
			{
				data::type::Time now = data::type::Time_obj::__new(haxe::Timer_obj::stamp(),data::type::TimeFormat_obj::second);
				data::type::Time delta = now->minus(item->__Field(String(L"begin",5)).Cast<data::type::Time >());
				item.FieldRef(String(L"begin",5)) = now;
				if (item->__Field(String(L"left",4)).Cast<data::type::Time >()->getMilliSeconds(null()) < 0){
					this->notify(hxunit::Message_obj::error(String(L"Timeout",7)));
					this->waits->remove(item->__Field(String(L"name",4)).Cast<String >());
				}
				else{
					item.FieldRef(String(L"left",4)) = item->__Field(String(L"left",4)).Cast<data::type::Time >()->minus(delta);
				}
			}
;
		}
		if (Lambda_obj::count(this->waits) == 0){
			this->timer->stop();
			this->done();
		}
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(TestMonitor_obj,tick,(void))

Void TestMonitor_obj::done( ){
{
		if (this->result->assertions->length == 0){
			this->notify(hxunit::Message_obj::error(hxunit::error::AssertionError_obj::__new(null(),hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"TestMonitor.hx",14))->Add( String(L"lineNumber",10) , 140)->Add( String(L"className",9) , String(L"hxunit.TestMonitor",18))->Add( String(L"methodName",10) , String(L"done",4)))));
		}
		this->runner->responder->consume(this->result);
		this->runner->advance();
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(TestMonitor_obj,done,(void))


TestMonitor_obj::TestMonitor_obj()
{
	InitMember(observers);
	InitMember(runner);
	InitMember(result);
	InitMember(unit);
	InitMember(atc);
	InitMember(waits);
	InitMember(timer);
}

Dynamic TestMonitor_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"atc",sizeof(wchar_t)*3) ) { return atc; }
		if (!memcmp(inName.__s,L"run",sizeof(wchar_t)*3) ) { return run_dyn(); }
		break;
	case 4:
		if (!memcmp(inName.__s,L"unit",sizeof(wchar_t)*4) ) { return unit; }
		if (!memcmp(inName.__s,L"call",sizeof(wchar_t)*4) ) { return call_dyn(); }
		if (!memcmp(inName.__s,L"wait",sizeof(wchar_t)*4) ) { return wait_dyn(); }
		if (!memcmp(inName.__s,L"tick",sizeof(wchar_t)*4) ) { return tick_dyn(); }
		if (!memcmp(inName.__s,L"done",sizeof(wchar_t)*4) ) { return done_dyn(); }
		break;
	case 5:
		if (!memcmp(inName.__s,L"waits",sizeof(wchar_t)*5) ) { return waits; }
		if (!memcmp(inName.__s,L"error",sizeof(wchar_t)*5) ) { return error_dyn(); }
		if (!memcmp(inName.__s,L"timer",sizeof(wchar_t)*5) ) { return timer; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"runner",sizeof(wchar_t)*6) ) { return runner; }
		if (!memcmp(inName.__s,L"result",sizeof(wchar_t)*6) ) { return result; }
		if (!memcmp(inName.__s,L"notify",sizeof(wchar_t)*6) ) { return notify_dyn(); }
		if (!memcmp(inName.__s,L"assert",sizeof(wchar_t)*6) ) { return assert_dyn(); }
		if (!memcmp(inName.__s,L"handle",sizeof(wchar_t)*6) ) { return handle_dyn(); }
		break;
	case 9:
		if (!memcmp(inName.__s,L"observers",sizeof(wchar_t)*9) ) { return observers; }
		break;
	case 11:
		if (!memcmp(inName.__s,L"callHandler",sizeof(wchar_t)*11) ) { return callHandler_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_observers = __hxcpp_field_to_id("observers");
static int __id_runner = __hxcpp_field_to_id("runner");
static int __id_result = __hxcpp_field_to_id("result");
static int __id_unit = __hxcpp_field_to_id("unit");
static int __id_atc = __hxcpp_field_to_id("atc");
static int __id_waits = __hxcpp_field_to_id("waits");
static int __id_notify = __hxcpp_field_to_id("notify");
static int __id_run = __hxcpp_field_to_id("run");
static int __id_call = __hxcpp_field_to_id("call");
static int __id_assert = __hxcpp_field_to_id("assert");
static int __id_handle = __hxcpp_field_to_id("handle");
static int __id_callHandler = __hxcpp_field_to_id("callHandler");
static int __id_error = __hxcpp_field_to_id("error");
static int __id_wait = __hxcpp_field_to_id("wait");
static int __id_timer = __hxcpp_field_to_id("timer");
static int __id_tick = __hxcpp_field_to_id("tick");
static int __id_done = __hxcpp_field_to_id("done");


Dynamic TestMonitor_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_observers) return observers;
	if (inFieldID==__id_runner) return runner;
	if (inFieldID==__id_result) return result;
	if (inFieldID==__id_unit) return unit;
	if (inFieldID==__id_atc) return atc;
	if (inFieldID==__id_waits) return waits;
	if (inFieldID==__id_notify) return notify_dyn();
	if (inFieldID==__id_run) return run_dyn();
	if (inFieldID==__id_call) return call_dyn();
	if (inFieldID==__id_assert) return assert_dyn();
	if (inFieldID==__id_handle) return handle_dyn();
	if (inFieldID==__id_callHandler) return callHandler_dyn();
	if (inFieldID==__id_error) return error_dyn();
	if (inFieldID==__id_wait) return wait_dyn();
	if (inFieldID==__id_timer) return timer;
	if (inFieldID==__id_tick) return tick_dyn();
	if (inFieldID==__id_done) return done_dyn();
	return super::__IField(inFieldID);
}

Dynamic TestMonitor_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"atc",sizeof(wchar_t)*3) ) { atc=inValue.Cast<hxunit::TestCase >();return inValue; }
		break;
	case 4:
		if (!memcmp(inName.__s,L"unit",sizeof(wchar_t)*4) ) { unit=inValue.Cast<Dynamic >();return inValue; }
		break;
	case 5:
		if (!memcmp(inName.__s,L"waits",sizeof(wchar_t)*5) ) { waits=inValue.Cast<Hash >();return inValue; }
		if (!memcmp(inName.__s,L"timer",sizeof(wchar_t)*5) ) { timer=inValue.Cast<haxe::Timer >();return inValue; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"runner",sizeof(wchar_t)*6) ) { runner=inValue.Cast<hxunit::TestRunner >();return inValue; }
		if (!memcmp(inName.__s,L"result",sizeof(wchar_t)*6) ) { result=inValue.Cast<hxunit::TestResult >();return inValue; }
		break;
	case 9:
		if (!memcmp(inName.__s,L"observers",sizeof(wchar_t)*9) ) { observers=inValue.Cast<List >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void TestMonitor_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"observers",9));
	outFields->push(String(L"runner",6));
	outFields->push(String(L"result",6));
	outFields->push(String(L"unit",4));
	outFields->push(String(L"atc",3));
	outFields->push(String(L"waits",5));
	outFields->push(String(L"timer",5));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"observers",
	L"runner",
	L"result",
	L"unit",
	L"atc",
	L"waits",
	L"notify",
	L"run",
	L"call",
	L"assert",
	L"handle",
	L"callHandler",
	L"error",
	L"wait",
	L"timer",
	L"tick",
	L"done",
	0 };

Class TestMonitor_obj::__mClass;

void TestMonitor_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"hxunit.TestMonitor",18), TCanCast<TestMonitor_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void TestMonitor_obj::__boot()
{
}

} // end namespace hxunit
