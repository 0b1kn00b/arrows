#include <hxObject.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_hxunit_TestResult
#include <hxunit/TestResult.h>
#endif
#ifndef INCLUDED_hxunit_TestSuite
#include <hxunit/TestSuite.h>
#endif
#ifndef INCLUDED_hxunit_error_HxUnitError
#include <hxunit/error/HxUnitError.h>
#endif
namespace hxunit{

Void TestResult_obj::__construct(Dynamic unit)
{
{
	this->unit = unit;
	this->errors = List_obj::__new();
	this->assertions = List_obj::__new();
}
;
	return null();
}

TestResult_obj::~TestResult_obj() { }

Dynamic TestResult_obj::__CreateEmpty() { return  new TestResult_obj; }
hxObjectPtr<TestResult_obj > TestResult_obj::__new(Dynamic unit)
{  hxObjectPtr<TestResult_obj > result = new TestResult_obj();
	result->__construct(unit);
	return result;}

Dynamic TestResult_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<TestResult_obj > result = new TestResult_obj();
	result->__construct(inArgs[0]);
	return result;}

Void TestResult_obj::add( Dynamic value){
{
		this->assertions->add(value);
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(TestResult_obj,add,(void))

String TestResult_obj::toString( ){
	String str = String(L"",0);
	Array<String > a0 = Type_obj::getClassName(this->unit->__Field(String(L"suite",5)).Cast<Class >()).split(String(L".",1));
	hxAddEq(str,a0->__get(a0->length - 1) + String(L" ",1));
	Array<String > a1 = Type_obj::getClassName(this->unit->__Field(String(L"testcase",8)).Cast<Class >()).split(String(L".",1));
	hxAddEq(str,a1->__get(a1->length - 1) + String(L" ",1));
	hxAddEq(str,this->unit->__Field(String(L"test",4)).Cast<hxunit::Test >()->name + String(L" ",1));
	if (this->errors->length == 0){
		hxAddEq(str,String(L" \tOK",4));
	}
	else{
		for(Dynamic __it = this->errors->iterator();  __it->__Field(String(L"hasNext",7))(); ){
hxunit::error::HxUnitError item = __it->__Field(String(L"next",4))();
			{
				hxAddEq(str,String(L"\n\t\t\t\t\t",6) + item);
			}
;
		}
	}
	return str;
}


DEFINE_DYNAMIC_FUNC0(TestResult_obj,toString,return )


TestResult_obj::TestResult_obj()
{
	InitMember(errors);
	InitMember(assertions);
	InitMember(unit);
}

Dynamic TestResult_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"add",sizeof(wchar_t)*3) ) { return add_dyn(); }
		break;
	case 4:
		if (!memcmp(inName.__s,L"unit",sizeof(wchar_t)*4) ) { return unit; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"errors",sizeof(wchar_t)*6) ) { return errors; }
		break;
	case 8:
		if (!memcmp(inName.__s,L"toString",sizeof(wchar_t)*8) ) { return toString_dyn(); }
		break;
	case 10:
		if (!memcmp(inName.__s,L"assertions",sizeof(wchar_t)*10) ) { return assertions; }
	}
	return super::__Field(inName);
}

static int __id_errors = __hxcpp_field_to_id("errors");
static int __id_assertions = __hxcpp_field_to_id("assertions");
static int __id_unit = __hxcpp_field_to_id("unit");
static int __id_add = __hxcpp_field_to_id("add");
static int __id_toString = __hxcpp_field_to_id("toString");


Dynamic TestResult_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_errors) return errors;
	if (inFieldID==__id_assertions) return assertions;
	if (inFieldID==__id_unit) return unit;
	if (inFieldID==__id_add) return add_dyn();
	if (inFieldID==__id_toString) return toString_dyn();
	return super::__IField(inFieldID);
}

Dynamic TestResult_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"unit",sizeof(wchar_t)*4) ) { unit=inValue.Cast<Dynamic >();return inValue; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"errors",sizeof(wchar_t)*6) ) { errors=inValue.Cast<List >();return inValue; }
		break;
	case 10:
		if (!memcmp(inName.__s,L"assertions",sizeof(wchar_t)*10) ) { assertions=inValue.Cast<List >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void TestResult_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"errors",6));
	outFields->push(String(L"assertions",10));
	outFields->push(String(L"unit",4));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"errors",
	L"assertions",
	L"unit",
	L"add",
	L"toString",
	0 };

Class TestResult_obj::__mClass;

void TestResult_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"hxunit.TestResult",17), TCanCast<TestResult_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void TestResult_obj::__boot()
{
}

} // end namespace hxunit
