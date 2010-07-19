#include <hxObject.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_ext_LambdaArrow
#include <arrow/ext/LambdaArrow.h>
#endif
#ifndef INCLUDED_arrow_ext_lambda_FilterThunk
#include <arrow/ext/lambda/FilterThunk.h>
#endif
#ifndef INCLUDED_arrow_ext_lambda_FoldThunk
#include <arrow/ext/lambda/FoldThunk.h>
#endif
#ifndef INCLUDED_arrow_ext_lambda_IterThunk
#include <arrow/ext/lambda/IterThunk.h>
#endif
#ifndef INCLUDED_arrow_ext_lambda_MapThunk
#include <arrow/ext/lambda/MapThunk.h>
#endif
namespace arrow{
namespace ext{

Void LambdaArrow_obj::__construct()
{
	return null();
}

LambdaArrow_obj::~LambdaArrow_obj() { }

Dynamic LambdaArrow_obj::__CreateEmpty() { return  new LambdaArrow_obj; }
hxObjectPtr<LambdaArrow_obj > LambdaArrow_obj::__new()
{  hxObjectPtr<LambdaArrow_obj > result = new LambdaArrow_obj();
	result->__construct();
	return result;}

Dynamic LambdaArrow_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<LambdaArrow_obj > result = new LambdaArrow_obj();
	result->__construct();
	return result;}

arrow::AsyncArrow LambdaArrow_obj::iter( arrow::AsyncArrow self,Dynamic f){
	return arrow::ext::lambda::IterThunk_obj::__new(self,f);
}


STATIC_DEFINE_DYNAMIC_FUNC2(LambdaArrow_obj,iter,return )

arrow::AsyncArrow LambdaArrow_obj::map( arrow::AsyncArrow self,Dynamic f){
	return arrow::ext::lambda::MapThunk_obj::__new(self,f);
}


STATIC_DEFINE_DYNAMIC_FUNC2(LambdaArrow_obj,map,return )

arrow::ext::lambda::FoldThunk LambdaArrow_obj::fold( arrow::AsyncArrow self,Dynamic first,Dynamic f){
	return arrow::ext::lambda::FoldThunk_obj::__new(first,self,f);
}


STATIC_DEFINE_DYNAMIC_FUNC3(LambdaArrow_obj,fold,return )

arrow::ext::lambda::FilterThunk LambdaArrow_obj::filter( arrow::AsyncArrow self,Dynamic f,Dynamic inverse){
	return arrow::ext::lambda::FilterThunk_obj::__new(self,f,inverse);
}


STATIC_DEFINE_DYNAMIC_FUNC3(LambdaArrow_obj,filter,return )

arrow::ext::lambda::FoldThunk LambdaArrow_obj::set( arrow::AsyncArrow self,Dynamic $t1){
	Array<Dynamic > compare = Array_obj<Dynamic >::__new().Add($t1);

	BEGIN_LOCAL_FUNC1(_Function_1,Array<Dynamic >,compare)
	Void run(List first,Dynamic x){
{
			int count = Lambda_obj::count(first);
			if (count == 0){
				first->add(x);
			}
			else{
				bool add = true;
				for(Dynamic __it = first->iterator();  __it->__Field(String(L"hasNext",7))(); ){
Dynamic item = __it->__Field(String(L"next",4))();
					{
						if (compare->__get(0) != null()){
						}
						else{
							if (x == item){
								add = false;
								break;
							}
						}
					}
;
				}
				if (add){
					first->add(x);
				}
			}
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	return arrow::ext::LambdaArrow_obj::fold(self,List_obj::__new(), Dynamic(new _Function_1(compare)));
}


STATIC_DEFINE_DYNAMIC_FUNC2(LambdaArrow_obj,set,return )


LambdaArrow_obj::LambdaArrow_obj()
{
}

Dynamic LambdaArrow_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"map",sizeof(wchar_t)*3) ) { return map_dyn(); }
		if (!memcmp(inName.__s,L"set",sizeof(wchar_t)*3) ) { return set_dyn(); }
		break;
	case 4:
		if (!memcmp(inName.__s,L"iter",sizeof(wchar_t)*4) ) { return iter_dyn(); }
		if (!memcmp(inName.__s,L"fold",sizeof(wchar_t)*4) ) { return fold_dyn(); }
		break;
	case 6:
		if (!memcmp(inName.__s,L"filter",sizeof(wchar_t)*6) ) { return filter_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_iter = __hxcpp_field_to_id("iter");
static int __id_map = __hxcpp_field_to_id("map");
static int __id_fold = __hxcpp_field_to_id("fold");
static int __id_filter = __hxcpp_field_to_id("filter");
static int __id_set = __hxcpp_field_to_id("set");


Dynamic LambdaArrow_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_iter) return iter_dyn();
	if (inFieldID==__id_map) return map_dyn();
	if (inFieldID==__id_fold) return fold_dyn();
	if (inFieldID==__id_filter) return filter_dyn();
	if (inFieldID==__id_set) return set_dyn();
	return super::__IField(inFieldID);
}

Dynamic LambdaArrow_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void LambdaArrow_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"iter",
	L"map",
	L"fold",
	L"filter",
	L"set",
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class LambdaArrow_obj::__mClass;

void LambdaArrow_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.ext.LambdaArrow",21), TCanCast<LambdaArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void LambdaArrow_obj::__boot()
{
}

} // end namespace arrow
} // end namespace ext
