#include <hxObject.h>

#ifndef INCLUDED_hxunit_AType
#include <hxunit/AType.h>
#endif
namespace hxunit{

AType AType_obj::bool;

AType  AType_obj::custom(Dynamic v)
	{ return CreateEnum<AType_obj >(String(L"custom",6),1,DynamicArray(0,1).Add(v)); }

DEFINE_CREATE_ENUM(AType_obj)

int AType_obj::__FindIndex(String inName)
{
	if (inName==String(L"bool",4)) return 0;
	if (inName==String(L"custom",6)) return 1;
	return super::__FindIndex(inName);
}

STATIC_DEFINE_DYNAMIC_FUNC1(AType_obj,custom,return)

int AType_obj::__FindArgCount(String inName)
{
	if (inName==String(L"bool",4)) return 0;
	if (inName==String(L"custom",6)) return 1;
	return super::__FindArgCount(inName);
}

Dynamic AType_obj::__Field(const String &inName)
{
	if (inName==String(L"bool",4)) return bool;
	if (inName==String(L"custom",6)) return custom_dyn();
	return super::__Field(inName);
}

static wchar_t *sStaticFields[] = {
	L"bool",
	L"custom",
	0 };

static wchar_t *sMemberFields[] = { 0 };
Class AType_obj::__mClass;

Dynamic __Create_AType_obj() { return new AType_obj; }

void AType_obj::__register()
{

Static(__mClass) = RegisterClass(String(L"hxunit.AType",12), TCanCast<AType_obj >,sStaticFields,sMemberFields,
	&__Create_AType_obj, &__Create,
	&super::__SGetClass(), &CreateAType_obj);
}

void AType_obj::__boot()
{
Static(bool) = CreateEnum<AType_obj >(String(L"bool",4),0);
}


} // end namespace hxunit
