#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_pattern_Subject
#include <haxe/functional/arrows/pattern/Subject.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_Buffer
#include <haxe/functional/arrows/schedule/Buffer.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_ScheduleManager
#include <haxe/functional/arrows/schedule/ScheduleManager.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_ArrowCounterConstraint
#include <haxe/functional/arrows/schedule/constraint/ArrowCounterConstraint.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_Constraint
#include <haxe/functional/arrows/schedule/constraint/Constraint.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace constraint{

Void ArrowCounterConstraint_obj::__construct(::haxe::functional::arrows::schedule::ScheduleManager manager)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/ArrowCounterConstraint.hx",31)
	this->manager = manager;
}
;
	return null();
}

ArrowCounterConstraint_obj::~ArrowCounterConstraint_obj() { }

Dynamic ArrowCounterConstraint_obj::__CreateEmpty() { return  new ArrowCounterConstraint_obj; }
hx::ObjectPtr< ArrowCounterConstraint_obj > ArrowCounterConstraint_obj::__new(::haxe::functional::arrows::schedule::ScheduleManager manager)
{  hx::ObjectPtr< ArrowCounterConstraint_obj > result = new ArrowCounterConstraint_obj();
	result->__construct(manager);
	return result;}

Dynamic ArrowCounterConstraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrowCounterConstraint_obj > result = new ArrowCounterConstraint_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *ArrowCounterConstraint_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::haxe::functional::arrows::schedule::constraint::Constraint_obj)) return operator ::haxe::functional::arrows::schedule::constraint::Constraint_obj *();
	return super::__ToInterface(inType);
}

bool ArrowCounterConstraint_obj::proceed( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrowCounterConstraint_obj::proceed")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/ArrowCounterConstraint.hx",34)
	return (::Lambda_obj::count(this->manager->instances) > 0);
}


HX_DEFINE_DYNAMIC_FUNC0(ArrowCounterConstraint_obj,proceed,return )

::String ArrowCounterConstraint_obj::toString( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrowCounterConstraint_obj::toString")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/ArrowCounterConstraint.hx",37)
	return (HX_CSTRING("pending: ") + this->manager->buffer->getLength());
}


HX_DEFINE_DYNAMIC_FUNC0(ArrowCounterConstraint_obj,toString,return )


ArrowCounterConstraint_obj::ArrowCounterConstraint_obj()
{
}

void ArrowCounterConstraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrowCounterConstraint);
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_END_CLASS();
}

Dynamic ArrowCounterConstraint_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"proceed") ) { return proceed_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ArrowCounterConstraint_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::haxe::functional::arrows::schedule::ScheduleManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void ArrowCounterConstraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("manager"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("manager"),
	HX_CSTRING("proceed"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ArrowCounterConstraint_obj::__mClass;

void ArrowCounterConstraint_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.constraint.ArrowCounterConstraint"), hx::TCanCast< ArrowCounterConstraint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ArrowCounterConstraint_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace constraint
