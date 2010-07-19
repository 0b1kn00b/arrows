#include <hxObject.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_hxunit_TestFrameworkPrimitive
#include <hxunit/TestFrameworkPrimitive.h>
#endif
namespace hxunit{

Void TestFrameworkPrimitive_obj::__construct()
{
{
}
;
	return null();
}

TestFrameworkPrimitive_obj::~TestFrameworkPrimitive_obj() { }

Dynamic TestFrameworkPrimitive_obj::__CreateEmpty() { return  new TestFrameworkPrimitive_obj; }
hxObjectPtr<TestFrameworkPrimitive_obj > TestFrameworkPrimitive_obj::__new()
{  hxObjectPtr<TestFrameworkPrimitive_obj > result = new TestFrameworkPrimitive_obj();
	result->__construct();
	return result;}

Dynamic TestFrameworkPrimitive_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<TestFrameworkPrimitive_obj > result = new TestFrameworkPrimitive_obj();
	result->__construct();
	return result;}

String TestFrameworkPrimitive_obj::getName( ){
	return Type_obj::getClassName(Type_obj::getClass(this));
}


DEFINE_DYNAMIC_FUNC0(TestFrameworkPrimitive_obj,getName,return )


TestFrameworkPrimitive_obj::TestFrameworkPrimitive_obj()
{
	InitMember(name);
}

Dynamic TestFrameworkPrimitive_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"name",sizeof(wchar_t)*4) ) { return name; }
		break;
	case 7:
		if (!memcmp(inName.__s,L"getName",sizeof(wchar_t)*7) ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_name = __hxcpp_field_to_id("name");
static int __id_getName = __hxcpp_field_to_id("getName");


Dynamic TestFrameworkPrimitive_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_name) return name;
	if (inFieldID==__id_getName) return getName_dyn();
	return super::__IField(inFieldID);
}

Dynamic TestFrameworkPrimitive_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"name",sizeof(wchar_t)*4) ) { name=inValue.Cast<String >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void TestFrameworkPrimitive_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"name",4));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"name",
	L"getName",
	0 };

Class TestFrameworkPrimitive_obj::__mClass;

void TestFrameworkPrimitive_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"hxunit.TestFrameworkPrimitive",29), TCanCast<TestFrameworkPrimitive_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void TestFrameworkPrimitive_obj::__boot()
{
}

} // end namespace hxunit
