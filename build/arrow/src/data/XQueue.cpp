#include <hxObject.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_data_XQueue
#include <data/XQueue.h>
#endif
namespace data{

Void XQueue_obj::__construct()
{
{
	this->content = List_obj::__new();
	this->length = 0;
}
;
	return null();
}

XQueue_obj::~XQueue_obj() { }

Dynamic XQueue_obj::__CreateEmpty() { return  new XQueue_obj; }
hxObjectPtr<XQueue_obj > XQueue_obj::__new()
{  hxObjectPtr<XQueue_obj > result = new XQueue_obj();
	result->__construct();
	return result;}

Dynamic XQueue_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<XQueue_obj > result = new XQueue_obj();
	result->__construct();
	return result;}

Void XQueue_obj::push( Dynamic value){
{
		this->content->push(value);
		this->length++;
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(XQueue_obj,push,(void))

Dynamic XQueue_obj::pop( ){
	this->length--;
	return this->content->pop();
}


DEFINE_DYNAMIC_FUNC0(XQueue_obj,pop,return )

String XQueue_obj::toString( ){
	return String(L"XQueue: length = ",17) + this->length;
}


DEFINE_DYNAMIC_FUNC0(XQueue_obj,toString,return )


XQueue_obj::XQueue_obj()
{
	InitMember(content);
	InitMember(length);
}

Dynamic XQueue_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"pop",sizeof(wchar_t)*3) ) { return pop_dyn(); }
		break;
	case 4:
		if (!memcmp(inName.__s,L"push",sizeof(wchar_t)*4) ) { return push_dyn(); }
		break;
	case 6:
		if (!memcmp(inName.__s,L"length",sizeof(wchar_t)*6) ) { return length; }
		break;
	case 7:
		if (!memcmp(inName.__s,L"content",sizeof(wchar_t)*7) ) { return content; }
		break;
	case 8:
		if (!memcmp(inName.__s,L"toString",sizeof(wchar_t)*8) ) { return toString_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_content = __hxcpp_field_to_id("content");
static int __id_length = __hxcpp_field_to_id("length");
static int __id_push = __hxcpp_field_to_id("push");
static int __id_pop = __hxcpp_field_to_id("pop");
static int __id_toString = __hxcpp_field_to_id("toString");


Dynamic XQueue_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_content) return content;
	if (inFieldID==__id_length) return length;
	if (inFieldID==__id_push) return push_dyn();
	if (inFieldID==__id_pop) return pop_dyn();
	if (inFieldID==__id_toString) return toString_dyn();
	return super::__IField(inFieldID);
}

Dynamic XQueue_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (!memcmp(inName.__s,L"length",sizeof(wchar_t)*6) ) { length=inValue.Cast<int >();return inValue; }
		break;
	case 7:
		if (!memcmp(inName.__s,L"content",sizeof(wchar_t)*7) ) { content=inValue.Cast<List >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void XQueue_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"content",7));
	outFields->push(String(L"length",6));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"content",
	L"length",
	L"push",
	L"pop",
	L"toString",
	0 };

Class XQueue_obj::__mClass;

void XQueue_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"data.XQueue",11), TCanCast<XQueue_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void XQueue_obj::__boot()
{
}

} // end namespace data
