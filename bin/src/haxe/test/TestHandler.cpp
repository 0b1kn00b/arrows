#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_Stack
#include <haxe/Stack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_test_Assert
#include <haxe/test/Assert.h>
#endif
#ifndef INCLUDED_haxe_test_Assertation
#include <haxe/test/Assertation.h>
#endif
#ifndef INCLUDED_haxe_test_Dispatcher
#include <haxe/test/Dispatcher.h>
#endif
#ifndef INCLUDED_haxe_test_TestFixture
#include <haxe/test/TestFixture.h>
#endif
#ifndef INCLUDED_haxe_test_TestHandler
#include <haxe/test/TestHandler.h>
#endif
namespace haxe{
namespace test{

Void TestHandler_obj::__construct(::haxe::test::TestFixture fixture)
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",34)
	if ((fixture == null()))
		hx::Throw (HX_CSTRING("fixture argument is null"));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",35)
	this->fixture = fixture;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",36)
	this->results = ::List_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",37)
	this->asyncStack = ::List_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",38)
	this->onTested = fixture->onTested;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",39)
	this->onTimeout = fixture->onTimeout;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",40)
	this->onComplete = fixture->onComplete;
}
;
	return null();
}

TestHandler_obj::~TestHandler_obj() { }

Dynamic TestHandler_obj::__CreateEmpty() { return  new TestHandler_obj; }
hx::ObjectPtr< TestHandler_obj > TestHandler_obj::__new(::haxe::test::TestFixture fixture)
{  hx::ObjectPtr< TestHandler_obj > result = new TestHandler_obj();
	result->__construct(fixture);
	return result;}

Dynamic TestHandler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestHandler_obj > result = new TestHandler_obj();
	result->__construct(inArgs[0]);
	return result;}

Void TestHandler_obj::execute( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestHandler_obj::execute")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",44)
		try{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",45)
			this->executeMethodByName(this->fixture->setup);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",46)
			try{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",47)
				this->executeMethod(this->fixture->method_dyn());
			}
			catch(Dynamic __e){
				{
					Dynamic e = __e;{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",49)
						this->results->add(::haxe::test::Assertation_obj::Error(e,::haxe::test::TestHandler_obj::exceptionStack(null())));
					}
				}
			}
		}
		catch(Dynamic __e){
			{
				Dynamic e = __e;{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",52)
					this->results->add(::haxe::test::Assertation_obj::SetupError(e,::haxe::test::TestHandler_obj::exceptionStack(null())));
				}
			}
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",54)
		this->checkTested();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestHandler_obj,execute,(void))

Void TestHandler_obj::checkTested( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestHandler_obj::checkTested")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",77)
		if ((this->asyncStack->length == 0)){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",78)
			this->tested();
		}
		else{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",80)
			this->timeout();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestHandler_obj,checkTested,(void))

Void TestHandler_obj::setTimeout( int timeout){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestHandler_obj::setTimeout")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",86)
		double newexpire = (::haxe::Timer_obj::stamp() + (double(timeout) / double(1000)));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",87)
		this->__FieldRef(HX_CSTRING("expireson")) = (  (((this->__Field(HX_CSTRING("expireson")) == null()))) ? Dynamic(newexpire) : Dynamic(((  ((newexpire > this->__Field(HX_CSTRING("expireson")))) ? Dynamic(newexpire) : Dynamic(this->__Field(HX_CSTRING("expireson"))) ))) );
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestHandler_obj,setTimeout,(void))

Void TestHandler_obj::bindHandler( ){
{
		HX_SOURCE_PUSH("TestHandler_obj::bindHandler")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",91)
		::haxe::test::Assert_obj::results = this->results;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",92)
		::haxe::test::Assert_obj::createAsync = this->__Field(HX_CSTRING("addAsync"));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",93)
		::haxe::test::Assert_obj::createEvent = this->__Field(HX_CSTRING("addEvent"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestHandler_obj,bindHandler,(void))

Void TestHandler_obj::unbindHandler( ){
{
		HX_SOURCE_PUSH("TestHandler_obj::unbindHandler")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",97)
		::haxe::test::Assert_obj::results = null();

		HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
		Dynamic run(Dynamic f,Dynamic t){
{

				HX_BEGIN_LOCAL_FUNC0(_Function_2_1)
				Void run(){
{
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",98)
				return  Dynamic(new _Function_2_1());
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",98)
		::haxe::test::Assert_obj::createAsync =  Dynamic(new _Function_1_1());

		HX_BEGIN_LOCAL_FUNC0(_Function_1_2)
		Dynamic run(Dynamic f,Dynamic t){
{

				HX_BEGIN_LOCAL_FUNC0(_Function_2_1)
				Void run(Dynamic e){
{
					}
					return null();
				}
				HX_END_LOCAL_FUNC1((void))

				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",99)
				return  Dynamic(new _Function_2_1());
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",99)
		::haxe::test::Assert_obj::createEvent =  Dynamic(new _Function_1_2());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestHandler_obj,unbindHandler,(void))

Dynamic TestHandler_obj::addAsync( Dynamic $t1,Dynamic __o_timeout){
int timeout = __o_timeout.Default(250);
	HX_SOURCE_PUSH("TestHandler_obj::addAsync");
{
		__SAFE_POINT
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",126)
		Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",127)
		this->asyncStack->add(f->__get(0));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",128)
		Array< ::haxe::test::TestHandler > handler = Array_obj< ::haxe::test::TestHandler >::__new().Add(this);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",129)
		this->setTimeout(timeout);

		HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< ::haxe::test::TestHandler >,handler,Array< Dynamic >,f)
		Void run(){
{
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",131)
				if (!(handler[0]->asyncStack->remove(f->__get(0)))){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",132)
					handler[0]->results->add(::haxe::test::Assertation_obj::AsyncError(HX_CSTRING("method already executed"),Array_obj< ::haxe::StackItem >::__new()));
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",133)
					return null();
				}
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",135)
				try{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",136)
					handler[0]->bindHandler();
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",137)
					f->__get(0)();
				}
				catch(Dynamic __e){
					{
						Dynamic e = __e;{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",139)
							handler[0]->results->add(::haxe::test::Assertation_obj::AsyncError(e,::haxe::test::TestHandler_obj::exceptionStack(0)));
						}
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",130)
		return  Dynamic(new _Function_1_1(handler,f));
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TestHandler_obj,addAsync,return )

Dynamic TestHandler_obj::addEvent( Dynamic $t1,Dynamic __o_timeout){
int timeout = __o_timeout.Default(250);
	HX_SOURCE_PUSH("TestHandler_obj::addEvent");
{
		__SAFE_POINT
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",144)
		Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",145)
		this->asyncStack->add(f->__get(0));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",146)
		Array< ::haxe::test::TestHandler > handler = Array_obj< ::haxe::test::TestHandler >::__new().Add(this);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",147)
		this->setTimeout(timeout);

		HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< ::haxe::test::TestHandler >,handler,Array< Dynamic >,f)
		Void run(Dynamic e){
{
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",149)
				if (!(handler[0]->asyncStack->remove(f->__get(0)))){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",150)
					handler[0]->results->add(::haxe::test::Assertation_obj::AsyncError(HX_CSTRING("event already executed"),Array_obj< ::haxe::StackItem >::__new()));
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",151)
					return null();
				}
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",153)
				try{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",154)
					handler[0]->bindHandler();
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",155)
					f->__get(0)(e);
				}
				catch(Dynamic __e){
					{
						Dynamic e1 = __e;{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",157)
							handler[0]->results->add(::haxe::test::Assertation_obj::AsyncError(e1,::haxe::test::TestHandler_obj::exceptionStack(0)));
						}
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",148)
		return  Dynamic(new _Function_1_1(handler,f));
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TestHandler_obj,addEvent,return )

Void TestHandler_obj::executeMethodByName( ::String name){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestHandler_obj::executeMethodByName")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",163)
		if ((name == null()))
			return null();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",164)
		Dynamic method = ::Reflect_obj::field(this->fixture->__Field(HX_CSTRING("target")),name);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",165)
		if ((method != null())){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",166)
			this->bindHandler();
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",167)
			::Reflect_obj::callMethod(this->fixture->__Field(HX_CSTRING("target")),method,Array_obj< Dynamic >::__new());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestHandler_obj,executeMethodByName,(void))

Void TestHandler_obj::executeMethod( Dynamic f){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestHandler_obj::executeMethod")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",172)
		if ((f != null())){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",173)
			this->bindHandler();
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",174)
			f();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TestHandler_obj,executeMethod,(void))

Void TestHandler_obj::tested( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestHandler_obj::tested")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",179)
		if ((this->results->length == 0))
			this->results->add(::haxe::test::Assertation_obj::Warning(HX_CSTRING("no assertions")));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",181)
		this->onTested->dispatch(this);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",182)
		this->completed();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestHandler_obj,tested,(void))

Void TestHandler_obj::timeout( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestHandler_obj::timeout")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",186)
		this->results->add(::haxe::test::Assertation_obj::TimeoutError(this->asyncStack->length,Array_obj< ::haxe::StackItem >::__new()));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",187)
		this->onTimeout->dispatch(this);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",188)
		this->completed();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestHandler_obj,timeout,(void))

Void TestHandler_obj::completed( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestHandler_obj::completed")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",192)
		try{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",193)
			this->executeMethodByName(this->fixture->teardown);
		}
		catch(Dynamic __e){
			{
				Dynamic e = __e;{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",195)
					this->results->add(::haxe::test::Assertation_obj::TeardownError(e,::haxe::test::TestHandler_obj::exceptionStack(2)));
				}
			}
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",197)
		this->unbindHandler();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",198)
		this->onComplete->dispatch(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TestHandler_obj,completed,(void))

int TestHandler_obj::POLLING_TIME;

Array< ::haxe::StackItem > TestHandler_obj::exceptionStack( Dynamic __o_pops){
int pops = __o_pops.Default(2);
	HX_SOURCE_PUSH("TestHandler_obj::exceptionStack");
{
		__SAFE_POINT
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",59)
		Array< ::haxe::StackItem > stack = ::haxe::Stack_obj::exceptionStack();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",60)
		while(((pops)-- > 0)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",62)
			stack->pop();
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestHandler.hx",64)
		return stack;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TestHandler_obj,exceptionStack,return )


TestHandler_obj::TestHandler_obj()
{
}

void TestHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestHandler);
	HX_MARK_MEMBER_NAME(results,"results");
	HX_MARK_MEMBER_NAME(fixture,"fixture");
	HX_MARK_MEMBER_NAME(asyncStack,"asyncStack");
	HX_MARK_MEMBER_NAME(onTested,"onTested");
	HX_MARK_MEMBER_NAME(onTimeout,"onTimeout");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(expireson,"expireson");
	HX_MARK_END_CLASS();
}

Dynamic TestHandler_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tested") ) { return tested_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"results") ) { return results; }
		if (HX_FIELD_EQ(inName,"fixture") ) { return fixture; }
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		if (HX_FIELD_EQ(inName,"timeout") ) { return timeout_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onTested") ) { return onTested; }
		if (HX_FIELD_EQ(inName,"addAsync") ) { return addAsync_dyn(); }
		if (HX_FIELD_EQ(inName,"addEvent") ) { return addEvent_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onTimeout") ) { return onTimeout; }
		if (HX_FIELD_EQ(inName,"expireson") ) { return expireson; }
		if (HX_FIELD_EQ(inName,"completed") ) { return completed_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"asyncStack") ) { return asyncStack; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"setTimeout") ) { return setTimeout_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkTested") ) { return checkTested_dyn(); }
		if (HX_FIELD_EQ(inName,"bindHandler") ) { return bindHandler_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"POLLING_TIME") ) { return POLLING_TIME; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"unbindHandler") ) { return unbindHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"executeMethod") ) { return executeMethod_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"exceptionStack") ) { return exceptionStack_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"executeMethodByName") ) { return executeMethodByName_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic TestHandler_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"results") ) { results=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fixture") ) { fixture=inValue.Cast< ::haxe::test::TestFixture >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onTested") ) { onTested=inValue.Cast< ::haxe::test::Dispatcher >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onTimeout") ) { onTimeout=inValue.Cast< ::haxe::test::Dispatcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"expireson") ) { expireson=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"asyncStack") ) { asyncStack=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< ::haxe::test::Dispatcher >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"POLLING_TIME") ) { POLLING_TIME=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void TestHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("results"));
	outFields->push(HX_CSTRING("fixture"));
	outFields->push(HX_CSTRING("asyncStack"));
	outFields->push(HX_CSTRING("onTested"));
	outFields->push(HX_CSTRING("onTimeout"));
	outFields->push(HX_CSTRING("onComplete"));
	outFields->push(HX_CSTRING("expireson"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("POLLING_TIME"),
	HX_CSTRING("exceptionStack"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("results"),
	HX_CSTRING("fixture"),
	HX_CSTRING("asyncStack"),
	HX_CSTRING("onTested"),
	HX_CSTRING("onTimeout"),
	HX_CSTRING("onComplete"),
	HX_CSTRING("execute"),
	HX_CSTRING("checkTested"),
	HX_CSTRING("expireson"),
	HX_CSTRING("setTimeout"),
	HX_CSTRING("bindHandler"),
	HX_CSTRING("unbindHandler"),
	HX_CSTRING("addAsync"),
	HX_CSTRING("addEvent"),
	HX_CSTRING("executeMethodByName"),
	HX_CSTRING("executeMethod"),
	HX_CSTRING("tested"),
	HX_CSTRING("timeout"),
	HX_CSTRING("completed"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TestHandler_obj::POLLING_TIME,"POLLING_TIME");
};

Class TestHandler_obj::__mClass;

void TestHandler_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.TestHandler"), hx::TCanCast< TestHandler_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void TestHandler_obj::__boot()
{
	hx::Static(POLLING_TIME) = 10;
}

} // end namespace haxe
} // end namespace test
