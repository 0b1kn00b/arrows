#include <hxObject.h>

#ifndef INCLUDED_hxunit_AnonymousTestCase
#include <hxunit/AnonymousTestCase.h>
#endif
#ifndef INCLUDED_hxunit_TestCase
#include <hxunit/TestCase.h>
#endif
#ifndef INCLUDED_hxunit_TestFrameworkPrimitive
#include <hxunit/TestFrameworkPrimitive.h>
#endif
namespace hxunit{

Void AnonymousTestCase_obj::__construct()
{
{
	super::__construct();
}
;
	return null();
}

AnonymousTestCase_obj::~AnonymousTestCase_obj() { }

Dynamic AnonymousTestCase_obj::__CreateEmpty() { return  new AnonymousTestCase_obj; }
hxObjectPtr<AnonymousTestCase_obj > AnonymousTestCase_obj::__new()
{  hxObjectPtr<AnonymousTestCase_obj > result = new AnonymousTestCase_obj();
	result->__construct();
	return result;}

Dynamic AnonymousTestCase_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<AnonymousTestCase_obj > result = new AnonymousTestCase_obj();
	result->__construct();
	return result;}


AnonymousTestCase_obj::AnonymousTestCase_obj()
{
	INIT_IMPLEMENT_DYNAMIC;
}

Dynamic AnonymousTestCase_obj::__Field(const String &inName)
{
	CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName);
}



Dynamic AnonymousTestCase_obj::__IField(int inFieldID)
{
	CHECK_DYNAMIC_GET_INT_FIELD(inFieldID);
	return super::__IField(inFieldID);
}

Dynamic AnonymousTestCase_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	try { return super::__SetField(inName,inValue); }
	catch(Dynamic e) { DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void AnonymousTestCase_obj::__GetFields(Array<String> &outFields)
{
	APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class AnonymousTestCase_obj::__mClass;

void AnonymousTestCase_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"hxunit.AnonymousTestCase",24), TCanCast<AnonymousTestCase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void AnonymousTestCase_obj::__boot()
{
}

} // end namespace hxunit
