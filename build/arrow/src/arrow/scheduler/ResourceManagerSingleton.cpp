#include <hxObject.h>

#ifndef INCLUDED_arrow_scheduler_ResourceManagerSingleton
#include <arrow/scheduler/ResourceManagerSingleton.h>
#endif
#ifndef INCLUDED_core_AbstractLocator
#include <core/AbstractLocator.h>
#endif
#ifndef INCLUDED_core_LifeCycle
#include <core/LifeCycle.h>
#endif
namespace arrow{
namespace scheduler{

Void ResourceManagerSingleton_obj::__construct()
{
{
	super::__construct();
	this->index = 0;
	this->data = Array_obj<String >::__new();
}
;
	return null();
}

ResourceManagerSingleton_obj::~ResourceManagerSingleton_obj() { }

Dynamic ResourceManagerSingleton_obj::__CreateEmpty() { return  new ResourceManagerSingleton_obj; }
hxObjectPtr<ResourceManagerSingleton_obj > ResourceManagerSingleton_obj::__new()
{  hxObjectPtr<ResourceManagerSingleton_obj > result = new ResourceManagerSingleton_obj();
	result->__construct();
	return result;}

Dynamic ResourceManagerSingleton_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<ResourceManagerSingleton_obj > result = new ResourceManagerSingleton_obj();
	result->__construct();
	return result;}

arrow::scheduler::ResourceManagerSingleton ResourceManagerSingleton_obj::instance;

arrow::scheduler::ResourceManagerSingleton ResourceManagerSingleton_obj::getInstance( ){
	if (arrow::scheduler::ResourceManagerSingleton_obj::instance == null()){
		arrow::scheduler::ResourceManagerSingleton_obj::instance = arrow::scheduler::ResourceManagerSingleton_obj::__new();
	}
	return arrow::scheduler::ResourceManagerSingleton_obj::instance;
}


STATIC_DEFINE_DYNAMIC_FUNC0(ResourceManagerSingleton_obj,getInstance,return )


ResourceManagerSingleton_obj::ResourceManagerSingleton_obj()
{
	InitMember(index);
	InitMember(data);
}

Dynamic ResourceManagerSingleton_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"data",sizeof(wchar_t)*4) ) { return data; }
		break;
	case 5:
		if (!memcmp(inName.__s,L"index",sizeof(wchar_t)*5) ) { return index; }
		break;
	case 8:
		if (!memcmp(inName.__s,L"instance",sizeof(wchar_t)*8) ) { return instance; }
		break;
	case 11:
		if (!memcmp(inName.__s,L"getInstance",sizeof(wchar_t)*11) ) { return getInstance_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_instance = __hxcpp_field_to_id("instance");
static int __id_getInstance = __hxcpp_field_to_id("getInstance");
static int __id_index = __hxcpp_field_to_id("index");
static int __id_data = __hxcpp_field_to_id("data");


Dynamic ResourceManagerSingleton_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_instance) return instance;
	if (inFieldID==__id_getInstance) return getInstance_dyn();
	if (inFieldID==__id_index) return index;
	if (inFieldID==__id_data) return data;
	return super::__IField(inFieldID);
}

Dynamic ResourceManagerSingleton_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"data",sizeof(wchar_t)*4) ) { data=inValue.Cast<Array<String > >();return inValue; }
		break;
	case 5:
		if (!memcmp(inName.__s,L"index",sizeof(wchar_t)*5) ) { index=inValue.Cast<int >();return inValue; }
		break;
	case 8:
		if (!memcmp(inName.__s,L"instance",sizeof(wchar_t)*8) ) { instance=inValue.Cast<arrow::scheduler::ResourceManagerSingleton >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void ResourceManagerSingleton_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"index",5));
	outFields->push(String(L"data",4));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"instance",
	L"getInstance",
	0 };

static wchar_t *sMemberFields[] = {
	L"index",
	L"data",
	0 };

Class ResourceManagerSingleton_obj::__mClass;

void ResourceManagerSingleton_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.scheduler.ResourceManagerSingleton",40), TCanCast<ResourceManagerSingleton_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void ResourceManagerSingleton_obj::__boot()
{
	Static(instance);
}

} // end namespace arrow
} // end namespace scheduler
