#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_schedule_call_Call
#include <haxe/functional/arrows/schedule/call/Call.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace call{

Void Call_obj::__construct(Dynamic value)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/call/Call.hx",33)
	this->__FieldRef(HX_CSTRING("data")) = value;
}
;
	return null();
}

Call_obj::~Call_obj() { }

Dynamic Call_obj::__CreateEmpty() { return  new Call_obj; }
hx::ObjectPtr< Call_obj > Call_obj::__new(Dynamic value)
{  hx::ObjectPtr< Call_obj > result = new Call_obj();
	result->__construct(value);
	return result;}

Dynamic Call_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Call_obj > result = new Call_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Call_obj::invoke( ){
{
		HX_SOURCE_PUSH("Call_obj::invoke")
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/call/Call.hx",27)
		hx::Throw (HX_CSTRING("called abstract invoke() method, please subclass arrow.schedule.Call"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Call_obj,invoke,(void))

Void Call_obj::init( ){
{
		HX_SOURCE_PUSH("Call_obj::init")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Call_obj,init,(void))

HX_BEGIN_DEFAULT_FUNC(__default_isReady,Call_obj)
bool run(){
	HX_SOURCE_PUSH("Call_obj::isReady")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/call/Call.hx",36)
	return true;
}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC


Call_obj::Call_obj()
{
	isReady = new __default_isReady(this);
}

void Call_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Call);
	HX_MARK_MEMBER_NAME(isReady,"isReady");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(uuid,"uuid");
	HX_MARK_END_CLASS();
}

Dynamic Call_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"uuid") ) { return uuid; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invoke") ) { return invoke_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isReady") ) { return isReady; }
	}
	return super::__Field(inName);
}

Dynamic Call_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uuid") ) { uuid=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isReady") ) { isReady=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Call_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("uuid"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("invoke"),
	HX_CSTRING("init"),
	HX_CSTRING("isReady"),
	HX_CSTRING("data"),
	HX_CSTRING("uuid"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Call_obj::__mClass;

void Call_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.call.Call"), hx::TCanCast< Call_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Call_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace call
