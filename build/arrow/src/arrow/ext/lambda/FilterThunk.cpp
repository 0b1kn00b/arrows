#include <hxObject.h>

#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_ext_lambda_FilterArrow
#include <arrow/ext/lambda/FilterArrow.h>
#endif
#ifndef INCLUDED_arrow_ext_lambda_FilterThunk
#include <arrow/ext/lambda/FilterThunk.h>
#endif
namespace arrow{
namespace ext{
namespace lambda{

Void FilterThunk_obj::__construct(Dynamic $t1,Dynamic $t2,Dynamic $t3)
{
{
	Array<Dynamic > inverse = Array_obj<Dynamic >::__new().Add($t3);
	Array<Dynamic > filter = Array_obj<Dynamic >::__new().Add($t2);
	Array<Dynamic > f = Array_obj<Dynamic >::__new().Add($t1);

	BEGIN_LOCAL_FUNC3(_Function_1,Array<Dynamic >,filter,Array<Dynamic >,inverse,Array<Dynamic >,f)
	Void run(Dynamic x,Dynamic a){
{
			a->__Field(String(L"cont",4))(x,f->__get(0),arrow::ext::lambda::FilterArrow_obj::__new(filter->__get(0),inverse->__get(0),hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"FilterThunk.hx",14))->Add( String(L"lineNumber",10) , 10)->Add( String(L"className",9) , String(L"arrow.ext.lambda.FilterThunk",28))->Add( String(L"methodName",10) , String(L"new",3))));
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	super::__construct( Dynamic(new _Function_1(filter,inverse,f)));
}
;
	return null();
}

FilterThunk_obj::~FilterThunk_obj() { }

Dynamic FilterThunk_obj::__CreateEmpty() { return  new FilterThunk_obj; }
hxObjectPtr<FilterThunk_obj > FilterThunk_obj::__new(Dynamic $t1,Dynamic $t2,Dynamic $t3)
{  hxObjectPtr<FilterThunk_obj > result = new FilterThunk_obj();
	result->__construct($t1,$t2,$t3);
	return result;}

Dynamic FilterThunk_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<FilterThunk_obj > result = new FilterThunk_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


FilterThunk_obj::FilterThunk_obj()
{
}

Dynamic FilterThunk_obj::__Field(const String &inName)
{
	return super::__Field(inName);
}



Dynamic FilterThunk_obj::__IField(int inFieldID)
{
	return super::__IField(inFieldID);
}

Dynamic FilterThunk_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void FilterThunk_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class FilterThunk_obj::__mClass;

void FilterThunk_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.ext.lambda.FilterThunk",28), TCanCast<FilterThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void FilterThunk_obj::__boot()
{
}

} // end namespace arrow
} // end namespace ext
} // end namespace lambda
