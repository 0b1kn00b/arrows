#include <hxObject.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_hxunit_AnonymousTestCase
#include <hxunit/AnonymousTestCase.h>
#endif
#ifndef INCLUDED_hxunit_Test
#include <hxunit/Test.h>
#endif
#ifndef INCLUDED_hxunit_TestCase
#include <hxunit/TestCase.h>
#endif
#ifndef INCLUDED_hxunit_TestFrameworkPrimitive
#include <hxunit/TestFrameworkPrimitive.h>
#endif
#ifndef INCLUDED_hxunit_TestGenerator
#include <hxunit/TestGenerator.h>
#endif
#ifndef INCLUDED_hxunit_TestSuite
#include <hxunit/TestSuite.h>
#endif
#ifndef INCLUDED_util_ReflectUtil
#include <util/ReflectUtil.h>
#endif
namespace hxunit{

Void TestGenerator_obj::__construct()
{
{
	this->anonCount = 0;
	this->defaultCase = hxClassOf<hxunit::AnonymousTestCase >();
	this->defaultSuite = hxClassOf<hxunit::TestSuite >();
	this->tests = List_obj::__new();
}
;
	return null();
}

TestGenerator_obj::~TestGenerator_obj() { }

Dynamic TestGenerator_obj::__CreateEmpty() { return  new TestGenerator_obj; }
hxObjectPtr<TestGenerator_obj > TestGenerator_obj::__new()
{  hxObjectPtr<TestGenerator_obj > result = new TestGenerator_obj();
	result->__construct();
	return result;}

Dynamic TestGenerator_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<TestGenerator_obj > result = new TestGenerator_obj();
	result->__construct();
	return result;}

Void TestGenerator_obj::addTest( Dynamic __o_name,Dynamic method,Class testCase,Class testSuite){
String name = __o_name.Default(null());
{
		if (name == null()){
			name = String(L"test:",5) + this->anonCount;
			this->anonCount++;
		}
		if (testCase == null()){
			testCase = this->defaultCase;
		}
		if (testSuite == null()){
			testSuite = this->defaultSuite;
		}
		hxunit::Test test = hxunit::Test_obj::__new(name,method);
		Dynamic unit = hxAnon_obj::Create()->Add( String(L"suite",5) , testSuite)->Add( String(L"testcase",8) , testCase)->Add( String(L"test",4) , test);
		this->tests->add(unit);
	}
return null();
}


DEFINE_DYNAMIC_FUNC4(TestGenerator_obj,addTest,(void))

Void TestGenerator_obj::addCase( Class testCase,Class testSuite){
{
		hxunit::TestCase obj = Type_obj::createInstance(testCase,Array_obj<Dynamic >::__new());
		bool add = true;
		if (testSuite == null()){
			testSuite = this->defaultSuite;
		}
		Array<Dynamic > fields = Type_obj::getInstanceFields(testCase)->concat(Reflect_obj::fields(obj));
		{
			int _g = 0;
			while(_g < fields->length){
				Dynamic str = fields->__get(_g);
				++_g;
				add = true;
				if (bool(StringTools_obj::startsWith(str,String(L"test",4))) && bool(Reflect_obj::isFunction(obj->__Field(str)))){
					if (add){
						this->addTest(str,null(),testCase,testSuite);
					}
				}
			}
		}
	}
return null();
}


DEFINE_DYNAMIC_FUNC2(TestGenerator_obj,addCase,(void))

Void TestGenerator_obj::addSuite( Class suite){
{
		if (!util::ReflectUtil_obj::isSubclassOf(suite,hxClassOf<hxunit::TestSuite >())){
			hxThrow (String(L"suite must be subclass of TestSuite",35));
		}
		hxunit::TestSuite a = Type_obj::createInstance(suite,Array_obj<Dynamic >::__new());
		for(Dynamic __it = a->cases->iterator();  __it->__Field(String(L"hasNext",7))(); ){
Class item = __it->__Field(String(L"next",4))();
			{
				this->addCase(item,suite);
			}
;
		}
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(TestGenerator_obj,addSuite,(void))

String TestGenerator_obj::DEFAULT_CASE;

String TestGenerator_obj::DEFAULT_SUITE;


TestGenerator_obj::TestGenerator_obj()
{
	InitMember(defaultCase);
	InitMember(defaultSuite);
	InitMember(tests);
	InitMember(anonCount);
}

Dynamic TestGenerator_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 5:
		if (!memcmp(inName.__s,L"tests",sizeof(wchar_t)*5) ) { return tests; }
		break;
	case 7:
		if (!memcmp(inName.__s,L"addTest",sizeof(wchar_t)*7) ) { return addTest_dyn(); }
		if (!memcmp(inName.__s,L"addCase",sizeof(wchar_t)*7) ) { return addCase_dyn(); }
		break;
	case 8:
		if (!memcmp(inName.__s,L"addSuite",sizeof(wchar_t)*8) ) { return addSuite_dyn(); }
		break;
	case 9:
		if (!memcmp(inName.__s,L"anonCount",sizeof(wchar_t)*9) ) { return anonCount; }
		break;
	case 11:
		if (!memcmp(inName.__s,L"defaultCase",sizeof(wchar_t)*11) ) { return defaultCase; }
		break;
	case 12:
		if (!memcmp(inName.__s,L"DEFAULT_CASE",sizeof(wchar_t)*12) ) { return DEFAULT_CASE; }
		if (!memcmp(inName.__s,L"defaultSuite",sizeof(wchar_t)*12) ) { return defaultSuite; }
		break;
	case 13:
		if (!memcmp(inName.__s,L"DEFAULT_SUITE",sizeof(wchar_t)*13) ) { return DEFAULT_SUITE; }
	}
	return super::__Field(inName);
}

static int __id_DEFAULT_CASE = __hxcpp_field_to_id("DEFAULT_CASE");
static int __id_DEFAULT_SUITE = __hxcpp_field_to_id("DEFAULT_SUITE");
static int __id_defaultCase = __hxcpp_field_to_id("defaultCase");
static int __id_defaultSuite = __hxcpp_field_to_id("defaultSuite");
static int __id_tests = __hxcpp_field_to_id("tests");
static int __id_anonCount = __hxcpp_field_to_id("anonCount");
static int __id_addTest = __hxcpp_field_to_id("addTest");
static int __id_addCase = __hxcpp_field_to_id("addCase");
static int __id_addSuite = __hxcpp_field_to_id("addSuite");


Dynamic TestGenerator_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_DEFAULT_CASE) return DEFAULT_CASE;
	if (inFieldID==__id_DEFAULT_SUITE) return DEFAULT_SUITE;
	if (inFieldID==__id_defaultCase) return defaultCase;
	if (inFieldID==__id_defaultSuite) return defaultSuite;
	if (inFieldID==__id_tests) return tests;
	if (inFieldID==__id_anonCount) return anonCount;
	if (inFieldID==__id_addTest) return addTest_dyn();
	if (inFieldID==__id_addCase) return addCase_dyn();
	if (inFieldID==__id_addSuite) return addSuite_dyn();
	return super::__IField(inFieldID);
}

Dynamic TestGenerator_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (!memcmp(inName.__s,L"tests",sizeof(wchar_t)*5) ) { tests=inValue.Cast<List >();return inValue; }
		break;
	case 9:
		if (!memcmp(inName.__s,L"anonCount",sizeof(wchar_t)*9) ) { anonCount=inValue.Cast<int >();return inValue; }
		break;
	case 11:
		if (!memcmp(inName.__s,L"defaultCase",sizeof(wchar_t)*11) ) { defaultCase=inValue.Cast<Class >();return inValue; }
		break;
	case 12:
		if (!memcmp(inName.__s,L"DEFAULT_CASE",sizeof(wchar_t)*12) ) { DEFAULT_CASE=inValue.Cast<String >();return inValue; }
		if (!memcmp(inName.__s,L"defaultSuite",sizeof(wchar_t)*12) ) { defaultSuite=inValue.Cast<Class >();return inValue; }
		break;
	case 13:
		if (!memcmp(inName.__s,L"DEFAULT_SUITE",sizeof(wchar_t)*13) ) { DEFAULT_SUITE=inValue.Cast<String >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void TestGenerator_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"defaultCase",11));
	outFields->push(String(L"defaultSuite",12));
	outFields->push(String(L"tests",5));
	outFields->push(String(L"anonCount",9));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"DEFAULT_CASE",
	L"DEFAULT_SUITE",
	0 };

static wchar_t *sMemberFields[] = {
	L"defaultCase",
	L"defaultSuite",
	L"tests",
	L"anonCount",
	L"addTest",
	L"addCase",
	L"addSuite",
	0 };

Class TestGenerator_obj::__mClass;

void TestGenerator_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"hxunit.TestGenerator",20), TCanCast<TestGenerator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void TestGenerator_obj::__boot()
{
	Static(DEFAULT_CASE) = String(L"defaultCase",11);
	Static(DEFAULT_SUITE) = String(L"defaultSuite",12);
}

} // end namespace hxunit
