#include <hxObject.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif

Void Lambda_obj::__construct()
{
	return null();
}

Lambda_obj::~Lambda_obj() { }

Dynamic Lambda_obj::__CreateEmpty() { return  new Lambda_obj; }
hxObjectPtr<Lambda_obj > Lambda_obj::__new()
{  hxObjectPtr<Lambda_obj > result = new Lambda_obj();
	result->__construct();
	return result;}

Dynamic Lambda_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Lambda_obj > result = new Lambda_obj();
	result->__construct();
	return result;}

Array<Dynamic > Lambda_obj::array( Dynamic it){
	Array<Dynamic > a = Array_obj<Dynamic >::__new();
	for(Dynamic __it = it->__Field(String(L"iterator",8))();  __it->__Field(String(L"hasNext",7))(); ){
Dynamic i = __it->__Field(String(L"next",4))();
		a->push(i);
	}
	return a;
}


STATIC_DEFINE_DYNAMIC_FUNC1(Lambda_obj,array,return )

List Lambda_obj::list( Dynamic it){
	List l = List_obj::__new();
	for(Dynamic __it = it->__Field(String(L"iterator",8))();  __it->__Field(String(L"hasNext",7))(); ){
Dynamic i = __it->__Field(String(L"next",4))();
		l->add(i);
	}
	return l;
}


STATIC_DEFINE_DYNAMIC_FUNC1(Lambda_obj,list,return )

List Lambda_obj::map( Dynamic it,Dynamic f){
	List l = List_obj::__new();
	for(Dynamic __it = it->__Field(String(L"iterator",8))();  __it->__Field(String(L"hasNext",7))(); ){
Dynamic x = __it->__Field(String(L"next",4))();
		l->add(f(x));
	}
	return l;
}


STATIC_DEFINE_DYNAMIC_FUNC2(Lambda_obj,map,return )

List Lambda_obj::mapi( Dynamic it,Dynamic f){
	List l = List_obj::__new();
	int i = 0;
	for(Dynamic __it = it->__Field(String(L"iterator",8))();  __it->__Field(String(L"hasNext",7))(); ){
Dynamic x = __it->__Field(String(L"next",4))();
		l->add(f(i++,x));
	}
	return l;
}


STATIC_DEFINE_DYNAMIC_FUNC2(Lambda_obj,mapi,return )

bool Lambda_obj::has( Dynamic it,Dynamic elt,Dynamic cmp){
	if (cmp == null()){
		for(Dynamic __it = it->__Field(String(L"iterator",8))();  __it->__Field(String(L"hasNext",7))(); ){
Dynamic x = __it->__Field(String(L"next",4))();
			if (x == elt)
				return true;
		}
	}
	else{
		for(Dynamic __it = it->__Field(String(L"iterator",8))();  __it->__Field(String(L"hasNext",7))(); ){
Dynamic x = __it->__Field(String(L"next",4))();
			if (cmp(x,elt))
				return true;
		}
	}
	return false;
}


STATIC_DEFINE_DYNAMIC_FUNC3(Lambda_obj,has,return )

bool Lambda_obj::exists( Dynamic it,Dynamic f){
	for(Dynamic __it = it->__Field(String(L"iterator",8))();  __it->__Field(String(L"hasNext",7))(); ){
Dynamic x = __it->__Field(String(L"next",4))();
		if (f(x))
			return true;
	}
	return false;
}


STATIC_DEFINE_DYNAMIC_FUNC2(Lambda_obj,exists,return )

bool Lambda_obj::foreach( Dynamic it,Dynamic f){
	for(Dynamic __it = it->__Field(String(L"iterator",8))();  __it->__Field(String(L"hasNext",7))(); ){
Dynamic x = __it->__Field(String(L"next",4))();
		if (!f(x))
			return false;
	}
	return true;
}


STATIC_DEFINE_DYNAMIC_FUNC2(Lambda_obj,foreach,return )

Void Lambda_obj::iter( Dynamic it,Dynamic f){
{
		for(Dynamic __it = it->__Field(String(L"iterator",8))();  __it->__Field(String(L"hasNext",7))(); ){
Dynamic x = __it->__Field(String(L"next",4))();
			f(x);
		}
	}
return null();
}


STATIC_DEFINE_DYNAMIC_FUNC2(Lambda_obj,iter,(void))

List Lambda_obj::filter( Dynamic it,Dynamic f){
	List l = List_obj::__new();
	for(Dynamic __it = it->__Field(String(L"iterator",8))();  __it->__Field(String(L"hasNext",7))(); ){
Dynamic x = __it->__Field(String(L"next",4))();
		if (f(x))
			l->add(x);
	}
	return l;
}


STATIC_DEFINE_DYNAMIC_FUNC2(Lambda_obj,filter,return )

Dynamic Lambda_obj::fold( Dynamic it,Dynamic f,Dynamic first){
	for(Dynamic __it = it->__Field(String(L"iterator",8))();  __it->__Field(String(L"hasNext",7))(); ){
Dynamic x = __it->__Field(String(L"next",4))();
		first = f(x,first);
	}
	return first;
}


STATIC_DEFINE_DYNAMIC_FUNC3(Lambda_obj,fold,return )

int Lambda_obj::count( Dynamic it){
	int n = 0;
	for(Dynamic __it = it->__Field(String(L"iterator",8))();  __it->__Field(String(L"hasNext",7))(); ){
Dynamic _ = __it->__Field(String(L"next",4))();
		++n;
	}
	return n;
}


STATIC_DEFINE_DYNAMIC_FUNC1(Lambda_obj,count,return )

bool Lambda_obj::empty( Dynamic it){
	return !it->__Field(String(L"iterator",8))()->__Field(String(L"hasNext",7))();
}


STATIC_DEFINE_DYNAMIC_FUNC1(Lambda_obj,empty,return )


Lambda_obj::Lambda_obj()
{
}

Dynamic Lambda_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"map",sizeof(wchar_t)*3) ) { return map_dyn(); }
		if (!memcmp(inName.__s,L"has",sizeof(wchar_t)*3) ) { return has_dyn(); }
		break;
	case 4:
		if (!memcmp(inName.__s,L"list",sizeof(wchar_t)*4) ) { return list_dyn(); }
		if (!memcmp(inName.__s,L"mapi",sizeof(wchar_t)*4) ) { return mapi_dyn(); }
		if (!memcmp(inName.__s,L"iter",sizeof(wchar_t)*4) ) { return iter_dyn(); }
		if (!memcmp(inName.__s,L"fold",sizeof(wchar_t)*4) ) { return fold_dyn(); }
		break;
	case 5:
		if (!memcmp(inName.__s,L"array",sizeof(wchar_t)*5) ) { return array_dyn(); }
		if (!memcmp(inName.__s,L"count",sizeof(wchar_t)*5) ) { return count_dyn(); }
		if (!memcmp(inName.__s,L"empty",sizeof(wchar_t)*5) ) { return empty_dyn(); }
		break;
	case 6:
		if (!memcmp(inName.__s,L"exists",sizeof(wchar_t)*6) ) { return exists_dyn(); }
		if (!memcmp(inName.__s,L"filter",sizeof(wchar_t)*6) ) { return filter_dyn(); }
		break;
	case 7:
		if (!memcmp(inName.__s,L"foreach",sizeof(wchar_t)*7) ) { return foreach_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_array = __hxcpp_field_to_id("array");
static int __id_list = __hxcpp_field_to_id("list");
static int __id_map = __hxcpp_field_to_id("map");
static int __id_mapi = __hxcpp_field_to_id("mapi");
static int __id_has = __hxcpp_field_to_id("has");
static int __id_exists = __hxcpp_field_to_id("exists");
static int __id_foreach = __hxcpp_field_to_id("foreach");
static int __id_iter = __hxcpp_field_to_id("iter");
static int __id_filter = __hxcpp_field_to_id("filter");
static int __id_fold = __hxcpp_field_to_id("fold");
static int __id_count = __hxcpp_field_to_id("count");
static int __id_empty = __hxcpp_field_to_id("empty");


Dynamic Lambda_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_array) return array_dyn();
	if (inFieldID==__id_list) return list_dyn();
	if (inFieldID==__id_map) return map_dyn();
	if (inFieldID==__id_mapi) return mapi_dyn();
	if (inFieldID==__id_has) return has_dyn();
	if (inFieldID==__id_exists) return exists_dyn();
	if (inFieldID==__id_foreach) return foreach_dyn();
	if (inFieldID==__id_iter) return iter_dyn();
	if (inFieldID==__id_filter) return filter_dyn();
	if (inFieldID==__id_fold) return fold_dyn();
	if (inFieldID==__id_count) return count_dyn();
	if (inFieldID==__id_empty) return empty_dyn();
	return super::__IField(inFieldID);
}

Dynamic Lambda_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Lambda_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"array",
	L"list",
	L"map",
	L"mapi",
	L"has",
	L"exists",
	L"foreach",
	L"iter",
	L"filter",
	L"fold",
	L"count",
	L"empty",
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class Lambda_obj::__mClass;

void Lambda_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"Lambda",6), TCanCast<Lambda_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Lambda_obj::__boot()
{
}

