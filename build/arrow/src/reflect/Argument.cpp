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
namespace reflect{

Void Argument_obj::__construct()
{
{
	super::__construct();
}
;
	return null();
}

Argument_obj::~Argument_obj() { }

Dynamic Argument_obj::__CreateEmpty() { return  new Argument_obj; }
hxObjectPtr<Argument_obj > Argument_obj::__new()
{  hxObjectPtr<Argument_obj > result = new Argument_obj();
	result->__construct();
	return result;}

Dynamic Argument_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Argument_obj > result = new Argument_obj();
	result->__construct();
	return result;}


Argument_obj::Argument_obj()
{
	InitMember(necessary);
}

Dynamic Argument_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 9:
		if (!memcmp(inName.__s,L"necessary",sizeof(wchar_t)*9) ) { return necessary; }
	}
	return super::__Field(inName);
}

static int __id_necessary = __hxcpp_field_to_id("necessary");


Dynamic Argument_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_necessary) return necessary;
	return super::__IField(inFieldID);
}

Dynamic Argument_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 9:
		if (!memcmp(inName.__s,L"necessary",sizeof(wchar_t)*9) ) { necessary=inValue.Cast<bool >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Argument_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"necessary",9));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"necessary",
	0 };

Class Argument_obj::__mClass;

void Argument_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"reflect.Argument",16), TCanCast<Argument_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Argument_obj::__boot()
{
}

} // end namespace reflect
