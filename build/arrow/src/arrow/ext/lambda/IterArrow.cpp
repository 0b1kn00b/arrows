#include <hxObject.h>

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
#ifndef INCLUDED_arrow_ext_lambda_IterArrow
#include <arrow/ext/lambda/IterArrow.h>
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

Void IterArrow_obj::__construct(Dynamic $t2)
{
{
	Array<Dynamic > f = Array_obj<Dynamic >::__new().Add($t2);

	BEGIN_LOCAL_FUNC1(_Function_1,Array<Dynamic >,f)
	Void run(Dynamic x,arrow::AsyncArrowInstance $t1){
{
			Array<arrow::AsyncArrowInstance > a = Array_obj<arrow::AsyncArrowInstance >::__new().Add($t1);
			Array<Dynamic > it = Array_obj<Dynamic >::__new().Add(x->__Field(String(L"iterator",8))());

			BEGIN_LOCAL_FUNC1(_Function_2,Array<arrow::AsyncArrowInstance >,a)
			Void run(Dynamic x1){
{
					a[0]->cont(x1,null(),null());
				}
				return null();
			}
			END_LOCAL_FUNC1((void))

			Dynamic f0 =  Dynamic(new _Function_2(a));

			BEGIN_LOCAL_FUNC2(_Function_3,Array<Dynamic >,it,Array<Dynamic >,f)
			Dynamic run(Dynamic x1){
{
					if (it[0]->__Field(String(L"hasNext",7))()){
						f->__get(0)(it[0]->__Field(String(L"next",4))());
						return arrow::AsyncArrow_obj::doRepeat(null());
					}
					else{
						return arrow::AsyncArrow_obj::doDone(x1);
					}
				}
				return null();
			}
			END_LOCAL_FUNC1(return)

			Dynamic f1 =  Dynamic(new _Function_3(it,f));
			arrow::AsyncArrow_obj::tuple(f1)->repeat()->then(f0)->run(null());
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	super::__construct( Dynamic(new _Function_1(f)));
}
;
	return null();
}

IterArrow_obj::~IterArrow_obj() { }

Dynamic IterArrow_obj::__CreateEmpty() { return  new IterArrow_obj; }
hxObjectPtr<IterArrow_obj > IterArrow_obj::__new(Dynamic $t2)
{  hxObjectPtr<IterArrow_obj > result = new IterArrow_obj();
	result->__construct($t2);
	return result;}

Dynamic IterArrow_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<IterArrow_obj > result = new IterArrow_obj();
	result->__construct(inArgs[0]);
	return result;}


IterArrow_obj::IterArrow_obj()
{
}

Dynamic IterArrow_obj::__Field(const String &inName)
{
	return super::__Field(inName);
}



Dynamic IterArrow_obj::__IField(int inFieldID)
{
	return super::__IField(inFieldID);
}

Dynamic IterArrow_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void IterArrow_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class IterArrow_obj::__mClass;

void IterArrow_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.ext.lambda.IterArrow",26), TCanCast<IterArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void IterArrow_obj::__boot()
{
}

} // end namespace arrow
} // end namespace ext
} // end namespace lambda
