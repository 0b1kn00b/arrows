#include <hxObject.h>

#ifndef INCLUDED_List
#include <List.h>
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
#ifndef INCLUDED_arrow_combinators_ArrThunk
#include <arrow/combinators/ArrThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_ComposeThunk
#include <arrow/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_ProgressArrow
#include <arrow/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_arrow_combinators_RepeatThunk
#include <arrow/combinators/RepeatThunk.h>
#endif
#ifndef INCLUDED_arrow_ext_lambda_FilterArrow
#include <arrow/ext/lambda/FilterArrow.h>
#endif
#ifndef INCLUDED_event_EventDispatcher
#include <event/EventDispatcher.h>
#endif
#ifndef INCLUDED_event_EventListener
#include <event/EventListener.h>
#endif
namespace arrow{
namespace ext{
namespace lambda{

Void FilterArrow_obj::__construct(Dynamic $t2,Dynamic __o_$t3,Dynamic pos)
{
bool $t3 = __o_$t3.Default(false);
{
	Array<bool > inverse = Array_obj<bool >::__new().Add($t3);
	Array<Dynamic > filter = Array_obj<Dynamic >::__new().Add($t2);
	this->f = filter->__get(0);

	BEGIN_LOCAL_FUNC2(_Function_1,Array<bool >,inverse,Array<Dynamic >,filter)
	Void run(Dynamic x,arrow::AsyncArrowInstance $t1){
{
			Array<arrow::AsyncArrowInstance > a = Array_obj<arrow::AsyncArrowInstance >::__new().Add($t1);
			Array<Dynamic > it = Array_obj<Dynamic >::__new().Add(x->__Field(String(L"iterator",8))());
			Array<List > out = Array_obj<List >::__new().Add(List_obj::__new());

			BEGIN_LOCAL_FUNC4(_Function_2,Array<Dynamic >,it,Array<List >,out,Array<bool >,inverse,Array<Dynamic >,filter)
			Dynamic run(Dynamic x1){
{
					if (it[0]->__Field(String(L"hasNext",7))()){
						Dynamic n = it[0]->__Field(String(L"next",4))();
						if (inverse->__get(0)){
							if (!filter->__get(0)(n)){
								out[0]->push(n);
							}
						}
						else{
							if (filter->__get(0)(n)){
								out[0]->push(n);
							}
						}
						return arrow::AsyncArrow_obj::doRepeat(out->__get(0));
					}
					else{
						return arrow::AsyncArrow_obj::doDone(out->__get(0));
					}
				}
				return null();
			}
			END_LOCAL_FUNC1(return)

			Dynamic f =  Dynamic(new _Function_2(it,out,inverse,filter));

			BEGIN_LOCAL_FUNC2(_Function_3,Array<arrow::AsyncArrowInstance >,a,Array<List >,out)
			Void run(Dynamic x1){
{
					a[0]->cont(out->__get(0),null(),null());
				}
				return null();
			}
			END_LOCAL_FUNC1((void))

			Dynamic f1 =  Dynamic(new _Function_3(a,out));
			arrow::AsyncArrow_obj::tuple(f)->repeat()->then(f1)->run(x);
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	super::__construct( Dynamic(new _Function_1(inverse,filter)));
}
;
	return null();
}

FilterArrow_obj::~FilterArrow_obj() { }

Dynamic FilterArrow_obj::__CreateEmpty() { return  new FilterArrow_obj; }
hxObjectPtr<FilterArrow_obj > FilterArrow_obj::__new(Dynamic $t2,Dynamic __o_$t3,Dynamic pos)
{  hxObjectPtr<FilterArrow_obj > result = new FilterArrow_obj();
	result->__construct($t2,__o_$t3,pos);
	return result;}

Dynamic FilterArrow_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<FilterArrow_obj > result = new FilterArrow_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


FilterArrow_obj::FilterArrow_obj()
{
}

Dynamic FilterArrow_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 1:
		if (!memcmp(inName.__s,L"f",sizeof(wchar_t)*1) ) { return f; }
	}
	return super::__Field(inName);
}

static int __id_f = __hxcpp_field_to_id("f");


Dynamic FilterArrow_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_f) return f;
	return super::__IField(inFieldID);
}

Dynamic FilterArrow_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (!memcmp(inName.__s,L"f",sizeof(wchar_t)*1) ) { f=inValue.Cast<Dynamic >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void FilterArrow_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"f",
	0 };

Class FilterArrow_obj::__mClass;

void FilterArrow_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.ext.lambda.FilterArrow",28), TCanCast<FilterArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void FilterArrow_obj::__boot()
{
}

} // end namespace arrow
} // end namespace ext
} // end namespace lambda
