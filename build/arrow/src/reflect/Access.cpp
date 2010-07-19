#include <hxObject.h>

#ifndef INCLUDED_reflect_Access
#include <reflect/Access.h>
#endif
namespace reflect{

Access Access_obj::assignment;

Access Access_obj::read;

Access Access_obj::readwrite;

Access Access_obj::write;

DEFINE_CREATE_ENUM(Access_obj)

int Access_obj::__FindIndex(String inName)
{
	if (inName==String(L"assignment",10)) return 0;
	if (inName==String(L"read",4)) return 1;
	if (inName==String(L"readwrite",9)) return 3;
	if (inName==String(L"write",5)) return 2;
	return super::__FindIndex(inName);
}

int Access_obj::__FindArgCount(String inName)
{
	if (inName==String(L"assignment",10)) return 0;
	if (inName==String(L"read",4)) return 0;
	if (inName==String(L"readwrite",9)) return 0;
	if (inName==String(L"write",5)) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Access_obj::__Field(const String &inName)
{
	if (inName==String(L"assignment",10)) return assignment;
	if (inName==String(L"read",4)) return read;
	if (inName==String(L"readwrite",9)) return readwrite;
	if (inName==String(L"write",5)) return write;
	return super::__Field(inName);
}

static wchar_t *sStaticFields[] = {
	L"assignment",
	L"read",
	L"readwrite",
	L"write",
	0 };

static wchar_t *sMemberFields[] = { 0 };
Class Access_obj::__mClass;

Dynamic __Create_Access_obj() { return new Access_obj; }

void Access_obj::__register()
{

Static(__mClass) = RegisterClass(String(L"reflect.Access",14), TCanCast<Access_obj >,sStaticFields,sMemberFields,
	&__Create_Access_obj, &__Create,
	&super::__SGetClass(), &CreateAccess_obj);
}

void Access_obj::__boot()
{
Static(assignment) = CreateEnum<Access_obj >(String(L"assignment",10),0);
Static(read) = CreateEnum<Access_obj >(String(L"read",4),1);
Static(readwrite) = CreateEnum<Access_obj >(String(L"readwrite",9),3);
Static(write) = CreateEnum<Access_obj >(String(L"write",5),2);
}


} // end namespace reflect
