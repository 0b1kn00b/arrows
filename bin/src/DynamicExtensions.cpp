#include <hxcpp.h>

#ifndef INCLUDED_DynamicExtensions
#include <DynamicExtensions.h>
#endif
#ifndef INCLUDED_Product
#include <Product.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Tuple2
#include <Tuple2.h>
#endif
#ifndef INCLUDED__Prelude_AbstractProduct
#include <_Prelude/AbstractProduct.h>
#endif
#ifndef INCLUDED_haxe_data_collections_Collection
#include <haxe/data/collections/Collection.h>
#endif
#ifndef INCLUDED_haxe_data_collections_Map
#include <haxe/data/collections/Map.h>
#endif
#ifndef INCLUDED_haxe_functional_Foldable
#include <haxe/functional/Foldable.h>
#endif
#ifndef INCLUDED_haxe_functional_PartialFunction1
#include <haxe/functional/PartialFunction1.h>
#endif

Void DynamicExtensions_obj::__construct()
{
	return null();
}

DynamicExtensions_obj::~DynamicExtensions_obj() { }

Dynamic DynamicExtensions_obj::__CreateEmpty() { return  new DynamicExtensions_obj; }
hx::ObjectPtr< DynamicExtensions_obj > DynamicExtensions_obj::__new()
{  hx::ObjectPtr< DynamicExtensions_obj > result = new DynamicExtensions_obj();
	result->__construct();
	return result;}

Dynamic DynamicExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DynamicExtensions_obj > result = new DynamicExtensions_obj();
	result->__construct();
	return result;}

Dynamic DynamicExtensions_obj::withEffect( Dynamic t,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("DynamicExtensions_obj::withEffect")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",28)
	f(t);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",30)
	return t;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DynamicExtensions_obj,withEffect,return )

Dynamic DynamicExtensions_obj::withEffectP( Dynamic a,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("DynamicExtensions_obj::withEffectP")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",33)
	f(a);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",35)
	return a;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DynamicExtensions_obj,withEffectP,return )

Dynamic DynamicExtensions_obj::into( Dynamic a,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("DynamicExtensions_obj::into")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",38)
	return f(a);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DynamicExtensions_obj,into,return )

bool DynamicExtensions_obj::isInstanceOf( Dynamic o,Dynamic c){
	__SAFE_POINT
	HX_SOURCE_PUSH("DynamicExtensions_obj::isInstanceOf")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",41)
	return ::Std_obj::is(o,c);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DynamicExtensions_obj,isInstanceOf,return )

::Tuple2 DynamicExtensions_obj::entuple( Dynamic a,Dynamic b){
	__SAFE_POINT
	HX_SOURCE_PUSH("DynamicExtensions_obj::entuple")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",44)
	return ::Tuple2_obj::create(a,b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DynamicExtensions_obj,entuple,return )

Dynamic DynamicExtensions_obj::memoize( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("DynamicExtensions_obj::memoize")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",46)
	Array< Dynamic > t = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",47)
	Array< bool > evaled = Array_obj< bool >::__new().Add(false);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",48)
	Array< Dynamic > result = Array_obj< Dynamic >::__new().Add(null());

	HX_BEGIN_LOCAL_FUNC3(_Function_1_1,Array< Dynamic >,result,Array< Dynamic >,t,Array< bool >,evaled)
	Dynamic run(){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",51)
			if (!(evaled->__get(0))){
				HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",51)
				evaled[0] = true;
				HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",51)
				result[0] = t->__get(0)();
			}
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",53)
			return result->__get(0);
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",50)
	return  Dynamic(new _Function_1_1(result,t,evaled));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DynamicExtensions_obj,memoize,return )

Dynamic DynamicExtensions_obj::toThunk( Dynamic $t1){
	HX_SOURCE_PUSH("DynamicExtensions_obj::toThunk")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",56)
	Array< Dynamic > t = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,t)
	Dynamic run(){
{
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",58)
			return t->__get(0);
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",57)
	return  Dynamic(new _Function_1_1(t));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DynamicExtensions_obj,toThunk,return )

Dynamic DynamicExtensions_obj::toConstantFunction( Dynamic $t1){
	HX_SOURCE_PUSH("DynamicExtensions_obj::toConstantFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",61)
	Array< Dynamic > t = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,t)
	Dynamic run(Dynamic s){
{
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",63)
			return t->__get(0);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",62)
	return  Dynamic(new _Function_1_1(t));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DynamicExtensions_obj,toConstantFunction,return )

::haxe::data::collections::Map DynamicExtensions_obj::toMap( Dynamic d){
	__SAFE_POINT
	HX_SOURCE_PUSH("DynamicExtensions_obj::toMap")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",67)
	::haxe::data::collections::Map map = ::haxe::data::collections::Map_obj::create(null(),null(),null(),null(),null(),null(),null(),null());
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",69)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",69)
		int _g = 0;
		Array< ::String > _g1 = ::Reflect_obj::fields(d);
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",69)
		while((_g < _g1->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",69)
			::String field = _g1->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",69)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",70)
			Dynamic value = ::Reflect_obj::field(d,field);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",72)
			map = map->set(field,value);
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",75)
	return map;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DynamicExtensions_obj,toMap,return )


DynamicExtensions_obj::DynamicExtensions_obj()
{
}

void DynamicExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DynamicExtensions);
	HX_MARK_END_CLASS();
}

Dynamic DynamicExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"into") ) { return into_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toMap") ) { return toMap_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"entuple") ) { return entuple_dyn(); }
		if (HX_FIELD_EQ(inName,"memoize") ) { return memoize_dyn(); }
		if (HX_FIELD_EQ(inName,"toThunk") ) { return toThunk_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"withEffect") ) { return withEffect_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"withEffectP") ) { return withEffectP_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isInstanceOf") ) { return isInstanceOf_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"toConstantFunction") ) { return toConstantFunction_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic DynamicExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void DynamicExtensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("withEffect"),
	HX_CSTRING("withEffectP"),
	HX_CSTRING("into"),
	HX_CSTRING("isInstanceOf"),
	HX_CSTRING("entuple"),
	HX_CSTRING("memoize"),
	HX_CSTRING("toThunk"),
	HX_CSTRING("toConstantFunction"),
	HX_CSTRING("toMap"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class DynamicExtensions_obj::__mClass;

void DynamicExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("DynamicExtensions"), hx::TCanCast< DynamicExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void DynamicExtensions_obj::__boot()
{
}

