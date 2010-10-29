#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_call_ArrowCall
#include <haxe/functional/arrows/schedule/call/ArrowCall.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_call_ArrowCallObject
#include <haxe/functional/arrows/schedule/call/ArrowCallObject.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_call_Call
#include <haxe/functional/arrows/schedule/call/Call.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace call{

Void ArrowCall_obj::__construct(::haxe::functional::arrows::schedule::call::ArrowCallObject v)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/call/ArrowCall.hx",28)
	super::__construct(v);
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/call/ArrowCall.hx",29)
	this->uuid = v->instance->uuid;
}
;
	return null();
}

ArrowCall_obj::~ArrowCall_obj() { }

Dynamic ArrowCall_obj::__CreateEmpty() { return  new ArrowCall_obj; }
hx::ObjectPtr< ArrowCall_obj > ArrowCall_obj::__new(::haxe::functional::arrows::schedule::call::ArrowCallObject v)
{  hx::ObjectPtr< ArrowCall_obj > result = new ArrowCall_obj();
	result->__construct(v);
	return result;}

Dynamic ArrowCall_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrowCall_obj > result = new ArrowCall_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ArrowCall_obj::invoke( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ArrowCall_obj::invoke")
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/call/ArrowCall.hx",32)
		this->__Field(HX_CSTRING("data")).Cast< ::haxe::functional::arrows::schedule::call::ArrowCallObject >()->invoke();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ArrowCall_obj,invoke,(void))


ArrowCall_obj::ArrowCall_obj()
{
}

void ArrowCall_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrowCall);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic ArrowCall_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"invoke") ) { return invoke_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ArrowCall_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ArrowCall_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("invoke"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ArrowCall_obj::__mClass;

void ArrowCall_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.call.ArrowCall"), hx::TCanCast< ArrowCall_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ArrowCall_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace call
