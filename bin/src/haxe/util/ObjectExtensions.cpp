#include <hxcpp.h>

#ifndef INCLUDED_ArrayExtensions
#include <ArrayExtensions.h>
#endif
#ifndef INCLUDED_DynamicExtensions
#include <DynamicExtensions.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_Product
#include <Product.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Tuple2
#include <Tuple2.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED__Prelude_AbstractProduct
#include <_Prelude/AbstractProduct.h>
#endif
#ifndef INCLUDED_haxe_util_ObjectExtensions
#include <haxe/util/ObjectExtensions.h>
#endif
namespace haxe{
namespace util{

Void ObjectExtensions_obj::__construct()
{
	return null();
}

ObjectExtensions_obj::~ObjectExtensions_obj() { }

Dynamic ObjectExtensions_obj::__CreateEmpty() { return  new ObjectExtensions_obj; }
hx::ObjectPtr< ObjectExtensions_obj > ObjectExtensions_obj::__new()
{  hx::ObjectPtr< ObjectExtensions_obj > result = new ObjectExtensions_obj();
	result->__construct();
	return result;}

Dynamic ObjectExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ObjectExtensions_obj > result = new ObjectExtensions_obj();
	result->__construct();
	return result;}

Dynamic ObjectExtensions_obj::copy( Dynamic d,Dynamic __o_shallow){
bool shallow = __o_shallow.Default(true);
	HX_SOURCE_PUSH("ObjectExtensions_obj::copy");
{
		__SAFE_POINT
		struct _Function_1_1{
			inline static Dynamic Block( ){
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
		};
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",26)
		return ::haxe::util::ObjectExtensions_obj::copyTo(d,_Function_1_1::Block(),shallow);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ObjectExtensions_obj,copy,return )

Dynamic ObjectExtensions_obj::copyTo( Dynamic src,Dynamic dest,Dynamic __o_$t1){
bool $t1 = __o_$t1.Default(true);
	HX_SOURCE_PUSH("ObjectExtensions_obj::copyTo");
{
		__SAFE_POINT
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",29)
		Array< bool > shallow = Array_obj< bool >::__new().Add($t1);

		HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< bool >,shallow)
		Dynamic run(Dynamic d){
{
				__SAFE_POINT
				struct _Function_2_1{
					inline static Dynamic Block( Dynamic &d,Array< bool > &shallow){
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",31)
						::ValueType _switch_1 = (::Type_obj::_typeof(d));
						switch((_switch_1)->GetIndex()){
							case 4: {
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",32)
								return ::haxe::util::ObjectExtensions_obj::copy(d,shallow->__get(0));
							}
							;break;
							default: {
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",34)
								return d;
							}
						}
					}
				};
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",31)
				return _Function_2_1::Block(d,shallow);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",30)
		Dynamic safecopy =  Dynamic(new _Function_1_1(shallow));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",38)
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",38)
			int _g = 0;
			Array< ::String > _g1 = ::Reflect_obj::fields(src);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",38)
			while((_g < _g1->length)){
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",38)
				::String field = _g1->__get(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",38)
				++(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",39)
				Dynamic value = ::Reflect_obj::field(src,field);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",41)
				if ((dest != null())){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",41)
					dest->__SetField(field,(  (shallow->__get(0)) ? Dynamic(value) : Dynamic(safecopy(value)) ));
				}
				else{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",41)
					Dynamic();
				}
			}
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",44)
		return src;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ObjectExtensions_obj,copyTo,return )

Dynamic ObjectExtensions_obj::extendWith( Dynamic dest,Dynamic src,Dynamic __o_shallow){
bool shallow = __o_shallow.Default(true);
	HX_SOURCE_PUSH("ObjectExtensions_obj::extendWith");
{
		__SAFE_POINT
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",48)
		::haxe::util::ObjectExtensions_obj::copyTo(src,dest,null());
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",50)
		return dest;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ObjectExtensions_obj,extendWith,return )

Array< ::String > ObjectExtensions_obj::fields( Dynamic d){
	__SAFE_POINT
	HX_SOURCE_PUSH("ObjectExtensions_obj::fields")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",54)
	return ::Reflect_obj::fields(d);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ObjectExtensions_obj,fields,return )

Dynamic ObjectExtensions_obj::mapValues( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("ObjectExtensions_obj::mapValues")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",57)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",57)
	Array< Dynamic > d = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f,Array< Dynamic >,d)
	::Tuple2 run(::String name){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",59)
			return ::DynamicExtensions_obj::entuple(name,f->__get(0)(::Reflect_obj::field(d->__get(0),name)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	struct _Function_1_2{
		inline static Dynamic Block( ){
			hx::Anon __result = hx::Anon_obj::Create();
			return __result;
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",58)
	return ::haxe::util::ObjectExtensions_obj::setAll(_Function_1_1::Block(),::ArrayExtensions_obj::map(::Reflect_obj::fields(d->__get(0)),function _Function_1_2 not found.));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ObjectExtensions_obj,mapValues,return )

Dynamic ObjectExtensions_obj::set( Dynamic d,::String k,Dynamic v){
	__SAFE_POINT
	HX_SOURCE_PUSH("ObjectExtensions_obj::set")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",64)
	if ((d != null())){
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",64)
		d->__SetField(k,v);
	}
	else{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",64)
		Dynamic();
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",66)
	return d;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ObjectExtensions_obj,set,return )

Dynamic ObjectExtensions_obj::setAny( Dynamic d,::String k,Dynamic v){
	__SAFE_POINT
	HX_SOURCE_PUSH("ObjectExtensions_obj::setAny")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",70)
	if ((d != null())){
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",70)
		d->__SetField(k,v);
	}
	else{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",70)
		Dynamic();
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",72)
	return d;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ObjectExtensions_obj,setAny,return )

Dynamic ObjectExtensions_obj::setAll( Dynamic d,Dynamic fields){
	__SAFE_POINT
	HX_SOURCE_PUSH("ObjectExtensions_obj::setAll")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",76)
	for(::cpp::FastIterator_obj< ::Tuple2 > *__it = ::cpp::CreateFastIterator< ::Tuple2 >(fields->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		::Tuple2 field = __it->next();
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",77)
			if ((d != null())){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",77)
				d->__SetField(field->__Field(HX_CSTRING("_1")).Cast< ::String >(),field->__Field(HX_CSTRING("_2")));
			}
			else{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",77)
				Dynamic();
			}
		}
;
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",80)
	return d;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ObjectExtensions_obj,setAll,return )

Dynamic ObjectExtensions_obj::replaceAll( Dynamic d1,Dynamic d2,Dynamic def){
	__SAFE_POINT
	HX_SOURCE_PUSH("ObjectExtensions_obj::replaceAll")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",84)
	Array< ::String > names = ::Reflect_obj::fields(d2);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",86)
	Array< Dynamic > oldValues = ::haxe::util::ObjectExtensions_obj::extractValues(d1,names,def);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",88)
	::haxe::util::ObjectExtensions_obj::extendWith(d1,d2,null());

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Dynamic run(Dynamic o,::Tuple2 t){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",91)
			if ((o != null())){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",91)
				o->__SetField(t->__Field(HX_CSTRING("_1")).Cast< ::String >(),t->__Field(HX_CSTRING("_2")));
			}
			else{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",91)
				Dynamic();
			}
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",93)
			return o;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	struct _Function_1_2{
		inline static Dynamic Block( ){
			hx::Anon __result = hx::Anon_obj::Create();
			return __result;
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",90)
	return ::ArrayExtensions_obj::foldl(::ArrayExtensions_obj::zip(names,oldValues),_Function_1_1::Block(),function _Function_1_2 not found.);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ObjectExtensions_obj,replaceAll,return )

Dynamic ObjectExtensions_obj::setAllAny( Dynamic d,Dynamic fields){
	__SAFE_POINT
	HX_SOURCE_PUSH("ObjectExtensions_obj::setAllAny")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",98)
	for(::cpp::FastIterator_obj< ::Tuple2 > *__it = ::cpp::CreateFastIterator< ::Tuple2 >(fields->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		::Tuple2 field = __it->next();
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",99)
			if ((d != null())){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",99)
				d->__SetField(field->__Field(HX_CSTRING("_1")).Cast< ::String >(),field->__Field(HX_CSTRING("_2")));
			}
			else{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",99)
				Dynamic();
			}
		}
;
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",102)
	return d;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ObjectExtensions_obj,setAllAny,return )

Dynamic ObjectExtensions_obj::replaceAllAny( Dynamic d1,Dynamic d2,Dynamic def){
	__SAFE_POINT
	HX_SOURCE_PUSH("ObjectExtensions_obj::replaceAllAny")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",106)
	Array< ::String > names = ::Reflect_obj::fields(d2);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",108)
	Array< Dynamic > oldValues = ::haxe::util::ObjectExtensions_obj::extractValues(d1,names,def);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",110)
	::haxe::util::ObjectExtensions_obj::extendWith(d1,d2,null());

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Dynamic run(Dynamic o,::Tuple2 t){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",113)
			if ((o != null())){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",113)
				o->__SetField(t->__Field(HX_CSTRING("_1")).Cast< ::String >(),t->__Field(HX_CSTRING("_2")));
			}
			else{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",113)
				Dynamic();
			}
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",115)
			return o;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	struct _Function_1_2{
		inline static Dynamic Block( ){
			hx::Anon __result = hx::Anon_obj::Create();
			return __result;
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",112)
	return ::ArrayExtensions_obj::foldl(::ArrayExtensions_obj::zip(names,oldValues),_Function_1_1::Block(),function _Function_1_2 not found.);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ObjectExtensions_obj,replaceAllAny,return )

::Option ObjectExtensions_obj::get( Dynamic d,::String k){
	__SAFE_POINT
	HX_SOURCE_PUSH("ObjectExtensions_obj::get")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",120)
	return (  (::Reflect_obj::hasField(d,k)) ? ::Option(::Option_obj::Some(::Reflect_obj::field(d,k))) : ::Option(::Option_obj::None) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ObjectExtensions_obj,get,return )

::Option ObjectExtensions_obj::getAny( Dynamic d,::String k){
	__SAFE_POINT
	HX_SOURCE_PUSH("ObjectExtensions_obj::getAny")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",124)
	return (  (::Reflect_obj::hasField(d,k)) ? ::Option(::Option_obj::Some(::Reflect_obj::field(d,k))) : ::Option(::Option_obj::None) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ObjectExtensions_obj,getAny,return )

Array< ::Tuple2 > ObjectExtensions_obj::extractAll( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("ObjectExtensions_obj::extractAll")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",127)
	Array< Dynamic > d = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,d)
	::Tuple2 run(::String name){
		__SAFE_POINT;
		return ::DynamicExtensions_obj::entuple(name,::Reflect_obj::field(d->__get(0),name));
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",128)
	return ::ArrayExtensions_obj::map(::Reflect_obj::fields(d->__get(0)), Dynamic(new _Function_1_1(d)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ObjectExtensions_obj,extractAll,return )

Array< ::Tuple2 > ObjectExtensions_obj::extractAllAny( Dynamic d){
	__SAFE_POINT
	HX_SOURCE_PUSH("ObjectExtensions_obj::extractAllAny")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",132)
	return ::haxe::util::ObjectExtensions_obj::extractAll(d);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ObjectExtensions_obj,extractAllAny,return )

Array< Dynamic > ObjectExtensions_obj::extractValuesAny( Dynamic d,Dynamic names,Dynamic def){
	__SAFE_POINT
	HX_SOURCE_PUSH("ObjectExtensions_obj::extractValuesAny")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",136)
	return ::haxe::util::ObjectExtensions_obj::extractValues(d,names,def);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ObjectExtensions_obj,extractValuesAny,return )

Array< Dynamic > ObjectExtensions_obj::extractValues( Dynamic d,Dynamic names,Dynamic def){
	__SAFE_POINT
	HX_SOURCE_PUSH("ObjectExtensions_obj::extractValues")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",140)
	Array< Dynamic > result = Array_obj< Dynamic >::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",142)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(names->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		::String field = __it->next();
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",143)
			Dynamic value = ::Reflect_obj::field(d,field);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",145)
			result->push((  ((value != null())) ? Dynamic(value) : Dynamic(def) ));
		}
;
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",148)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ObjectExtensions_obj,extractValues,return )

Dynamic ObjectExtensions_obj::iterator( Dynamic d){
	__SAFE_POINT
	HX_SOURCE_PUSH("ObjectExtensions_obj::iterator")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/ObjectExtensions.hx",152)
	return ::Reflect_obj::fields(d)->iterator();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ObjectExtensions_obj,iterator,return )


ObjectExtensions_obj::ObjectExtensions_obj()
{
}

void ObjectExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ObjectExtensions);
	HX_MARK_END_CLASS();
}

Dynamic ObjectExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"copyTo") ) { return copyTo_dyn(); }
		if (HX_FIELD_EQ(inName,"fields") ) { return fields_dyn(); }
		if (HX_FIELD_EQ(inName,"setAny") ) { return setAny_dyn(); }
		if (HX_FIELD_EQ(inName,"setAll") ) { return setAll_dyn(); }
		if (HX_FIELD_EQ(inName,"getAny") ) { return getAny_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mapValues") ) { return mapValues_dyn(); }
		if (HX_FIELD_EQ(inName,"setAllAny") ) { return setAllAny_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"extendWith") ) { return extendWith_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceAll") ) { return replaceAll_dyn(); }
		if (HX_FIELD_EQ(inName,"extractAll") ) { return extractAll_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"replaceAllAny") ) { return replaceAllAny_dyn(); }
		if (HX_FIELD_EQ(inName,"extractAllAny") ) { return extractAllAny_dyn(); }
		if (HX_FIELD_EQ(inName,"extractValues") ) { return extractValues_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"extractValuesAny") ) { return extractValuesAny_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ObjectExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ObjectExtensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("copy"),
	HX_CSTRING("copyTo"),
	HX_CSTRING("extendWith"),
	HX_CSTRING("fields"),
	HX_CSTRING("mapValues"),
	HX_CSTRING("set"),
	HX_CSTRING("setAny"),
	HX_CSTRING("setAll"),
	HX_CSTRING("replaceAll"),
	HX_CSTRING("setAllAny"),
	HX_CSTRING("replaceAllAny"),
	HX_CSTRING("get"),
	HX_CSTRING("getAny"),
	HX_CSTRING("extractAll"),
	HX_CSTRING("extractAllAny"),
	HX_CSTRING("extractValuesAny"),
	HX_CSTRING("extractValues"),
	HX_CSTRING("iterator"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ObjectExtensions_obj::__mClass;

void ObjectExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.util.ObjectExtensions"), hx::TCanCast< ObjectExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ObjectExtensions_obj::__boot()
{
}

} // end namespace haxe
} // end namespace util
