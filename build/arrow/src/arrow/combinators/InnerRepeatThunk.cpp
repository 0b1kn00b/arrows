#include <hxObject.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_arrow_combinators_InnerRepeatThunk
#include <arrow/combinators/InnerRepeatThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_Loop
#include <arrow/combinators/Loop.h>
#endif
namespace arrow{
namespace combinators{

Void InnerRepeatThunk_obj::__construct(arrow::AsyncArrow $t1,arrow::AsyncArrowInstance a)
{
{
	Array<arrow::AsyncArrow > f = Array_obj<arrow::AsyncArrow >::__new().Add($t1);
	this->cancelled = false;
	Array<arrow::combinators::InnerRepeatThunk > self = Array_obj<arrow::combinators::InnerRepeatThunk >::__new().Add(this);

	BEGIN_LOCAL_FUNC1(_Function_1,Array<arrow::combinators::InnerRepeatThunk >,self)
	Void run(){
{
			self[0]->cancelled = true;
		}
		return null();
	}
	END_LOCAL_FUNC0((void))

	this->cancel =  Dynamic(new _Function_1(self));
	a->addCanceller(this->cancel);

	BEGIN_LOCAL_FUNC2(_Function_2,Array<arrow::combinators::InnerRepeatThunk >,self,Array<arrow::AsyncArrow >,f)
	Void run(Dynamic x,arrow::AsyncArrowInstance a1){
{
			if (self[0]->cancelled){
				return null();
			}
			if (Std_obj::is(x,hxClassOf<arrow::TaggedValue >())){
				arrow::combinators::Loop x0 = x->__Field(String(L"tag",3));
				arrow::combinators::Loop _switch_1 = (x0);
				switch((_switch_1)->GetIndex()){
					case 0: {
						a1->cont(x->__Field(String(L"value",5)),f->__get(0),self->__get(0));
					}
					break;
					case 1: {
						a1->advance(self[0]->cancel);
						a1->cont(x->__Field(String(L"value",5)),null(),null());
					}
					break;
				}
			}
			else{
				hxThrow (String(L"Repeat or Done?",15));
			}
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	super::__construct( Dynamic(new _Function_2(self,f)));
}
;
	return null();
}

InnerRepeatThunk_obj::~InnerRepeatThunk_obj() { }

Dynamic InnerRepeatThunk_obj::__CreateEmpty() { return  new InnerRepeatThunk_obj; }
hxObjectPtr<InnerRepeatThunk_obj > InnerRepeatThunk_obj::__new(arrow::AsyncArrow $t1,arrow::AsyncArrowInstance a)
{  hxObjectPtr<InnerRepeatThunk_obj > result = new InnerRepeatThunk_obj();
	result->__construct($t1,a);
	return result;}

Dynamic InnerRepeatThunk_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<InnerRepeatThunk_obj > result = new InnerRepeatThunk_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

String InnerRepeatThunk_obj::getName( ){
	return String(L"InnerThunk",10);
}


DEFINE_DYNAMIC_FUNC0(InnerRepeatThunk_obj,getName,return )


InnerRepeatThunk_obj::InnerRepeatThunk_obj()
{
	InitMember(cancelled);
	InitMember(cancel);
}

Dynamic InnerRepeatThunk_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 6:
		if (!memcmp(inName.__s,L"cancel",sizeof(wchar_t)*6) ) { return cancel; }
		break;
	case 7:
		if (!memcmp(inName.__s,L"getName",sizeof(wchar_t)*7) ) { return getName_dyn(); }
		break;
	case 9:
		if (!memcmp(inName.__s,L"cancelled",sizeof(wchar_t)*9) ) { return cancelled; }
	}
	return super::__Field(inName);
}

static int __id_cancelled = __hxcpp_field_to_id("cancelled");
static int __id_cancel = __hxcpp_field_to_id("cancel");
static int __id_getName = __hxcpp_field_to_id("getName");


Dynamic InnerRepeatThunk_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_cancelled) return cancelled;
	if (inFieldID==__id_cancel) return cancel;
	if (inFieldID==__id_getName) return getName_dyn();
	return super::__IField(inFieldID);
}

Dynamic InnerRepeatThunk_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (!memcmp(inName.__s,L"cancel",sizeof(wchar_t)*6) ) { cancel=inValue.Cast<Dynamic >();return inValue; }
		break;
	case 9:
		if (!memcmp(inName.__s,L"cancelled",sizeof(wchar_t)*9) ) { cancelled=inValue.Cast<bool >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void InnerRepeatThunk_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"cancelled",9));
	outFields->push(String(L"cancel",6));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"cancelled",
	L"cancel",
	L"getName",
	0 };

Class InnerRepeatThunk_obj::__mClass;

void InnerRepeatThunk_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.combinators.InnerRepeatThunk",34), TCanCast<InnerRepeatThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void InnerRepeatThunk_obj::__boot()
{
}

} // end namespace arrow
} // end namespace combinators
