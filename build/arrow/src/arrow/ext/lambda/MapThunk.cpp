#include <hxObject.h>

#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrowInstance
#include <arrow/AsyncArrowInstance.h>
#endif
#ifndef INCLUDED_arrow_ext_lambda_MapArrow
#include <arrow/ext/lambda/MapArrow.h>
#endif
#ifndef INCLUDED_arrow_ext_lambda_MapThunk
#include <arrow/ext/lambda/MapThunk.h>
#endif
namespace arrow{
namespace ext{
namespace lambda{

Void MapThunk_obj::__construct(arrow::AsyncArrow $t1,Dynamic $t2)
{
{
	Array<Dynamic > g = Array_obj<Dynamic >::__new().Add($t2);
	Array<arrow::AsyncArrow > f = Array_obj<arrow::AsyncArrow >::__new().Add($t1);

	BEGIN_LOCAL_FUNC2(_Function_1,Array<arrow::AsyncArrow >,f,Array<Dynamic >,g)
	Void run(Dynamic x,arrow::AsyncArrowInstance a){
{
			a->cont(x,f->__get(0),arrow::ext::lambda::MapArrow_obj::__new(g->__get(0)));
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	super::__construct( Dynamic(new _Function_1(f,g)));
}
;
	return null();
}

MapThunk_obj::~MapThunk_obj() { }

Dynamic MapThunk_obj::__CreateEmpty() { return  new MapThunk_obj; }
hxObjectPtr<MapThunk_obj > MapThunk_obj::__new(arrow::AsyncArrow $t1,Dynamic $t2)
{  hxObjectPtr<MapThunk_obj > result = new MapThunk_obj();
	result->__construct($t1,$t2);
	return result;}

Dynamic MapThunk_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<MapThunk_obj > result = new MapThunk_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

String MapThunk_obj::getName( ){
	return String(L"MapThunk",8);
}


DEFINE_DYNAMIC_FUNC0(MapThunk_obj,getName,return )


MapThunk_obj::MapThunk_obj()
{
}

Dynamic MapThunk_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"getName",sizeof(wchar_t)*7) ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_getName = __hxcpp_field_to_id("getName");


Dynamic MapThunk_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_getName) return getName_dyn();
	return super::__IField(inFieldID);
}

Dynamic MapThunk_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void MapThunk_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"getName",
	0 };

Class MapThunk_obj::__mClass;

void MapThunk_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.ext.lambda.MapThunk",25), TCanCast<MapThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void MapThunk_obj::__boot()
{
}

} // end namespace arrow
} // end namespace ext
} // end namespace lambda
