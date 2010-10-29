#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_TaggedValue
#include <haxe/functional/arrows/TaggedValue.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{

Void TaggedValue_obj::__construct(Dynamic tag,Dynamic value)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/TaggedValue.hx",30)
	this->__FieldRef(HX_CSTRING("tag")) = tag;
	HX_SOURCE_POS("src/haxe/functional/arrows/TaggedValue.hx",31)
	this->__FieldRef(HX_CSTRING("value")) = value;
}
;
	return null();
}

TaggedValue_obj::~TaggedValue_obj() { }

Dynamic TaggedValue_obj::__CreateEmpty() { return  new TaggedValue_obj; }
hx::ObjectPtr< TaggedValue_obj > TaggedValue_obj::__new(Dynamic tag,Dynamic value)
{  hx::ObjectPtr< TaggedValue_obj > result = new TaggedValue_obj();
	result->__construct(tag,value);
	return result;}

Dynamic TaggedValue_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TaggedValue_obj > result = new TaggedValue_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


TaggedValue_obj::TaggedValue_obj()
{
}

void TaggedValue_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TaggedValue);
	HX_MARK_MEMBER_NAME(tag,"tag");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

Dynamic TaggedValue_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tag") ) { return tag; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
	}
	return super::__Field(inName);
}

Dynamic TaggedValue_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tag") ) { tag=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void TaggedValue_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tag"));
	outFields->push(HX_CSTRING("value"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("tag"),
	HX_CSTRING("value"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class TaggedValue_obj::__mClass;

void TaggedValue_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.TaggedValue"), hx::TCanCast< TaggedValue_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void TaggedValue_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
