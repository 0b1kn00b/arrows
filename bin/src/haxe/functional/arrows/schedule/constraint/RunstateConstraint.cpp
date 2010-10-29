#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_Constraint
#include <haxe/functional/arrows/schedule/constraint/Constraint.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_RunstateConstraint
#include <haxe/functional/arrows/schedule/constraint/RunstateConstraint.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace constraint{

Void RunstateConstraint_obj::__construct()
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/RunstateConstraint.hx",26)
	this->go = true;
}
;
	return null();
}

RunstateConstraint_obj::~RunstateConstraint_obj() { }

Dynamic RunstateConstraint_obj::__CreateEmpty() { return  new RunstateConstraint_obj; }
hx::ObjectPtr< RunstateConstraint_obj > RunstateConstraint_obj::__new()
{  hx::ObjectPtr< RunstateConstraint_obj > result = new RunstateConstraint_obj();
	result->__construct();
	return result;}

Dynamic RunstateConstraint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RunstateConstraint_obj > result = new RunstateConstraint_obj();
	result->__construct();
	return result;}

hx::Object *RunstateConstraint_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::haxe::functional::arrows::schedule::constraint::Constraint_obj)) return operator ::haxe::functional::arrows::schedule::constraint::Constraint_obj *();
	return super::__ToInterface(inType);
}

bool RunstateConstraint_obj::proceed( ){
	HX_SOURCE_PUSH("RunstateConstraint_obj::proceed")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/RunstateConstraint.hx",29)
	return this->go;
}


HX_DEFINE_DYNAMIC_FUNC0(RunstateConstraint_obj,proceed,return )

Void RunstateConstraint_obj::terminate( ){
{
		HX_SOURCE_PUSH("RunstateConstraint_obj::terminate")
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/constraint/RunstateConstraint.hx",32)
		this->go = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(RunstateConstraint_obj,terminate,(void))


RunstateConstraint_obj::RunstateConstraint_obj()
{
}

void RunstateConstraint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RunstateConstraint);
	HX_MARK_MEMBER_NAME(go,"go");
	HX_MARK_END_CLASS();
}

Dynamic RunstateConstraint_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"go") ) { return go; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"proceed") ) { return proceed_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"terminate") ) { return terminate_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic RunstateConstraint_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"go") ) { go=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void RunstateConstraint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("go"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("proceed"),
	HX_CSTRING("terminate"),
	HX_CSTRING("go"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class RunstateConstraint_obj::__mClass;

void RunstateConstraint_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.constraint.RunstateConstraint"), hx::TCanCast< RunstateConstraint_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void RunstateConstraint_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace constraint
