#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_Constraint
#include <haxe/functional/arrows/schedule/constraint/Constraint.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_TimeConstraint
#include <haxe/functional/arrows/schedule/constraint/TimeConstraint.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace constraint{

Void TimeConstraint_obj::__construct(Dynamic __o_span)
{
double span = __o_span.Default(0.3);
{
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/TimeConstraint.hx",29)
	this->span = span;
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/TimeConstraint.hx",30)
	this->mark = -1;
}
;
	return null();
}

TimeConstraint_obj::~TimeConstraint_obj() { }

Dynamic TimeConstraint_obj::__CreateEmpty() { return  new TimeConstraint_obj; }
hx::ObjectPtr< TimeConstraint_obj > TimeConstraint_obj::__new(Dynamic __o_span)
{  hx::ObjectPtr< TimeConstraint_obj > result = new TimeConstraint_obj();
	result->__construct(__o_span);
	return result;}

Dynamic TimeConstraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimeConstraint_obj > result = new TimeConstraint_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *TimeConstraint_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::haxe::functional::arrows::schedule::constraint::Constraint_obj)) return operator ::haxe::functional::arrows::schedule::constraint::Constraint_obj *();
	return super::__ToInterface(inType);
}

bool TimeConstraint_obj::proceed( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("TimeConstraint_obj::proceed")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/TimeConstraint.hx",33)
	if ((this->mark == -1.0)){
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/TimeConstraint.hx",33)
		this->mark = ::haxe::Timer_obj::stamp();
	}
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/TimeConstraint.hx",34)
	if ((::haxe::Timer_obj::stamp() > ((this->mark + this->span)))){
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/TimeConstraint.hx",34)
		this->mark = -1.0;
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/TimeConstraint.hx",34)
		return false;
	}
	else{
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/TimeConstraint.hx",34)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC0(TimeConstraint_obj,proceed,return )

::haxe::functional::arrows::schedule::constraint::TimeConstraint TimeConstraint_obj::clone( ){
	HX_SOURCE_PUSH("TimeConstraint_obj::clone")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/TimeConstraint.hx",37)
	return ::haxe::functional::arrows::schedule::constraint::TimeConstraint_obj::__new(this->span);
}


HX_DEFINE_DYNAMIC_FUNC0(TimeConstraint_obj,clone,return )


TimeConstraint_obj::TimeConstraint_obj()
{
}

void TimeConstraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimeConstraint);
	HX_MARK_MEMBER_NAME(span,"span");
	HX_MARK_MEMBER_NAME(mark,"mark");
	HX_MARK_END_CLASS();
}

Dynamic TimeConstraint_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"span") ) { return span; }
		if (HX_FIELD_EQ(inName,"mark") ) { return mark; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"proceed") ) { return proceed_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic TimeConstraint_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"span") ) { span=inValue.Cast< double >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mark") ) { mark=inValue.Cast< double >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void TimeConstraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("span"));
	outFields->push(HX_CSTRING("mark"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("span"),
	HX_CSTRING("proceed"),
	HX_CSTRING("clone"),
	HX_CSTRING("mark"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class TimeConstraint_obj::__mClass;

void TimeConstraint_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.constraint.TimeConstraint"), hx::TCanCast< TimeConstraint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void TimeConstraint_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace constraint
