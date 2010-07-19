#include <hxObject.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_TaggedValue
#include <arrow/TaggedValue.h>
#endif
#ifndef INCLUDED_arrow_Tuple
#include <arrow/Tuple.h>
#endif
#ifndef INCLUDED_arrow_combinators_ArrThunk
#include <arrow/combinators/ArrThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_BindThunk
#include <arrow/combinators/BindThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_ComposeThunk
#include <arrow/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_FanoutThunk
#include <arrow/combinators/FanoutThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_FirstThunk
#include <arrow/combinators/FirstThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_FunctionThunk
#include <arrow/combinators/FunctionThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_JoinThunk
#include <arrow/combinators/JoinThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_ProductThunk
#include <arrow/combinators/ProductThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_ProgressArrow
#include <arrow/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_arrow_combinators_RepeatThunk
#include <arrow/combinators/RepeatThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_SecondThunk
#include <arrow/combinators/SecondThunk.h>
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
#ifndef INCLUDED_test_arrow_ArrowTest
#include <test/arrow/ArrowTest.h>
#endif
namespace test{
namespace arrow{

Void ArrowTest_obj::__construct()
{
{
	super::__construct();
}
;
	return null();
}

ArrowTest_obj::~ArrowTest_obj() { }

Dynamic ArrowTest_obj::__CreateEmpty() { return  new ArrowTest_obj; }
hxObjectPtr<ArrowTest_obj > ArrowTest_obj::__new()
{  hxObjectPtr<ArrowTest_obj > result = new ArrowTest_obj();
	result->__construct();
	return result;}

Dynamic ArrowTest_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<ArrowTest_obj > result = new ArrowTest_obj();
	result->__construct();
	return result;}

Void ArrowTest_obj::setup( ){
{
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,setup,(void))

Void ArrowTest_obj::teardown( ){
{
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,teardown,(void))

Void ArrowTest_obj::testSimpleArrow( ){
{
		Array<test::arrow::ArrowTest > self = Array_obj<test::arrow::ArrowTest >::__new().Add(this);

		BEGIN_LOCAL_FUNC1(_Function_1,Array<test::arrow::ArrowTest >,self)
		Void run(Dynamic x){
{
				self[0]->assertEqual(x,162,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 41)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"testSimpleArrow",15)));
			}
			return null();
		}
		END_LOCAL_FUNC1((void))

		Dynamic f3 = this->asyncHandler( Dynamic(new _Function_1(self)),null(),null());
		arrow::AsyncArrow_obj::lift(this->f0_dyn())->then(this->f1_dyn())->then(f3)->run(80);
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testSimpleArrow,(void))

Void ArrowTest_obj::testPair( ){
{
		Array<test::arrow::ArrowTest > self = Array_obj<test::arrow::ArrowTest >::__new().Add(this);

		BEGIN_LOCAL_FUNC1(_Function_1,Array<test::arrow::ArrowTest >,self)
		Dynamic run(Dynamic x){
{
				self[0]->assertEqual(x->__Field(String(L"fst",3))(),11,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 50)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"testPair",8)));
				self[0]->assertEqual(x->__Field(String(L"snd",3))(),20,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 51)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"testPair",8)));
				return x;
			}
			return null();
		}
		END_LOCAL_FUNC1(return)

		Dynamic as = this->asyncHandler( Dynamic(new _Function_1(self)),null(),null());
		arrow::combinators::ProgressArrow a = arrow::AsyncArrow_obj::tuple(this->f0_dyn())->pair(this->f1_dyn())->then(arrow::AsyncArrow_obj::tuple(as))->run(arrow::Tuple_obj::__new(Array_obj<int >::__new().Add(10).Add(10)));
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testPair,(void))

Void ArrowTest_obj::testFirst( ){
{
		Array<test::arrow::ArrowTest > self = Array_obj<test::arrow::ArrowTest >::__new().Add(this);

		BEGIN_LOCAL_FUNC1(_Function_1,Array<test::arrow::ArrowTest >,self)
		Void run(Dynamic x){
{
				self[0]->assertEqual(x->__Field(String(L"fst",3))(),11,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 60)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"testFirst",9)));
				self[0]->assertEqual(x->__Field(String(L"snd",3))(),10,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 61)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"testFirst",9)));
			}
			return null();
		}
		END_LOCAL_FUNC1((void))

		Dynamic as = this->asyncHandler( Dynamic(new _Function_1(self)),null(),null());
		arrow::AsyncArrow_obj::lift(this->f0_dyn())->first()->then(arrow::AsyncArrow_obj::tuple(as))->run(arrow::Tuple_obj::__new(Array_obj<int >::__new().Add(10).Add(10)));
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testFirst,(void))

Void ArrowTest_obj::testSecond( ){
{
		Array<test::arrow::ArrowTest > self = Array_obj<test::arrow::ArrowTest >::__new().Add(this);

		BEGIN_LOCAL_FUNC1(_Function_1,Array<test::arrow::ArrowTest >,self)
		Void run(Dynamic x){
{
				self[0]->assertEqual(x->__Field(String(L"fst",3))(),10,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 69)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"testSecond",10)));
				self[0]->assertEqual(x->__Field(String(L"snd",3))(),11,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 70)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"testSecond",10)));
			}
			return null();
		}
		END_LOCAL_FUNC1((void))

		Dynamic as = this->asyncHandler( Dynamic(new _Function_1(self)),null(),null());
		arrow::AsyncArrow_obj::lift(this->f0_dyn())->second()->dump(as)->run(arrow::Tuple_obj::__new(Array_obj<int >::__new().Add(10).Add(10)));
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testSecond,(void))

Void ArrowTest_obj::testFanout( ){
{
		Array<test::arrow::ArrowTest > self = Array_obj<test::arrow::ArrowTest >::__new().Add(this);

		BEGIN_LOCAL_FUNC1(_Function_1,Array<test::arrow::ArrowTest >,self)
		Void run(Dynamic x){
{
				self[0]->assertEqual(11,x->__Field(String(L"fst",3))(),hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 77)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"testFanout",10)));
				self[0]->assertEqual(20,x->__Field(String(L"snd",3))(),hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 78)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"testFanout",10)));
			}
			return null();
		}
		END_LOCAL_FUNC1((void))

		Dynamic as = this->asyncHandler( Dynamic(new _Function_1(self)),null(),null());
		arrow::AsyncArrow_obj::lift(this->f0_dyn())->fanout(this->f1_dyn())->dump(as)->run(10);
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testFanout,(void))

Void ArrowTest_obj::testBind( ){
{
		Array<test::arrow::ArrowTest > self = Array_obj<test::arrow::ArrowTest >::__new().Add(this);

		BEGIN_LOCAL_FUNC1(_Function_1,Array<test::arrow::ArrowTest >,self)
		Void run(arrow::Tuple x){
{
				self[0]->assertEqual(10,x->fst(),hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 86)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"testBind",8)));
				self[0]->assertEqual(11,x->snd(),hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 87)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"testBind",8)));
			}
			return null();
		}
		END_LOCAL_FUNC1((void))

		Dynamic as = this->asyncHandler( Dynamic(new _Function_1(self)),null(),null());
		arrow::AsyncArrow_obj::tuple(this->f0_dyn())->bind(as)->run(10);
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testBind,(void))

Void ArrowTest_obj::testJoin( ){
{
		Array<test::arrow::ArrowTest > self = Array_obj<test::arrow::ArrowTest >::__new().Add(this);

		BEGIN_LOCAL_FUNC1(_Function_1,Array<test::arrow::ArrowTest >,self)
		Void run(Dynamic x){
{
				self[0]->assertEqual(x->__Field(String(L"fst",3))(),11,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 97)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"testJoin",8)));
				self[0]->assertEqual(x->__Field(String(L"snd",3))(),22,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 98)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"testJoin",8)));
			}
			return null();
		}
		END_LOCAL_FUNC1((void))

		Dynamic as = this->asyncHandler( Dynamic(new _Function_1(self)),null(),null());
		arrow::AsyncArrow_obj::lift(this->f0_dyn())->join(this->f1_dyn())->dump(as)->run(10);
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testJoin,(void))

Void ArrowTest_obj::testRepeat( ){
{
		Array<test::arrow::ArrowTest > self = Array_obj<test::arrow::ArrowTest >::__new().Add(this);
		Array<int > num = Array_obj<int >::__new().Add(10);

		BEGIN_LOCAL_FUNC2(_Function_1,Array<test::arrow::ArrowTest >,self,Array<int >,num)
		Void run(Dynamic x){
{
				self[0]->assertEqual(num->__get(0),x,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 108)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"testRepeat",10)));
			}
			return null();
		}
		END_LOCAL_FUNC1((void))

		Dynamic as = this->asyncHandler( Dynamic(new _Function_1(self,num)),data::type::Time_obj::__new(90,data::type::TimeFormat_obj::second),null());

		BEGIN_LOCAL_FUNC1(_Function_2,Array<int >,num)
		Dynamic run(Dynamic x){
{
				int out = x + 1;
				if (out < num->__get(0)){
					return arrow::AsyncArrow_obj::doRepeat(out);
				}
				else{
					return arrow::AsyncArrow_obj::doDone(out);
				}
			}
			return null();
		}
		END_LOCAL_FUNC1(return)

		Dynamic g0 =  Dynamic(new _Function_2(num));
		arrow::AsyncArrow_obj::lift(g0)->repeat()->dump(as)->run(0);
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testRepeat,(void))

Void ArrowTest_obj::testDelay( ){
{
		Array<test::arrow::ArrowTest > self = Array_obj<test::arrow::ArrowTest >::__new().Add(this);

		BEGIN_LOCAL_FUNC1(_Function_1,Array<test::arrow::ArrowTest >,self)
		Void run(Dynamic x){
{
				self[0]->assertTrue(true,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 125)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"testDelay",9)));
			}
			return null();
		}
		END_LOCAL_FUNC1((void))

		Dynamic as = this->asyncHandler( Dynamic(new _Function_1(self)),data::type::Time_obj::__new(3,data::type::TimeFormat_obj::second),null());
		arrow::AsyncArrow_obj::delayA(data::type::Time_obj::__new(200,null()))->then(as)->run(null());
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testDelay,(void))

Void ArrowTest_obj::testEventA( ){
{
		Array<test::arrow::ArrowTest > self = Array_obj<test::arrow::ArrowTest >::__new().Add(this);

		BEGIN_LOCAL_FUNC1(_Function_1,Array<test::arrow::ArrowTest >,self)
		Void run(Dynamic x){
{
				self[0]->assertTrue(true,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 134)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"testEventA",10)));
			}
			return null();
		}
		END_LOCAL_FUNC1((void))

		Dynamic as = this->asyncHandler( Dynamic(new _Function_1(self)),data::type::Time_obj::__new(3,data::type::TimeFormat_obj::second),null());
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testEventA,(void))

Void ArrowTest_obj::testNormal( ){
{
		Array<test::arrow::ArrowTest > self = Array_obj<test::arrow::ArrowTest >::__new().Add(this);

		BEGIN_LOCAL_FUNC1(_Function_1,Array<test::arrow::ArrowTest >,self)
		Void run(Dynamic x){
{
				self[0]->assertTrue(true,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 174)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"testNormal",10)));
			}
			return null();
		}
		END_LOCAL_FUNC1((void))

		Dynamic as = this->asyncHandler( Dynamic(new _Function_1(self)),null(),null());

		BEGIN_LOCAL_FUNC0(_Function_2)
		Void run(Dynamic x){
{
				haxe::Log_obj::trace(String(L"hmm",3),hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 178)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"testNormal",10)));
			}
			return null();
		}
		END_LOCAL_FUNC1((void))

		Dynamic _f =  Dynamic(new _Function_2());
		arrow::combinators::FunctionThunk a = arrow::AsyncArrow_obj::lift(this->g_dyn());
		arrow::combinators::ComposeThunk b = a->then(this->g_dyn())->then(as);
		b->run(String(L"arg",3));
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testNormal,(void))

Void ArrowTest_obj::testReturnA( ){
{
		Array<test::arrow::ArrowTest > self = Array_obj<test::arrow::ArrowTest >::__new().Add(this);

		BEGIN_LOCAL_FUNC1(_Function_1,Array<test::arrow::ArrowTest >,self)
		Void run(Dynamic x){
{
				self[0]->assertEqual(String(L"test",4),x,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 189)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"testReturnA",11)));
			}
			return null();
		}
		END_LOCAL_FUNC1((void))

		Dynamic as = this->asyncHandler( Dynamic(new _Function_1(self)),null(),null());
		arrow::AsyncArrow_obj::returnA()->then(as)->run(String(L"test",4));
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testReturnA,(void))

Dynamic ArrowTest_obj::f0( Dynamic x){
	int out = x + 1;
	return out;
}


DEFINE_DYNAMIC_FUNC1(ArrowTest_obj,f0,return )

Dynamic ArrowTest_obj::f1( Dynamic x){
	double out = x * 2;
	return out;
}


DEFINE_DYNAMIC_FUNC1(ArrowTest_obj,f1,return )

Dynamic ArrowTest_obj::debug( Dynamic x){
	haxe::Log_obj::trace(String(L"debug = ",8) + Std_obj::string(x),hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"ArrowTest.hx",12))->Add( String(L"lineNumber",10) , 207)->Add( String(L"className",9) , String(L"test.arrow.ArrowTest",20))->Add( String(L"methodName",10) , String(L"debug",5)));
	return x;
}


DEFINE_DYNAMIC_FUNC1(ArrowTest_obj,debug,return )

Dynamic ArrowTest_obj::g( Dynamic x){
	return x;
}


DEFINE_DYNAMIC_FUNC1(ArrowTest_obj,g,return )


ArrowTest_obj::ArrowTest_obj()
{
}

Dynamic ArrowTest_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 1:
		if (!memcmp(inName.__s,L"g",sizeof(wchar_t)*1) ) { return g_dyn(); }
		break;
	case 2:
		if (!memcmp(inName.__s,L"f0",sizeof(wchar_t)*2) ) { return f0_dyn(); }
		if (!memcmp(inName.__s,L"f1",sizeof(wchar_t)*2) ) { return f1_dyn(); }
		break;
	case 5:
		if (!memcmp(inName.__s,L"setup",sizeof(wchar_t)*5) ) { return setup_dyn(); }
		if (!memcmp(inName.__s,L"debug",sizeof(wchar_t)*5) ) { return debug_dyn(); }
		break;
	case 8:
		if (!memcmp(inName.__s,L"teardown",sizeof(wchar_t)*8) ) { return teardown_dyn(); }
		if (!memcmp(inName.__s,L"testPair",sizeof(wchar_t)*8) ) { return testPair_dyn(); }
		if (!memcmp(inName.__s,L"testBind",sizeof(wchar_t)*8) ) { return testBind_dyn(); }
		if (!memcmp(inName.__s,L"testJoin",sizeof(wchar_t)*8) ) { return testJoin_dyn(); }
		break;
	case 9:
		if (!memcmp(inName.__s,L"testFirst",sizeof(wchar_t)*9) ) { return testFirst_dyn(); }
		if (!memcmp(inName.__s,L"testDelay",sizeof(wchar_t)*9) ) { return testDelay_dyn(); }
		break;
	case 10:
		if (!memcmp(inName.__s,L"testSecond",sizeof(wchar_t)*10) ) { return testSecond_dyn(); }
		if (!memcmp(inName.__s,L"testFanout",sizeof(wchar_t)*10) ) { return testFanout_dyn(); }
		if (!memcmp(inName.__s,L"testRepeat",sizeof(wchar_t)*10) ) { return testRepeat_dyn(); }
		if (!memcmp(inName.__s,L"testEventA",sizeof(wchar_t)*10) ) { return testEventA_dyn(); }
		if (!memcmp(inName.__s,L"testNormal",sizeof(wchar_t)*10) ) { return testNormal_dyn(); }
		break;
	case 11:
		if (!memcmp(inName.__s,L"testReturnA",sizeof(wchar_t)*11) ) { return testReturnA_dyn(); }
		break;
	case 15:
		if (!memcmp(inName.__s,L"testSimpleArrow",sizeof(wchar_t)*15) ) { return testSimpleArrow_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_setup = __hxcpp_field_to_id("setup");
static int __id_teardown = __hxcpp_field_to_id("teardown");
static int __id_testSimpleArrow = __hxcpp_field_to_id("testSimpleArrow");
static int __id_testPair = __hxcpp_field_to_id("testPair");
static int __id_testFirst = __hxcpp_field_to_id("testFirst");
static int __id_testSecond = __hxcpp_field_to_id("testSecond");
static int __id_testFanout = __hxcpp_field_to_id("testFanout");
static int __id_testBind = __hxcpp_field_to_id("testBind");
static int __id_testJoin = __hxcpp_field_to_id("testJoin");
static int __id_testRepeat = __hxcpp_field_to_id("testRepeat");
static int __id_testDelay = __hxcpp_field_to_id("testDelay");
static int __id_testEventA = __hxcpp_field_to_id("testEventA");
static int __id_testNormal = __hxcpp_field_to_id("testNormal");
static int __id_testReturnA = __hxcpp_field_to_id("testReturnA");
static int __id_f0 = __hxcpp_field_to_id("f0");
static int __id_f1 = __hxcpp_field_to_id("f1");
static int __id_debug = __hxcpp_field_to_id("debug");
static int __id_g = __hxcpp_field_to_id("g");


Dynamic ArrowTest_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_setup) return setup_dyn();
	if (inFieldID==__id_teardown) return teardown_dyn();
	if (inFieldID==__id_testSimpleArrow) return testSimpleArrow_dyn();
	if (inFieldID==__id_testPair) return testPair_dyn();
	if (inFieldID==__id_testFirst) return testFirst_dyn();
	if (inFieldID==__id_testSecond) return testSecond_dyn();
	if (inFieldID==__id_testFanout) return testFanout_dyn();
	if (inFieldID==__id_testBind) return testBind_dyn();
	if (inFieldID==__id_testJoin) return testJoin_dyn();
	if (inFieldID==__id_testRepeat) return testRepeat_dyn();
	if (inFieldID==__id_testDelay) return testDelay_dyn();
	if (inFieldID==__id_testEventA) return testEventA_dyn();
	if (inFieldID==__id_testNormal) return testNormal_dyn();
	if (inFieldID==__id_testReturnA) return testReturnA_dyn();
	if (inFieldID==__id_f0) return f0_dyn();
	if (inFieldID==__id_f1) return f1_dyn();
	if (inFieldID==__id_debug) return debug_dyn();
	if (inFieldID==__id_g) return g_dyn();
	return super::__IField(inFieldID);
}

Dynamic ArrowTest_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ArrowTest_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"setup",
	L"teardown",
	L"testSimpleArrow",
	L"testPair",
	L"testFirst",
	L"testSecond",
	L"testFanout",
	L"testBind",
	L"testJoin",
	L"testRepeat",
	L"testDelay",
	L"testEventA",
	L"testNormal",
	L"testReturnA",
	L"f0",
	L"f1",
	L"debug",
	L"g",
	0 };

Class ArrowTest_obj::__mClass;

void ArrowTest_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"test.arrow.ArrowTest",20), TCanCast<ArrowTest_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void ArrowTest_obj::__boot()
{
}

} // end namespace test
} // end namespace arrow
