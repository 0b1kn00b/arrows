#include <hxObject.h>

#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_util_Util
#include <util/Util.h>
#endif
namespace util{

Void Util_obj::__construct()
{
	return null();
}

Util_obj::~Util_obj() { }

Dynamic Util_obj::__CreateEmpty() { return  new Util_obj; }
hxObjectPtr<Util_obj > Util_obj::__new()
{  hxObjectPtr<Util_obj > result = new Util_obj();
	result->__construct();
	return result;}

Dynamic Util_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Util_obj > result = new Util_obj();
	result->__construct();
	return result;}

bool Util_obj::isNull( Dynamic value){
	return (value == null());
}


STATIC_DEFINE_DYNAMIC_FUNC1(Util_obj,isNull,return )

bool Util_obj::isNotNull( arrow::AsyncArrow value){
	return (value != null());
}


STATIC_DEFINE_DYNAMIC_FUNC1(Util_obj,isNotNull,return )


Util_obj::Util_obj()
{
}

Dynamic Util_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 6:
		if (!memcmp(inName.__s,L"isNull",sizeof(wchar_t)*6) ) { return isNull_dyn(); }
		break;
	case 9:
		if (!memcmp(inName.__s,L"isNotNull",sizeof(wchar_t)*9) ) { return isNotNull_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_isNull = __hxcpp_field_to_id("isNull");
static int __id_isNotNull = __hxcpp_field_to_id("isNotNull");


Dynamic Util_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_isNull) return isNull_dyn();
	if (inFieldID==__id_isNotNull) return isNotNull_dyn();
	return super::__IField(inFieldID);
}

Dynamic Util_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Util_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"isNull",
	L"isNotNull",
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class Util_obj::__mClass;

void Util_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"util.Util",9), TCanCast<Util_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Util_obj::__boot()
{
}

} // end namespace util
