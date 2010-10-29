#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_schedule_ScheduleManager
#include <haxe/functional/arrows/schedule/ScheduleManager.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_Constraint
#include <haxe/functional/arrows/schedule/constraint/Constraint.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_NullConstraint
#include <haxe/functional/arrows/schedule/constraint/NullConstraint.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace constraint{

Void NullConstraint_obj::__construct(::haxe::functional::arrows::schedule::ScheduleManager manager)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/NullConstraint.hx",30)
	this->manager = manager;
}
;
	return null();
}

NullConstraint_obj::~NullConstraint_obj() { }

Dynamic NullConstraint_obj::__CreateEmpty() { return  new NullConstraint_obj; }
hx::ObjectPtr< NullConstraint_obj > NullConstraint_obj::__new(::haxe::functional::arrows::schedule::ScheduleManager manager)
{  hx::ObjectPtr< NullConstraint_obj > result = new NullConstraint_obj();
	result->__construct(manager);
	return result;}

Dynamic NullConstraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NullConstraint_obj > result = new NullConstraint_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *NullConstraint_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::haxe::functional::arrows::schedule::constraint::Constraint_obj)) return operator ::haxe::functional::arrows::schedule::constraint::Constraint_obj *();
	return super::__ToInterface(inType);
}

bool NullConstraint_obj::proceed( ){
	HX_SOURCE_PUSH("NullConstraint_obj::proceed")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/NullConstraint.hx",33)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(NullConstraint_obj,proceed,return )


NullConstraint_obj::NullConstraint_obj()
{
}

void NullConstraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NullConstraint);
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_END_CLASS();
}

Dynamic NullConstraint_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"proceed") ) { return proceed_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic NullConstraint_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::haxe::functional::arrows::schedule::ScheduleManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void NullConstraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("manager"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("manager"),
	HX_CSTRING("proceed"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class NullConstraint_obj::__mClass;

void NullConstraint_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.constraint.NullConstraint"), hx::TCanCast< NullConstraint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void NullConstraint_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace constraint
