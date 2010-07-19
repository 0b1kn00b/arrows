#include <hxObject.h>

#ifndef INCLUDED_arrow_TaggedValue
#include <arrow/TaggedValue.h>
#endif
namespace arrow{

Void TaggedValue_obj::__construct(Dynamic tag,Dynamic value)
{
{
	this->tag = tag;
	this->value = value;
}
;
	return null();
}

TaggedValue_obj::~TaggedValue_obj() { }

Dynamic TaggedValue_obj::__CreateEmpty() { return  new TaggedValue_obj; }
hxObjectPtr<TaggedValue_obj > TaggedValue_obj::__new(Dynamic tag,Dynamic value)
{  hxObjectPtr<TaggedValue_obj > result = new TaggedValue_obj();
	result->__construct(tag,value);
	return result;}

Dynamic TaggedValue_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<TaggedValue_obj > result = new TaggedValue_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


TaggedValue_obj::TaggedValue_obj()
{
	InitMember(tag);
	InitMember(value);
}

Dynamic TaggedValue_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"tag",sizeof(wchar_t)*3) ) { return tag; }
		break;
	case 5:
		if (!memcmp(inName.__s,L"value",sizeof(wchar_t)*5) ) { return value; }
	}
	return super::__Field(inName);
}

static int __id_tag = __hxcpp_field_to_id("tag");
static int __id_value = __hxcpp_field_to_id("value");


Dynamic TaggedValue_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_tag) return tag;
	if (inFieldID==__id_value) return value;
	return super::__IField(inFieldID);
}

Dynamic TaggedValue_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"tag",sizeof(wchar_t)*3) ) { tag=inValue.Cast<Dynamic >();return inValue; }
		break;
	case 5:
		if (!memcmp(inName.__s,L"value",sizeof(wchar_t)*5) ) { value=inValue.Cast<Dynamic >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void TaggedValue_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"tag",3));
	outFields->push(String(L"value",5));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"tag",
	L"value",
	0 };

Class TaggedValue_obj::__mClass;

void TaggedValue_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.TaggedValue",17), TCanCast<TaggedValue_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void TaggedValue_obj::__boot()
{
}

} // end namespace arrow
