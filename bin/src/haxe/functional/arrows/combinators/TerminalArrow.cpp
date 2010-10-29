#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_TerminalArrow
#include <haxe/functional/arrows/combinators/TerminalArrow.h>
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
namespace combinators{

Void TerminalArrow_obj::__construct()
{
{

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Void run(Dynamic x,::haxe::functional::arrows::ArrowInstance a){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/TerminalArrow.hx",34)
			::haxe::functional::arrows::schedule::ScheduleManager_obj::getInstance()->pending->decrement(a->uuid);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/TerminalArrow.hx",29)
	super::__construct( Dynamic(new _Function_1_1()));
}
;
	return null();
}

TerminalArrow_obj::~TerminalArrow_obj() { }

Dynamic TerminalArrow_obj::__CreateEmpty() { return  new TerminalArrow_obj; }
hx::ObjectPtr< TerminalArrow_obj > TerminalArrow_obj::__new()
{  hx::ObjectPtr< TerminalArrow_obj > result = new TerminalArrow_obj();
	result->__construct();
	return result;}

Dynamic TerminalArrow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TerminalArrow_obj > result = new TerminalArrow_obj();
	result->__construct();
	return result;}

::String TerminalArrow_obj::getName( ){
	HX_SOURCE_PUSH("TerminalArrow_obj::getName")
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/TerminalArrow.hx",38)
	return HX_CSTRING("TerminalArrow");
}


HX_DEFINE_DYNAMIC_FUNC0(TerminalArrow_obj,getName,return )


TerminalArrow_obj::TerminalArrow_obj()
{
}

void TerminalArrow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TerminalArrow);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic TerminalArrow_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic TerminalArrow_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void TerminalArrow_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class TerminalArrow_obj::__mClass;

void TerminalArrow_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.TerminalArrow"), hx::TCanCast< TerminalArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void TerminalArrow_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
