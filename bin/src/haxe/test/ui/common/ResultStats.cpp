#include <hxcpp.h>

#ifndef INCLUDED_haxe_test_Dispatcher
#include <haxe/test/Dispatcher.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_ResultStats
#include <haxe/test/ui/common/ResultStats.h>
#endif
namespace haxe{
namespace test{
namespace ui{
namespace common{

Void ResultStats_obj::__construct()
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",40)
	this->assertations = 0;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",41)
	this->successes = 0;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",42)
	this->failures = 0;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",43)
	this->errors = 0;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",44)
	this->warnings = 0;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",46)
	this->isOk = true;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",47)
	this->hasFailures = false;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",48)
	this->hasErrors = false;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",49)
	this->hasWarnings = false;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",51)
	this->onAddSuccesses = ::haxe::test::Dispatcher_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",52)
	this->onAddFailures = ::haxe::test::Dispatcher_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",53)
	this->onAddErrors = ::haxe::test::Dispatcher_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",54)
	this->onAddWarnings = ::haxe::test::Dispatcher_obj::__new();
}
;
	return null();
}

ResultStats_obj::~ResultStats_obj() { }

Dynamic ResultStats_obj::__CreateEmpty() { return  new ResultStats_obj; }
hx::ObjectPtr< ResultStats_obj > ResultStats_obj::__new()
{  hx::ObjectPtr< ResultStats_obj > result = new ResultStats_obj();
	result->__construct();
	return result;}

Dynamic ResultStats_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ResultStats_obj > result = new ResultStats_obj();
	result->__construct();
	return result;}

Void ResultStats_obj::addSuccesses( int v){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ResultStats_obj::addSuccesses")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",58)
		if ((v == 0))
			return null();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",59)
		hx::AddEq(this->assertations,v);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",60)
		hx::AddEq(this->successes,v);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",61)
		this->onAddSuccesses->dispatch(v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResultStats_obj,addSuccesses,(void))

Void ResultStats_obj::addFailures( int v){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ResultStats_obj::addFailures")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",65)
		if ((v == 0))
			return null();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",66)
		hx::AddEq(this->assertations,v);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",67)
		hx::AddEq(this->failures,v);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",68)
		this->hasFailures = (this->failures > 0);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",69)
		this->isOk = !(((bool(this->hasFailures) || bool((bool(this->hasErrors) || bool(this->hasWarnings))))));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",70)
		this->onAddFailures->dispatch(v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResultStats_obj,addFailures,(void))

Void ResultStats_obj::addErrors( int v){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ResultStats_obj::addErrors")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",74)
		if ((v == 0))
			return null();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",75)
		hx::AddEq(this->assertations,v);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",76)
		hx::AddEq(this->errors,v);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",77)
		this->hasErrors = (this->errors > 0);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",78)
		this->isOk = !(((bool(this->hasFailures) || bool((bool(this->hasErrors) || bool(this->hasWarnings))))));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",79)
		this->onAddErrors->dispatch(v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResultStats_obj,addErrors,(void))

Void ResultStats_obj::addWarnings( int v){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ResultStats_obj::addWarnings")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",83)
		if ((v == 0))
			return null();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",84)
		hx::AddEq(this->assertations,v);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",85)
		hx::AddEq(this->warnings,v);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",86)
		this->hasWarnings = (this->warnings > 0);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",87)
		this->isOk = !(((bool(this->hasFailures) || bool((bool(this->hasErrors) || bool(this->hasWarnings))))));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",88)
		this->onAddWarnings->dispatch(v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResultStats_obj,addWarnings,(void))

Void ResultStats_obj::sum( ::haxe::test::ui::common::ResultStats other){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ResultStats_obj::sum")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",92)
		this->addSuccesses(other->successes);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",93)
		this->addFailures(other->failures);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",94)
		this->addErrors(other->errors);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",95)
		this->addWarnings(other->warnings);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResultStats_obj,sum,(void))

Void ResultStats_obj::subtract( ::haxe::test::ui::common::ResultStats other){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ResultStats_obj::subtract")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",99)
		this->addSuccesses(-(other->successes));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",100)
		this->addFailures(-(other->failures));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",101)
		this->addErrors(-(other->errors));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",102)
		this->addWarnings(-(other->warnings));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResultStats_obj,subtract,(void))

Void ResultStats_obj::wire( ::haxe::test::ui::common::ResultStats dependant){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ResultStats_obj::wire")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",106)
		dependant->onAddSuccesses->__Field(HX_CSTRING("add"))(this->addSuccesses_dyn());
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",107)
		dependant->onAddFailures->__Field(HX_CSTRING("add"))(this->addFailures_dyn());
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",108)
		dependant->onAddErrors->__Field(HX_CSTRING("add"))(this->addErrors_dyn());
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",109)
		dependant->onAddWarnings->__Field(HX_CSTRING("add"))(this->addWarnings_dyn());
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",110)
		this->sum(dependant);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResultStats_obj,wire,(void))

Void ResultStats_obj::unwire( ::haxe::test::ui::common::ResultStats dependant){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ResultStats_obj::unwire")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",114)
		dependant->onAddSuccesses->__Field(HX_CSTRING("remove"))(this->addSuccesses_dyn());
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",115)
		dependant->onAddFailures->__Field(HX_CSTRING("remove"))(this->addFailures_dyn());
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",116)
		dependant->onAddErrors->__Field(HX_CSTRING("remove"))(this->addErrors_dyn());
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",117)
		dependant->onAddWarnings->__Field(HX_CSTRING("remove"))(this->addWarnings_dyn());
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultStats.hx",118)
		this->subtract(dependant);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResultStats_obj,unwire,(void))


ResultStats_obj::ResultStats_obj()
{
}

void ResultStats_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ResultStats);
	HX_MARK_MEMBER_NAME(assertations,"assertations");
	HX_MARK_MEMBER_NAME(successes,"successes");
	HX_MARK_MEMBER_NAME(failures,"failures");
	HX_MARK_MEMBER_NAME(errors,"errors");
	HX_MARK_MEMBER_NAME(warnings,"warnings");
	HX_MARK_MEMBER_NAME(onAddSuccesses,"onAddSuccesses");
	HX_MARK_MEMBER_NAME(onAddFailures,"onAddFailures");
	HX_MARK_MEMBER_NAME(onAddErrors,"onAddErrors");
	HX_MARK_MEMBER_NAME(onAddWarnings,"onAddWarnings");
	HX_MARK_MEMBER_NAME(isOk,"isOk");
	HX_MARK_MEMBER_NAME(hasFailures,"hasFailures");
	HX_MARK_MEMBER_NAME(hasErrors,"hasErrors");
	HX_MARK_MEMBER_NAME(hasWarnings,"hasWarnings");
	HX_MARK_END_CLASS();
}

Dynamic ResultStats_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"sum") ) { return sum_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"isOk") ) { return isOk; }
		if (HX_FIELD_EQ(inName,"wire") ) { return wire_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"errors") ) { return errors; }
		if (HX_FIELD_EQ(inName,"unwire") ) { return unwire_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"failures") ) { return failures; }
		if (HX_FIELD_EQ(inName,"warnings") ) { return warnings; }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"successes") ) { return successes; }
		if (HX_FIELD_EQ(inName,"hasErrors") ) { return hasErrors; }
		if (HX_FIELD_EQ(inName,"addErrors") ) { return addErrors_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onAddErrors") ) { return onAddErrors; }
		if (HX_FIELD_EQ(inName,"hasFailures") ) { return hasFailures; }
		if (HX_FIELD_EQ(inName,"hasWarnings") ) { return hasWarnings; }
		if (HX_FIELD_EQ(inName,"addFailures") ) { return addFailures_dyn(); }
		if (HX_FIELD_EQ(inName,"addWarnings") ) { return addWarnings_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"assertations") ) { return assertations; }
		if (HX_FIELD_EQ(inName,"addSuccesses") ) { return addSuccesses_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onAddFailures") ) { return onAddFailures; }
		if (HX_FIELD_EQ(inName,"onAddWarnings") ) { return onAddWarnings; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAddSuccesses") ) { return onAddSuccesses; }
	}
	return super::__Field(inName);
}

Dynamic ResultStats_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"isOk") ) { isOk=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"errors") ) { errors=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"failures") ) { failures=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"warnings") ) { warnings=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"successes") ) { successes=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasErrors") ) { hasErrors=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onAddErrors") ) { onAddErrors=inValue.Cast< ::haxe::test::Dispatcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasFailures") ) { hasFailures=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasWarnings") ) { hasWarnings=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"assertations") ) { assertations=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onAddFailures") ) { onAddFailures=inValue.Cast< ::haxe::test::Dispatcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onAddWarnings") ) { onAddWarnings=inValue.Cast< ::haxe::test::Dispatcher >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAddSuccesses") ) { onAddSuccesses=inValue.Cast< ::haxe::test::Dispatcher >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void ResultStats_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("assertations"));
	outFields->push(HX_CSTRING("successes"));
	outFields->push(HX_CSTRING("failures"));
	outFields->push(HX_CSTRING("errors"));
	outFields->push(HX_CSTRING("warnings"));
	outFields->push(HX_CSTRING("onAddSuccesses"));
	outFields->push(HX_CSTRING("onAddFailures"));
	outFields->push(HX_CSTRING("onAddErrors"));
	outFields->push(HX_CSTRING("onAddWarnings"));
	outFields->push(HX_CSTRING("isOk"));
	outFields->push(HX_CSTRING("hasFailures"));
	outFields->push(HX_CSTRING("hasErrors"));
	outFields->push(HX_CSTRING("hasWarnings"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("assertations"),
	HX_CSTRING("successes"),
	HX_CSTRING("failures"),
	HX_CSTRING("errors"),
	HX_CSTRING("warnings"),
	HX_CSTRING("onAddSuccesses"),
	HX_CSTRING("onAddFailures"),
	HX_CSTRING("onAddErrors"),
	HX_CSTRING("onAddWarnings"),
	HX_CSTRING("isOk"),
	HX_CSTRING("hasFailures"),
	HX_CSTRING("hasErrors"),
	HX_CSTRING("hasWarnings"),
	HX_CSTRING("addSuccesses"),
	HX_CSTRING("addFailures"),
	HX_CSTRING("addErrors"),
	HX_CSTRING("addWarnings"),
	HX_CSTRING("sum"),
	HX_CSTRING("subtract"),
	HX_CSTRING("wire"),
	HX_CSTRING("unwire"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ResultStats_obj::__mClass;

void ResultStats_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.ui.common.ResultStats"), hx::TCanCast< ResultStats_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ResultStats_obj::__boot()
{
}

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace common
