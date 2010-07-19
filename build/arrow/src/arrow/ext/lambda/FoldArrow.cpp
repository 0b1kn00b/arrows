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
#ifndef INCLUDED_arrow_combinators_ComposeThunk
#include <arrow/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_FunctionThunk
#include <arrow/combinators/FunctionThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_ProgressArrow
#include <arrow/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_arrow_combinators_RepeatThunk
#include <arrow/combinators/RepeatThunk.h>
#endif
#ifndef INCLUDED_arrow_ext_lambda_FoldArrow
#include <arrow/ext/lambda/FoldArrow.h>
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

Void FoldArrow_obj::__construct(Dynamic $t2,Dynamic $t3)
{
{
	Array<Dynamic > first = Array_obj<Dynamic >::__new().Add($t3);
	Array<Dynamic > f = Array_obj<Dynamic >::__new().Add($t2);

	BEGIN_LOCAL_FUNC2(_Function_1,Array<Dynamic >,f,Array<Dynamic >,first)
	Void run(Dynamic x,arrow::AsyncArrowInstance $t1){
{
			Array<arrow::AsyncArrowInstance > a = Array_obj<arrow::AsyncArrowInstance >::__new().Add($t1);
			Array<Dynamic > it = Array_obj<Dynamic >::__new().Add(x->__Field(String(L"iterator",8))());

			BEGIN_LOCAL_FUNC2(_Function_2,Array<Dynamic >,it,Array<Dynamic >,f)
			arrow::TaggedValue run(Dynamic first1){
{
					if (it[0]->__Field(String(L"hasNext",7))()){
						Dynamic n = it[0]->__Field(String(L"next",4))();
						first1 = f->__get(0)(n,first1);
						return arrow::AsyncArrow_obj::doRepeat(first1);
					}
					else{
						return arrow::AsyncArrow_obj::doDone(first1);
					}
				}
				return null();
			}
			END_LOCAL_FUNC1(return)

			Dynamic f0 =  Dynamic(new _Function_2(it,f));

			BEGIN_LOCAL_FUNC1(_Function_3,Array<arrow::AsyncArrowInstance >,a)
			Void run(Dynamic x1){
{
					a[0]->cont(x1,null(),null());
				}
				return null();
			}
			END_LOCAL_FUNC1((void))

			Dynamic f1 =  Dynamic(new _Function_3(a));
			arrow::AsyncArrow_obj::lift(f0)->repeat()->then(f1)->run(first->__get(0));
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	super::__construct( Dynamic(new _Function_1(f,first)));
}
;
	return null();
}

FoldArrow_obj::~FoldArrow_obj() { }

Dynamic FoldArrow_obj::__CreateEmpty() { return  new FoldArrow_obj; }
hxObjectPtr<FoldArrow_obj > FoldArrow_obj::__new(Dynamic $t2,Dynamic $t3)
{  hxObjectPtr<FoldArrow_obj > result = new FoldArrow_obj();
	result->__construct($t2,$t3);
	return result;}

Dynamic FoldArrow_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<FoldArrow_obj > result = new FoldArrow_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


FoldArrow_obj::FoldArrow_obj()
{
}

Dynamic FoldArrow_obj::__Field(const String &inName)
{
	return super::__Field(inName);
}



Dynamic FoldArrow_obj::__IField(int inFieldID)
{
	return super::__IField(inFieldID);
}

Dynamic FoldArrow_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void FoldArrow_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class FoldArrow_obj::__mClass;

void FoldArrow_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.ext.lambda.FoldArrow",26), TCanCast<FoldArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void FoldArrow_obj::__boot()
{
}

} // end namespace arrow
} // end namespace ext
} // end namespace lambda
