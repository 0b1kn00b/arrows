#include <hxObject.h>

#ifndef INCLUDED_reflect_Argument
#include <reflect/Argument.h>
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
#ifndef INCLUDED_reflect_RType
#include <reflect/RType.h>
#endif
namespace reflect{

Void Method_obj::__construct()
{
{
	super::__construct();
}
;
	return null();
}

Method_obj::~Method_obj() { }

Dynamic Method_obj::__CreateEmpty() { return  new Method_obj; }
hxObjectPtr<Method_obj > Method_obj::__new()
{  hxObjectPtr<Method_obj > result = new Method_obj();
	result->__construct();
	return result;}

Dynamic Method_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Method_obj > result = new Method_obj();
	result->__construct();
	return result;}

Dynamic Method_obj::getValue( ){
	if (this->value == null()){
		if (this->getDeclaredBy() != null()){
			this->setValue(this->getDeclaredBy()->getValue()->__Field(this->getName()->getValue().Cast<String >()));
		}
	}
	return this->value;
}


DEFINE_DYNAMIC_FUNC0(Method_obj,getValue,return )


Method_obj::Method_obj()
{
	InitMember(arguments);
}

Dynamic Method_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 8:
		if (!memcmp(inName.__s,L"getValue",sizeof(wchar_t)*8) ) { return getValue_dyn(); }
		break;
	case 9:
		if (!memcmp(inName.__s,L"arguments",sizeof(wchar_t)*9) ) { return arguments; }
	}
	return super::__Field(inName);
}

static int __id_arguments = __hxcpp_field_to_id("arguments");
static int __id_getValue = __hxcpp_field_to_id("getValue");


Dynamic Method_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_arguments) return arguments;
	if (inFieldID==__id_getValue) return getValue_dyn();
	return super::__IField(inFieldID);
}

Dynamic Method_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 9:
		if (!memcmp(inName.__s,L"arguments",sizeof(wchar_t)*9) ) { arguments=inValue.Cast<Array<reflect::Argument > >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Method_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"arguments",9));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"arguments",
	L"getValue",
	0 };

Class Method_obj::__mClass;

void Method_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"reflect.Method",14), TCanCast<Method_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Method_obj::__boot()
{
}

} // end namespace reflect
