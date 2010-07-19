#include <hxObject.h>

#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrowInstance
#include <arrow/AsyncArrowInstance.h>
#endif
#ifndef INCLUDED_arrow_combinators_ComposeThunk
#include <arrow/combinators/ComposeThunk.h>
#endif
namespace arrow{
namespace combinators{

Void ComposeThunk_obj::__construct(arrow::AsyncArrow $t1,arrow::AsyncArrow $t2)
{
{
	Array<arrow::AsyncArrow > g = Array_obj<arrow::AsyncArrow >::__new().Add($t2);
	Array<arrow::AsyncArrow > f = Array_obj<arrow::AsyncArrow >::__new().Add($t1);
	arrow::combinators::ComposeThunk self = this;

	BEGIN_LOCAL_FUNC2(_Function_1,Array<arrow::AsyncArrow >,f,Array<arrow::AsyncArrow >,g)
	Void run(Dynamic x,arrow::AsyncArrowInstance a){
{
			a->cont(x,f->__get(0),g->__get(0));
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	super::__construct( Dynamic(new _Function_1(f,g)));
}
;
	return null();
}

ComposeThunk_obj::~ComposeThunk_obj() { }

Dynamic ComposeThunk_obj::__CreateEmpty() { return  new ComposeThunk_obj; }
hxObjectPtr<ComposeThunk_obj > ComposeThunk_obj::__new(arrow::AsyncArrow $t1,arrow::AsyncArrow $t2)
{  hxObjectPtr<ComposeThunk_obj > result = new ComposeThunk_obj();
	result->__construct($t1,$t2);
	return result;}

Dynamic ComposeThunk_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<ComposeThunk_obj > result = new ComposeThunk_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

String ComposeThunk_obj::getName( ){
	return String(L"ComposeThunk",12);
}


DEFINE_DYNAMIC_FUNC0(ComposeThunk_obj,getName,return )


ComposeThunk_obj::ComposeThunk_obj()
{
}

Dynamic ComposeThunk_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"getName",sizeof(wchar_t)*7) ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_getName = __hxcpp_field_to_id("getName");


Dynamic ComposeThunk_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_getName) return getName_dyn();
	return super::__IField(inFieldID);
}

Dynamic ComposeThunk_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ComposeThunk_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"getName",
	0 };

Class ComposeThunk_obj::__mClass;

void ComposeThunk_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.combinators.ComposeThunk",30), TCanCast<ComposeThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void ComposeThunk_obj::__boot()
{
}

} // end namespace arrow
} // end namespace combinators
