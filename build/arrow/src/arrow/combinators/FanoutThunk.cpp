#include <hxObject.h>

#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_combinators_ArrThunk
#include <arrow/combinators/ArrThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_ComposeThunk
#include <arrow/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_FanoutThunk
#include <arrow/combinators/FanoutThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_ProductThunk
#include <arrow/combinators/ProductThunk.h>
#endif
namespace arrow{
namespace combinators{

Void FanoutThunk_obj::__construct(arrow::AsyncArrow f,arrow::AsyncArrow g)
{
{
	super::__construct(arrow::AsyncArrow_obj::fanoutA(),f->pair(g));
}
;
	return null();
}

FanoutThunk_obj::~FanoutThunk_obj() { }

Dynamic FanoutThunk_obj::__CreateEmpty() { return  new FanoutThunk_obj; }
hxObjectPtr<FanoutThunk_obj > FanoutThunk_obj::__new(arrow::AsyncArrow f,arrow::AsyncArrow g)
{  hxObjectPtr<FanoutThunk_obj > result = new FanoutThunk_obj();
	result->__construct(f,g);
	return result;}

Dynamic FanoutThunk_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<FanoutThunk_obj > result = new FanoutThunk_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

String FanoutThunk_obj::getName( ){
	return String(L"FanoutThunk",11);
}


DEFINE_DYNAMIC_FUNC0(FanoutThunk_obj,getName,return )


FanoutThunk_obj::FanoutThunk_obj()
{
}

Dynamic FanoutThunk_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"getName",sizeof(wchar_t)*7) ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_getName = __hxcpp_field_to_id("getName");


Dynamic FanoutThunk_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_getName) return getName_dyn();
	return super::__IField(inFieldID);
}

Dynamic FanoutThunk_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void FanoutThunk_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"getName",
	0 };

Class FanoutThunk_obj::__mClass;

void FanoutThunk_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.combinators.FanoutThunk",29), TCanCast<FanoutThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void FanoutThunk_obj::__boot()
{
}

} // end namespace arrow
} // end namespace combinators
