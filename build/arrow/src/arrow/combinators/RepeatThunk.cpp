#include <hxObject.h>

#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrowInstance
#include <arrow/AsyncArrowInstance.h>
#endif
#ifndef INCLUDED_arrow_combinators_InnerRepeatThunk
#include <arrow/combinators/InnerRepeatThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_RepeatThunk
#include <arrow/combinators/RepeatThunk.h>
#endif
namespace arrow{
namespace combinators{

Void RepeatThunk_obj::__construct(arrow::AsyncArrow $t1)
{
{
	Array<arrow::AsyncArrow > f = Array_obj<arrow::AsyncArrow >::__new().Add($t1);

	BEGIN_LOCAL_FUNC1(_Function_1,Array<arrow::AsyncArrow >,f)
	Void run(Dynamic x,arrow::AsyncArrowInstance a){
{
			a->cont(x,f->__get(0),arrow::combinators::InnerRepeatThunk_obj::__new(f->__get(0),a));
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	super::__construct( Dynamic(new _Function_1(f)));
}
;
	return null();
}

RepeatThunk_obj::~RepeatThunk_obj() { }

Dynamic RepeatThunk_obj::__CreateEmpty() { return  new RepeatThunk_obj; }
hxObjectPtr<RepeatThunk_obj > RepeatThunk_obj::__new(arrow::AsyncArrow $t1)
{  hxObjectPtr<RepeatThunk_obj > result = new RepeatThunk_obj();
	result->__construct($t1);
	return result;}

Dynamic RepeatThunk_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<RepeatThunk_obj > result = new RepeatThunk_obj();
	result->__construct(inArgs[0]);
	return result;}


RepeatThunk_obj::RepeatThunk_obj()
{
}

Dynamic RepeatThunk_obj::__Field(const String &inName)
{
	return super::__Field(inName);
}



Dynamic RepeatThunk_obj::__IField(int inFieldID)
{
	return super::__IField(inFieldID);
}

Dynamic RepeatThunk_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void RepeatThunk_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class RepeatThunk_obj::__mClass;

void RepeatThunk_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.combinators.RepeatThunk",29), TCanCast<RepeatThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void RepeatThunk_obj::__boot()
{
}

} // end namespace arrow
} // end namespace combinators
