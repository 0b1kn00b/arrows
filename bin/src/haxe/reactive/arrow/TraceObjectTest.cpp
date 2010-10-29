#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_reactive_arrow_TraceObjectTest
#include <haxe/reactive/arrow/TraceObjectTest.h>
#endif
#ifndef INCLUDED_haxe_test_TestCase
#include <haxe/test/TestCase.h>
#endif
namespace haxe{
namespace reactive{
namespace arrow{

Void TraceObjectTest_obj::__construct()
{
{
	HX_SOURCE_POS("unit/haxe/reactive/arrow/TraceObjectTest.hx",11)
	super::__construct();
}
;
	return null();
}

TraceObjectTest_obj::~TraceObjectTest_obj() { }

Dynamic TraceObjectTest_obj::__CreateEmpty() { return  new TraceObjectTest_obj; }
hx::ObjectPtr< TraceObjectTest_obj > TraceObjectTest_obj::__new()
{  hx::ObjectPtr< TraceObjectTest_obj > result = new TraceObjectTest_obj();
	result->__construct();
	return result;}

Dynamic TraceObjectTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TraceObjectTest_obj > result = new TraceObjectTest_obj();
	result->__construct();
	return result;}

Void TraceObjectTest_obj::testTraceArrow( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TraceObjectTest_obj::testTraceArrow")
		HX_SOURCE_POS("unit/haxe/reactive/arrow/TraceObjectTest.hx",14)
		try{
			HX_SOURCE_POS("unit/haxe/reactive/arrow/TraceObjectTest.hx",15)
			::haxe::Log_obj::trace(::haxe::functional::arrows::Arrow_obj::__new(this->nullMethod_dyn()),hx::SourceInfo(HX_CSTRING("TraceObjectTest.hx"),15,HX_CSTRING("haxe.reactive.arrow.TraceObjectTest"),HX_CSTRING("testTraceArrow")));
		}
		catch(Dynamic __e){
			{
				Dynamic e = __e;{
					HX_SOURCE_POS("unit/haxe/reactive/arrow/TraceObjectTest.hx",17)
					this->fail(null(),hx::SourceInfo(HX_CSTRING("TraceObjectTest.hx"),17,HX_CSTRING("haxe.reactive.arrow.TraceObjectTest"),HX_CSTRING("testTraceArrow")));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TraceObjectTest_obj,testTraceArrow,(void))

Void TraceObjectTest_obj::testTraceArrowInstance( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TraceObjectTest_obj::testTraceArrowInstance")
		HX_SOURCE_POS("unit/haxe/reactive/arrow/TraceObjectTest.hx",21)
		try{
			HX_SOURCE_POS("unit/haxe/reactive/arrow/TraceObjectTest.hx",22)
			::haxe::functional::arrows::ArrowInstance_obj::__new(::haxe::functional::arrows::Arrow_obj::__new(this->nullMethod_dyn()),1);
		}
		catch(Dynamic __e){
			{
				Dynamic e = __e;{
					HX_SOURCE_POS("unit/haxe/reactive/arrow/TraceObjectTest.hx",24)
					this->fail(null(),hx::SourceInfo(HX_CSTRING("TraceObjectTest.hx"),24,HX_CSTRING("haxe.reactive.arrow.TraceObjectTest"),HX_CSTRING("testTraceArrowInstance")));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TraceObjectTest_obj,testTraceArrowInstance,(void))

Void TraceObjectTest_obj::nullMethod( Dynamic x,::haxe::functional::arrows::ArrowInstance a){
{
		HX_SOURCE_PUSH("TraceObjectTest_obj::nullMethod")
		HX_SOURCE_POS("unit/haxe/reactive/arrow/TraceObjectTest.hx",28)
		return x;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TraceObjectTest_obj,nullMethod,(void))


TraceObjectTest_obj::TraceObjectTest_obj()
{
}

void TraceObjectTest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TraceObjectTest);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic TraceObjectTest_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"nullMethod") ) { return nullMethod_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"testTraceArrow") ) { return testTraceArrow_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"testTraceArrowInstance") ) { return testTraceArrowInstance_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic TraceObjectTest_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void TraceObjectTest_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("testTraceArrow"),
	HX_CSTRING("testTraceArrowInstance"),
	HX_CSTRING("nullMethod"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class TraceObjectTest_obj::__mClass;

void TraceObjectTest_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.reactive.arrow.TraceObjectTest"), hx::TCanCast< TraceObjectTest_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void TraceObjectTest_obj::__boot()
{
}

} // end namespace haxe
} // end namespace reactive
} // end namespace arrow
