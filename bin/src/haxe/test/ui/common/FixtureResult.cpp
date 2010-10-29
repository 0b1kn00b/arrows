#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_test_Assertation
#include <haxe/test/Assertation.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_FixtureResult
#include <haxe/test/ui/common/FixtureResult.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_ResultStats
#include <haxe/test/ui/common/ResultStats.h>
#endif
namespace haxe{
namespace test{
namespace ui{
namespace common{

Void FixtureResult_obj::__construct(::String methodName)
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",35)
	this->methodName = methodName;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",36)
	this->list = ::List_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",37)
	this->hasTestError = false;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",38)
	this->hasSetupError = false;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",39)
	this->hasTeardownError = false;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",40)
	this->hasTimeoutError = false;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",41)
	this->hasAsyncError = false;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",43)
	this->stats = ::haxe::test::ui::common::ResultStats_obj::__new();
}
;
	return null();
}

FixtureResult_obj::~FixtureResult_obj() { }

Dynamic FixtureResult_obj::__CreateEmpty() { return  new FixtureResult_obj; }
hx::ObjectPtr< FixtureResult_obj > FixtureResult_obj::__new(::String methodName)
{  hx::ObjectPtr< FixtureResult_obj > result = new FixtureResult_obj();
	result->__construct(methodName);
	return result;}

Dynamic FixtureResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FixtureResult_obj > result = new FixtureResult_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic FixtureResult_obj::iterator( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("FixtureResult_obj::iterator")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",47)
	return this->list->__Field(HX_CSTRING("iterator"))();
}


HX_DEFINE_DYNAMIC_FUNC0(FixtureResult_obj,iterator,return )

Void FixtureResult_obj::add( ::haxe::test::Assertation assertation){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("FixtureResult_obj::add")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",51)
		this->list->add(assertation);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",52)
		::haxe::test::Assertation _switch_1 = (assertation);
		switch((_switch_1)->GetIndex()){
			case 0: {
{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",54)
					this->stats->addSuccesses(1);
				}
			}
			;break;
			case 1: {
{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",56)
					this->stats->addFailures(1);
				}
			}
			;break;
			case 2: {
{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",58)
					this->stats->addErrors(1);
				}
			}
			;break;
			case 3: {
{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",60)
					this->stats->addErrors(1);
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",61)
					this->hasSetupError = true;
				}
			}
			;break;
			case 4: {
{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",63)
					this->stats->addErrors(1);
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",64)
					this->hasTeardownError = true;
				}
			}
			;break;
			case 5: {
{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",66)
					this->stats->addErrors(1);
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",67)
					this->hasTimeoutError = true;
				}
			}
			;break;
			case 6: {
{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",69)
					this->stats->addErrors(1);
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",70)
					this->hasAsyncError = true;
				}
			}
			;break;
			case 7: {
{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/FixtureResult.hx",72)
					this->stats->addWarnings(1);
				}
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FixtureResult_obj,add,(void))


FixtureResult_obj::FixtureResult_obj()
{
}

void FixtureResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FixtureResult);
	HX_MARK_MEMBER_NAME(methodName,"methodName");
	HX_MARK_MEMBER_NAME(hasTestError,"hasTestError");
	HX_MARK_MEMBER_NAME(hasSetupError,"hasSetupError");
	HX_MARK_MEMBER_NAME(hasTeardownError,"hasTeardownError");
	HX_MARK_MEMBER_NAME(hasTimeoutError,"hasTimeoutError");
	HX_MARK_MEMBER_NAME(hasAsyncError,"hasAsyncError");
	HX_MARK_MEMBER_NAME(stats,"stats");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

Dynamic FixtureResult_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stats") ) { return stats; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"methodName") ) { return methodName; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hasTestError") ) { return hasTestError; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hasSetupError") ) { return hasSetupError; }
		if (HX_FIELD_EQ(inName,"hasAsyncError") ) { return hasAsyncError; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasTimeoutError") ) { return hasTimeoutError; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hasTeardownError") ) { return hasTeardownError; }
	}
	return super::__Field(inName);
}

Dynamic FixtureResult_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::List >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast< ::haxe::test::ui::common::ResultStats >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"methodName") ) { methodName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hasTestError") ) { hasTestError=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hasSetupError") ) { hasSetupError=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasAsyncError") ) { hasAsyncError=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"hasTimeoutError") ) { hasTimeoutError=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hasTeardownError") ) { hasTeardownError=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void FixtureResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("methodName"));
	outFields->push(HX_CSTRING("hasTestError"));
	outFields->push(HX_CSTRING("hasSetupError"));
	outFields->push(HX_CSTRING("hasTeardownError"));
	outFields->push(HX_CSTRING("hasTimeoutError"));
	outFields->push(HX_CSTRING("hasAsyncError"));
	outFields->push(HX_CSTRING("stats"));
	outFields->push(HX_CSTRING("list"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("methodName"),
	HX_CSTRING("hasTestError"),
	HX_CSTRING("hasSetupError"),
	HX_CSTRING("hasTeardownError"),
	HX_CSTRING("hasTimeoutError"),
	HX_CSTRING("hasAsyncError"),
	HX_CSTRING("stats"),
	HX_CSTRING("list"),
	HX_CSTRING("iterator"),
	HX_CSTRING("add"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class FixtureResult_obj::__mClass;

void FixtureResult_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.ui.common.FixtureResult"), hx::TCanCast< FixtureResult_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void FixtureResult_obj::__boot()
{
}

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace common
