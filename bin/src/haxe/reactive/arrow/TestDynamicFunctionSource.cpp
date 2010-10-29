#include <hxcpp.h>

#ifndef INCLUDED_haxe_reactive_arrow_TestDynamicFunctionSource
#include <haxe/reactive/arrow/TestDynamicFunctionSource.h>
#endif
namespace haxe{
namespace reactive{
namespace arrow{

Void TestDynamicFunctionSource_obj::__construct()
{
{
}
;
	return null();
}

TestDynamicFunctionSource_obj::~TestDynamicFunctionSource_obj() { }

Dynamic TestDynamicFunctionSource_obj::__CreateEmpty() { return  new TestDynamicFunctionSource_obj; }
hx::ObjectPtr< TestDynamicFunctionSource_obj > TestDynamicFunctionSource_obj::__new()
{  hx::ObjectPtr< TestDynamicFunctionSource_obj > result = new TestDynamicFunctionSource_obj();
	result->__construct();
	return result;}

Dynamic TestDynamicFunctionSource_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestDynamicFunctionSource_obj > result = new TestDynamicFunctionSource_obj();
	result->__construct();
	return result;}

::haxe::reactive::arrow::TestDynamicFunctionSource TestDynamicFunctionSource_obj::whatAmI( ){
	HX_SOURCE_PUSH("TestDynamicFunctionSource_obj::whatAmI")
	HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",155)
	return this;
}


HX_DEFINE_DYNAMIC_FUNC0(TestDynamicFunctionSource_obj,whatAmI,return )


TestDynamicFunctionSource_obj::TestDynamicFunctionSource_obj()
{
}

void TestDynamicFunctionSource_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestDynamicFunctionSource);
	HX_MARK_END_CLASS();
}

Dynamic TestDynamicFunctionSource_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"whatAmI") ) { return whatAmI_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic TestDynamicFunctionSource_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void TestDynamicFunctionSource_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("whatAmI"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class TestDynamicFunctionSource_obj::__mClass;

void TestDynamicFunctionSource_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.reactive.arrow.TestDynamicFunctionSource"), hx::TCanCast< TestDynamicFunctionSource_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void TestDynamicFunctionSource_obj::__boot()
{
}

} // end namespace haxe
} // end namespace reactive
} // end namespace arrow
