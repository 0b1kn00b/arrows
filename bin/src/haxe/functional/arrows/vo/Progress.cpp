#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_vo_Progress
#include <haxe/functional/arrows/vo/Progress.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace vo{

Void Progress_obj::__construct(Dynamic detail)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/vo/Progress.hx",29)
	this->__FieldRef(HX_CSTRING("detail")) = detail;
}
;
	return null();
}

Progress_obj::~Progress_obj() { }

Dynamic Progress_obj::__CreateEmpty() { return  new Progress_obj; }
hx::ObjectPtr< Progress_obj > Progress_obj::__new(Dynamic detail)
{  hx::ObjectPtr< Progress_obj > result = new Progress_obj();
	result->__construct(detail);
	return result;}

Dynamic Progress_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Progress_obj > result = new Progress_obj();
	result->__construct(inArgs[0]);
	return result;}


Progress_obj::Progress_obj()
{
}

void Progress_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Progress);
	HX_MARK_MEMBER_NAME(detail,"detail");
	HX_MARK_END_CLASS();
}

Dynamic Progress_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"detail") ) { return detail; }
	}
	return super::__Field(inName);
}

Dynamic Progress_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"detail") ) { detail=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Progress_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("detail"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("detail"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Progress_obj::__mClass;

void Progress_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.vo.Progress"), hx::TCanCast< Progress_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Progress_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace vo
