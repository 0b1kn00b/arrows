#include <hxObject.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_hxunit_TestFrameworkPrimitive
#include <hxunit/TestFrameworkPrimitive.h>
#endif
#ifndef INCLUDED_hxunit_TestRunner
#include <hxunit/TestRunner.h>
#endif
#ifndef INCLUDED_hxunit_TestSuite
#include <hxunit/TestSuite.h>
#endif
#ifndef INCLUDED_test_arrow_ArrowSuite
#include <test/arrow/ArrowSuite.h>
#endif

Void Main_obj::__construct()
{
{
	hxunit::TestRunner t = hxunit::TestRunner_obj::__new();
	t->addSuite(hxClassOf<test::arrow::ArrowSuite >());
	t->run();
}
;
	return null();
}

Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hxObjectPtr<Main_obj > Main_obj::__new()
{  hxObjectPtr<Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::main( ){
{
		Main a = Main_obj::__new();
	}
return null();
}


STATIC_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

Dynamic Main_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"main",sizeof(wchar_t)*4) ) { return main_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_main = __hxcpp_field_to_id("main");


Dynamic Main_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_main) return main_dyn();
	return super::__IField(inFieldID);
}

Dynamic Main_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Main_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"main",
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class Main_obj::__mClass;

void Main_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"Main",4), TCanCast<Main_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Main_obj::__boot()
{
}

