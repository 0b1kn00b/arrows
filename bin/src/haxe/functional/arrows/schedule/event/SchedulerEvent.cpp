#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_schedule_event_SchedulerEvent
#include <haxe/functional/arrows/schedule/event/SchedulerEvent.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace event{

Void SchedulerEvent_obj::__construct(Dynamic type)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/event/SchedulerEvent.hx",29)
	this->__FieldRef(HX_CSTRING("id")) = type;
}
;
	return null();
}

SchedulerEvent_obj::~SchedulerEvent_obj() { }

Dynamic SchedulerEvent_obj::__CreateEmpty() { return  new SchedulerEvent_obj; }
hx::ObjectPtr< SchedulerEvent_obj > SchedulerEvent_obj::__new(Dynamic type)
{  hx::ObjectPtr< SchedulerEvent_obj > result = new SchedulerEvent_obj();
	result->__construct(type);
	return result;}

Dynamic SchedulerEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SchedulerEvent_obj > result = new SchedulerEvent_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic SchedulerEvent_obj::toString( ){
	HX_SOURCE_PUSH("SchedulerEvent_obj::toString")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/event/SchedulerEvent.hx",32)
	return this->__Field(HX_CSTRING("id"));
}


HX_DEFINE_DYNAMIC_FUNC0(SchedulerEvent_obj,toString,return )


SchedulerEvent_obj::SchedulerEvent_obj()
{
}

void SchedulerEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SchedulerEvent);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

Dynamic SchedulerEvent_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic SchedulerEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void SchedulerEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class SchedulerEvent_obj::__mClass;

void SchedulerEvent_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.event.SchedulerEvent"), hx::TCanCast< SchedulerEvent_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void SchedulerEvent_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace event
