#include <hxObject.h>

#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_combinators_ArrThunk
#include <arrow/combinators/ArrThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_FirstThunk
#include <arrow/combinators/FirstThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_ProductThunk
#include <arrow/combinators/ProductThunk.h>
#endif
namespace arrow{
namespace combinators{

Void FirstThunk_obj::__construct(arrow::AsyncArrow f)
{
{
	super::__construct(f,arrow::AsyncArrow_obj::returnA());
}
;
	return null();
}

FirstThunk_obj::~FirstThunk_obj() { }

Dynamic FirstThunk_obj::__CreateEmpty() { return  new FirstThunk_obj; }
hxObjectPtr<FirstThunk_obj > FirstThunk_obj::__new(arrow::AsyncArrow f)
{  hxObjectPtr<FirstThunk_obj > result = new FirstThunk_obj();
	result->__construct(f);
	return result;}

Dynamic FirstThunk_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<FirstThunk_obj > result = new FirstThunk_obj();
	result->__construct(inArgs[0]);
	return result;}

String FirstThunk_obj::getName( ){
	return String(L"FirstThunk",10);
}


DEFINE_DYNAMIC_FUNC0(FirstThunk_obj,getName,return )


FirstThunk_obj::FirstThunk_obj()
{
}

Dynamic FirstThunk_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"getName",sizeof(wchar_t)*7) ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_getName = __hxcpp_field_to_id("getName");


Dynamic FirstThunk_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_getName) return getName_dyn();
	return super::__IField(inFieldID);
}

Dynamic FirstThunk_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void FirstThunk_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"getName",
	0 };

Class FirstThunk_obj::__mClass;

void FirstThunk_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.combinators.FirstThunk",28), TCanCast<FirstThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void FirstThunk_obj::__boot()
{
}

} // end namespace arrow
} // end namespace combinators
