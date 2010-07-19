#include <hxObject.h>

#ifndef INCLUDED_arrow_scheduler_resources_AbstractResource
#include <arrow/scheduler/resources/AbstractResource.h>
#endif
#ifndef INCLUDED_arrow_scheduler_resources_Resource
#include <arrow/scheduler/resources/Resource.h>
#endif
#ifndef INCLUDED_arrow_scheduler_resources_ResourceCondition
#include <arrow/scheduler/resources/ResourceCondition.h>
#endif
namespace arrow{
namespace scheduler{
namespace resources{

Void AbstractResource_obj::__construct()
{
{
}
;
	return null();
}

AbstractResource_obj::~AbstractResource_obj() { }

Dynamic AbstractResource_obj::__CreateEmpty() { return  new AbstractResource_obj; }
hxObjectPtr<AbstractResource_obj > AbstractResource_obj::__new()
{  hxObjectPtr<AbstractResource_obj > result = new AbstractResource_obj();
	result->__construct();
	return result;}

Dynamic AbstractResource_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<AbstractResource_obj > result = new AbstractResource_obj();
	result->__construct();
	return result;}

Void AbstractResource_obj::notify( Dynamic value){
{
		hxThrow (String(L"abstract",8));
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(AbstractResource_obj,notify,(void))

Void AbstractResource_obj::yield( ){
{
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(AbstractResource_obj,yield,(void))

arrow::scheduler::resources::ResourceCondition AbstractResource_obj::getState( ){
	return this->state;
}


DEFINE_DYNAMIC_FUNC0(AbstractResource_obj,getState,return )

arrow::scheduler::resources::ResourceCondition AbstractResource_obj::setState( arrow::scheduler::resources::ResourceCondition state){
	return this->state = state;
}


DEFINE_DYNAMIC_FUNC1(AbstractResource_obj,setState,return )


AbstractResource_obj::AbstractResource_obj()
{
	InitMember(id);
	InitMember(state);
}

Dynamic AbstractResource_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 2:
		if (!memcmp(inName.__s,L"id",sizeof(wchar_t)*2) ) { return id; }
		break;
	case 5:
		if (!memcmp(inName.__s,L"yield",sizeof(wchar_t)*5) ) { return yield_dyn(); }
		if (!memcmp(inName.__s,L"state",sizeof(wchar_t)*5) ) { return state; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"notify",sizeof(wchar_t)*6) ) { return notify_dyn(); }
		break;
	case 8:
		if (!memcmp(inName.__s,L"getState",sizeof(wchar_t)*8) ) { return getState_dyn(); }
		if (!memcmp(inName.__s,L"setState",sizeof(wchar_t)*8) ) { return setState_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_notify = __hxcpp_field_to_id("notify");
static int __id_yield = __hxcpp_field_to_id("yield");
static int __id_id = __hxcpp_field_to_id("id");
static int __id_state = __hxcpp_field_to_id("state");
static int __id_getState = __hxcpp_field_to_id("getState");
static int __id_setState = __hxcpp_field_to_id("setState");


Dynamic AbstractResource_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_notify) return notify_dyn();
	if (inFieldID==__id_yield) return yield_dyn();
	if (inFieldID==__id_id) return id;
	if (inFieldID==__id_state) return state;
	if (inFieldID==__id_getState) return getState_dyn();
	if (inFieldID==__id_setState) return setState_dyn();
	return super::__IField(inFieldID);
}

Dynamic AbstractResource_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 2:
		if (!memcmp(inName.__s,L"id",sizeof(wchar_t)*2) ) { id=inValue.Cast<String >();return inValue; }
		break;
	case 5:
		if (!memcmp(inName.__s,L"state",sizeof(wchar_t)*5) ) { state=inValue.Cast<arrow::scheduler::resources::ResourceCondition >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void AbstractResource_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"id",2));
	outFields->push(String(L"state",5));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"notify",
	L"yield",
	L"id",
	L"state",
	L"getState",
	L"setState",
	0 };

Class AbstractResource_obj::__mClass;

void AbstractResource_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.scheduler.resources.AbstractResource",42), TCanCast<AbstractResource_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void AbstractResource_obj::__boot()
{
}

} // end namespace arrow
} // end namespace scheduler
} // end namespace resources
