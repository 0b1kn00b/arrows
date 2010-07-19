#include <hxObject.h>

#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_ext_lambda_IterArrow
#include <arrow/ext/lambda/IterArrow.h>
#endif
#ifndef INCLUDED_arrow_ext_lambda_IterThunk
#include <arrow/ext/lambda/IterThunk.h>
#endif
namespace arrow{
namespace ext{
namespace lambda{

Void IterThunk_obj::__construct(Dynamic $t1,Dynamic $t2)
{
{
	Array<Dynamic > iter = Array_obj<Dynamic >::__new().Add($t2);
	Array<Dynamic > f = Array_obj<Dynamic >::__new().Add($t1);

	BEGIN_LOCAL_FUNC2(_Function_1,Array<Dynamic >,f,Array<Dynamic >,iter)
	Void run(Dynamic x,Dynamic a){
{
			a->__Field(String(L"cont",4))(x,f->__get(0),arrow::ext::lambda::IterArrow_obj::__new(iter->__get(0)));
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	super::__construct( Dynamic(new _Function_1(f,iter)));
}
;
	return null();
}

IterThunk_obj::~IterThunk_obj() { }

Dynamic IterThunk_obj::__CreateEmpty() { return  new IterThunk_obj; }
hxObjectPtr<IterThunk_obj > IterThunk_obj::__new(Dynamic $t1,Dynamic $t2)
{  hxObjectPtr<IterThunk_obj > result = new IterThunk_obj();
	result->__construct($t1,$t2);
	return result;}

Dynamic IterThunk_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<IterThunk_obj > result = new IterThunk_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


IterThunk_obj::IterThunk_obj()
{
}

Dynamic IterThunk_obj::__Field(const String &inName)
{
	return super::__Field(inName);
}



Dynamic IterThunk_obj::__IField(int inFieldID)
{
	return super::__IField(inFieldID);
}

Dynamic IterThunk_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void IterThunk_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class IterThunk_obj::__mClass;

void IterThunk_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.ext.lambda.IterThunk",26), TCanCast<IterThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void IterThunk_obj::__boot()
{
}

} // end namespace arrow
} // end namespace ext
} // end namespace lambda
