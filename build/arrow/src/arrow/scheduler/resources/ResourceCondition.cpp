#include <hxObject.h>

#ifndef INCLUDED_arrow_scheduler_resources_ResourceCondition
#include <arrow/scheduler/resources/ResourceCondition.h>
#endif
namespace arrow{
namespace scheduler{
namespace resources{

ResourceCondition ResourceCondition_obj::done;

ResourceCondition ResourceCondition_obj::running;

ResourceCondition ResourceCondition_obj::suspended;

ResourceCondition ResourceCondition_obj::waiting;

DEFINE_CREATE_ENUM(ResourceCondition_obj)

int ResourceCondition_obj::__FindIndex(String inName)
{
	if (inName==String(L"done",4)) return 3;
	if (inName==String(L"running",7)) return 1;
	if (inName==String(L"suspended",9)) return 2;
	if (inName==String(L"waiting",7)) return 0;
	return super::__FindIndex(inName);
}

int ResourceCondition_obj::__FindArgCount(String inName)
{
	if (inName==String(L"done",4)) return 0;
	if (inName==String(L"running",7)) return 0;
	if (inName==String(L"suspended",9)) return 0;
	if (inName==String(L"waiting",7)) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ResourceCondition_obj::__Field(const String &inName)
{
	if (inName==String(L"done",4)) return done;
	if (inName==String(L"running",7)) return running;
	if (inName==String(L"suspended",9)) return suspended;
	if (inName==String(L"waiting",7)) return waiting;
	return super::__Field(inName);
}

static wchar_t *sStaticFields[] = {
	L"done",
	L"running",
	L"suspended",
	L"waiting",
	0 };

static wchar_t *sMemberFields[] = { 0 };
Class ResourceCondition_obj::__mClass;

Dynamic __Create_ResourceCondition_obj() { return new ResourceCondition_obj; }

void ResourceCondition_obj::__register()
{

Static(__mClass) = RegisterClass(String(L"arrow.scheduler.resources.ResourceCondition",43), TCanCast<ResourceCondition_obj >,sStaticFields,sMemberFields,
	&__Create_ResourceCondition_obj, &__Create,
	&super::__SGetClass(), &CreateResourceCondition_obj);
}

void ResourceCondition_obj::__boot()
{
Static(done) = CreateEnum<ResourceCondition_obj >(String(L"done",4),3);
Static(running) = CreateEnum<ResourceCondition_obj >(String(L"running",7),1);
Static(suspended) = CreateEnum<ResourceCondition_obj >(String(L"suspended",9),2);
Static(waiting) = CreateEnum<ResourceCondition_obj >(String(L"waiting",7),0);
}


} // end namespace arrow
} // end namespace scheduler
} // end namespace resources
