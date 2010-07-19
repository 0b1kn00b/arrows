#include <hxObject.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_arrow_scheduler_resources_AbstractResource
#include <arrow/scheduler/resources/AbstractResource.h>
#endif
#ifndef INCLUDED_arrow_scheduler_resources_Resource
#include <arrow/scheduler/resources/Resource.h>
#endif
#ifndef INCLUDED_arrow_scheduler_resources_ResourceCondition
#include <arrow/scheduler/resources/ResourceCondition.h>
#endif
#ifndef INCLUDED_arrow_scheduler_resources_SimpleResource
#include <arrow/scheduler/resources/SimpleResource.h>
#endif
#ifndef INCLUDED_colhx_Collection
#include <colhx/Collection.h>
#endif
#ifndef INCLUDED_colhx_Queue
#include <colhx/Queue.h>
#endif
namespace arrow{
namespace scheduler{
namespace resources{

Void SimpleResource_obj::__construct(String id)
{
{
	super::__construct();
	this->id = id;
	this->queue = colhx::Queue_obj::__new();
}
;
	return null();
}

SimpleResource_obj::~SimpleResource_obj() { }

Dynamic SimpleResource_obj::__CreateEmpty() { return  new SimpleResource_obj; }
hxObjectPtr<SimpleResource_obj > SimpleResource_obj::__new(String id)
{  hxObjectPtr<SimpleResource_obj > result = new SimpleResource_obj();
	result->__construct(id);
	return result;}

Dynamic SimpleResource_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<SimpleResource_obj > result = new SimpleResource_obj();
	result->__construct(inArgs[0]);
	return result;}

Void SimpleResource_obj::notify( Dynamic value){
{
		this->queue->enqueue(value);
		this->setState(arrow::scheduler::resources::ResourceCondition_obj::waiting);
		this->yield();
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(SimpleResource_obj,notify,(void))

Void SimpleResource_obj::yield( ){
{
		Dynamic method;
		if ((method = this->queue->dequeue()) != null()){
			this->setState(arrow::scheduler::resources::ResourceCondition_obj::running);
			Reflect_obj::callMethod(null(),method,Array_obj<Dynamic >::__new());
			this->setState(arrow::scheduler::resources::ResourceCondition_obj::waiting);
		}
		else{
			this->setState(arrow::scheduler::resources::ResourceCondition_obj::suspended);
		}
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(SimpleResource_obj,yield,(void))


SimpleResource_obj::SimpleResource_obj()
{
	InitMember(queue);
}

Dynamic SimpleResource_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 5:
		if (!memcmp(inName.__s,L"yield",sizeof(wchar_t)*5) ) { return yield_dyn(); }
		if (!memcmp(inName.__s,L"queue",sizeof(wchar_t)*5) ) { return queue; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"notify",sizeof(wchar_t)*6) ) { return notify_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_notify = __hxcpp_field_to_id("notify");
static int __id_yield = __hxcpp_field_to_id("yield");
static int __id_queue = __hxcpp_field_to_id("queue");


Dynamic SimpleResource_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_notify) return notify_dyn();
	if (inFieldID==__id_yield) return yield_dyn();
	if (inFieldID==__id_queue) return queue;
	return super::__IField(inFieldID);
}

Dynamic SimpleResource_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (!memcmp(inName.__s,L"queue",sizeof(wchar_t)*5) ) { queue=inValue.Cast<colhx::Queue >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void SimpleResource_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"queue",5));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"notify",
	L"yield",
	L"queue",
	0 };

Class SimpleResource_obj::__mClass;

void SimpleResource_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.scheduler.resources.SimpleResource",40), TCanCast<SimpleResource_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void SimpleResource_obj::__boot()
{
}

} // end namespace arrow
} // end namespace scheduler
} // end namespace resources
