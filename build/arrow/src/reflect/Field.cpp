#include <hxObject.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_reflect_Field
#include <reflect/Field.h>
#endif
#ifndef INCLUDED_reflect_Member
#include <reflect/Member.h>
#endif
namespace reflect{

Void Field_obj::__construct()
{
{
	super::__construct();
}
;
	return null();
}

Field_obj::~Field_obj() { }

Dynamic Field_obj::__CreateEmpty() { return  new Field_obj; }
hxObjectPtr<Field_obj > Field_obj::__new()
{  hxObjectPtr<Field_obj > result = new Field_obj();
	result->__construct();
	return result;}

Dynamic Field_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Field_obj > result = new Field_obj();
	result->__construct();
	return result;}

Dynamic Field_obj::getValue( ){
	return this->value;
}


DEFINE_DYNAMIC_FUNC0(Field_obj,getValue,return )

Dynamic Field_obj::setValue( Dynamic value){
	return this->value = value;
}


DEFINE_DYNAMIC_FUNC1(Field_obj,setValue,return )

Class Field_obj::getClassRef( ){
	if (this->classRef == null()){
		if (this->getValue() != null()){
			this->setClassRef(Type_obj::getClass(this->getValue()));
		}
	}
	return this->classRef;
}


DEFINE_DYNAMIC_FUNC0(Field_obj,getClassRef,return )

Class Field_obj::setClassRef( Class value){
	return this->classRef = value;
}


DEFINE_DYNAMIC_FUNC1(Field_obj,setClassRef,return )


Field_obj::Field_obj()
{
	InitMember(value);
	InitMember(classRef);
}

Dynamic Field_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 5:
		if (!memcmp(inName.__s,L"value",sizeof(wchar_t)*5) ) { return value; }
		break;
	case 8:
		if (!memcmp(inName.__s,L"getValue",sizeof(wchar_t)*8) ) { return getValue_dyn(); }
		if (!memcmp(inName.__s,L"setValue",sizeof(wchar_t)*8) ) { return setValue_dyn(); }
		if (!memcmp(inName.__s,L"classRef",sizeof(wchar_t)*8) ) { return classRef; }
		break;
	case 11:
		if (!memcmp(inName.__s,L"getClassRef",sizeof(wchar_t)*11) ) { return getClassRef_dyn(); }
		if (!memcmp(inName.__s,L"setClassRef",sizeof(wchar_t)*11) ) { return setClassRef_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_value = __hxcpp_field_to_id("value");
static int __id_getValue = __hxcpp_field_to_id("getValue");
static int __id_setValue = __hxcpp_field_to_id("setValue");
static int __id_classRef = __hxcpp_field_to_id("classRef");
static int __id_getClassRef = __hxcpp_field_to_id("getClassRef");
static int __id_setClassRef = __hxcpp_field_to_id("setClassRef");


Dynamic Field_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_value) return value;
	if (inFieldID==__id_getValue) return getValue_dyn();
	if (inFieldID==__id_setValue) return setValue_dyn();
	if (inFieldID==__id_classRef) return classRef;
	if (inFieldID==__id_getClassRef) return getClassRef_dyn();
	if (inFieldID==__id_setClassRef) return setClassRef_dyn();
	return super::__IField(inFieldID);
}

Dynamic Field_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (!memcmp(inName.__s,L"value",sizeof(wchar_t)*5) ) { value=inValue.Cast<Dynamic >();return inValue; }
		break;
	case 8:
		if (!memcmp(inName.__s,L"classRef",sizeof(wchar_t)*8) ) { classRef=inValue.Cast<Class >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Field_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"value",5));
	outFields->push(String(L"classRef",8));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"value",
	L"getValue",
	L"setValue",
	L"classRef",
	L"getClassRef",
	L"setClassRef",
	0 };

Class Field_obj::__mClass;

void Field_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"reflect.Field",13), TCanCast<Field_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Field_obj::__boot()
{
}

} // end namespace reflect
