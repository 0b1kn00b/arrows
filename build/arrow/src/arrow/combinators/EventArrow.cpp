#include <hxObject.h>

#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrowInstance
#include <arrow/AsyncArrowInstance.h>
#endif
#ifndef INCLUDED_arrow_combinators_EventArrow
#include <arrow/combinators/EventArrow.h>
#endif
namespace arrow{
namespace combinators{

Void EventArrow_obj::__construct(Dynamic $t3)
{
{
	Array<Dynamic > trigger = Array_obj<Dynamic >::__new().Add($t3);
	this->trigger = trigger->__get(0);
	arrow::combinators::EventArrow self = this;

	BEGIN_LOCAL_FUNC1(_Function_1,Array<Dynamic >,trigger)
	Void run(Dynamic $t1,arrow::AsyncArrowInstance $t2){
{
			Array<arrow::AsyncArrowInstance > a = Array_obj<arrow::AsyncArrowInstance >::__new().Add($t2);
			Array<Dynamic > target = Array_obj<Dynamic >::__new().Add($t1);
			Array<Dynamic > cancel = Array_obj<Dynamic >::__new().Add(null());
			Array<Dynamic > handler = Array_obj<Dynamic >::__new().Add(null());

			BEGIN_LOCAL_FUNC3(_Function_2,Array<Dynamic >,target,Array<Dynamic >,trigger,Array<Dynamic >,handler)
			Void run(){
{
					target[0]->__Field(String(L"removeEventListener",19))(trigger->__get(0),handler->__get(0),false);
				}
				return null();
			}
			END_LOCAL_FUNC0((void))

			cancel[0] =  Dynamic(new _Function_2(target,trigger,handler));

			BEGIN_LOCAL_FUNC2(_Function_3,Array<Dynamic >,cancel,Array<arrow::AsyncArrowInstance >,a)
			Void run(Dynamic value){
{
					cancel->__get(0)();
					a[0]->advance(cancel->__get(0));
					a[0]->cont(value,null(),null());
				}
				return null();
			}
			END_LOCAL_FUNC1((void))

			handler[0] =  Dynamic(new _Function_3(cancel,a));
			a[0]->addCanceller(cancel->__get(0));
			target[0]->__Field(String(L"addEventListener",16))(trigger->__get(0),handler->__get(0),false);
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	super::__construct( Dynamic(new _Function_1(trigger)));
}
;
	return null();
}

EventArrow_obj::~EventArrow_obj() { }

Dynamic EventArrow_obj::__CreateEmpty() { return  new EventArrow_obj; }
hxObjectPtr<EventArrow_obj > EventArrow_obj::__new(Dynamic $t3)
{  hxObjectPtr<EventArrow_obj > result = new EventArrow_obj();
	result->__construct($t3);
	return result;}

Dynamic EventArrow_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<EventArrow_obj > result = new EventArrow_obj();
	result->__construct(inArgs[0]);
	return result;}


EventArrow_obj::EventArrow_obj()
{
	InitMember(trigger);
}

Dynamic EventArrow_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"trigger",sizeof(wchar_t)*7) ) { return trigger; }
	}
	return super::__Field(inName);
}

static int __id_trigger = __hxcpp_field_to_id("trigger");


Dynamic EventArrow_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_trigger) return trigger;
	return super::__IField(inFieldID);
}

Dynamic EventArrow_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"trigger",sizeof(wchar_t)*7) ) { trigger=inValue.Cast<Dynamic >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void EventArrow_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"trigger",7));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"trigger",
	0 };

Class EventArrow_obj::__mClass;

void EventArrow_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.combinators.EventArrow",28), TCanCast<EventArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void EventArrow_obj::__boot()
{
}

} // end namespace arrow
} // end namespace combinators
