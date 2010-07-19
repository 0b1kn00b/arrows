#include <hxObject.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_util_ReflectUtil
#include <util/ReflectUtil.h>
#endif
namespace util{

Void ReflectUtil_obj::__construct()
{
	return null();
}

ReflectUtil_obj::~ReflectUtil_obj() { }

Dynamic ReflectUtil_obj::__CreateEmpty() { return  new ReflectUtil_obj; }
hxObjectPtr<ReflectUtil_obj > ReflectUtil_obj::__new()
{  hxObjectPtr<ReflectUtil_obj > result = new ReflectUtil_obj();
	result->__construct();
	return result;}

Dynamic ReflectUtil_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<ReflectUtil_obj > result = new ReflectUtil_obj();
	result->__construct();
	return result;}

bool ReflectUtil_obj::isIterable( Dynamic value){
	return Reflect_obj::isFunction(value->__Field(String(L"iterator",8)));
}


STATIC_DEFINE_DYNAMIC_FUNC1(ReflectUtil_obj,isIterable,return )

bool ReflectUtil_obj::isSubclassOf( Dynamic value,Class type){
	Class s = null();
	Class c = value;
	while((s = Type_obj::getSuperClass(c)) != null()){
		if (s == type){
			return true;
		}
		c = s;
	}
	return false;
}


STATIC_DEFINE_DYNAMIC_FUNC2(ReflectUtil_obj,isSubclassOf,return )

bool ReflectUtil_obj::isProperty( Dynamic value){
	return !Reflect_obj::isFunction(value);
}


STATIC_DEFINE_DYNAMIC_FUNC1(ReflectUtil_obj,isProperty,return )


ReflectUtil_obj::ReflectUtil_obj()
{
}

Dynamic ReflectUtil_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 10:
		if (!memcmp(inName.__s,L"isIterable",sizeof(wchar_t)*10) ) { return isIterable_dyn(); }
		if (!memcmp(inName.__s,L"isProperty",sizeof(wchar_t)*10) ) { return isProperty_dyn(); }
		break;
	case 12:
		if (!memcmp(inName.__s,L"isSubclassOf",sizeof(wchar_t)*12) ) { return isSubclassOf_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_isIterable = __hxcpp_field_to_id("isIterable");
static int __id_isSubclassOf = __hxcpp_field_to_id("isSubclassOf");
static int __id_isProperty = __hxcpp_field_to_id("isProperty");


Dynamic ReflectUtil_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_isIterable) return isIterable_dyn();
	if (inFieldID==__id_isSubclassOf) return isSubclassOf_dyn();
	if (inFieldID==__id_isProperty) return isProperty_dyn();
	return super::__IField(inFieldID);
}

Dynamic ReflectUtil_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ReflectUtil_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"isIterable",
	L"isSubclassOf",
	L"isProperty",
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class ReflectUtil_obj::__mClass;

void ReflectUtil_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"util.ReflectUtil",16), TCanCast<ReflectUtil_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void ReflectUtil_obj::__boot()
{
}

} // end namespace util
