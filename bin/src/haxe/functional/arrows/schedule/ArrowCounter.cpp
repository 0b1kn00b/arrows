#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_ArrowCounter
#include <haxe/functional/arrows/schedule/ArrowCounter.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_ScheduleManager
#include <haxe/functional/arrows/schedule/ScheduleManager.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{

Void ArrowCounter_obj::__construct(::haxe::functional::arrows::schedule::ScheduleManager manager)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/ArrowCounter.hx",42)
	this->manager = manager;
}
;
	return null();
}

ArrowCounter_obj::~ArrowCounter_obj() { }

Dynamic ArrowCounter_obj::__CreateEmpty() { return  new ArrowCounter_obj; }
hx::ObjectPtr< ArrowCounter_obj > ArrowCounter_obj::__new(::haxe::functional::arrows::schedule::ScheduleManager manager)
{  hx::ObjectPtr< ArrowCounter_obj > result = new ArrowCounter_obj();
	result->__construct(manager);
	return result;}

Dynamic ArrowCounter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrowCounter_obj > result = new ArrowCounter_obj();
	result->__construct(inArgs[0]);
	return result;}

int ArrowCounter_obj::getLength( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrowCounter_obj::getLength")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/ArrowCounter.hx",31)
	return ::Lambda_obj::count(this->manager->instances);
}


HX_DEFINE_DYNAMIC_FUNC0(ArrowCounter_obj,getLength,return )

Void ArrowCounter_obj::increment( ::String value,::haxe::functional::arrows::ArrowInstance a){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ArrowCounter_obj::increment")
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/ArrowCounter.hx",34)
		if (!(this->manager->instances->exists(value))){
			HX_SOURCE_POS("src/haxe/functional/arrows/schedule/ArrowCounter.hx",35)
			this->manager->instances->set(value,a);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrowCounter_obj,increment,(void))

Void ArrowCounter_obj::decrement( ::String value){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ArrowCounter_obj::decrement")
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/ArrowCounter.hx",39)
		this->manager->instances->remove(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ArrowCounter_obj,decrement,(void))


ArrowCounter_obj::ArrowCounter_obj()
{
}

void ArrowCounter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrowCounter);
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

Dynamic ArrowCounter_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return getLength(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"increment") ) { return increment_dyn(); }
		if (HX_FIELD_EQ(inName,"decrement") ) { return decrement_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ArrowCounter_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::haxe::functional::arrows::schedule::ScheduleManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void ArrowCounter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("manager"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("manager"),
	HX_CSTRING("length"),
	HX_CSTRING("getLength"),
	HX_CSTRING("increment"),
	HX_CSTRING("decrement"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ArrowCounter_obj::__mClass;

void ArrowCounter_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.ArrowCounter"), hx::TCanCast< ArrowCounter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ArrowCounter_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
