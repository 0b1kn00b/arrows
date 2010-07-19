#include <hxObject.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrowInstance
#include <arrow/AsyncArrowInstance.h>
#endif
#ifndef INCLUDED_arrow_Tuple
#include <arrow/Tuple.h>
#endif
#ifndef INCLUDED_arrow_combinators_FunctionThunk
#include <arrow/combinators/FunctionThunk.h>
#endif
namespace arrow{
namespace combinators{

Void FunctionThunk_obj::__construct(Dynamic $t1)
{
{
	Array<Dynamic > f = Array_obj<Dynamic >::__new().Add($t1);
	if (!Reflect_obj::isFunction(f->__get(0))){
		hxThrow (String(L"is not function",15));
	}

	BEGIN_LOCAL_FUNC1(_Function_1,Array<Dynamic >,f)
	Void run(Dynamic x,arrow::AsyncArrowInstance a){
{
			if (Std_obj::is(x,hxClassOf<arrow::Tuple >())){
				struct _Function_2{
					static arrow::Tuple Block( Dynamic &x)/* DEF (ret block)(not intern) */{
						Dynamic tmp = x;
						return Std_obj::is(tmp,hxClassOf<arrow::Tuple >()) ? Dynamic( tmp ) : Dynamic( hxThrow (String(L"Class cast error",16)) );
					}
				};
				arrow::Tuple t = _Function_2::Block(x);
				a->cont(t->applyArrayTo(f->__get(0)),null(),null());
			}
			else{
				Array<Dynamic > arr = Array_obj<Dynamic >::__new().Add(x);
				Dynamic out = Reflect_obj::callMethod(null(),f->__get(0),arr);
				a->cont(out,null(),null());
			}
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	super::__construct( Dynamic(new _Function_1(f)));
}
;
	return null();
}

FunctionThunk_obj::~FunctionThunk_obj() { }

Dynamic FunctionThunk_obj::__CreateEmpty() { return  new FunctionThunk_obj; }
hxObjectPtr<FunctionThunk_obj > FunctionThunk_obj::__new(Dynamic $t1)
{  hxObjectPtr<FunctionThunk_obj > result = new FunctionThunk_obj();
	result->__construct($t1);
	return result;}

Dynamic FunctionThunk_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<FunctionThunk_obj > result = new FunctionThunk_obj();
	result->__construct(inArgs[0]);
	return result;}

String FunctionThunk_obj::getName( ){
	return String(L"FunctionThunk",13);
}


DEFINE_DYNAMIC_FUNC0(FunctionThunk_obj,getName,return )


FunctionThunk_obj::FunctionThunk_obj()
{
}

Dynamic FunctionThunk_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"getName",sizeof(wchar_t)*7) ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_getName = __hxcpp_field_to_id("getName");


Dynamic FunctionThunk_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_getName) return getName_dyn();
	return super::__IField(inFieldID);
}

Dynamic FunctionThunk_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void FunctionThunk_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"getName",
	0 };

Class FunctionThunk_obj::__mClass;

void FunctionThunk_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.combinators.FunctionThunk",31), TCanCast<FunctionThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void FunctionThunk_obj::__boot()
{
}

} // end namespace arrow
} // end namespace combinators
