#include <hxObject.h>

#ifndef INCLUDED_hxunit_Test
#include <hxunit/Test.h>
#endif
namespace hxunit{

Void Test_obj::__construct(String name,Dynamic method)
{
{
	this->name = name;
	this->method = method;
}
;
	return null();
}

Test_obj::~Test_obj() { }

Dynamic Test_obj::__CreateEmpty() { return  new Test_obj; }
hxObjectPtr<Test_obj > Test_obj::__new(String name,Dynamic method)
{  hxObjectPtr<Test_obj > result = new Test_obj();
	result->__construct(name,method);
	return result;}

Dynamic Test_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Test_obj > result = new Test_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


Test_obj::Test_obj()
{
	InitMember(name);
}

Dynamic Test_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"name",sizeof(wchar_t)*4) ) { return name; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"method",sizeof(wchar_t)*6) ) { return method; }
	}
	return super::__Field(inName);
}

static int __id_name = __hxcpp_field_to_id("name");
static int __id_method = __hxcpp_field_to_id("method");


Dynamic Test_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_name) return name;
	if (inFieldID==__id_method) return method;
	return super::__IField(inFieldID);
}

Dynamic Test_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"name",sizeof(wchar_t)*4) ) { name=inValue.Cast<String >();return inValue; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"method",sizeof(wchar_t)*6) ) { method=inValue.Cast<Dynamic >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Test_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"name",4));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"name",
	L"method",
	0 };

Class Test_obj::__mClass;

void Test_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"hxunit.Test",11), TCanCast<Test_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Test_obj::__boot()
{
}

} // end namespace hxunit
