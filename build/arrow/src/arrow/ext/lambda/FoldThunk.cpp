#include <hxObject.h>

#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_ext_lambda_FoldArrow
#include <arrow/ext/lambda/FoldArrow.h>
#endif
#ifndef INCLUDED_arrow_ext_lambda_FoldThunk
#include <arrow/ext/lambda/FoldThunk.h>
#endif
namespace arrow{
namespace ext{
namespace lambda{

Void FoldThunk_obj::__construct(Dynamic $t1,Dynamic $t2,Dynamic $t3)
{
{
	Array<Dynamic > fold = Array_obj<Dynamic >::__new().Add($t3);
	Array<Dynamic > f = Array_obj<Dynamic >::__new().Add($t2);
	Array<Dynamic > first = Array_obj<Dynamic >::__new().Add($t1);

	BEGIN_LOCAL_FUNC3(_Function_1,Array<Dynamic >,fold,Array<Dynamic >,f,Array<Dynamic >,first)
	Void run(Dynamic x,Dynamic a){
{
			a->__Field(String(L"cont",4))(x,f->__get(0),arrow::ext::lambda::FoldArrow_obj::__new(fold->__get(0),first->__get(0)));
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	super::__construct( Dynamic(new _Function_1(fold,f,first)));
}
;
	return null();
}

FoldThunk_obj::~FoldThunk_obj() { }

Dynamic FoldThunk_obj::__CreateEmpty() { return  new FoldThunk_obj; }
hxObjectPtr<FoldThunk_obj > FoldThunk_obj::__new(Dynamic $t1,Dynamic $t2,Dynamic $t3)
{  hxObjectPtr<FoldThunk_obj > result = new FoldThunk_obj();
	result->__construct($t1,$t2,$t3);
	return result;}

Dynamic FoldThunk_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<FoldThunk_obj > result = new FoldThunk_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


FoldThunk_obj::FoldThunk_obj()
{
}

Dynamic FoldThunk_obj::__Field(const String &inName)
{
	return super::__Field(inName);
}



Dynamic FoldThunk_obj::__IField(int inFieldID)
{
	return super::__IField(inFieldID);
}

Dynamic FoldThunk_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void FoldThunk_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class FoldThunk_obj::__mClass;

void FoldThunk_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.ext.lambda.FoldThunk",26), TCanCast<FoldThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void FoldThunk_obj::__boot()
{
}

} // end namespace arrow
} // end namespace ext
} // end namespace lambda
