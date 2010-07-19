#include <hxObject.h>

#ifndef INCLUDED_hxunit_error_HxUnitError
#include <hxunit/error/HxUnitError.h>
#endif
#ifndef INCLUDED_hxunit_error_TestError
#include <hxunit/error/TestError.h>
#endif
namespace hxunit{
namespace error{

Void TestError_obj::__construct(String message,Dynamic error,Dynamic posInfos)
{
{
	this->e = error;
	super::__construct(message,this->pos);
}
;
	return null();
}

TestError_obj::~TestError_obj() { }

Dynamic TestError_obj::__CreateEmpty() { return  new TestError_obj; }
hxObjectPtr<TestError_obj > TestError_obj::__new(String message,Dynamic error,Dynamic posInfos)
{  hxObjectPtr<TestError_obj > result = new TestError_obj();
	result->__construct(message,error,posInfos);
	return result;}

Dynamic TestError_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<TestError_obj > result = new TestError_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

String TestError_obj::toString( ){
	return String(L"[ TestError: ",13) + this->message + String(L" -> ",4) + this->e + String(L" ]",2);
}


DEFINE_DYNAMIC_FUNC0(TestError_obj,toString,return )


TestError_obj::TestError_obj()
{
	InitMember(e);
}

Dynamic TestError_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 1:
		if (!memcmp(inName.__s,L"e",sizeof(wchar_t)*1) ) { return e; }
		break;
	case 8:
		if (!memcmp(inName.__s,L"toString",sizeof(wchar_t)*8) ) { return toString_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_e = __hxcpp_field_to_id("e");
static int __id_toString = __hxcpp_field_to_id("toString");


Dynamic TestError_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_e) return e;
	if (inFieldID==__id_toString) return toString_dyn();
	return super::__IField(inFieldID);
}

Dynamic TestError_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (!memcmp(inName.__s,L"e",sizeof(wchar_t)*1) ) { e=inValue.Cast<Dynamic >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void TestError_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"e",1));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"e",
	L"toString",
	0 };

Class TestError_obj::__mClass;

void TestError_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"hxunit.error.TestError",22), TCanCast<TestError_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void TestError_obj::__boot()
{
}

} // end namespace hxunit
} // end namespace error
