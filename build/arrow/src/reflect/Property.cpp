#include <hxObject.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_reflect_Access
#include <reflect/Access.h>
#endif
#ifndef INCLUDED_reflect_Field
#include <reflect/Field.h>
#endif
#ifndef INCLUDED_reflect_Member
#include <reflect/Member.h>
#endif
#ifndef INCLUDED_reflect_Method
#include <reflect/Method.h>
#endif
#ifndef INCLUDED_reflect_NamedField
#include <reflect/NamedField.h>
#endif
#ifndef INCLUDED_reflect_Property
#include <reflect/Property.h>
#endif
#ifndef INCLUDED_reflect_RType
#include <reflect/RType.h>
#endif
namespace reflect{

Void Property_obj::__construct()
{
{
	super::__construct();
}
;
	return null();
}

Property_obj::~Property_obj() { }

Dynamic Property_obj::__CreateEmpty() { return  new Property_obj; }
hxObjectPtr<Property_obj > Property_obj::__new()
{  hxObjectPtr<Property_obj > result = new Property_obj();
	result->__construct();
	return result;}

Dynamic Property_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Property_obj > result = new Property_obj();
	result->__construct();
	return result;}

reflect::Method Property_obj::getGetter( ){
	return this->getter;
}


DEFINE_DYNAMIC_FUNC0(Property_obj,getGetter,return )

reflect::Method Property_obj::setGetter( reflect::Method method){
	return this->getter = method;
}


DEFINE_DYNAMIC_FUNC1(Property_obj,setGetter,return )

reflect::Method Property_obj::getSetter( ){
	return this->setter;
}


DEFINE_DYNAMIC_FUNC0(Property_obj,getSetter,return )

reflect::Method Property_obj::setSetter( reflect::Method method){
	return this->setter = method;
}


DEFINE_DYNAMIC_FUNC1(Property_obj,setSetter,return )

Dynamic Property_obj::getValue( ){
	if (this->getGetter() == null()){
		return this->getDeclaredBy()->getValue()->__Field(this->getName()->getValue().Cast<String >());
	}
	else{
		return Reflect_obj::callMethod(this->getDeclaredBy()->getValue(),this->getDeclaredBy()->getValue()->__Field(this->getName()->getValue().Cast<String >()),Array_obj<Dynamic >::__new());
	}
}


DEFINE_DYNAMIC_FUNC0(Property_obj,getValue,return )

Dynamic Property_obj::setValue( Dynamic value){
	if (this->getSetter() == null()){
		this->getDeclaredBy()->getValue()->__SetField(this->getName()->getValue().Cast<String >(),value);
		return value;
	}
	else{
		return Reflect_obj::callMethod(this->getDeclaredBy()->getValue(),this->getDeclaredBy()->getValue()->__Field(this->getName()->getValue().Cast<String >()),Array_obj<Dynamic >::__new().Add(value));
	}
}


DEFINE_DYNAMIC_FUNC1(Property_obj,setValue,return )


Property_obj::Property_obj()
{
	InitMember(getter);
	InitMember(setter);
	InitMember(access);
}

Dynamic Property_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 6:
		if (!memcmp(inName.__s,L"getter",sizeof(wchar_t)*6) ) { return getter; }
		if (!memcmp(inName.__s,L"setter",sizeof(wchar_t)*6) ) { return setter; }
		if (!memcmp(inName.__s,L"access",sizeof(wchar_t)*6) ) { return access; }
		break;
	case 8:
		if (!memcmp(inName.__s,L"getValue",sizeof(wchar_t)*8) ) { return getValue_dyn(); }
		if (!memcmp(inName.__s,L"setValue",sizeof(wchar_t)*8) ) { return setValue_dyn(); }
		break;
	case 9:
		if (!memcmp(inName.__s,L"getGetter",sizeof(wchar_t)*9) ) { return getGetter_dyn(); }
		if (!memcmp(inName.__s,L"setGetter",sizeof(wchar_t)*9) ) { return setGetter_dyn(); }
		if (!memcmp(inName.__s,L"getSetter",sizeof(wchar_t)*9) ) { return getSetter_dyn(); }
		if (!memcmp(inName.__s,L"setSetter",sizeof(wchar_t)*9) ) { return setSetter_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_getter = __hxcpp_field_to_id("getter");
static int __id_getGetter = __hxcpp_field_to_id("getGetter");
static int __id_setGetter = __hxcpp_field_to_id("setGetter");
static int __id_setter = __hxcpp_field_to_id("setter");
static int __id_getSetter = __hxcpp_field_to_id("getSetter");
static int __id_setSetter = __hxcpp_field_to_id("setSetter");
static int __id_access = __hxcpp_field_to_id("access");
static int __id_getValue = __hxcpp_field_to_id("getValue");
static int __id_setValue = __hxcpp_field_to_id("setValue");


Dynamic Property_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_getter) return getter;
	if (inFieldID==__id_getGetter) return getGetter_dyn();
	if (inFieldID==__id_setGetter) return setGetter_dyn();
	if (inFieldID==__id_setter) return setter;
	if (inFieldID==__id_getSetter) return getSetter_dyn();
	if (inFieldID==__id_setSetter) return setSetter_dyn();
	if (inFieldID==__id_access) return access;
	if (inFieldID==__id_getValue) return getValue_dyn();
	if (inFieldID==__id_setValue) return setValue_dyn();
	return super::__IField(inFieldID);
}

Dynamic Property_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (!memcmp(inName.__s,L"getter",sizeof(wchar_t)*6) ) { getter=inValue.Cast<reflect::Method >();return inValue; }
		if (!memcmp(inName.__s,L"setter",sizeof(wchar_t)*6) ) { setter=inValue.Cast<reflect::Method >();return inValue; }
		if (!memcmp(inName.__s,L"access",sizeof(wchar_t)*6) ) { access=inValue.Cast<reflect::Access >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Property_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"getter",6));
	outFields->push(String(L"setter",6));
	outFields->push(String(L"access",6));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"getter",
	L"getGetter",
	L"setGetter",
	L"setter",
	L"getSetter",
	L"setSetter",
	L"access",
	L"getValue",
	L"setValue",
	0 };

Class Property_obj::__mClass;

void Property_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"reflect.Property",16), TCanCast<Property_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Property_obj::__boot()
{
}

} // end namespace reflect
