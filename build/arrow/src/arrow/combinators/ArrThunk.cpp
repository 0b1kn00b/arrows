#include <hxObject.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrowInstance
#include <arrow/AsyncArrowInstance.h>
#endif
#ifndef INCLUDED_arrow_combinators_ArrThunk
#include <arrow/combinators/ArrThunk.h>
#endif
namespace arrow{
namespace combinators{

Void ArrThunk_obj::__construct(Dynamic $t1)
{
{
	Array<Dynamic > f = Array_obj<Dynamic >::__new().Add($t1);
	arrow::combinators::ArrThunk self = this;

	BEGIN_LOCAL_FUNC1(_Function_1,Array<Dynamic >,f)
	Void run(Dynamic x,arrow::AsyncArrowInstance a){
{
			Array<Dynamic > arr = Array_obj<Dynamic >::__new();
			arr->push(x);
			Dynamic out = Reflect_obj::callMethod(null(),f->__get(0),arr);
			a->cont(out,null(),null());
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	super::__construct( Dynamic(new _Function_1(f)));
}
;
	return null();
}

ArrThunk_obj::~ArrThunk_obj() { }

Dynamic ArrThunk_obj::__CreateEmpty() { return  new ArrThunk_obj; }
hxObjectPtr<ArrThunk_obj > ArrThunk_obj::__new(Dynamic $t1)
{  hxObjectPtr<ArrThunk_obj > result = new ArrThunk_obj();
	result->__construct($t1);
	return result;}

Dynamic ArrThunk_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<ArrThunk_obj > result = new ArrThunk_obj();
	result->__construct(inArgs[0]);
	return result;}

String ArrThunk_obj::getName( ){
	return String(L"ArrThunk",8);
}


DEFINE_DYNAMIC_FUNC0(ArrThunk_obj,getName,return )


ArrThunk_obj::ArrThunk_obj()
{
}

Dynamic ArrThunk_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"getName",sizeof(wchar_t)*7) ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_getName = __hxcpp_field_to_id("getName");


Dynamic ArrThunk_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_getName) return getName_dyn();
	return super::__IField(inFieldID);
}

Dynamic ArrThunk_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ArrThunk_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"getName",
	0 };

Class ArrThunk_obj::__mClass;

void ArrThunk_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.combinators.ArrThunk",26), TCanCast<ArrThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void ArrThunk_obj::__boot()
{
}

} // end namespace arrow
} // end namespace combinators
