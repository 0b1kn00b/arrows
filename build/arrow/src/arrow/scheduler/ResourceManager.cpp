#include <hxObject.h>

#ifndef INCLUDED_arrow_scheduler_ResourceManager
#include <arrow/scheduler/ResourceManager.h>
#endif
#ifndef INCLUDED_arrow_scheduler_ResourceManagerSingleton
#include <arrow/scheduler/ResourceManagerSingleton.h>
#endif
#ifndef INCLUDED_arrow_scheduler_resources_AbstractResource
#include <arrow/scheduler/resources/AbstractResource.h>
#endif
#ifndef INCLUDED_arrow_scheduler_resources_Resource
#include <arrow/scheduler/resources/Resource.h>
#endif
#ifndef INCLUDED_arrow_scheduler_resources_SimpleResource
#include <arrow/scheduler/resources/SimpleResource.h>
#endif
#ifndef INCLUDED_core_AbstractLocator
#include <core/AbstractLocator.h>
#endif
#ifndef INCLUDED_core_LifeCycle
#include <core/LifeCycle.h>
#endif
namespace arrow{
namespace scheduler{

Void ResourceManager_obj::__construct()
{
	return null();
}

ResourceManager_obj::~ResourceManager_obj() { }

Dynamic ResourceManager_obj::__CreateEmpty() { return  new ResourceManager_obj; }
hxObjectPtr<ResourceManager_obj > ResourceManager_obj::__new()
{  hxObjectPtr<ResourceManager_obj > result = new ResourceManager_obj();
	result->__construct();
	return result;}

Dynamic ResourceManager_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<ResourceManager_obj > result = new ResourceManager_obj();
	result->__construct();
	return result;}

arrow::scheduler::resources::Resource ResourceManager_obj::getResource( String key){
	arrow::scheduler::ResourceManagerSingleton rm = arrow::scheduler::ResourceManagerSingleton_obj::getInstance();
	if (!rm->isRegistered(key)){
		rm->register(key,arrow::scheduler::resources::SimpleResource_obj::__new(key));
	}
	return rm->locate(key).Cast<arrow::scheduler::resources::Resource >();
}


STATIC_DEFINE_DYNAMIC_FUNC1(ResourceManager_obj,getResource,return )


ResourceManager_obj::ResourceManager_obj()
{
}

Dynamic ResourceManager_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 11:
		if (!memcmp(inName.__s,L"getResource",sizeof(wchar_t)*11) ) { return getResource_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_getResource = __hxcpp_field_to_id("getResource");


Dynamic ResourceManager_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_getResource) return getResource_dyn();
	return super::__IField(inFieldID);
}

Dynamic ResourceManager_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ResourceManager_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"getResource",
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class ResourceManager_obj::__mClass;

void ResourceManager_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.scheduler.ResourceManager",31), TCanCast<ResourceManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void ResourceManager_obj::__boot()
{
}

} // end namespace arrow
} // end namespace scheduler
