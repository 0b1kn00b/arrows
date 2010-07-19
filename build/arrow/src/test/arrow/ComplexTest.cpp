#include <hxObject.h>

#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_TaggedValue
#include <arrow/TaggedValue.h>
#endif
#ifndef INCLUDED_arrow_combinators_ComposeThunk
#include <arrow/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_OrThunk
#include <arrow/combinators/OrThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_ProgressArrow
#include <arrow/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_arrow_combinators_RepeatThunk
#include <arrow/combinators/RepeatThunk.h>
#endif
#ifndef INCLUDED_data_type_Time
#include <data/type/Time.h>
#endif
#ifndef INCLUDED_data_type_TimeFormat
#include <data/type/TimeFormat.h>
#endif
#ifndef INCLUDED_event_EventDispatcher
#include <event/EventDispatcher.h>
#endif
#ifndef INCLUDED_event_EventListener
#include <event/EventListener.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxunit_TestCase
#include <hxunit/TestCase.h>
#endif
#ifndef INCLUDED_hxunit_TestFrameworkPrimitive
#include <hxunit/TestFrameworkPrimitive.h>
#endif
#ifndef INCLUDED_test_arrow_ComplexTest
#include <test/arrow/ComplexTest.h>
#endif
namespace test{
namespace arrow{

Void ComplexTest_obj::__construct()
{
{
	super::__construct();
}
;
	return null();
}

ComplexTest_obj::~ComplexTest_obj() { }

Dynamic ComplexTest_obj::__CreateEmpty() { return  new ComplexTest_obj; }
hxObjectPtr<ComplexTest_obj > ComplexTest_obj::__new()
{  hxObjectPtr<ComplexTest_obj > result = new ComplexTest_obj();
	result->__construct();
	return result;}

Dynamic ComplexTest_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<ComplexTest_obj > result = new ComplexTest_obj();
	result->__construct();
	return result;}

Dynamic ComplexTest_obj::debug( Dynamic x){
	haxe::Log_obj::trace(String(L"result = ",9) + x,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ComplexTest.hx",14))->Add( String(L"lineNumber",10) , 14)->Add( String(L"className",9) , String(L"test.arrow.ComplexTest",22))->Add( String(L"methodName",10) , String(L"debug",5)));
	return x;
}


DEFINE_DYNAMIC_FUNC1(ComplexTest_obj,debug,return )

Void ComplexTest_obj::testOr( ){
{
		Array<test::arrow::ComplexTest > self = Array_obj<test::arrow::ComplexTest >::__new().Add(this);

		BEGIN_LOCAL_FUNC1(_Function_1,Array<test::arrow::ComplexTest >,self)
		Dynamic run(Dynamic x){
{
				self[0]->assertEqual(String(L"f",1),x,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ComplexTest.hx",14))->Add( String(L"lineNumber",10) , 22)->Add( String(L"className",9) , String(L"test.arrow.ComplexTest",22))->Add( String(L"methodName",10) , String(L"testOr",6)));
				return x;
			}
			return null();
		}
		END_LOCAL_FUNC1(return)

		Dynamic as = this->asyncHandler( Dynamic(new _Function_1(self)),data::type::Time_obj::__new(7000,null()),null());

		BEGIN_LOCAL_FUNC0(_Function_2)
		String run(Dynamic x){
{
				return String(L"f",1);
			}
			return null();
		}
		END_LOCAL_FUNC1(return)

		Dynamic f =  Dynamic(new _Function_2());

		BEGIN_LOCAL_FUNC0(_Function_3)
		String run(Dynamic x){
{
				return String(L"g",1);
			}
			return null();
		}
		END_LOCAL_FUNC1(return)

		Dynamic g =  Dynamic(new _Function_3());
		arrow::combinators::ComposeThunk a0 = arrow::AsyncArrow_obj::delayA(data::type::Time_obj::__new(1000,null()))->then(f);
		arrow::combinators::ComposeThunk a1 = arrow::AsyncArrow_obj::delayA(data::type::Time_obj::__new(4000,null()))->then(g);
		a0->_or(null(),a1)->then(as)->run(2);
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(ComplexTest_obj,testOr,(void))

Void ComplexTest_obj::testRepeat( ){
{
		Array<int > count = Array_obj<int >::__new().Add(0);
		Array<test::arrow::ComplexTest > self = Array_obj<test::arrow::ComplexTest >::__new().Add(this);

		BEGIN_LOCAL_FUNC1(_Function_1,Array<test::arrow::ComplexTest >,self)
		Void run(Dynamic x){
{
				self[0]->assertTrue(true,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ComplexTest.hx",14))->Add( String(L"lineNumber",10) , 44)->Add( String(L"className",9) , String(L"test.arrow.ComplexTest",22))->Add( String(L"methodName",10) , String(L"testRepeat",10)));
			}
			return null();
		}
		END_LOCAL_FUNC1((void))

		Dynamic as = this->asyncHandler( Dynamic(new _Function_1(self)),data::type::Time_obj::__new(3,data::type::TimeFormat_obj::second),null());

		BEGIN_LOCAL_FUNC1(_Function_2,Array<int >,count)
		arrow::TaggedValue run(Dynamic x){
{
				count[0]++;
				if (count->__get(0) < 10){
					return arrow::AsyncArrow_obj::doRepeat(null());
				}
				else{
					return arrow::AsyncArrow_obj::doDone(null());
				}
			}
			return null();
		}
		END_LOCAL_FUNC1(return)

		arrow::AsyncArrow_obj::delayA(data::type::Time_obj::__new(100,null()))->then( Dynamic(new _Function_2(count)))->repeat()->then(as)->run(null());
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(ComplexTest_obj,testRepeat,(void))


ComplexTest_obj::ComplexTest_obj()
{
}

Dynamic ComplexTest_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 5:
		if (!memcmp(inName.__s,L"debug",sizeof(wchar_t)*5) ) { return debug_dyn(); }
		break;
	case 6:
		if (!memcmp(inName.__s,L"testOr",sizeof(wchar_t)*6) ) { return testOr_dyn(); }
		break;
	case 10:
		if (!memcmp(inName.__s,L"testRepeat",sizeof(wchar_t)*10) ) { return testRepeat_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_debug = __hxcpp_field_to_id("debug");
static int __id_testOr = __hxcpp_field_to_id("testOr");
static int __id_testRepeat = __hxcpp_field_to_id("testRepeat");


Dynamic ComplexTest_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_debug) return debug_dyn();
	if (inFieldID==__id_testOr) return testOr_dyn();
	if (inFieldID==__id_testRepeat) return testRepeat_dyn();
	return super::__IField(inFieldID);
}

Dynamic ComplexTest_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ComplexTest_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"debug",
	L"testOr",
	L"testRepeat",
	0 };

Class ComplexTest_obj::__mClass;

void ComplexTest_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"test.arrow.ComplexTest",22), TCanCast<ComplexTest_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void ComplexTest_obj::__boot()
{
}

} // end namespace test
} // end namespace arrow
