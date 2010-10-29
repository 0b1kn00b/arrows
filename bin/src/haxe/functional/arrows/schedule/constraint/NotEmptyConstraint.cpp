#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_Constraint
#include <haxe/functional/arrows/schedule/constraint/Constraint.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_NotEmptyConstraint
#include <haxe/functional/arrows/schedule/constraint/NotEmptyConstraint.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_NullConstraint
#include <haxe/functional/arrows/schedule/constraint/NullConstraint.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace constraint{

Void NotEmptyConstraint_obj::__construct(::haxe::functional::arrows::schedule::ScheduleManager manager)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/NotEmptyConstraint.hx",28)
	super::__construct(manager);
}
;
	return null();
}

NotEmptyConstraint_obj::~NotEmptyConstraint_obj() { }

Dynamic NotEmptyConstraint_obj::__CreateEmpty() { return  new NotEmptyConstraint_obj; }
hx::ObjectPtr< NotEmptyConstraint_obj > NotEmptyConstraint_obj::__new(::haxe::functional::arrows::schedule::ScheduleManager manager)
{  hx::ObjectPtr< NotEmptyConstraint_obj > result = new NotEmptyConstraint_obj();
	result->__construct(manager);
	return result;}

Dynamic NotEmptyConstraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NotEmptyConstraint_obj > result = new NotEmptyConstraint_obj();
	result->__construct(inArgs[0]);
	return result;}

bool NotEmptyConstraint_obj::proceed( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("NotEmptyConstraint_obj::proceed")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/NotEmptyConstraint.hx",31)
	return ((this->manager->buffer->getLength() > 0));
}


HX_DEFINE_DYNAMIC_FUNC0(NotEmptyConstraint_obj,proceed,return )

::haxe::functional::arrows::schedule::constraint::NotEmptyConstraint NotEmptyConstraint_obj::clone( ){
	HX_SOURCE_PUSH("NotEmptyConstraint_obj::clone")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/NotEmptyConstraint.hx",34)
	return ::haxe::functional::arrows::schedule::constraint::NotEmptyConstraint_obj::__new(this->manager);
}


HX_DEFINE_DYNAMIC_FUNC0(NotEmptyConstraint_obj,clone,return )

::String NotEmptyConstraint_obj::toString( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("NotEmptyConstraint_obj::toString")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/NotEmptyConstraint.hx",37)
	return (HX_CSTRING("buffer: ") + ::Std_obj::string(this->manager->buffer->getLength()));
}


HX_DEFINE_DYNAMIC_FUNC0(NotEmptyConstraint_obj,toString,return )


NotEmptyConstraint_obj::NotEmptyConstraint_obj()
{
}

void NotEmptyConstraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NotEmptyConstraint);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic NotEmptyConstraint_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"proceed") ) { return proceed_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic NotEmptyConstraint_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void NotEmptyConstraint_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("proceed"),
	HX_CSTRING("clone"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class NotEmptyConstraint_obj::__mClass;

void NotEmptyConstraint_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.constraint.NotEmptyConstraint"), hx::TCanCast< NotEmptyConstraint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void NotEmptyConstraint_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace constraint
