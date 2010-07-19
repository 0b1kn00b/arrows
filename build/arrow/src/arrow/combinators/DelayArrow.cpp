#include <hxObject.h>

#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrowInstance
#include <arrow/AsyncArrowInstance.h>
#endif
#ifndef INCLUDED_arrow_combinators_DelayArrow
#include <arrow/combinators/DelayArrow.h>
#endif
#ifndef INCLUDED_data_type_Time
#include <data/type/Time.h>
#endif
namespace arrow{
namespace combinators{

Void DelayArrow_obj::__construct(data::type::Time time)
{
{
	Array<arrow::combinators::DelayArrow > self = Array_obj<arrow::combinators::DelayArrow >::__new().Add(this);
	this->time = time;

	BEGIN_LOCAL_FUNC1(_Function_1,Array<arrow::combinators::DelayArrow >,self)
	Void run(Dynamic x,arrow::AsyncArrowInstance a){
{
			Array<bool > do_continue = Array_obj<bool >::__new().Add(true);

			BEGIN_LOCAL_FUNC1(_Function_2,Array<bool >,do_continue)
			Void run(){
{
					do_continue[0] = false;
				}
				return null();
			}
			END_LOCAL_FUNC0((void))

			self[0]->cancel =  Dynamic(new _Function_2(do_continue));
			a->addCanceller(self[0]->cancel_dyn());
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	super::__construct( Dynamic(new _Function_1(self)));
}
;
	return null();
}

DelayArrow_obj::~DelayArrow_obj() { }

Dynamic DelayArrow_obj::__CreateEmpty() { return  new DelayArrow_obj; }
hxObjectPtr<DelayArrow_obj > DelayArrow_obj::__new(data::type::Time time)
{  hxObjectPtr<DelayArrow_obj > result = new DelayArrow_obj();
	result->__construct(time);
	return result;}

Dynamic DelayArrow_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<DelayArrow_obj > result = new DelayArrow_obj();
	result->__construct(inArgs[0]);
	return result;}


DelayArrow_obj::DelayArrow_obj()
{
	InitMember(time);
}

Dynamic DelayArrow_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"time",sizeof(wchar_t)*4) ) { return time; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"cancel",sizeof(wchar_t)*6) ) { return cancel; }
	}
	return super::__Field(inName);
}

static int __id_time = __hxcpp_field_to_id("time");
static int __id_cancel = __hxcpp_field_to_id("cancel");


Dynamic DelayArrow_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_time) return time;
	if (inFieldID==__id_cancel) return cancel;
	return super::__IField(inFieldID);
}

Dynamic DelayArrow_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"time",sizeof(wchar_t)*4) ) { time=inValue.Cast<data::type::Time >();return inValue; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"cancel",sizeof(wchar_t)*6) ) { cancel=inValue.Cast<Dynamic >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void DelayArrow_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"time",4));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"time",
	L"cancel",
	0 };

Class DelayArrow_obj::__mClass;

void DelayArrow_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.combinators.DelayArrow",28), TCanCast<DelayArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void DelayArrow_obj::__boot()
{
}

} // end namespace arrow
} // end namespace combinators
