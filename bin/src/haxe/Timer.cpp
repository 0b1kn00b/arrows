#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
namespace haxe{

Void Timer_obj::__construct(int time_ms)
{
{
}
;
	return null();
}

Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new(int time_ms)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(time_ms);
	return result;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > result = new Timer_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Timer_obj::stop( ){
{
		HX_SOURCE_PUSH("Timer_obj::stop")
		HX_SOURCE_POS("D:\\stack\\platform\\win\\programs\\Motion-Twin\\haxe/std/haxe/Timer.hx",53)
		if ((this->__Field(HX_CSTRING("id")) == null()))
			return null();
		HX_SOURCE_POS("D:\\stack\\platform\\win\\programs\\Motion-Twin\\haxe/std/haxe/Timer.hx",70)
		this->__FieldRef(HX_CSTRING("id")) = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

HX_BEGIN_DEFAULT_FUNC(__default_run,Timer_obj)
Void run(){
{
		HX_SOURCE_PUSH("Timer_obj::run")
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

::haxe::Timer Timer_obj::delay( Dynamic $t1,int time_ms){
	__SAFE_POINT
	HX_SOURCE_PUSH("Timer_obj::delay")
	HX_SOURCE_POS("D:\\stack\\platform\\win\\programs\\Motion-Twin\\haxe/std/haxe/Timer.hx",76)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("D:\\stack\\platform\\win\\programs\\Motion-Twin\\haxe/std/haxe/Timer.hx",77)
	Array< ::haxe::Timer > t = Array_obj< ::haxe::Timer >::__new().Add(::haxe::Timer_obj::__new(time_ms));

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< ::haxe::Timer >,t,Array< Dynamic >,f)
	Void run(){
{
			__SAFE_POINT
			HX_SOURCE_POS("D:\\stack\\platform\\win\\programs\\Motion-Twin\\haxe/std/haxe/Timer.hx",79)
			t[0]->stop();
			HX_SOURCE_POS("D:\\stack\\platform\\win\\programs\\Motion-Twin\\haxe/std/haxe/Timer.hx",80)
			f->__get(0)();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_SOURCE_POS("D:\\stack\\platform\\win\\programs\\Motion-Twin\\haxe/std/haxe/Timer.hx",78)
	t[0]->run =  Dynamic(new _Function_1_1(t,f));
	HX_SOURCE_POS("D:\\stack\\platform\\win\\programs\\Motion-Twin\\haxe/std/haxe/Timer.hx",82)
	return t->__get(0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,delay,return )

double Timer_obj::stamp( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Timer_obj::stamp")
	HX_SOURCE_POS("D:\\stack\\platform\\win\\programs\\Motion-Twin\\haxe/std/haxe/Timer.hx",100)
	return __time_stamp();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stamp,return )


Timer_obj::Timer_obj()
{
	run = new __default_run(this);
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(run,"run");
	HX_MARK_END_CLASS();
}

Dynamic Timer_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return delay_dyn(); }
		if (HX_FIELD_EQ(inName,"stamp") ) { return stamp_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Timer_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { run=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("delay"),
	HX_CSTRING("stamp"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("stop"),
	HX_CSTRING("run"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Timer_obj::__mClass;

void Timer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.Timer"), hx::TCanCast< Timer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Timer_obj::__boot()
{
}

} // end namespace haxe
