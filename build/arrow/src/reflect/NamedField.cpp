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
namespace reflect{

Void NamedField_obj::__construct()
{
{
	super::__construct();
}
;
	return null();
}

NamedField_obj::~NamedField_obj() { }

Dynamic NamedField_obj::__CreateEmpty() { return  new NamedField_obj; }
hxObjectPtr<NamedField_obj > NamedField_obj::__new()
{  hxObjectPtr<NamedField_obj > result = new NamedField_obj();
	result->__construct();
	return result;}

Dynamic NamedField_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<NamedField_obj > result = new NamedField_obj();
	result->__construct();
	return result;}

reflect::Field NamedField_obj::getName( ){
	return this->name;
}


DEFINE_DYNAMIC_FUNC0(NamedField_obj,getName,return )

reflect::Field NamedField_obj::setName( reflect::Field value){
	return this->name = value;
}


DEFINE_DYNAMIC_FUNC1(NamedField_obj,setName,return )

Class NamedField_obj::getClassRef( ){
	if (this->classRef == null()){
	}
	return this->classRef;
}


DEFINE_DYNAMIC_FUNC0(NamedField_obj,getClassRef,return )


NamedField_obj::NamedField_obj()
{
	InitMember(name);
}

Dynamic NamedField_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"name",sizeof(wchar_t)*4) ) { return name; }
		break;
	case 7:
		if (!memcmp(inName.__s,L"getName",sizeof(wchar_t)*7) ) { return getName_dyn(); }
		if (!memcmp(inName.__s,L"setName",sizeof(wchar_t)*7) ) { return setName_dyn(); }
		break;
	case 11:
		if (!memcmp(inName.__s,L"getClassRef",sizeof(wchar_t)*11) ) { return getClassRef_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_name = __hxcpp_field_to_id("name");
static int __id_getName = __hxcpp_field_to_id("getName");
static int __id_setName = __hxcpp_field_to_id("setName");
static int __id_getClassRef = __hxcpp_field_to_id("getClassRef");


Dynamic NamedField_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_name) return name;
	if (inFieldID==__id_getName) return getName_dyn();
	if (inFieldID==__id_setName) return setName_dyn();
	if (inFieldID==__id_getClassRef) return getClassRef_dyn();
	return super::__IField(inFieldID);
}

Dynamic NamedField_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"name",sizeof(wchar_t)*4) ) { name=inValue.Cast<reflect::Field >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void NamedField_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"name",4));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"name",
	L"getName",
	L"setName",
	L"getClassRef",
	0 };

Class NamedField_obj::__mClass;

void NamedField_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"reflect.NamedField",18), TCanCast<NamedField_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void NamedField_obj::__boot()
{
}

} // end namespace reflect
