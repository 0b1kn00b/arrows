#include <hxObject.h>

#ifndef INCLUDED_reflect_AccessorType
#include <reflect/AccessorType.h>
#endif
namespace reflect{

DEFINE_CREATE_ENUM(AccessorType_obj)

int AccessorType_obj::__FindIndex(String inName)
{
	return super::__FindIndex(inName);
}

int AccessorType_obj::__FindArgCount(String inName)
{
	return super::__FindArgCount(inName);
}

Dynamic AccessorType_obj::__Field(const String &inName)
{
	return super::__Field(inName);
}

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = { 0 };
Class AccessorType_obj::__mClass;

Dynamic __Create_AccessorType_obj() { return new AccessorType_obj; }

void AccessorType_obj::__register()
{

Static(__mClass) = RegisterClass(String(L"reflect.AccessorType",20), TCanCast<AccessorType_obj >,sStaticFields,sMemberFields,
	&__Create_AccessorType_obj, &__Create,
	&super::__SGetClass(), &CreateAccessorType_obj);
}

void AccessorType_obj::__boot()
{
}


} // end namespace reflect
