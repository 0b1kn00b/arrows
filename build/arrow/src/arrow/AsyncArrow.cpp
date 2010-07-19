#include <hxObject.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrowInstance
#include <arrow/AsyncArrowInstance.h>
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
#ifndef INCLUDED_arrow_combinators_DelayArrow
#include <arrow/combinators/DelayArrow.h>
#endif
#ifndef INCLUDED_arrow_combinators_EventArrow
#include <arrow/combinators/EventArrow.h>
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
#ifndef INCLUDED_arrow_combinators_Loop
#include <arrow/combinators/Loop.h>
#endif
#ifndef INCLUDED_arrow_combinators_OrThunk
#include <arrow/combinators/OrThunk.h>
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
#ifndef INCLUDED_arrow_combinators_TerminalArrow
#include <arrow/combinators/TerminalArrow.h>
#endif
#ifndef INCLUDED_data_type_Time
#include <data/type/Time.h>
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
#ifndef INCLUDED_ion_log_Log
#include <ion/log/Log.h>
#endif
#ifndef INCLUDED_ion_log_Logger
#include <ion/log/Logger.h>
#endif
namespace arrow{

Void AsyncArrow_obj::__construct(Dynamic method)
{
{

	BEGIN_LOCAL_FUNC0(_Function_1)
	Void run(Dynamic e){
{
			haxe::Log_obj::trace(e,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"AsyncArrow.hx",13))->Add( String(L"lineNumber",10) , 40)->Add( String(L"className",9) , String(L"arrow.AsyncArrow",16))->Add( String(L"methodName",10) , String(L"new",3)));
		}
		return null();
	}
	END_LOCAL_FUNC1((void))

	this->error =  Dynamic(new _Function_1());
	this->log = ion::log::Logger_obj::getInstance()->getLog(null());
	this->method = method;
}
;
	return null();
}

AsyncArrow_obj::~AsyncArrow_obj() { }

Dynamic AsyncArrow_obj::__CreateEmpty() { return  new AsyncArrow_obj; }
hxObjectPtr<AsyncArrow_obj > AsyncArrow_obj::__new(Dynamic method)
{  hxObjectPtr<AsyncArrow_obj > result = new AsyncArrow_obj();
	result->__construct(method);
	return result;}

Dynamic AsyncArrow_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<AsyncArrow_obj > result = new AsyncArrow_obj();
	result->__construct(inArgs[0]);
	return result;}

String AsyncArrow_obj::getName( ){
	return String(L"anonymous",9);
}


DEFINE_DYNAMIC_FUNC0(AsyncArrow_obj,getName,return )

arrow::combinators::ProgressArrow AsyncArrow_obj::run( Dynamic args){
	return arrow::AsyncArrowInstance_obj::__new(this,args)->progress;
}


DEFINE_DYNAMIC_FUNC1(AsyncArrow_obj,run,return )

Void AsyncArrow_obj::apply( Dynamic args,arrow::AsyncArrowInstance next){
{
		try{
			Reflect_obj::callMethod(null(),this->method,Array_obj<arrow::AsyncArrowInstance >::__new().Add(args).Add(next));
		}
		catch(Dynamic __e){
			{
				Dynamic e = __e;{
					this->error(e);
				}
			}
		}
	}
return null();
}


DEFINE_DYNAMIC_FUNC2(AsyncArrow_obj,apply,(void))

String AsyncArrow_obj::toString( ){
	return String(L"[AsyncArrow ",12) + this->getName() + String(L" ]",2);
}


DEFINE_DYNAMIC_FUNC0(AsyncArrow_obj,toString,return )

arrow::combinators::ComposeThunk AsyncArrow_obj::then( Dynamic f){
	if (Reflect_obj::isFunction(f))
		f = arrow::AsyncArrow_obj::lift(f);
	return arrow::combinators::ComposeThunk_obj::__new(this,f);
}


DEFINE_DYNAMIC_FUNC1(AsyncArrow_obj,then,return )

arrow::combinators::ProductThunk AsyncArrow_obj::pair( Dynamic f){
	if (Reflect_obj::isFunction(f))
		f = arrow::AsyncArrow_obj::lift(f);
	return arrow::combinators::ProductThunk_obj::__new(this,f);
}


DEFINE_DYNAMIC_FUNC1(AsyncArrow_obj,pair,return )

arrow::combinators::FirstThunk AsyncArrow_obj::first( ){
	return arrow::combinators::FirstThunk_obj::__new(this);
}


DEFINE_DYNAMIC_FUNC0(AsyncArrow_obj,first,return )

arrow::combinators::SecondThunk AsyncArrow_obj::second( ){
	return arrow::combinators::SecondThunk_obj::__new(this);
}


DEFINE_DYNAMIC_FUNC0(AsyncArrow_obj,second,return )

arrow::combinators::FanoutThunk AsyncArrow_obj::fanout( Dynamic f){
	if (Reflect_obj::isFunction(f))
		f = arrow::AsyncArrow_obj::lift(f);
	return arrow::combinators::FanoutThunk_obj::__new(this,f);
}


DEFINE_DYNAMIC_FUNC1(AsyncArrow_obj,fanout,return )

arrow::combinators::BindThunk AsyncArrow_obj::bind( Dynamic f){
	if (Reflect_obj::isFunction(f)){
		f = arrow::AsyncArrow_obj::tuple(f);
	}
	return arrow::combinators::BindThunk_obj::__new(this,f);
}


DEFINE_DYNAMIC_FUNC1(AsyncArrow_obj,bind,return )

arrow::combinators::JoinThunk AsyncArrow_obj::join( Dynamic f){
	if (Reflect_obj::isFunction(f))
		f = arrow::AsyncArrow_obj::lift(f);
	return arrow::combinators::JoinThunk_obj::__new(this,f);
}


DEFINE_DYNAMIC_FUNC1(AsyncArrow_obj,join,return )

arrow::combinators::RepeatThunk AsyncArrow_obj::repeat( ){
	return arrow::combinators::RepeatThunk_obj::__new(this);
}


DEFINE_DYNAMIC_FUNC0(AsyncArrow_obj,repeat,return )

arrow::combinators::OrThunk AsyncArrow_obj::_or( Dynamic trigger,Dynamic f){
	if (Reflect_obj::isFunction(f))
		f = arrow::AsyncArrow_obj::lift(f);
	return arrow::combinators::OrThunk_obj::__new(trigger,this,f);
}


DEFINE_DYNAMIC_FUNC2(AsyncArrow_obj,_or,return )

Dynamic AsyncArrow_obj::getCallback( int numArgs){
	Dynamic out = null();
	switch( (int)(numArgs)){
		case 1: {

			BEGIN_LOCAL_FUNC0(_Function_1)
			Dynamic run(Dynamic x,Dynamic a){
{

					BEGIN_LOCAL_FUNC0(_Function_2)
					Dynamic run(Dynamic $t1,Dynamic $t2){
{
							Array<Dynamic > a1 = Array_obj<Dynamic >::__new().Add($t2);
							Array<Dynamic > f = Array_obj<Dynamic >::__new().Add($t1);

							BEGIN_LOCAL_FUNC2(_Function_3,Array<Dynamic >,f,Array<Dynamic >,a1)
							Dynamic run(){
								return f->__get(0)(a1->__get(0));
								return null();
							}
							END_LOCAL_FUNC0(return)

							return  Dynamic(new _Function_3(f,a1));
						}
						return null();
					}
					END_LOCAL_FUNC2(return)

					return  Dynamic(new _Function_2())(x,a);
				}
				return null();
			}
			END_LOCAL_FUNC2(return)

			out =  Dynamic(new _Function_1());
		}
		break;
		case 2: {

			BEGIN_LOCAL_FUNC0(_Function_1)
			Dynamic run(Dynamic x,Dynamic a,Dynamic b){
{

					BEGIN_LOCAL_FUNC0(_Function_2)
					Dynamic run(Dynamic $t3,Dynamic $t4,Dynamic $t5){
{
							Array<Dynamic > a2 = Array_obj<Dynamic >::__new().Add($t5);
							Array<Dynamic > a1 = Array_obj<Dynamic >::__new().Add($t4);
							Array<Dynamic > f = Array_obj<Dynamic >::__new().Add($t3);

							BEGIN_LOCAL_FUNC3(_Function_3,Array<Dynamic >,a1,Array<Dynamic >,f,Array<Dynamic >,a2)
							Dynamic run(){
								return f->__get(0)(a1->__get(0),a2->__get(0));
								return null();
							}
							END_LOCAL_FUNC0(return)

							return  Dynamic(new _Function_3(a1,f,a2));
						}
						return null();
					}
					END_LOCAL_FUNC3(return)

					return  Dynamic(new _Function_2())(x,a,b);
				}
				return null();
			}
			END_LOCAL_FUNC3(return)

			out =  Dynamic(new _Function_1());
		}
		break;
		case 3: {

			BEGIN_LOCAL_FUNC0(_Function_1)
			Dynamic run(Dynamic x,Dynamic a,Dynamic b,Dynamic c){
{

					BEGIN_LOCAL_FUNC0(_Function_2)
					Dynamic run(Dynamic $t6,Dynamic $t7,Dynamic $t8,Dynamic $t9){
{
							Array<Dynamic > a3 = Array_obj<Dynamic >::__new().Add($t9);
							Array<Dynamic > a2 = Array_obj<Dynamic >::__new().Add($t8);
							Array<Dynamic > a1 = Array_obj<Dynamic >::__new().Add($t7);
							Array<Dynamic > f = Array_obj<Dynamic >::__new().Add($t6);

							BEGIN_LOCAL_FUNC4(_Function_3,Array<Dynamic >,a1,Array<Dynamic >,a3,Array<Dynamic >,f,Array<Dynamic >,a2)
							Dynamic run(){
								return f->__get(0)(a1->__get(0),a2->__get(0),a3->__get(0));
								return null();
							}
							END_LOCAL_FUNC0(return)

							return  Dynamic(new _Function_3(a1,a3,f,a2));
						}
						return null();
					}
					END_LOCAL_FUNC4(return)

					return  Dynamic(new _Function_2())(x,a,b,c);
				}
				return null();
			}
			END_LOCAL_FUNC4(return)

			out =  Dynamic(new _Function_1());
		}
		break;
	}
	return out;
}


DEFINE_DYNAMIC_FUNC1(AsyncArrow_obj,getCallback,return )

arrow::combinators::ComposeThunk AsyncArrow_obj::dump( Dynamic f){
	if (Reflect_obj::isFunction(f))
		f = arrow::AsyncArrow_obj::tuple(f);
	return this->then(f);
}


DEFINE_DYNAMIC_FUNC1(AsyncArrow_obj,dump,return )

arrow::combinators::ComposeThunk AsyncArrow_obj::print( ){

	BEGIN_LOCAL_FUNC0(_Function_1)
	Dynamic run(Dynamic x){
{
			haxe::Log_obj::trace(x,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"AsyncArrow.hx",13))->Add( String(L"lineNumber",10) , 179)->Add( String(L"className",9) , String(L"arrow.AsyncArrow",16))->Add( String(L"methodName",10) , String(L"print",5)));
			return x;
		}
		return null();
	}
	END_LOCAL_FUNC1(return)

	return this->then( Dynamic(new _Function_1()));
}


DEFINE_DYNAMIC_FUNC0(AsyncArrow_obj,print,return )

bool AsyncArrow_obj::isFunction( Dynamic f){
	return Reflect_obj::isFunction(f);
}


DEFINE_DYNAMIC_FUNC1(AsyncArrow_obj,isFunction,return )

arrow::combinators::TerminalArrow AsyncArrow_obj::terminal( ){
	return arrow::combinators::TerminalArrow_obj::__new();
}


STATIC_DEFINE_DYNAMIC_FUNC0(AsyncArrow_obj,terminal,return )

arrow::combinators::ArrThunk AsyncArrow_obj::fanoutA( ){

	BEGIN_LOCAL_FUNC0(_Function_1)
	Dynamic run(Dynamic x){
{
			return arrow::Tuple_obj::__new(Array_obj<Dynamic >::__new().Add(x).Add(x));
		}
		return null();
	}
	END_LOCAL_FUNC1(return)

	return arrow::AsyncArrow_obj::tuple( Dynamic(new _Function_1()));
}


STATIC_DEFINE_DYNAMIC_FUNC0(AsyncArrow_obj,fanoutA,return )

arrow::combinators::FunctionThunk AsyncArrow_obj::lift( Dynamic f){
	return arrow::combinators::FunctionThunk_obj::__new(f);
}


STATIC_DEFINE_DYNAMIC_FUNC1(AsyncArrow_obj,lift,return )

arrow::combinators::ArrThunk AsyncArrow_obj::tuple( Dynamic f){
	return arrow::combinators::ArrThunk_obj::__new(f);
}


STATIC_DEFINE_DYNAMIC_FUNC1(AsyncArrow_obj,tuple,return )

arrow::combinators::ArrThunk AsyncArrow_obj::returnA( ){

	BEGIN_LOCAL_FUNC0(_Function_1)
	Dynamic run(Dynamic x){
{
			return x;
		}
		return null();
	}
	END_LOCAL_FUNC1(return)

	return arrow::AsyncArrow_obj::tuple( Dynamic(new _Function_1()));
}


STATIC_DEFINE_DYNAMIC_FUNC0(AsyncArrow_obj,returnA,return )

arrow::combinators::ArrThunk AsyncArrow_obj::constA( Dynamic $t1){
	Array<Dynamic > value = Array_obj<Dynamic >::__new().Add($t1);

	BEGIN_LOCAL_FUNC1(_Function_1,Array<Dynamic >,value)
	Dynamic run(Dynamic v){
{
			return value->__get(0);
		}
		return null();
	}
	END_LOCAL_FUNC1(return)

	return arrow::AsyncArrow_obj::tuple( Dynamic(new _Function_1(value)));
}


STATIC_DEFINE_DYNAMIC_FUNC1(AsyncArrow_obj,constA,return )

arrow::TaggedValue AsyncArrow_obj::doRepeat( Dynamic v){
	return arrow::TaggedValue_obj::__new(arrow::combinators::Loop_obj::repeat,v);
}


STATIC_DEFINE_DYNAMIC_FUNC1(AsyncArrow_obj,doRepeat,return )

arrow::TaggedValue AsyncArrow_obj::doDone( Dynamic v){
	return arrow::TaggedValue_obj::__new(arrow::combinators::Loop_obj::done,v);
}


STATIC_DEFINE_DYNAMIC_FUNC1(AsyncArrow_obj,doDone,return )

arrow::AsyncArrow AsyncArrow_obj::delayA( data::type::Time time){
	return arrow::combinators::DelayArrow_obj::__new(time);
}


STATIC_DEFINE_DYNAMIC_FUNC1(AsyncArrow_obj,delayA,return )

arrow::combinators::EventArrow AsyncArrow_obj::eventA( Dynamic trigger){
	return arrow::combinators::EventArrow_obj::__new(trigger);
}


STATIC_DEFINE_DYNAMIC_FUNC1(AsyncArrow_obj,eventA,return )


AsyncArrow_obj::AsyncArrow_obj()
{
	InitMember(method);
	InitMember(name);
	InitMember(log);
}

Dynamic AsyncArrow_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 2:
		if (!memcmp(inName.__s,L"or",sizeof(wchar_t)*2) ) { return _or_dyn(); }
		break;
	case 3:
		if (!memcmp(inName.__s,L"run",sizeof(wchar_t)*3) ) { return run_dyn(); }
		if (!memcmp(inName.__s,L"log",sizeof(wchar_t)*3) ) { return log; }
		break;
	case 4:
		if (!memcmp(inName.__s,L"lift",sizeof(wchar_t)*4) ) { return lift_dyn(); }
		if (!memcmp(inName.__s,L"name",sizeof(wchar_t)*4) ) { return name; }
		if (!memcmp(inName.__s,L"then",sizeof(wchar_t)*4) ) { return then_dyn(); }
		if (!memcmp(inName.__s,L"pair",sizeof(wchar_t)*4) ) { return pair_dyn(); }
		if (!memcmp(inName.__s,L"bind",sizeof(wchar_t)*4) ) { return bind_dyn(); }
		if (!memcmp(inName.__s,L"join",sizeof(wchar_t)*4) ) { return join_dyn(); }
		if (!memcmp(inName.__s,L"dump",sizeof(wchar_t)*4) ) { return dump_dyn(); }
		break;
	case 5:
		if (!memcmp(inName.__s,L"tuple",sizeof(wchar_t)*5) ) { return tuple_dyn(); }
		if (!memcmp(inName.__s,L"error",sizeof(wchar_t)*5) ) { return error; }
		if (!memcmp(inName.__s,L"apply",sizeof(wchar_t)*5) ) { return apply_dyn(); }
		if (!memcmp(inName.__s,L"first",sizeof(wchar_t)*5) ) { return first_dyn(); }
		if (!memcmp(inName.__s,L"print",sizeof(wchar_t)*5) ) { return print_dyn(); }
		break;
	case 6:
		if (!memcmp(inName.__s,L"constA",sizeof(wchar_t)*6) ) { return constA_dyn(); }
		if (!memcmp(inName.__s,L"doDone",sizeof(wchar_t)*6) ) { return doDone_dyn(); }
		if (!memcmp(inName.__s,L"delayA",sizeof(wchar_t)*6) ) { return delayA_dyn(); }
		if (!memcmp(inName.__s,L"eventA",sizeof(wchar_t)*6) ) { return eventA_dyn(); }
		if (!memcmp(inName.__s,L"method",sizeof(wchar_t)*6) ) { return method; }
		if (!memcmp(inName.__s,L"second",sizeof(wchar_t)*6) ) { return second_dyn(); }
		if (!memcmp(inName.__s,L"fanout",sizeof(wchar_t)*6) ) { return fanout_dyn(); }
		if (!memcmp(inName.__s,L"repeat",sizeof(wchar_t)*6) ) { return repeat_dyn(); }
		break;
	case 7:
		if (!memcmp(inName.__s,L"fanoutA",sizeof(wchar_t)*7) ) { return fanoutA_dyn(); }
		if (!memcmp(inName.__s,L"returnA",sizeof(wchar_t)*7) ) { return returnA_dyn(); }
		if (!memcmp(inName.__s,L"getName",sizeof(wchar_t)*7) ) { return getName_dyn(); }
		break;
	case 8:
		if (!memcmp(inName.__s,L"terminal",sizeof(wchar_t)*8) ) { return terminal_dyn(); }
		if (!memcmp(inName.__s,L"doRepeat",sizeof(wchar_t)*8) ) { return doRepeat_dyn(); }
		if (!memcmp(inName.__s,L"toString",sizeof(wchar_t)*8) ) { return toString_dyn(); }
		break;
	case 10:
		if (!memcmp(inName.__s,L"isFunction",sizeof(wchar_t)*10) ) { return isFunction_dyn(); }
		break;
	case 11:
		if (!memcmp(inName.__s,L"getCallback",sizeof(wchar_t)*11) ) { return getCallback_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_terminal = __hxcpp_field_to_id("terminal");
static int __id_fanoutA = __hxcpp_field_to_id("fanoutA");
static int __id_lift = __hxcpp_field_to_id("lift");
static int __id_tuple = __hxcpp_field_to_id("tuple");
static int __id_returnA = __hxcpp_field_to_id("returnA");
static int __id_constA = __hxcpp_field_to_id("constA");
static int __id_doRepeat = __hxcpp_field_to_id("doRepeat");
static int __id_doDone = __hxcpp_field_to_id("doDone");
static int __id_delayA = __hxcpp_field_to_id("delayA");
static int __id_eventA = __hxcpp_field_to_id("eventA");
static int __id_error = __hxcpp_field_to_id("error");
static int __id_method = __hxcpp_field_to_id("method");
static int __id_name = __hxcpp_field_to_id("name");
static int __id_getName = __hxcpp_field_to_id("getName");
static int __id_run = __hxcpp_field_to_id("run");
static int __id_apply = __hxcpp_field_to_id("apply");
static int __id_toString = __hxcpp_field_to_id("toString");
static int __id_then = __hxcpp_field_to_id("then");
static int __id_pair = __hxcpp_field_to_id("pair");
static int __id_first = __hxcpp_field_to_id("first");
static int __id_second = __hxcpp_field_to_id("second");
static int __id_fanout = __hxcpp_field_to_id("fanout");
static int __id_bind = __hxcpp_field_to_id("bind");
static int __id_join = __hxcpp_field_to_id("join");
static int __id_repeat = __hxcpp_field_to_id("repeat");
static int __id__or = __hxcpp_field_to_id("or");
static int __id_getCallback = __hxcpp_field_to_id("getCallback");
static int __id_dump = __hxcpp_field_to_id("dump");
static int __id_print = __hxcpp_field_to_id("print");
static int __id_isFunction = __hxcpp_field_to_id("isFunction");
static int __id_log = __hxcpp_field_to_id("log");


Dynamic AsyncArrow_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_terminal) return terminal_dyn();
	if (inFieldID==__id_fanoutA) return fanoutA_dyn();
	if (inFieldID==__id_lift) return lift_dyn();
	if (inFieldID==__id_tuple) return tuple_dyn();
	if (inFieldID==__id_returnA) return returnA_dyn();
	if (inFieldID==__id_constA) return constA_dyn();
	if (inFieldID==__id_doRepeat) return doRepeat_dyn();
	if (inFieldID==__id_doDone) return doDone_dyn();
	if (inFieldID==__id_delayA) return delayA_dyn();
	if (inFieldID==__id_eventA) return eventA_dyn();
	if (inFieldID==__id_error) return error;
	if (inFieldID==__id_method) return method;
	if (inFieldID==__id_name) return name;
	if (inFieldID==__id_getName) return getName_dyn();
	if (inFieldID==__id_run) return run_dyn();
	if (inFieldID==__id_apply) return apply_dyn();
	if (inFieldID==__id_toString) return toString_dyn();
	if (inFieldID==__id_then) return then_dyn();
	if (inFieldID==__id_pair) return pair_dyn();
	if (inFieldID==__id_first) return first_dyn();
	if (inFieldID==__id_second) return second_dyn();
	if (inFieldID==__id_fanout) return fanout_dyn();
	if (inFieldID==__id_bind) return bind_dyn();
	if (inFieldID==__id_join) return join_dyn();
	if (inFieldID==__id_repeat) return repeat_dyn();
	if (inFieldID==__id__or) return _or_dyn();
	if (inFieldID==__id_getCallback) return getCallback_dyn();
	if (inFieldID==__id_dump) return dump_dyn();
	if (inFieldID==__id_print) return print_dyn();
	if (inFieldID==__id_isFunction) return isFunction_dyn();
	if (inFieldID==__id_log) return log;
	return super::__IField(inFieldID);
}

Dynamic AsyncArrow_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"log",sizeof(wchar_t)*3) ) { log=inValue.Cast<ion::log::Log >();return inValue; }
		break;
	case 4:
		if (!memcmp(inName.__s,L"name",sizeof(wchar_t)*4) ) { name=inValue.Cast<String >();return inValue; }
		break;
	case 5:
		if (!memcmp(inName.__s,L"error",sizeof(wchar_t)*5) ) { error=inValue.Cast<Dynamic >();return inValue; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"method",sizeof(wchar_t)*6) ) { method=inValue.Cast<Dynamic >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void AsyncArrow_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"method",6));
	outFields->push(String(L"name",4));
	outFields->push(String(L"log",3));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"terminal",
	L"fanoutA",
	L"lift",
	L"tuple",
	L"returnA",
	L"constA",
	L"doRepeat",
	L"doDone",
	L"delayA",
	L"eventA",
	0 };

static wchar_t *sMemberFields[] = {
	L"error",
	L"method",
	L"name",
	L"getName",
	L"run",
	L"apply",
	L"toString",
	L"then",
	L"pair",
	L"first",
	L"second",
	L"fanout",
	L"bind",
	L"join",
	L"repeat",
	L"or",
	L"getCallback",
	L"dump",
	L"print",
	L"isFunction",
	L"log",
	0 };

Class AsyncArrow_obj::__mClass;

void AsyncArrow_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.AsyncArrow",16), TCanCast<AsyncArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void AsyncArrow_obj::__boot()
{
}

} // end namespace arrow
