#include <hxObject.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_cpp_CppDate__
#include <cpp/CppDate__.h>
#endif
#ifndef INCLUDED_haxe_Md5
#include <haxe/Md5.h>
#endif
#ifndef INCLUDED_util_UUID
#include <util/UUID.h>
#endif
namespace util{

Void UUID_obj::__construct()
{
	return null();
}

UUID_obj::~UUID_obj() { }

Dynamic UUID_obj::__CreateEmpty() { return  new UUID_obj; }
hxObjectPtr<UUID_obj > UUID_obj::__new()
{  hxObjectPtr<UUID_obj > result = new UUID_obj();
	result->__construct();
	return result;}

Dynamic UUID_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<UUID_obj > result = new UUID_obj();
	result->__construct();
	return result;}

String UUID_obj::get( ){
	return haxe::Md5_obj::encode(cpp::CppDate___obj::now()->toString()) + String(L":",1) + Math_obj::round(Math_obj::random() * 100000);
}


STATIC_DEFINE_DYNAMIC_FUNC0(UUID_obj,get,return )


UUID_obj::UUID_obj()
{
}

Dynamic UUID_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"get",sizeof(wchar_t)*3) ) { return get_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_get = __hxcpp_field_to_id("get");


Dynamic UUID_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_get) return get_dyn();
	return super::__IField(inFieldID);
}

Dynamic UUID_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void UUID_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"get",
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class UUID_obj::__mClass;

void UUID_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"util.UUID",9), TCanCast<UUID_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void UUID_obj::__boot()
{
}

} // end namespace util
