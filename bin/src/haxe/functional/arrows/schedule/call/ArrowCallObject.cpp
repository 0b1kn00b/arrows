#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_call_ArrowCallObject
#include <haxe/functional/arrows/schedule/call/ArrowCallObject.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace call{

Void ArrowCallObject_obj::__construct(Dynamic x,::haxe::functional::arrows::ArrowInstance instance,::haxe::functional::arrows::Arrow a)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/call/ArrowCall.hx",38)
	this->__FieldRef(HX_CSTRING("argument")) = x;
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/call/ArrowCall.hx",39)
	this->instance = instance;
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/call/ArrowCall.hx",40)
	this->arrow = a;
}
;
	return null();
}

ArrowCallObject_obj::~ArrowCallObject_obj() { }

Dynamic ArrowCallObject_obj::__CreateEmpty() { return  new ArrowCallObject_obj; }
hx::ObjectPtr< ArrowCallObject_obj > ArrowCallObject_obj::__new(Dynamic x,::haxe::functional::arrows::ArrowInstance instance,::haxe::functional::arrows::Arrow a)
{  hx::ObjectPtr< ArrowCallObject_obj > result = new ArrowCallObject_obj();
	result->__construct(x,instance,a);
	return result;}

Dynamic ArrowCallObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrowCallObject_obj > result = new ArrowCallObject_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void ArrowCallObject_obj::invoke( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ArrowCallObject_obj::invoke")
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/call/ArrowCall.hx",43)
		this->arrow->__Field(HX_CSTRING("method"))(this->__Field(HX_CSTRING("argument")),this->instance);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ArrowCallObject_obj,invoke,(void))


ArrowCallObject_obj::ArrowCallObject_obj()
{
}

void ArrowCallObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrowCallObject);
	HX_MARK_MEMBER_NAME(argument,"argument");
	HX_MARK_MEMBER_NAME(arrow,"arrow");
	HX_MARK_MEMBER_NAME(instance,"instance");
	HX_MARK_END_CLASS();
}

Dynamic ArrowCallObject_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"arrow") ) { return arrow; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invoke") ) { return invoke_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"argument") ) { return argument; }
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
	}
	return super::__Field(inName);
}

Dynamic ArrowCallObject_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"arrow") ) { arrow=inValue.Cast< ::haxe::functional::arrows::Arrow >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"argument") ) { argument=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::functional::arrows::ArrowInstance >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void ArrowCallObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("argument"));
	outFields->push(HX_CSTRING("arrow"));
	outFields->push(HX_CSTRING("instance"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("invoke"),
	HX_CSTRING("argument"),
	HX_CSTRING("arrow"),
	HX_CSTRING("instance"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ArrowCallObject_obj::__mClass;

void ArrowCallObject_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.call.ArrowCallObject"), hx::TCanCast< ArrowCallObject_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ArrowCallObject_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace call
