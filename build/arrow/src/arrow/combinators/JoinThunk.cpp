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
#ifndef INCLUDED_arrow_combinators_JoinThunk
#include <arrow/combinators/JoinThunk.h>
#endif
namespace arrow{
namespace combinators{

Void JoinThunk_obj::__construct(arrow::AsyncArrow f,arrow::AsyncArrow g)
{
{
	super::__construct(f,arrow::AsyncArrow_obj::returnA()->fanout(g));
}
;
	return null();
}

JoinThunk_obj::~JoinThunk_obj() { }

Dynamic JoinThunk_obj::__CreateEmpty() { return  new JoinThunk_obj; }
hxObjectPtr<JoinThunk_obj > JoinThunk_obj::__new(arrow::AsyncArrow f,arrow::AsyncArrow g)
{  hxObjectPtr<JoinThunk_obj > result = new JoinThunk_obj();
	result->__construct(f,g);
	return result;}

Dynamic JoinThunk_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<JoinThunk_obj > result = new JoinThunk_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

String JoinThunk_obj::getName( ){
	return String(L"JoinThunk",9);
}


DEFINE_DYNAMIC_FUNC0(JoinThunk_obj,getName,return )


JoinThunk_obj::JoinThunk_obj()
{
}

Dynamic JoinThunk_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"getName",sizeof(wchar_t)*7) ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_getName = __hxcpp_field_to_id("getName");


Dynamic JoinThunk_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_getName) return getName_dyn();
	return super::__IField(inFieldID);
}

Dynamic JoinThunk_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void JoinThunk_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"getName",
	0 };

Class JoinThunk_obj::__mClass;

void JoinThunk_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.combinators.JoinThunk",27), TCanCast<JoinThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void JoinThunk_obj::__boot()
{
}

} // end namespace arrow
} // end namespace combinators
