#include <hxcpp.h>

#ifndef INCLUDED_Product
#include <Product.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Stax
#include <Stax.h>
#endif
#ifndef INCLUDED_Tuple2
#include <Tuple2.h>
#endif
#ifndef INCLUDED__Prelude_AbstractProduct
#include <_Prelude/AbstractProduct.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Function1Arrow
#include <haxe/functional/arrows/Function1Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_TaggedValue
#include <haxe/functional/arrows/TaggedValue.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_AnimateThunk
#include <haxe/functional/arrows/combinators/AnimateThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ArrThunk
#include <haxe/functional/arrows/combinators/ArrThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_BindThunk
#include <haxe/functional/arrows/combinators/BindThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ComposeThunk
#include <haxe/functional/arrows/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_DelayArrow
#include <haxe/functional/arrows/combinators/DelayArrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_FanoutThunk
#include <haxe/functional/arrows/combinators/FanoutThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_FirstThunk
#include <haxe/functional/arrows/combinators/FirstThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_FunctionThunk
#include <haxe/functional/arrows/combinators/FunctionThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_JoinThunk
#include <haxe/functional/arrows/combinators/JoinThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_Loop
#include <haxe/functional/arrows/combinators/Loop.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_OrThunk
#include <haxe/functional/arrows/combinators/OrThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_PollThunk
#include <haxe/functional/arrows/combinators/PollThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ProductThunk
#include <haxe/functional/arrows/combinators/ProductThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ProgressArrow
#include <haxe/functional/arrows/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_RepeatThunk
#include <haxe/functional/arrows/combinators/RepeatThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_SecondThunk
#include <haxe/functional/arrows/combinators/SecondThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_SignalArrow
#include <haxe/functional/arrows/combinators/SignalArrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_TerminalArrow
#include <haxe/functional/arrows/combinators/TerminalArrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_ScheduleManager
#include <haxe/functional/arrows/schedule/ScheduleManager.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_Scheduler
#include <haxe/functional/arrows/schedule/Scheduler.h>
#endif
#ifndef INCLUDED_hsl_haxe_Signaler
#include <hsl/haxe/Signaler.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{

Void Arrow_obj::__construct(Dynamic method)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",73)
	this->__FieldRef(HX_CSTRING("method")) = method;
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",74)
	this->scheduler = ::haxe::functional::arrows::schedule::ScheduleManager_obj::getInstance()->scheduler;
}
;
	return null();
}

Arrow_obj::~Arrow_obj() { }

Dynamic Arrow_obj::__CreateEmpty() { return  new Arrow_obj; }
hx::ObjectPtr< Arrow_obj > Arrow_obj::__new(Dynamic method)
{  hx::ObjectPtr< Arrow_obj > result = new Arrow_obj();
	result->__construct(method);
	return result;}

Dynamic Arrow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Arrow_obj > result = new Arrow_obj();
	result->__construct(inArgs[0]);
	return result;}

HX_BEGIN_DEFAULT_FUNC(__default_error,Arrow_obj)
Void run(Dynamic e){
{
		HX_SOURCE_PUSH("Arrow_obj::error")
		HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",67)
		::Stax_obj::error(e);
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

Void Arrow_obj::execute( Dynamic x,::haxe::functional::arrows::ArrowInstance a){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Arrow_obj::execute")
		HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",77)
		::Reflect_obj::callMethod(this,this->__Field(HX_CSTRING("method")),Array_obj< ::haxe::functional::arrows::ArrowInstance >::__new().Add(x).Add(a));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Arrow_obj,execute,(void))

::haxe::functional::arrows::combinators::ProgressArrow Arrow_obj::run( Dynamic args){
	HX_SOURCE_PUSH("Arrow_obj::run")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",80)
	return ::haxe::functional::arrows::ArrowInstance_obj::__new(this,args)->progress;
}


HX_DEFINE_DYNAMIC_FUNC1(Arrow_obj,run,return )

::String Arrow_obj::getName( ){
	HX_SOURCE_PUSH("Arrow_obj::getName")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",84)
	return HX_CSTRING("anonymous");
}


HX_DEFINE_DYNAMIC_FUNC0(Arrow_obj,getName,return )

::String Arrow_obj::toString( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Arrow_obj::toString")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",87)
	return (((HX_CSTRING("[Arrow ::") + this->getName())) + HX_CSTRING(" ]"));
}


HX_DEFINE_DYNAMIC_FUNC0(Arrow_obj,toString,return )

::haxe::functional::arrows::combinators::ComposeThunk Arrow_obj::then( ::haxe::functional::arrows::Arrow f){
	HX_SOURCE_PUSH("Arrow_obj::then")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",97)
	return ::haxe::functional::arrows::combinators::ComposeThunk_obj::__new(this,f);
}


HX_DEFINE_DYNAMIC_FUNC1(Arrow_obj,then,return )

::haxe::functional::arrows::combinators::ProductThunk Arrow_obj::pair( ::haxe::functional::arrows::Arrow f){
	HX_SOURCE_PUSH("Arrow_obj::pair")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",105)
	return ::haxe::functional::arrows::combinators::ProductThunk_obj::__new(this,f);
}


HX_DEFINE_DYNAMIC_FUNC1(Arrow_obj,pair,return )

::haxe::functional::arrows::combinators::FirstThunk Arrow_obj::first( ){
	HX_SOURCE_PUSH("Arrow_obj::first")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",112)
	return ::haxe::functional::arrows::combinators::FirstThunk_obj::__new(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Arrow_obj,first,return )

::haxe::functional::arrows::combinators::SecondThunk Arrow_obj::second( ){
	HX_SOURCE_PUSH("Arrow_obj::second")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",119)
	return ::haxe::functional::arrows::combinators::SecondThunk_obj::__new(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Arrow_obj,second,return )

::haxe::functional::arrows::combinators::FanoutThunk Arrow_obj::fanout( ::haxe::functional::arrows::Arrow f){
	HX_SOURCE_PUSH("Arrow_obj::fanout")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",127)
	return ::haxe::functional::arrows::combinators::FanoutThunk_obj::__new(this,f);
}


HX_DEFINE_DYNAMIC_FUNC1(Arrow_obj,fanout,return )

::haxe::functional::arrows::combinators::BindThunk Arrow_obj::tie( ::haxe::functional::arrows::Arrow f){
	HX_SOURCE_PUSH("Arrow_obj::tie")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",135)
	return ::haxe::functional::arrows::combinators::BindThunk_obj::__new(this,f);
}


HX_DEFINE_DYNAMIC_FUNC1(Arrow_obj,tie,return )

::haxe::functional::arrows::combinators::JoinThunk Arrow_obj::join( ::haxe::functional::arrows::Arrow f){
	HX_SOURCE_PUSH("Arrow_obj::join")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",143)
	return ::haxe::functional::arrows::combinators::JoinThunk_obj::__new(this,f);
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",144)
	return ::haxe::functional::arrows::combinators::JoinThunk_obj::__new(this,f);
}


HX_DEFINE_DYNAMIC_FUNC1(Arrow_obj,join,return )

::haxe::functional::arrows::combinators::RepeatThunk Arrow_obj::repeat( ){
	HX_SOURCE_PUSH("Arrow_obj::repeat")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",151)
	return ::haxe::functional::arrows::combinators::RepeatThunk_obj::__new(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Arrow_obj,repeat,return )

::haxe::functional::arrows::combinators::OrThunk Arrow_obj::_or( ::haxe::functional::arrows::Arrow f){
	HX_SOURCE_PUSH("Arrow_obj::or")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",158)
	return ::haxe::functional::arrows::combinators::OrThunk_obj::__new(this,f);
}


HX_DEFINE_DYNAMIC_FUNC1(Arrow_obj,_or,return )

::haxe::functional::arrows::combinators::AnimateThunk Arrow_obj::animate( int ms){
	HX_SOURCE_PUSH("Arrow_obj::animate")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",162)
	return ::haxe::functional::arrows::combinators::AnimateThunk_obj::__new(this,ms);
}


HX_DEFINE_DYNAMIC_FUNC1(Arrow_obj,animate,return )

::haxe::functional::arrows::combinators::ComposeThunk Arrow_obj::dump( ::haxe::functional::arrows::Arrow f){
	__SAFE_POINT
	HX_SOURCE_PUSH("Arrow_obj::dump")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",168)
	return this->then(f);
}


HX_DEFINE_DYNAMIC_FUNC1(Arrow_obj,dump,return )

::haxe::functional::arrows::combinators::ComposeThunk Arrow_obj::print( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Arrow_obj::print")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Dynamic run(Dynamic x){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",176)
			::haxe::Log_obj::trace(x,hx::SourceInfo(HX_CSTRING("Arrow.hx"),176,HX_CSTRING("haxe.functional.arrows.Arrow"),HX_CSTRING("print")));
			HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",177)
			return x;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",174)
	return this->then(::haxe::functional::arrows::Arrow_obj::tupleF( Dynamic(new _Function_1_1())));
}


HX_DEFINE_DYNAMIC_FUNC0(Arrow_obj,print,return )

::haxe::functional::arrows::combinators::SignalArrow Arrow_obj::signalA( ){
	HX_SOURCE_PUSH("Arrow_obj::signalA")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",252)
	return ::haxe::functional::arrows::combinators::SignalArrow_obj::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(Arrow_obj,signalA,return )

::haxe::functional::arrows::Arrow Arrow_obj::start( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Arrow_obj::start")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",271)
	::haxe::functional::arrows::schedule::ScheduleManager_obj::getInstance()->scheduler->invoke();
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",272)
	return this;
}


HX_DEFINE_DYNAMIC_FUNC0(Arrow_obj,start,return )

::haxe::functional::arrows::combinators::TerminalArrow Arrow_obj::terminal( ){
	HX_SOURCE_PUSH("Arrow_obj::terminal")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",186)
	return ::haxe::functional::arrows::combinators::TerminalArrow_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Arrow_obj,terminal,return )

::haxe::functional::arrows::Arrow Arrow_obj::fanoutA( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Arrow_obj::fanoutA")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	::Tuple2 run(Dynamic x){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",194)
			return ::Tuple2_obj::create(x,x);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",192)
	return ::haxe::functional::arrows::Function1Arrow_obj::tuple( Dynamic(new _Function_1_1()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Arrow_obj,fanoutA,return )

::haxe::functional::arrows::combinators::FunctionThunk Arrow_obj::liftF( Dynamic f){
	HX_SOURCE_PUSH("Arrow_obj::liftF")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",202)
	return ::haxe::functional::arrows::combinators::FunctionThunk_obj::__new(f);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Arrow_obj,liftF,return )

::haxe::functional::arrows::combinators::ArrThunk Arrow_obj::tupleF( Dynamic f){
	HX_SOURCE_PUSH("Arrow_obj::tupleF")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",209)
	return ::haxe::functional::arrows::combinators::ArrThunk_obj::__new(f);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Arrow_obj,tupleF,return )

::haxe::functional::arrows::Arrow Arrow_obj::returnA( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Arrow_obj::returnA")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Dynamic run(Dynamic x){
{
			HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",218)
			return x;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",216)
	return ::haxe::functional::arrows::Function1Arrow_obj::tuple( Dynamic(new _Function_1_1()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Arrow_obj,returnA,return )

::haxe::functional::arrows::Arrow Arrow_obj::constA( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Arrow_obj::constA")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",221)
	Array< Dynamic > value = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,value)
	Dynamic run(Dynamic v){
{
			HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",225)
			return value->__get(0);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",223)
	return ::haxe::functional::arrows::Function1Arrow_obj::lift( Dynamic(new _Function_1_1(value)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Arrow_obj,constA,return )

::haxe::functional::arrows::TaggedValue Arrow_obj::doRepeat( Dynamic v){
	HX_SOURCE_PUSH("Arrow_obj::doRepeat")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",232)
	return ::haxe::functional::arrows::TaggedValue_obj::__new(::haxe::functional::arrows::combinators::Loop_obj::repeat,v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Arrow_obj,doRepeat,return )

::haxe::functional::arrows::TaggedValue Arrow_obj::doDone( Dynamic v){
	HX_SOURCE_PUSH("Arrow_obj::doDone")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",238)
	return ::haxe::functional::arrows::TaggedValue_obj::__new(::haxe::functional::arrows::combinators::Loop_obj::done,v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Arrow_obj,doDone,return )

::haxe::functional::arrows::Arrow Arrow_obj::delayA( int ms){
	HX_SOURCE_PUSH("Arrow_obj::delayA")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",244)
	return ::haxe::functional::arrows::combinators::DelayArrow_obj::__new(ms);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Arrow_obj,delayA,return )

::haxe::functional::arrows::combinators::PollThunk Arrow_obj::poll( Dynamic predicate){
	HX_SOURCE_PUSH("Arrow_obj::poll")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",259)
	return ::haxe::functional::arrows::combinators::PollThunk_obj::__new(predicate);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Arrow_obj,poll,return )

Void Arrow_obj::begin( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Arrow_obj::begin")
		HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",275)
		::haxe::functional::arrows::schedule::ScheduleManager_obj::getInstance()->scheduler->invoke();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Arrow_obj,begin,(void))


Arrow_obj::Arrow_obj()
{
	error = new __default_error(this);
}

void Arrow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Arrow);
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(scheduler,"scheduler");
	HX_MARK_END_CLASS();
}

Dynamic Arrow_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"or") ) { return _or_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		if (HX_FIELD_EQ(inName,"tie") ) { return tie_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"poll") ) { return poll_dyn(); }
		if (HX_FIELD_EQ(inName,"info") ) { return info; }
		if (HX_FIELD_EQ(inName,"name") ) { return getName(); }
		if (HX_FIELD_EQ(inName,"then") ) { return then_dyn(); }
		if (HX_FIELD_EQ(inName,"pair") ) { return pair_dyn(); }
		if (HX_FIELD_EQ(inName,"join") ) { return join_dyn(); }
		if (HX_FIELD_EQ(inName,"dump") ) { return dump_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"liftF") ) { return liftF_dyn(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		if (HX_FIELD_EQ(inName,"error") ) { return error; }
		if (HX_FIELD_EQ(inName,"first") ) { return first_dyn(); }
		if (HX_FIELD_EQ(inName,"print") ) { return print_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tupleF") ) { return tupleF_dyn(); }
		if (HX_FIELD_EQ(inName,"constA") ) { return constA_dyn(); }
		if (HX_FIELD_EQ(inName,"doDone") ) { return doDone_dyn(); }
		if (HX_FIELD_EQ(inName,"delayA") ) { return delayA_dyn(); }
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		if (HX_FIELD_EQ(inName,"second") ) { return second_dyn(); }
		if (HX_FIELD_EQ(inName,"fanout") ) { return fanout_dyn(); }
		if (HX_FIELD_EQ(inName,"repeat") ) { return repeat_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fanoutA") ) { return fanoutA_dyn(); }
		if (HX_FIELD_EQ(inName,"returnA") ) { return returnA_dyn(); }
		if (HX_FIELD_EQ(inName,"execute") ) { return execute_dyn(); }
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		if (HX_FIELD_EQ(inName,"animate") ) { return animate_dyn(); }
		if (HX_FIELD_EQ(inName,"signalA") ) { return signalA_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"terminal") ) { return terminal_dyn(); }
		if (HX_FIELD_EQ(inName,"doRepeat") ) { return doRepeat_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scheduler") ) { return scheduler; }
	}
	return super::__Field(inName);
}

Dynamic Arrow_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scheduler") ) { scheduler=inValue.Cast< ::haxe::functional::arrows::schedule::Scheduler >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Arrow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("method"));
	outFields->push(HX_CSTRING("info"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("scheduler"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("terminal"),
	HX_CSTRING("fanoutA"),
	HX_CSTRING("liftF"),
	HX_CSTRING("tupleF"),
	HX_CSTRING("returnA"),
	HX_CSTRING("constA"),
	HX_CSTRING("doRepeat"),
	HX_CSTRING("doDone"),
	HX_CSTRING("delayA"),
	HX_CSTRING("poll"),
	HX_CSTRING("begin"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("error"),
	HX_CSTRING("method"),
	HX_CSTRING("info"),
	HX_CSTRING("execute"),
	HX_CSTRING("run"),
	HX_CSTRING("name"),
	HX_CSTRING("getName"),
	HX_CSTRING("toString"),
	HX_CSTRING("then"),
	HX_CSTRING("pair"),
	HX_CSTRING("first"),
	HX_CSTRING("second"),
	HX_CSTRING("fanout"),
	HX_CSTRING("tie"),
	HX_CSTRING("join"),
	HX_CSTRING("repeat"),
	HX_CSTRING("or"),
	HX_CSTRING("animate"),
	HX_CSTRING("dump"),
	HX_CSTRING("print"),
	HX_CSTRING("signalA"),
	HX_CSTRING("start"),
	HX_CSTRING("scheduler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Arrow_obj::__mClass;

void Arrow_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.Arrow"), hx::TCanCast< Arrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Arrow_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
