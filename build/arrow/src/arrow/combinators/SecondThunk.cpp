#include <hxObject.h>

#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_combinators_ArrThunk
#include <arrow/combinators/ArrThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_ProductThunk
#include <arrow/combinators/ProductThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_SecondThunk
#include <arrow/combinators/SecondThunk.h>
#endif
namespace arrow{
namespace combinators{

Void SecondThunk_obj::__construct(arrow::AsyncArrow g)
{
{
	super::__construct(arrow::AsyncArrow_obj::returnA(),g);
}
;
	return null();
}

SecondThunk_obj::~SecondThunk_obj() { }

Dynamic SecondThunk_obj::__CreateEmpty() { return  new SecondThunk_obj; }
hxObjectPtr<SecondThunk_obj > SecondThunk_obj::__new(arrow::AsyncArrow g)
{  hxObjectPtr<SecondThunk_obj > result = new SecondThunk_obj();
	result->__construct(g);
	return result;}

Dynamic SecondThunk_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<SecondThunk_obj > result = new SecondThunk_obj();
	result->__construct(inArgs[0]);
	return result;}

String SecondThunk_obj::getName( ){
	return String(L"SecondThunk",11);
}


DEFINE_DYNAMIC_FUNC0(SecondThunk_obj,getName,return )


SecondThunk_obj::SecondThunk_obj()
{
}

Dynamic SecondThunk_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"getName",sizeof(wchar_t)*7) ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_getName = __hxcpp_field_to_id("getName");


Dynamic SecondThunk_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_getName) return getName_dyn();
	return super::__IField(inFieldID);
}

Dynamic SecondThunk_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void SecondThunk_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"getName",
	0 };

Class SecondThunk_obj::__mClass;

void SecondThunk_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.combinators.SecondThunk",29), TCanCast<SecondThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void SecondThunk_obj::__boot()
{
}

} // end namespace arrow
} // end namespace combinators
