#include <hxObject.h>

#ifndef INCLUDED_hxunit_error_HxUnitError
#include <hxunit/error/HxUnitError.h>
#endif
namespace hxunit{
namespace error{

Void HxUnitError_obj::__construct(String message,Dynamic pos)
{
{
	this->message = message;
	this->pos = pos;
}
;
	return null();
}

HxUnitError_obj::~HxUnitError_obj() { }

Dynamic HxUnitError_obj::__CreateEmpty() { return  new HxUnitError_obj; }
hxObjectPtr<HxUnitError_obj > HxUnitError_obj::__new(String message,Dynamic pos)
{  hxObjectPtr<HxUnitError_obj > result = new HxUnitError_obj();
	result->__construct(message,pos);
	return result;}

Dynamic HxUnitError_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<HxUnitError_obj > result = new HxUnitError_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


HxUnitError_obj::HxUnitError_obj()
{
	InitMember(message);
	InitMember(pos);
}

Dynamic HxUnitError_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"pos",sizeof(wchar_t)*3) ) { return pos; }
		break;
	case 7:
		if (!memcmp(inName.__s,L"message",sizeof(wchar_t)*7) ) { return message; }
	}
	return super::__Field(inName);
}

static int __id_message = __hxcpp_field_to_id("message");
static int __id_pos = __hxcpp_field_to_id("pos");


Dynamic HxUnitError_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_message) return message;
	if (inFieldID==__id_pos) return pos;
	return super::__IField(inFieldID);
}

Dynamic HxUnitError_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"pos",sizeof(wchar_t)*3) ) { pos=inValue.Cast<Dynamic >();return inValue; }
		break;
	case 7:
		if (!memcmp(inName.__s,L"message",sizeof(wchar_t)*7) ) { message=inValue.Cast<String >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void HxUnitError_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"message",7));
	outFields->push(String(L"pos",3));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"message",
	L"pos",
	0 };

Class HxUnitError_obj::__mClass;

void HxUnitError_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"hxunit.error.HxUnitError",24), TCanCast<HxUnitError_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void HxUnitError_obj::__boot()
{
}

} // end namespace hxunit
} // end namespace error
