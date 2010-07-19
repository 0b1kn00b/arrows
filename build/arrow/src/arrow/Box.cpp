#include <hxObject.h>

#ifndef INCLUDED_arrow_Box
#include <arrow/Box.h>
#endif
namespace arrow{

Void Box_obj::__construct(Dynamic vals)
{
{
	this->data = vals;
}
;
	return null();
}

Box_obj::~Box_obj() { }

Dynamic Box_obj::__CreateEmpty() { return  new Box_obj; }
hxObjectPtr<Box_obj > Box_obj::__new(Dynamic vals)
{  hxObjectPtr<Box_obj > result = new Box_obj();
	result->__construct(vals);
	return result;}

Dynamic Box_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Box_obj > result = new Box_obj();
	result->__construct(inArgs[0]);
	return result;}


Box_obj::Box_obj()
{
	InitMember(data);
}

Dynamic Box_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"data",sizeof(wchar_t)*4) ) { return data; }
	}
	return super::__Field(inName);
}

static int __id_data = __hxcpp_field_to_id("data");


Dynamic Box_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_data) return data;
	return super::__IField(inFieldID);
}

Dynamic Box_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"data",sizeof(wchar_t)*4) ) { data=inValue.Cast<Dynamic >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Box_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"data",4));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"data",
	0 };

Class Box_obj::__mClass;

void Box_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.Box",9), TCanCast<Box_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Box_obj::__boot()
{
}

} // end namespace arrow
