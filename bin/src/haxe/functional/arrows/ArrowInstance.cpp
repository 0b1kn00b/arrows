#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ProgressArrow
#include <haxe/functional/arrows/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_TerminalArrow
#include <haxe/functional/arrows/combinators/TerminalArrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_pattern_Subject
#include <haxe/functional/arrows/pattern/Subject.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_ArrowCounter
#include <haxe/functional/arrows/schedule/ArrowCounter.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_Buffer
#include <haxe/functional/arrows/schedule/Buffer.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_ScheduleManager
#include <haxe/functional/arrows/schedule/ScheduleManager.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_call_ArrowCall
#include <haxe/functional/arrows/schedule/call/ArrowCall.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_call_ArrowCallObject
#include <haxe/functional/arrows/schedule/call/ArrowCallObject.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_call_Call
#include <haxe/functional/arrows/schedule/call/Call.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_vo_Progress
#include <haxe/functional/arrows/vo/Progress.h>
#endif
#ifndef INCLUDED_haxe_util_Guid
#include <haxe/util/Guid.h>
#endif
#ifndef INCLUDED_hsl_haxe_Signaler
#include <hsl/haxe/Signaler.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{

Void ArrowInstance_obj::__construct(::haxe::functional::arrows::Arrow asynca,Dynamic x)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",58)
	this->manager = ::haxe::functional::arrows::schedule::ScheduleManager_obj::getInstance();
	HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",59)
	this->uuid = ::haxe::util::Guid_obj::generate();
	HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",61)
	this->cancellers = Array_obj< Dynamic >::__new();
	HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",63)
	this->stack = ::List_obj::__new();
	HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",64)
	this->stack->push(::haxe::functional::arrows::Arrow_obj::terminal());
	HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",65)
	this->stack->push(asynca);
	HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",67)
	this->progress = ::haxe::functional::arrows::combinators::ProgressArrow_obj::__new(this);
	HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",71)
	this->cont(x,null(),null(),null());
	HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",73)
	this->manager->pending->increment(this->uuid,this);
}
;
	return null();
}

ArrowInstance_obj::~ArrowInstance_obj() { }

Dynamic ArrowInstance_obj::__CreateEmpty() { return  new ArrowInstance_obj; }
hx::ObjectPtr< ArrowInstance_obj > ArrowInstance_obj::__new(::haxe::functional::arrows::Arrow asynca,Dynamic x)
{  hx::ObjectPtr< ArrowInstance_obj > result = new ArrowInstance_obj();
	result->__construct(asynca,x);
	return result;}

Dynamic ArrowInstance_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrowInstance_obj > result = new ArrowInstance_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void ArrowInstance_obj::cont( Dynamic x,::haxe::functional::arrows::Arrow f,::haxe::functional::arrows::Arrow g,Dynamic predicate){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ArrowInstance_obj::cont")
		HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",88)
		if ((g != null()))
			this->stack->push(g);
		HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",89)
		if ((f != null()))
			this->stack->push(f);
		HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",95)
		::haxe::functional::arrows::Arrow a = this->stack->__Field(HX_CSTRING("pop"))().Cast< ::haxe::functional::arrows::Arrow >();
		HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",96)
		if ((a != null())){
			HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",97)
			::haxe::functional::arrows::schedule::call::Call c = ::haxe::functional::arrows::schedule::call::ArrowCall_obj::__new(::haxe::functional::arrows::schedule::call::ArrowCallObject_obj::__new(x,this,a));
			HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",98)
			if ((predicate != null())){
				HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",99)
				c->isReady = predicate;
			}
			HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",101)
			this->manager->buffer->enqueue(c);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(ArrowInstance_obj,cont,(void))

Void ArrowInstance_obj::cancel( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ArrowInstance_obj::cancel")
		HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",111)
		{
			HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",111)
			int _g = 0;
			Array< Dynamic > _g1 = this->cancellers;
			HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",111)
			while((_g < _g1->length)){
				__SAFE_POINT
				HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",111)
				Dynamic item = _g1->__get(_g);
				HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",111)
				++(_g);
				HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",112)
				::Reflect_obj::callMethod(null(),item,Array_obj< Dynamic >::__new());
			}
		}
		HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",114)
		this->cancellers = Array_obj< Dynamic >::__new();
		HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",116)
		this->manager->pending->decrement(this->uuid);
		HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",117)
		this->manager->buffer->cancel(this->uuid);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ArrowInstance_obj,cancel,(void))

Void ArrowInstance_obj::signal( ::String name,Dynamic detail){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ArrowInstance_obj::signal")
		HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",124)
		::haxe::functional::arrows::vo::Progress e = ::haxe::functional::arrows::vo::Progress_obj::__new(detail);
		HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",125)
		this->progress->dispatch(e,this->progress,hx::SourceInfo(HX_CSTRING("ArrowInstance.hx"),125,HX_CSTRING("haxe.functional.arrows.ArrowInstance"),HX_CSTRING("signal")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ArrowInstance_obj,signal,(void))

Void ArrowInstance_obj::addCanceller( Dynamic canceller){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ArrowInstance_obj::addCanceller")
		HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",132)
		this->cancellers->push(canceller);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ArrowInstance_obj,addCanceller,(void))

Void ArrowInstance_obj::advance( Dynamic canceller){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ArrowInstance_obj::advance")
		HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",139)
		this->cancellers->remove(canceller);
		HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",140)
		this->signal(HX_CSTRING("progress"),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ArrowInstance_obj,advance,(void))

::String ArrowInstance_obj::toString( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrowInstance_obj::toString")
	HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",144)
	::String q = HX_CSTRING("[ ");
	HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",145)
	for(::cpp::FastIterator_obj< ::haxe::functional::arrows::Arrow > *__it = ::cpp::CreateFastIterator< ::haxe::functional::arrows::Arrow >(this->stack->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		::haxe::functional::arrows::Arrow val = __it->next();
		{
			HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",146)
			hx::AddEq(q,(val->toString() + HX_CSTRING(" , ")));
		}
;
		__SAFE_POINT
	}
	HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",148)
	hx::AddEq(q,HX_CSTRING("]"));
	HX_SOURCE_POS("src/haxe/functional/arrows/ArrowInstance.hx",149)
	return (((((((((HX_CSTRING("[ArrowInstance (") + this->uuid)) + HX_CSTRING(") "))) + HX_CSTRING("Q: "))) + q)) + HX_CSTRING("]"));
}


HX_DEFINE_DYNAMIC_FUNC0(ArrowInstance_obj,toString,return )


ArrowInstance_obj::ArrowInstance_obj()
{
}

void ArrowInstance_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrowInstance);
	HX_MARK_MEMBER_NAME(progress,"progress");
	HX_MARK_MEMBER_NAME(stack,"stack");
	HX_MARK_MEMBER_NAME(uuid,"uuid");
	HX_MARK_MEMBER_NAME(cancellers,"cancellers");
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_END_CLASS();
}

Dynamic ArrowInstance_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { return uuid; }
		if (HX_FIELD_EQ(inName,"cont") ) { return cont_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stack") ) { return stack; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"signal") ) { return signal_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"advance") ) { return advance_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return progress; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cancellers") ) { return cancellers; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addCanceller") ) { return addCanceller_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ArrowInstance_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { uuid=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stack") ) { stack=inValue.Cast< ::List >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::haxe::functional::arrows::schedule::ScheduleManager >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { progress=inValue.Cast< ::haxe::functional::arrows::combinators::ProgressArrow >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cancellers") ) { cancellers=inValue.Cast< Array< Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void ArrowInstance_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("progress"));
	outFields->push(HX_CSTRING("stack"));
	outFields->push(HX_CSTRING("uuid"));
	outFields->push(HX_CSTRING("cancellers"));
	outFields->push(HX_CSTRING("manager"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("progress"),
	HX_CSTRING("stack"),
	HX_CSTRING("uuid"),
	HX_CSTRING("cancellers"),
	HX_CSTRING("manager"),
	HX_CSTRING("cont"),
	HX_CSTRING("cancel"),
	HX_CSTRING("signal"),
	HX_CSTRING("addCanceller"),
	HX_CSTRING("advance"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ArrowInstance_obj::__mClass;

void ArrowInstance_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.ArrowInstance"), hx::TCanCast< ArrowInstance_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ArrowInstance_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
