#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_schedule_BaseScheduler
#include <haxe/functional/arrows/schedule/BaseScheduler.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_ScheduleManager
#include <haxe/functional/arrows/schedule/ScheduleManager.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_Scheduler
#include <haxe/functional/arrows/schedule/Scheduler.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{

Void BaseScheduler_obj::__construct(::haxe::functional::arrows::schedule::ScheduleManager manager)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Scheduler.hx",32)
	this->manager = manager;
}
;
	return null();
}

BaseScheduler_obj::~BaseScheduler_obj() { }

Dynamic BaseScheduler_obj::__CreateEmpty() { return  new BaseScheduler_obj; }
hx::ObjectPtr< BaseScheduler_obj > BaseScheduler_obj::__new(::haxe::functional::arrows::schedule::ScheduleManager manager)
{  hx::ObjectPtr< BaseScheduler_obj > result = new BaseScheduler_obj();
	result->__construct(manager);
	return result;}

Dynamic BaseScheduler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BaseScheduler_obj > result = new BaseScheduler_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *BaseScheduler_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::haxe::functional::arrows::schedule::Scheduler_obj)) return operator ::haxe::functional::arrows::schedule::Scheduler_obj *();
	return super::__ToInterface(inType);
}


BaseScheduler_obj::BaseScheduler_obj()
{
}

void BaseScheduler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseScheduler);
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(invoke,"invoke");
	HX_MARK_END_CLASS();
}

Dynamic BaseScheduler_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"invoke") ) { return invoke; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
	}
	return super::__Field(inName);
}

Dynamic BaseScheduler_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"invoke") ) { invoke=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::haxe::functional::arrows::schedule::ScheduleManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void BaseScheduler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("manager"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("manager"),
	HX_CSTRING("invoke"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class BaseScheduler_obj::__mClass;

void BaseScheduler_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.BaseScheduler"), hx::TCanCast< BaseScheduler_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void BaseScheduler_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
