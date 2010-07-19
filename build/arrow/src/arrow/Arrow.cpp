#include <hxObject.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_arrow_Arrow
#include <arrow/Arrow.h>
#endif
#ifndef INCLUDED_event_Event
#include <event/Event.h>
#endif
#ifndef INCLUDED_event_EventListener
#include <event/EventListener.h>
#endif
namespace arrow{

Void Arrow_obj::__construct(Dynamic method)
{
{
	this->method = method;
}
;
	return null();
}

Arrow_obj::~Arrow_obj() { }

Dynamic Arrow_obj::__CreateEmpty() { return  new Arrow_obj; }
hxObjectPtr<Arrow_obj > Arrow_obj::__new(Dynamic method)
{  hxObjectPtr<Arrow_obj > result = new Arrow_obj();
	result->__construct(method);
	return result;}

Dynamic Arrow_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Arrow_obj > result = new Arrow_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Arrow_obj::apply( Array<Dynamic > args){
{
		Reflect_obj::callMethod(null(),this->method,args);
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(Arrow_obj,apply,(void))

arrow::Arrow Arrow_obj::compose( Dynamic $t2){
	Array<Dynamic > g = Array_obj<Dynamic >::__new().Add($t2);
	Array<arrow::Arrow > thiz = Array_obj<arrow::Arrow >::__new().Add(this);

	BEGIN_LOCAL_FUNC2(_Function_1,Array<arrow::Arrow >,thiz,Array<Dynamic >,g)
	Dynamic run(Dynamic x,Dynamic $t1){
{
			Array<Dynamic > k = Array_obj<Dynamic >::__new().Add($t1);

			BEGIN_LOCAL_FUNC2(_Function_2,Array<Dynamic >,g,Array<Dynamic >,k)
			Dynamic run(Dynamic y){
{
					return g->__get(0)(y,k->__get(0));
				}
				return null();
			}
			END_LOCAL_FUNC1(return)

			return thiz[0]->method(x, Dynamic(new _Function_2(g,k)));
		}
		return null();
	}
	END_LOCAL_FUNC2(return)

	return arrow::Arrow_obj::__new( Dynamic(new _Function_1(thiz,g)));
}


DEFINE_DYNAMIC_FUNC1(Arrow_obj,compose,return )

Void Arrow_obj::run( Dynamic x){
{
		return this->apply(Array_obj<Dynamic >::__new().Add(x));
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(Arrow_obj,run,(void))

Dynamic Arrow_obj::wrap( Dynamic $t1){
	Array<Dynamic > f = Array_obj<Dynamic >::__new().Add($t1);

	BEGIN_LOCAL_FUNC1(_Function_1,Array<Dynamic >,f)
	Dynamic run(Dynamic x,Dynamic k){
{
			return k(f->__get(0)(x));
		}
		return null();
	}
	END_LOCAL_FUNC2(return)

	return  Dynamic(new _Function_1(f));
}


STATIC_DEFINE_DYNAMIC_FUNC1(Arrow_obj,wrap,return )

Dynamic Arrow_obj::arr( Dynamic $t1){
	Array<Dynamic > f = Array_obj<Dynamic >::__new().Add($t1);

	BEGIN_LOCAL_FUNC1(_Function_1,Array<Dynamic >,f)
	Dynamic run(Array<Dynamic > x,Dynamic k){
{
			return k(Reflect_obj::callMethod(null(),f->__get(0),x));
		}
		return null();
	}
	END_LOCAL_FUNC2(return)

	return  Dynamic(new _Function_1(f));
}


STATIC_DEFINE_DYNAMIC_FUNC1(Arrow_obj,arr,return )

arrow::Arrow Arrow_obj::eventA( String $t3){
	Array<String > name = Array_obj<String >::__new().Add($t3);

	BEGIN_LOCAL_FUNC1(_Function_1,Array<String >,name)
	Void run(event::EventListener $t1,Dynamic $t2){
{
			Array<Dynamic > g = Array_obj<Dynamic >::__new().Add($t2);
			Array<event::EventListener > target = Array_obj<event::EventListener >::__new().Add($t1);
			Array<Dynamic > handler = Array_obj<Dynamic >::__new().Add(null());

			BEGIN_LOCAL_FUNC4(_Function_2,Array<event::EventListener >,target,Array<Dynamic >,handler,Array<Dynamic >,g,Array<String >,name)
			Void run(event::Event event){
{
					target[0]->removeEventListener(name->__get(0),handler->__get(0),null());
					g->__get(0)(event);
				}
				return null();
			}
			END_LOCAL_FUNC1((void))

			handler[0] =  Dynamic(new _Function_2(target,handler,g,name));
			target[0]->addEventListener(name->__get(0),handler->__get(0),null());
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	return arrow::Arrow_obj::__new( Dynamic(new _Function_1(name)));
}


STATIC_DEFINE_DYNAMIC_FUNC1(Arrow_obj,eventA,return )


Arrow_obj::Arrow_obj()
{
	InitMember(method);
}

Dynamic Arrow_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"arr",sizeof(wchar_t)*3) ) { return arr_dyn(); }
		if (!memcmp(inName.__s,L"run",sizeof(wchar_t)*3) ) { return run_dyn(); }
		break;
	case 4:
		if (!memcmp(inName.__s,L"wrap",sizeof(wchar_t)*4) ) { return wrap_dyn(); }
		break;
	case 5:
		if (!memcmp(inName.__s,L"apply",sizeof(wchar_t)*5) ) { return apply_dyn(); }
		break;
	case 6:
		if (!memcmp(inName.__s,L"eventA",sizeof(wchar_t)*6) ) { return eventA_dyn(); }
		if (!memcmp(inName.__s,L"method",sizeof(wchar_t)*6) ) { return method; }
		break;
	case 7:
		if (!memcmp(inName.__s,L"compose",sizeof(wchar_t)*7) ) { return compose_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_wrap = __hxcpp_field_to_id("wrap");
static int __id_arr = __hxcpp_field_to_id("arr");
static int __id_eventA = __hxcpp_field_to_id("eventA");
static int __id_method = __hxcpp_field_to_id("method");
static int __id_apply = __hxcpp_field_to_id("apply");
static int __id_compose = __hxcpp_field_to_id("compose");
static int __id_run = __hxcpp_field_to_id("run");


Dynamic Arrow_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_wrap) return wrap_dyn();
	if (inFieldID==__id_arr) return arr_dyn();
	if (inFieldID==__id_eventA) return eventA_dyn();
	if (inFieldID==__id_method) return method;
	if (inFieldID==__id_apply) return apply_dyn();
	if (inFieldID==__id_compose) return compose_dyn();
	if (inFieldID==__id_run) return run_dyn();
	return super::__IField(inFieldID);
}

Dynamic Arrow_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (!memcmp(inName.__s,L"method",sizeof(wchar_t)*6) ) { method=inValue.Cast<Dynamic >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Arrow_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"method",6));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"wrap",
	L"arr",
	L"eventA",
	0 };

static wchar_t *sMemberFields[] = {
	L"method",
	L"apply",
	L"compose",
	L"run",
	0 };

Class Arrow_obj::__mClass;

void Arrow_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.Arrow",11), TCanCast<Arrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Arrow_obj::__boot()
{
}

} // end namespace arrow
