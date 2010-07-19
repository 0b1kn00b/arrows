#include <hxObject.h>

#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_combinators_ArrThunk
#include <arrow/combinators/ArrThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_BindThunk
#include <arrow/combinators/BindThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_ComposeThunk
#include <arrow/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_FanoutThunk
#include <arrow/combinators/FanoutThunk.h>
#endif
namespace arrow{
namespace combinators{

Void BindThunk_obj::__construct(arrow::AsyncArrow f,arrow::AsyncArrow g)
{
{
	super::__construct(arrow::AsyncArrow_obj::returnA()->fanout(f),g);
}
;
	return null();
}

BindThunk_obj::~BindThunk_obj() { }

Dynamic BindThunk_obj::__CreateEmpty() { return  new BindThunk_obj; }
hxObjectPtr<BindThunk_obj > BindThunk_obj::__new(arrow::AsyncArrow f,arrow::AsyncArrow g)
{  hxObjectPtr<BindThunk_obj > result = new BindThunk_obj();
	result->__construct(f,g);
	return result;}

Dynamic BindThunk_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<BindThunk_obj > result = new BindThunk_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

String BindThunk_obj::getName( ){
	return String(L"BindThunk",9);
}


DEFINE_DYNAMIC_FUNC0(BindThunk_obj,getName,return )


BindThunk_obj::BindThunk_obj()
{
}

Dynamic BindThunk_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"getName",sizeof(wchar_t)*7) ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_getName = __hxcpp_field_to_id("getName");


Dynamic BindThunk_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_getName) return getName_dyn();
	return super::__IField(inFieldID);
}

Dynamic BindThunk_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void BindThunk_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"getName",
	0 };

Class BindThunk_obj::__mClass;

void BindThunk_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.combinators.BindThunk",27), TCanCast<BindThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void BindThunk_obj::__boot()
{
}

} // end namespace arrow
} // end namespace combinators
