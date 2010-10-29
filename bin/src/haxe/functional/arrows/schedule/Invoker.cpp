#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Stack
#include <haxe/Stack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_pattern_Subject
#include <haxe/functional/arrows/pattern/Subject.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_Buffer
#include <haxe/functional/arrows/schedule/Buffer.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_Invoker
#include <haxe/functional/arrows/schedule/Invoker.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_ScheduleManager
#include <haxe/functional/arrows/schedule/ScheduleManager.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_call_Call
#include <haxe/functional/arrows/schedule/call/Call.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{

Void Invoker_obj::__construct(::haxe::functional::arrows::schedule::ScheduleManager scheduler)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Invoker.hx",28)
	this->scheduler = scheduler;
}
;
	return null();
}

Invoker_obj::~Invoker_obj() { }

Dynamic Invoker_obj::__CreateEmpty() { return  new Invoker_obj; }
hx::ObjectPtr< Invoker_obj > Invoker_obj::__new(::haxe::functional::arrows::schedule::ScheduleManager scheduler)
{  hx::ObjectPtr< Invoker_obj > result = new Invoker_obj();
	result->__construct(scheduler);
	return result;}

Dynamic Invoker_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Invoker_obj > result = new Invoker_obj();
	result->__construct(inArgs[0]);
	return result;}

HX_BEGIN_DEFAULT_FUNC(__default_error,Invoker_obj)
Void run(Dynamic e){
{
		HX_SOURCE_PUSH("Invoker_obj::error")
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Invoker.hx",31)
		::haxe::Log_obj::trace((((((HX_CSTRING("An error occurred: ") + e)) + HX_CSTRING("\n"))) + ::haxe::Stack_obj::exceptionStack()),hx::SourceInfo(HX_CSTRING("Invoker.hx"),31,HX_CSTRING("haxe.functional.arrows.schedule.Invoker"),HX_CSTRING("error")));
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

Dynamic Invoker_obj::invoke( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Invoker_obj::invoke")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Invoker.hx",34)
	try{
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Invoker.hx",35)
		::haxe::functional::arrows::schedule::call::Call n = this->scheduler->buffer->dequeue();
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Invoker.hx",36)
		if (n->isReady()){
			HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Invoker.hx",37)
			n->invoke();
			HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Invoker.hx",38)
			return null();
		}
		else{
			HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Invoker.hx",40)
			this->scheduler->buffer->enqueue(n);
			HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Invoker.hx",41)
			return true;
		}
	}
	catch(Dynamic __e){
		{
			Dynamic e = __e;{
				HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Invoker.hx",44)
				this->error(e);
				HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Invoker.hx",45)
				return null();
			}
		}
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Invoker_obj,invoke,return )

::String Invoker_obj::toString( ){
	HX_SOURCE_PUSH("Invoker_obj::toString")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Invoker.hx",49)
	return HX_CSTRING("[Invoker]");
}


HX_DEFINE_DYNAMIC_FUNC0(Invoker_obj,toString,return )


Invoker_obj::Invoker_obj()
{
	error = new __default_error(this);
}

void Invoker_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Invoker);
	HX_MARK_MEMBER_NAME(scheduler,"scheduler");
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_END_CLASS();
}

Dynamic Invoker_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return error; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"invoke") ) { return invoke_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scheduler") ) { return scheduler; }
	}
	return super::__Field(inName);
}

Dynamic Invoker_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scheduler") ) { scheduler=inValue.Cast< ::haxe::functional::arrows::schedule::ScheduleManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Invoker_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("scheduler"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("scheduler"),
	HX_CSTRING("error"),
	HX_CSTRING("invoke"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Invoker_obj::__mClass;

void Invoker_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.Invoker"), hx::TCanCast< Invoker_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Invoker_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
