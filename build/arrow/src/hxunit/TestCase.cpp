#include <hxObject.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_data_type_Time
#include <data/type/Time.h>
#endif
#ifndef INCLUDED_data_type_TimeFormat
#include <data/type/TimeFormat.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_hxunit_AType
#include <hxunit/AType.h>
#endif
#ifndef INCLUDED_hxunit_Message
#include <hxunit/Message.h>
#endif
#ifndef INCLUDED_hxunit_TestCase
#include <hxunit/TestCase.h>
#endif
#ifndef INCLUDED_hxunit_TestFrameworkPrimitive
#include <hxunit/TestFrameworkPrimitive.h>
#endif
#ifndef INCLUDED_hxunit_TestMonitor
#include <hxunit/TestMonitor.h>
#endif
#ifndef INCLUDED_hxunit_error_AssertionError
#include <hxunit/error/AssertionError.h>
#endif
#ifndef INCLUDED_hxunit_error_HxUnitError
#include <hxunit/error/HxUnitError.h>
#endif
#ifndef INCLUDED_util_UUID
#include <util/UUID.h>
#endif
namespace hxunit{

Void TestCase_obj::__construct()
{
{
	this->filtrate = null();
	this->timeout = data::type::Time_obj::__new(1,data::type::TimeFormat_obj::second);
	super::__construct();
}
;
	return null();
}

TestCase_obj::~TestCase_obj() { }

Dynamic TestCase_obj::__CreateEmpty() { return  new TestCase_obj; }
hxObjectPtr<TestCase_obj > TestCase_obj::__new()
{  hxObjectPtr<TestCase_obj > result = new TestCase_obj();
	result->__construct();
	return result;}

Dynamic TestCase_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<TestCase_obj > result = new TestCase_obj();
	result->__construct();
	return result;}

Void TestCase_obj::setup( ){
{
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(TestCase_obj,setup,(void))

Void TestCase_obj::teardown( ){
{
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(TestCase_obj,teardown,(void))

Void TestCase_obj::assert( hxunit::AType type,Dynamic expected,Dynamic actual,Dynamic pos){
{
		this->monitor->notify(hxunit::Message_obj::assert(hxAnon_obj::Create()->Add( String(L"type",4) , type)->Add( String(L"expected",8) , expected)->Add( String(L"actual",6) , actual)->Add( String(L"pos",3) , pos)));
	}
return null();
}


DEFINE_DYNAMIC_FUNC4(TestCase_obj,assert,(void))

Void TestCase_obj::assertTrue( bool value,Dynamic pos){
{
		this->assert(hxunit::AType_obj::bool,true,value,pos);
	}
return null();
}


DEFINE_DYNAMIC_FUNC2(TestCase_obj,assertTrue,(void))

Void TestCase_obj::assertFalse( bool value,Dynamic pos){
{
		this->assert(hxunit::AType_obj::bool,false,value,pos);
	}
return null();
}


DEFINE_DYNAMIC_FUNC2(TestCase_obj,assertFalse,(void))

Void TestCase_obj::assertEqual( Dynamic value0,Dynamic value1,Dynamic pos){
{
		this->assert(hxunit::AType_obj::bool,value0,value1,pos);
	}
return null();
}


DEFINE_DYNAMIC_FUNC3(TestCase_obj,assertEqual,(void))

Void TestCase_obj::assertNotNull( Dynamic value,Dynamic pos){
{

		BEGIN_LOCAL_FUNC0(_Function_1)
		Void run(Dynamic v0,Dynamic v1){
{
				if (v1 == v0)
					hxThrow (hxunit::error::AssertionError_obj::__new(String(L"value is null",13),hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"TestCase.hx",11))->Add( String(L"lineNumber",10) , 32)->Add( String(L"className",9) , String(L"hxunit.TestCase",15))->Add( String(L"methodName",10) , String(L"assertNotNull",13))));
			}
			return null();
		}
		END_LOCAL_FUNC2((void))

		this->assert(hxunit::AType_obj::custom( Dynamic(new _Function_1())),null(),value,pos);
	}
return null();
}


DEFINE_DYNAMIC_FUNC2(TestCase_obj,assertNotNull,(void))

Void TestCase_obj::assertNull( Dynamic value,Dynamic pos){
{

		BEGIN_LOCAL_FUNC0(_Function_1)
		Void run(Dynamic v0,Dynamic v1){
{
				if (v1 != v0)
					hxThrow (hxunit::error::AssertionError_obj::__new(String(L"value is not null",17),hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"TestCase.hx",11))->Add( String(L"lineNumber",10) , 40)->Add( String(L"className",9) , String(L"hxunit.TestCase",15))->Add( String(L"methodName",10) , String(L"assertNull",10))));
			}
			return null();
		}
		END_LOCAL_FUNC2((void))

		this->assert(hxunit::AType_obj::custom( Dynamic(new _Function_1())),null(),value,pos);
	}
return null();
}


DEFINE_DYNAMIC_FUNC2(TestCase_obj,assertNull,(void))

Dynamic TestCase_obj::asyncHandler( Dynamic method,data::type::Time timeout,Dynamic $t3){
	Array<Dynamic > passThrough = Array_obj<Dynamic >::__new().Add($t3);
	if (Reflect_obj::isFunction(method) == false){
		hxThrow (String(L"Function required",17));
	}
	Array<hxunit::TestCase > self = Array_obj<hxunit::TestCase >::__new().Add(this);
	String n = util::UUID_obj::get();
	double begin = haxe::Timer_obj::stamp();
	data::type::Time timeout1 = timeout == null() ? data::type::Time( this->timeout ) : data::type::Time( timeout );
	Dynamic wait = hxAnon_obj::Create()->Add( String(L"name",4) , n)->Add( String(L"begin",5) , data::type::Time_obj::__new(haxe::Timer_obj::stamp(),data::type::TimeFormat_obj::second))->Add( String(L"left",4) , timeout1)->Add( String(L"method",6) , method);
	this->monitor->notify(hxunit::Message_obj::wait(wait));

	BEGIN_LOCAL_FUNC2(_Function_1,Array<hxunit::TestCase >,self,Array<Dynamic >,passThrough)
	Void run(String n1,Dynamic value){
{
			self[0]->monitor->notify(hxunit::Message_obj::handle(n1,value,passThrough->__get(0)));
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	Dynamic f0 =  Dynamic(new _Function_1(self,passThrough));

	BEGIN_LOCAL_FUNC0(_Function_2)
	Dynamic run(Dynamic $t1,String $t2){
{
			Array<String > a1 = Array_obj<String >::__new().Add($t2);
			Array<Dynamic > f = Array_obj<Dynamic >::__new().Add($t1);

			BEGIN_LOCAL_FUNC2(_Function_3,Array<Dynamic >,f,Array<String >,a1)
			Void run(Dynamic a2){
				f->__get(0)(a1->__get(0),a2);
				return null();
			}
			END_LOCAL_FUNC1((void))

			return  Dynamic(new _Function_3(f,a1));
		}
		return null();
	}
	END_LOCAL_FUNC2(return)

	return  Dynamic(new _Function_2())(f0,n);
}


DEFINE_DYNAMIC_FUNC3(TestCase_obj,asyncHandler,return )

String TestCase_obj::toString( ){
	Array<Dynamic > arr = Type_obj::getInstanceFields(Type_obj::getClass(this));
	Array<Dynamic > out = Array_obj<Dynamic >::__new();
	{
		int _g = 0;
		while(_g < arr->length){
			Dynamic str = arr->__get(_g);
			++_g;
			if (bool(StringTools_obj::startsWith(str,String(L"test",4))) && bool(Reflect_obj::isFunction(this->__Field(str)))){
				out->push(str);
			}
		}
	}
	return String(L"[ TestCase fields = ",20) + out->join(String(L",",1)) + String(L" ]",2);
}


DEFINE_DYNAMIC_FUNC0(TestCase_obj,toString,return )


TestCase_obj::TestCase_obj()
{
	InitMember(monitor);
	InitMember(timeout);
}

Dynamic TestCase_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 5:
		if (!memcmp(inName.__s,L"setup",sizeof(wchar_t)*5) ) { return setup_dyn(); }
		break;
	case 6:
		if (!memcmp(inName.__s,L"assert",sizeof(wchar_t)*6) ) { return assert_dyn(); }
		break;
	case 7:
		if (!memcmp(inName.__s,L"monitor",sizeof(wchar_t)*7) ) { return monitor; }
		if (!memcmp(inName.__s,L"timeout",sizeof(wchar_t)*7) ) { return timeout; }
		break;
	case 8:
		if (!memcmp(inName.__s,L"teardown",sizeof(wchar_t)*8) ) { return teardown_dyn(); }
		if (!memcmp(inName.__s,L"toString",sizeof(wchar_t)*8) ) { return toString_dyn(); }
		if (!memcmp(inName.__s,L"filtrate",sizeof(wchar_t)*8) ) { return filtrate; }
		break;
	case 10:
		if (!memcmp(inName.__s,L"assertTrue",sizeof(wchar_t)*10) ) { return assertTrue_dyn(); }
		if (!memcmp(inName.__s,L"assertNull",sizeof(wchar_t)*10) ) { return assertNull_dyn(); }
		break;
	case 11:
		if (!memcmp(inName.__s,L"assertFalse",sizeof(wchar_t)*11) ) { return assertFalse_dyn(); }
		if (!memcmp(inName.__s,L"assertEqual",sizeof(wchar_t)*11) ) { return assertEqual_dyn(); }
		break;
	case 12:
		if (!memcmp(inName.__s,L"asyncHandler",sizeof(wchar_t)*12) ) { return asyncHandler_dyn(); }
		break;
	case 13:
		if (!memcmp(inName.__s,L"assertNotNull",sizeof(wchar_t)*13) ) { return assertNotNull_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_monitor = __hxcpp_field_to_id("monitor");
static int __id_timeout = __hxcpp_field_to_id("timeout");
static int __id_setup = __hxcpp_field_to_id("setup");
static int __id_teardown = __hxcpp_field_to_id("teardown");
static int __id_assert = __hxcpp_field_to_id("assert");
static int __id_assertTrue = __hxcpp_field_to_id("assertTrue");
static int __id_assertFalse = __hxcpp_field_to_id("assertFalse");
static int __id_assertEqual = __hxcpp_field_to_id("assertEqual");
static int __id_assertNotNull = __hxcpp_field_to_id("assertNotNull");
static int __id_assertNull = __hxcpp_field_to_id("assertNull");
static int __id_asyncHandler = __hxcpp_field_to_id("asyncHandler");
static int __id_toString = __hxcpp_field_to_id("toString");
static int __id_filtrate = __hxcpp_field_to_id("filtrate");


Dynamic TestCase_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_monitor) return monitor;
	if (inFieldID==__id_timeout) return timeout;
	if (inFieldID==__id_setup) return setup_dyn();
	if (inFieldID==__id_teardown) return teardown_dyn();
	if (inFieldID==__id_assert) return assert_dyn();
	if (inFieldID==__id_assertTrue) return assertTrue_dyn();
	if (inFieldID==__id_assertFalse) return assertFalse_dyn();
	if (inFieldID==__id_assertEqual) return assertEqual_dyn();
	if (inFieldID==__id_assertNotNull) return assertNotNull_dyn();
	if (inFieldID==__id_assertNull) return assertNull_dyn();
	if (inFieldID==__id_asyncHandler) return asyncHandler_dyn();
	if (inFieldID==__id_toString) return toString_dyn();
	if (inFieldID==__id_filtrate) return filtrate;
	return super::__IField(inFieldID);
}

Dynamic TestCase_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"monitor",sizeof(wchar_t)*7) ) { monitor=inValue.Cast<hxunit::TestMonitor >();return inValue; }
		if (!memcmp(inName.__s,L"timeout",sizeof(wchar_t)*7) ) { timeout=inValue.Cast<data::type::Time >();return inValue; }
		break;
	case 8:
		if (!memcmp(inName.__s,L"filtrate",sizeof(wchar_t)*8) ) { filtrate=inValue.Cast<Dynamic >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void TestCase_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"monitor",7));
	outFields->push(String(L"timeout",7));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"monitor",
	L"timeout",
	L"setup",
	L"teardown",
	L"assert",
	L"assertTrue",
	L"assertFalse",
	L"assertEqual",
	L"assertNotNull",
	L"assertNull",
	L"asyncHandler",
	L"toString",
	L"filtrate",
	0 };

Class TestCase_obj::__mClass;

void TestCase_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"hxunit.TestCase",15), TCanCast<TestCase_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void TestCase_obj::__boot()
{
}

} // end namespace hxunit
