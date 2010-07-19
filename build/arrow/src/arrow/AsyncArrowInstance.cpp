#include <hxObject.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrowInstance
#include <arrow/AsyncArrowInstance.h>
#endif
#ifndef INCLUDED_arrow_ProgressEvent
#include <arrow/ProgressEvent.h>
#endif
#ifndef INCLUDED_arrow_combinators_ProgressArrow
#include <arrow/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_arrow_combinators_TerminalArrow
#include <arrow/combinators/TerminalArrow.h>
#endif
#ifndef INCLUDED_arrow_scheduler_ResourceManager
#include <arrow/scheduler/ResourceManager.h>
#endif
#ifndef INCLUDED_arrow_scheduler_resources_Resource
#include <arrow/scheduler/resources/Resource.h>
#endif
#ifndef INCLUDED_data_XQueue
#include <data/XQueue.h>
#endif
#ifndef INCLUDED_event_Event
#include <event/Event.h>
#endif
#ifndef INCLUDED_event_EventDispatcher
#include <event/EventDispatcher.h>
#endif
#ifndef INCLUDED_event_EventListener
#include <event/EventListener.h>
#endif
#ifndef INCLUDED_ion_log_Log
#include <ion/log/Log.h>
#endif
#ifndef INCLUDED_ion_log_Logger
#include <ion/log/Logger.h>
#endif
#ifndef INCLUDED_util_Counter
#include <util/Counter.h>
#endif
#ifndef INCLUDED_util_UUID
#include <util/UUID.h>
#endif
#ifndef INCLUDED_util_Util
#include <util/Util.h>
#endif
namespace arrow{

Void AsyncArrowInstance_obj::__construct(arrow::AsyncArrow asynca,Dynamic x)
{
{
	this->uuid = util::UUID_obj::get();
	this->resource = arrow::scheduler::ResourceManager_obj::getResource(this->uuid);
	this->log = ion::log::Logger_obj::getInstance()->getLog(null());
	this->cancellers = Array_obj<Dynamic >::__new();
	this->arguments = x;
	this->calldepthCounter = util::Counter_obj::__new(50);
	this->queue = data::XQueue_obj::__new();
	this->queue->push(arrow::AsyncArrow_obj::terminal());
	this->queue->push(asynca);
	this->progress = arrow::combinators::ProgressArrow_obj::__new(this);
	this->cont(x,null(),null());
}
;
	return null();
}

AsyncArrowInstance_obj::~AsyncArrowInstance_obj() { }

Dynamic AsyncArrowInstance_obj::__CreateEmpty() { return  new AsyncArrowInstance_obj; }
hxObjectPtr<AsyncArrowInstance_obj > AsyncArrowInstance_obj::__new(arrow::AsyncArrow asynca,Dynamic x)
{  hxObjectPtr<AsyncArrowInstance_obj > result = new AsyncArrowInstance_obj();
	result->__construct(asynca,x);
	return result;}

Dynamic AsyncArrowInstance_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<AsyncArrowInstance_obj > result = new AsyncArrowInstance_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void AsyncArrowInstance_obj::cont( Dynamic x,arrow::AsyncArrow $t4,arrow::AsyncArrow g){
{
		Array<arrow::AsyncArrow > f = Array_obj<arrow::AsyncArrow >::__new().Add($t4);
		this->arguments = x;
		this->enqueueMethods(f->__get(0),g);
		arrow::AsyncArrowInstance self = this;
		arrow::AsyncArrow t = this->queue->pop().Cast<arrow::AsyncArrow >();
		if (t != null()){

			BEGIN_LOCAL_FUNC0(_Function_1)
			Dynamic run(Dynamic $t1,Dynamic $t2,arrow::AsyncArrowInstance $t3){
{
					Array<arrow::AsyncArrowInstance > a2 = Array_obj<arrow::AsyncArrowInstance >::__new().Add($t3);
					Array<Dynamic > a1 = Array_obj<Dynamic >::__new().Add($t2);
					Array<Dynamic > f = Array_obj<Dynamic >::__new().Add($t1);

					BEGIN_LOCAL_FUNC3(_Function_2,Array<Dynamic >,a1,Array<Dynamic >,f,Array<arrow::AsyncArrowInstance >,a2)
					Void run(){
						f->__get(0)(a1->__get(0),a2->__get(0));
						return null();
					}
					END_LOCAL_FUNC0((void))

					return  Dynamic(new _Function_2(a1,f,a2));
				}
				return null();
			}
			END_LOCAL_FUNC3(return)

			this->resource->notify( Dynamic(new _Function_1())(t->apply_dyn(),self->arguments,self));
		}
	}
return null();
}


DEFINE_DYNAMIC_FUNC3(AsyncArrowInstance_obj,cont,(void))

Void AsyncArrowInstance_obj::enqueueMethods( arrow::AsyncArrow value0,arrow::AsyncArrow value1){
{
		if (util::Util_obj::isNotNull(value1)){
			this->queue->push(value1);
		}
		if (util::Util_obj::isNotNull(value0)){
			this->queue->push(value0);
		}
	}
return null();
}


DEFINE_DYNAMIC_FUNC2(AsyncArrowInstance_obj,enqueueMethods,(void))

Void AsyncArrowInstance_obj::cancel( ){
{
		{
			int _g = 0;
			Array<Dynamic > _g1 = this->cancellers;
			while(_g < _g1->length){
				Dynamic item = _g1->__get(_g);
				++_g;
				Reflect_obj::callMethod(null(),item,Array_obj<Dynamic >::__new());
			}
		}
		this->cancellers = Array_obj<Dynamic >::__new();
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(AsyncArrowInstance_obj,cancel,(void))

Void AsyncArrowInstance_obj::signal( String name,Dynamic detail){
{
		arrow::ProgressEvent e = arrow::ProgressEvent_obj::__new(name,detail,null());
		this->progress->dispatchEvent(e);
	}
return null();
}


DEFINE_DYNAMIC_FUNC2(AsyncArrowInstance_obj,signal,(void))

Void AsyncArrowInstance_obj::addCanceller( Dynamic canceller){
{
		this->cancellers->push(canceller);
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(AsyncArrowInstance_obj,addCanceller,(void))

Void AsyncArrowInstance_obj::advance( Dynamic canceller){
{
		this->cancellers->remove(canceller);
		this->signal(String(L"progress",8),null());
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(AsyncArrowInstance_obj,advance,(void))

String AsyncArrowInstance_obj::toString( ){
	return String(L"[AsyncArrowInstance ",20) + Std_obj::string(this->queue) + String(L"]",1);
}


DEFINE_DYNAMIC_FUNC0(AsyncArrowInstance_obj,toString,return )

int AsyncArrowInstance_obj::calldepthlimit;

int AsyncArrowInstance_obj::timelimit;

int AsyncArrowInstance_obj::interval;


AsyncArrowInstance_obj::AsyncArrowInstance_obj()
{
	InitMember(progress);
	InitMember(cancellers);
	InitMember(arguments);
	InitMember(calldepthCounter);
	InitMember(queue);
	InitMember(uuid);
	InitMember(resource);
	InitMember(log);
}

Dynamic AsyncArrowInstance_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"log",sizeof(wchar_t)*3) ) { return log; }
		break;
	case 4:
		if (!memcmp(inName.__s,L"uuid",sizeof(wchar_t)*4) ) { return uuid; }
		if (!memcmp(inName.__s,L"cont",sizeof(wchar_t)*4) ) { return cont_dyn(); }
		break;
	case 5:
		if (!memcmp(inName.__s,L"queue",sizeof(wchar_t)*5) ) { return queue; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"cancel",sizeof(wchar_t)*6) ) { return cancel_dyn(); }
		if (!memcmp(inName.__s,L"signal",sizeof(wchar_t)*6) ) { return signal_dyn(); }
		break;
	case 7:
		if (!memcmp(inName.__s,L"advance",sizeof(wchar_t)*7) ) { return advance_dyn(); }
		break;
	case 8:
		if (!memcmp(inName.__s,L"interval",sizeof(wchar_t)*8) ) { return interval; }
		if (!memcmp(inName.__s,L"progress",sizeof(wchar_t)*8) ) { return progress; }
		if (!memcmp(inName.__s,L"resource",sizeof(wchar_t)*8) ) { return resource; }
		if (!memcmp(inName.__s,L"toString",sizeof(wchar_t)*8) ) { return toString_dyn(); }
		break;
	case 9:
		if (!memcmp(inName.__s,L"timelimit",sizeof(wchar_t)*9) ) { return timelimit; }
		if (!memcmp(inName.__s,L"arguments",sizeof(wchar_t)*9) ) { return arguments; }
		break;
	case 10:
		if (!memcmp(inName.__s,L"cancellers",sizeof(wchar_t)*10) ) { return cancellers; }
		break;
	case 12:
		if (!memcmp(inName.__s,L"addCanceller",sizeof(wchar_t)*12) ) { return addCanceller_dyn(); }
		break;
	case 14:
		if (!memcmp(inName.__s,L"calldepthlimit",sizeof(wchar_t)*14) ) { return calldepthlimit; }
		if (!memcmp(inName.__s,L"enqueueMethods",sizeof(wchar_t)*14) ) { return enqueueMethods_dyn(); }
		break;
	case 16:
		if (!memcmp(inName.__s,L"calldepthCounter",sizeof(wchar_t)*16) ) { return calldepthCounter; }
	}
	return super::__Field(inName);
}

static int __id_calldepthlimit = __hxcpp_field_to_id("calldepthlimit");
static int __id_timelimit = __hxcpp_field_to_id("timelimit");
static int __id_interval = __hxcpp_field_to_id("interval");
static int __id_progress = __hxcpp_field_to_id("progress");
static int __id_cancellers = __hxcpp_field_to_id("cancellers");
static int __id_arguments = __hxcpp_field_to_id("arguments");
static int __id_calldepthCounter = __hxcpp_field_to_id("calldepthCounter");
static int __id_queue = __hxcpp_field_to_id("queue");
static int __id_uuid = __hxcpp_field_to_id("uuid");
static int __id_resource = __hxcpp_field_to_id("resource");
static int __id_cont = __hxcpp_field_to_id("cont");
static int __id_enqueueMethods = __hxcpp_field_to_id("enqueueMethods");
static int __id_cancel = __hxcpp_field_to_id("cancel");
static int __id_signal = __hxcpp_field_to_id("signal");
static int __id_addCanceller = __hxcpp_field_to_id("addCanceller");
static int __id_advance = __hxcpp_field_to_id("advance");
static int __id_toString = __hxcpp_field_to_id("toString");
static int __id_log = __hxcpp_field_to_id("log");


Dynamic AsyncArrowInstance_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_calldepthlimit) return calldepthlimit;
	if (inFieldID==__id_timelimit) return timelimit;
	if (inFieldID==__id_interval) return interval;
	if (inFieldID==__id_progress) return progress;
	if (inFieldID==__id_cancellers) return cancellers;
	if (inFieldID==__id_arguments) return arguments;
	if (inFieldID==__id_calldepthCounter) return calldepthCounter;
	if (inFieldID==__id_queue) return queue;
	if (inFieldID==__id_uuid) return uuid;
	if (inFieldID==__id_resource) return resource;
	if (inFieldID==__id_cont) return cont_dyn();
	if (inFieldID==__id_enqueueMethods) return enqueueMethods_dyn();
	if (inFieldID==__id_cancel) return cancel_dyn();
	if (inFieldID==__id_signal) return signal_dyn();
	if (inFieldID==__id_addCanceller) return addCanceller_dyn();
	if (inFieldID==__id_advance) return advance_dyn();
	if (inFieldID==__id_toString) return toString_dyn();
	if (inFieldID==__id_log) return log;
	return super::__IField(inFieldID);
}

Dynamic AsyncArrowInstance_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"log",sizeof(wchar_t)*3) ) { log=inValue.Cast<ion::log::Log >();return inValue; }
		break;
	case 4:
		if (!memcmp(inName.__s,L"uuid",sizeof(wchar_t)*4) ) { uuid=inValue.Cast<String >();return inValue; }
		break;
	case 5:
		if (!memcmp(inName.__s,L"queue",sizeof(wchar_t)*5) ) { queue=inValue.Cast<data::XQueue >();return inValue; }
		break;
	case 8:
		if (!memcmp(inName.__s,L"interval",sizeof(wchar_t)*8) ) { interval=inValue.Cast<int >();return inValue; }
		if (!memcmp(inName.__s,L"progress",sizeof(wchar_t)*8) ) { progress=inValue.Cast<arrow::combinators::ProgressArrow >();return inValue; }
		if (!memcmp(inName.__s,L"resource",sizeof(wchar_t)*8) ) { resource=inValue.Cast<arrow::scheduler::resources::Resource >();return inValue; }
		break;
	case 9:
		if (!memcmp(inName.__s,L"timelimit",sizeof(wchar_t)*9) ) { timelimit=inValue.Cast<int >();return inValue; }
		if (!memcmp(inName.__s,L"arguments",sizeof(wchar_t)*9) ) { arguments=inValue.Cast<Dynamic >();return inValue; }
		break;
	case 10:
		if (!memcmp(inName.__s,L"cancellers",sizeof(wchar_t)*10) ) { cancellers=inValue.Cast<Array<Dynamic > >();return inValue; }
		break;
	case 14:
		if (!memcmp(inName.__s,L"calldepthlimit",sizeof(wchar_t)*14) ) { calldepthlimit=inValue.Cast<int >();return inValue; }
		break;
	case 16:
		if (!memcmp(inName.__s,L"calldepthCounter",sizeof(wchar_t)*16) ) { calldepthCounter=inValue.Cast<util::Counter >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void AsyncArrowInstance_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"progress",8));
	outFields->push(String(L"cancellers",10));
	outFields->push(String(L"arguments",9));
	outFields->push(String(L"calldepthCounter",16));
	outFields->push(String(L"queue",5));
	outFields->push(String(L"uuid",4));
	outFields->push(String(L"resource",8));
	outFields->push(String(L"log",3));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"calldepthlimit",
	L"timelimit",
	L"interval",
	0 };

static wchar_t *sMemberFields[] = {
	L"progress",
	L"cancellers",
	L"arguments",
	L"calldepthCounter",
	L"queue",
	L"uuid",
	L"resource",
	L"cont",
	L"enqueueMethods",
	L"cancel",
	L"signal",
	L"addCanceller",
	L"advance",
	L"toString",
	L"log",
	0 };

Class AsyncArrowInstance_obj::__mClass;

void AsyncArrowInstance_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.AsyncArrowInstance",24), TCanCast<AsyncArrowInstance_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void AsyncArrowInstance_obj::__boot()
{
	Static(calldepthlimit) = 50;
	Static(timelimit) = 30;
	Static(interval) = 10;
}

} // end namespace arrow
