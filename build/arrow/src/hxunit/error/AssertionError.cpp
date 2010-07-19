#include <hxObject.h>

#ifndef INCLUDED_hxunit_error_AssertionError
#include <hxunit/error/AssertionError.h>
#endif
#ifndef INCLUDED_hxunit_error_HxUnitError
#include <hxunit/error/HxUnitError.h>
#endif
namespace hxunit{
namespace error{

Void AssertionError_obj::__construct(Dynamic __o_message,Dynamic pos)
{
String message = __o_message.Default(null());
{
	if (message == null()){
		message = String(L"no assertions made",18);
	}
	super::__construct(message,pos);
}
;
	return null();
}

AssertionError_obj::~AssertionError_obj() { }

Dynamic AssertionError_obj::__CreateEmpty() { return  new AssertionError_obj; }
hxObjectPtr<AssertionError_obj > AssertionError_obj::__new(Dynamic __o_message,Dynamic pos)
{  hxObjectPtr<AssertionError_obj > result = new AssertionError_obj();
	result->__construct(__o_message,pos);
	return result;}

Dynamic AssertionError_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<AssertionError_obj > result = new AssertionError_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

String AssertionError_obj::toString( ){
	return String(L"[AssertionError: ",17) + this->message + String(L" ]",2);
}


DEFINE_DYNAMIC_FUNC0(AssertionError_obj,toString,return )

hxunit::error::AssertionError AssertionError_obj::true( Dynamic pos){
	return hxunit::error::AssertionError_obj::__new(String(L"Expected true but was false",27),pos);
}


STATIC_DEFINE_DYNAMIC_FUNC1(AssertionError_obj,true,return )


AssertionError_obj::AssertionError_obj()
{
}

Dynamic AssertionError_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"true",sizeof(wchar_t)*4) ) { return true_dyn(); }
		break;
	case 8:
		if (!memcmp(inName.__s,L"toString",sizeof(wchar_t)*8) ) { return toString_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_true = __hxcpp_field_to_id("true");
static int __id_toString = __hxcpp_field_to_id("toString");


Dynamic AssertionError_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_true) return true_dyn();
	if (inFieldID==__id_toString) return toString_dyn();
	return super::__IField(inFieldID);
}

Dynamic AssertionError_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void AssertionError_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"true",
	0 };

static wchar_t *sMemberFields[] = {
	L"toString",
	0 };

Class AssertionError_obj::__mClass;

void AssertionError_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"hxunit.error.AssertionError",27), TCanCast<AssertionError_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void AssertionError_obj::__boot()
{
}

} // end namespace hxunit
} // end namespace error
