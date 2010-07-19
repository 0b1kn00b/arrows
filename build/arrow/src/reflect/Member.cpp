#include <hxObject.h>

#ifndef INCLUDED_reflect_Field
#include <reflect/Field.h>
#endif
#ifndef INCLUDED_reflect_Member
#include <reflect/Member.h>
#endif
#ifndef INCLUDED_reflect_NamedField
#include <reflect/NamedField.h>
#endif
#ifndef INCLUDED_reflect_RType
#include <reflect/RType.h>
#endif
namespace reflect{

Void Member_obj::__construct()
{
{
}
;
	return null();
}

Member_obj::~Member_obj() { }

Dynamic Member_obj::__CreateEmpty() { return  new Member_obj; }
hxObjectPtr<Member_obj > Member_obj::__new()
{  hxObjectPtr<Member_obj > result = new Member_obj();
	result->__construct();
	return result;}

Dynamic Member_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Member_obj > result = new Member_obj();
	result->__construct();
	return result;}

reflect::RType Member_obj::getDeclaredBy( ){
	return this->declaredBy;
}


DEFINE_DYNAMIC_FUNC0(Member_obj,getDeclaredBy,return )

reflect::RType Member_obj::setDeclaredBy( reflect::RType type){
	return this->declaredBy = type;
}


DEFINE_DYNAMIC_FUNC1(Member_obj,setDeclaredBy,return )


Member_obj::Member_obj()
{
	InitMember(declaredBy);
}

Dynamic Member_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 10:
		if (!memcmp(inName.__s,L"declaredBy",sizeof(wchar_t)*10) ) { return declaredBy; }
		break;
	case 13:
		if (!memcmp(inName.__s,L"getDeclaredBy",sizeof(wchar_t)*13) ) { return getDeclaredBy_dyn(); }
		if (!memcmp(inName.__s,L"setDeclaredBy",sizeof(wchar_t)*13) ) { return setDeclaredBy_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_declaredBy = __hxcpp_field_to_id("declaredBy");
static int __id_getDeclaredBy = __hxcpp_field_to_id("getDeclaredBy");
static int __id_setDeclaredBy = __hxcpp_field_to_id("setDeclaredBy");


Dynamic Member_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_declaredBy) return declaredBy;
	if (inFieldID==__id_getDeclaredBy) return getDeclaredBy_dyn();
	if (inFieldID==__id_setDeclaredBy) return setDeclaredBy_dyn();
	return super::__IField(inFieldID);
}

Dynamic Member_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 10:
		if (!memcmp(inName.__s,L"declaredBy",sizeof(wchar_t)*10) ) { declaredBy=inValue.Cast<reflect::RType >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Member_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"declaredBy",10));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"declaredBy",
	L"getDeclaredBy",
	L"setDeclaredBy",
	0 };

Class Member_obj::__mClass;

void Member_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"reflect.Member",14), TCanCast<Member_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Member_obj::__boot()
{
}

} // end namespace reflect
