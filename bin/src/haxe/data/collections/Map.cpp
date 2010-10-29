#include <hxcpp.h>

#ifndef INCLUDED_ArrayExtensions
#include <ArrayExtensions.h>
#endif
#ifndef INCLUDED_IterableExtensions
#include <IterableExtensions.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_OptionExtensions
#include <OptionExtensions.h>
#endif
#ifndef INCLUDED_Product
#include <Product.h>
#endif
#ifndef INCLUDED_Stax
#include <Stax.h>
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
#ifndef INCLUDED_haxe_data_collections_Set
#include <haxe/data/collections/Set.h>
#endif
#ifndef INCLUDED_haxe_functional_Foldable
#include <haxe/functional/Foldable.h>
#endif
#ifndef INCLUDED_haxe_functional_FoldableExtensions
#include <haxe/functional/FoldableExtensions.h>
#endif
#ifndef INCLUDED_haxe_functional_PartialFunction1
#include <haxe/functional/PartialFunction1.h>
#endif
#ifndef INCLUDED_haxe_functional_PartialFunction1ImplExtensions
#include <haxe/functional/PartialFunction1ImplExtensions.h>
#endif
#ifndef INCLUDED_haxe_functional__PartialFunctionExtensions_PartialFunction1Impl
#include <haxe/functional/_PartialFunctionExtensions/PartialFunction1Impl.h>
#endif
#ifndef INCLUDED_haxe_text_json_JValue
#include <haxe/text/json/JValue.h>
#endif
namespace haxe{
namespace data{
namespace collections{

Void Map_obj::__construct(Dynamic korder,Dynamic kequal,Dynamic khash,Dynamic kshow,Dynamic vorder,Dynamic vequal,Dynamic vhash,Dynamic vshow,Array< Array< ::Tuple2 > > buckets,int size)
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",67)
	Array< ::haxe::data::collections::Map > self = Array_obj< ::haxe::data::collections::Map >::__new().Add(this);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",69)
	this->_keyOrder = korder;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",69)
	this->_keyEqual = kequal;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",69)
	this->_keyHash = khash;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",69)
	this->_keyShow = kshow;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",70)
	this->_valueOrder = vorder;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",70)
	this->_valueEqual = vequal;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",70)
	this->_valueHash = vhash;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",70)
	this->_valueShow = vshow;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",72)
	this->_size = size;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",73)
	this->_buckets = buckets;

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::haxe::data::collections::Map >,self)
	Dynamic run(Dynamic k){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( Array< ::haxe::data::collections::Map > &self,Dynamic &k){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",77)
					::Option _switch_1 = (self[0]->get(k));
					switch((_switch_1)->GetIndex()){
						case 1: {
							Dynamic v = _switch_1->__Param(0);
{
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",78)
								return v;
							}
						}
						;break;
						case 0: {
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",79)
							return ::Stax_obj::error(HX_CSTRING("No value for this key"));
						}
						;break;
						default: {
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",77)
							return null();
						}
					}
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",77)
			return _Function_2_1::Block(self,k);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",74)
	this->_pf = ::haxe::functional::PartialFunction1ImplExtensions_obj::toPartialFunction(Array_obj< ::Tuple2 >::__new().Add(::Tuple2_obj::create(this->containsKey_dyn(), Dynamic(new _Function_1_1(self)))));
}
;
	return null();
}

Map_obj::~Map_obj() { }

Dynamic Map_obj::__CreateEmpty() { return  new Map_obj; }
hx::ObjectPtr< Map_obj > Map_obj::__new(Dynamic korder,Dynamic kequal,Dynamic khash,Dynamic kshow,Dynamic vorder,Dynamic vequal,Dynamic vhash,Dynamic vshow,Array< Array< ::Tuple2 > > buckets,int size)
{  hx::ObjectPtr< Map_obj > result = new Map_obj();
	result->__construct(korder,kequal,khash,kshow,vorder,vequal,vhash,vshow,buckets,size);
	return result;}

Dynamic Map_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Map_obj > result = new Map_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9]);
	return result;}

hx::Object *Map_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::haxe::functional::PartialFunction1_obj)) return operator ::haxe::functional::PartialFunction1_obj *();
	if (inType==typeid( ::haxe::data::collections::Collection_obj)) return operator ::haxe::data::collections::Collection_obj *();
	return super::__ToInterface(inType);
}

bool Map_obj::isDefinedAt( Dynamic k){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::isDefinedAt")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",86)
	return this->_pf->isDefinedAt(k);
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,isDefinedAt,return )

::haxe::functional::PartialFunction1 Map_obj::orElse( ::haxe::functional::PartialFunction1 that){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::orElse")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",90)
	return this->_pf->orElse(that);
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,orElse,return )

::haxe::functional::PartialFunction1 Map_obj::orAlways( Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::orAlways")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",94)
	return this->_pf->orAlways(f);
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,orAlways,return )

::haxe::functional::PartialFunction1 Map_obj::orAlwaysC( Dynamic v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::orAlwaysC")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",98)
	return this->_pf->orAlwaysC(v);
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,orAlwaysC,return )

Dynamic Map_obj::call( Dynamic k){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::call")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",102)
	return this->_pf->__Field(HX_CSTRING("call"))(k);
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,call,return )

Dynamic Map_obj::toFunction( ){
	HX_SOURCE_PUSH("Map_obj::toFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",106)
	return this->get_dyn();
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,toFunction,return )

::haxe::functional::Foldable Map_obj::empty( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::empty")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",110)
	return ::haxe::data::collections::Map_obj::create(null(),null(),null(),null(),null(),null(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,empty,return )

::haxe::data::collections::Map Map_obj::append( ::Tuple2 t){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::append")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",114)
	return this->add(t);
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,append,return )

Dynamic Map_obj::foldl( Dynamic z,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::foldl")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",118)
	Dynamic acc = z;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",120)
	for(::cpp::FastIterator_obj< ::Tuple2 > *__it = ::cpp::CreateFastIterator< ::Tuple2 >(this->__Field(HX_CSTRING("entries"))()->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		::Tuple2 e = __it->next();
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",121)
			acc = f(acc,e);
		}
;
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",124)
	return acc;
}


HX_DEFINE_DYNAMIC_FUNC2(Map_obj,foldl,return )

::haxe::data::collections::Map Map_obj::set( Dynamic k,Dynamic v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::set")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",128)
	return this->add(::Tuple2_obj::create(k,v));
}


HX_DEFINE_DYNAMIC_FUNC2(Map_obj,set,return )

::haxe::data::collections::Map Map_obj::add( ::Tuple2 t){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::add")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",132)
	Dynamic k = t->__Field(HX_CSTRING("_1"));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",133)
	Dynamic v = t->__Field(HX_CSTRING("_2"));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",134)
	int bucket = this->bucketFor(k);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",136)
	Array< ::Tuple2 > list = this->_buckets->__get(bucket);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",138)
	if ((null() == this->_keyEqual_dyn()))
		this->_keyEqual = ::Stax_obj::getEqualFor(t->__Field(HX_CSTRING("_1")));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",139)
	if ((null() == this->_valueEqual_dyn()))
		this->_valueEqual = ::Stax_obj::getEqualFor(t->__Field(HX_CSTRING("_2")));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",141)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",141)
		int _g1 = 0;
		int _g = list->length;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",141)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",141)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",142)
			::Tuple2 entry = list->__get(i);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",144)
			if (this->_keyEqual(entry->__Field(HX_CSTRING("_1")),k)){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",145)
				if (!(this->_valueEqual(entry->__Field(HX_CSTRING("_2")),v))){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",146)
					::haxe::data::collections::Map newMap = this->copyWithMod(bucket);
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",148)
					newMap->_buckets->__get(bucket)[i] = t;
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",150)
					return newMap;
				}
				else{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",153)
					return this;
				}
			}
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",158)
	::haxe::data::collections::Map newMap = this->copyWithMod(bucket);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",160)
	newMap->_buckets[bucket]->push(t);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",162)
	hx::AddEq(newMap->_size,1);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",164)
	if ((newMap->load() > ::haxe::data::collections::Map_obj::MaxLoad)){
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",165)
		newMap->rebalance();
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",168)
	return newMap;
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,add,return )

::haxe::data::collections::Map Map_obj::addAll( Dynamic i){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::addAll")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",172)
	::haxe::data::collections::Map map = this;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",174)
	for(::cpp::FastIterator_obj< ::Tuple2 > *__it = ::cpp::CreateFastIterator< ::Tuple2 >(i->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		::Tuple2 t = __it->next();
		map = map->add(t);
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",176)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,addAll,return )

::haxe::data::collections::Map Map_obj::remove( ::Tuple2 t){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::remove")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",180)
	return this->removeInternal(t->__Field(HX_CSTRING("_1")),t->__Field(HX_CSTRING("_2")),false);
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,remove,return )

::haxe::data::collections::Map Map_obj::removeAll( Dynamic i){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::removeAll")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",184)
	::haxe::data::collections::Map map = this;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",186)
	for(::cpp::FastIterator_obj< ::Tuple2 > *__it = ::cpp::CreateFastIterator< ::Tuple2 >(i->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		::Tuple2 t = __it->next();
		map = map->remove(t);
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",188)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,removeAll,return )

::haxe::data::collections::Map Map_obj::removeByKey( Dynamic k){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::removeByKey")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",192)
	return this->removeInternal(k,null(),true);
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,removeByKey,return )

::haxe::data::collections::Map Map_obj::removeAllByKey( Dynamic i){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::removeAllByKey")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",196)
	::haxe::data::collections::Map map = this;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",198)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(i->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		Dynamic k = __it->next();
		map = map->removeByKey(k);
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",200)
	return map;
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,removeAllByKey,return )

::Option Map_obj::get( Dynamic k){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::get")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",204)
	Dynamic ke = this->__Field(HX_CSTRING("getKeyEqual"))();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",205)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",205)
		int _g = 0;
		Array< ::Tuple2 > _g1 = this->listFor(k);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",205)
		while((_g < _g1->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",205)
			::Tuple2 e = _g1->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",205)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",206)
			if (ke(e->__Field(HX_CSTRING("_1")),k)){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",207)
				return ::Option_obj::Some(e->__Field(HX_CSTRING("_2")));
			}
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",210)
	return ::Option_obj::None;
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,get,return )

Dynamic Map_obj::getOrElse( Dynamic k,Dynamic def){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::getOrElse")
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::data::collections::Map_obj *__this,Dynamic &k,Dynamic &def){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",214)
			::Option _switch_2 = (__this->get(k));
			switch((_switch_2)->GetIndex()){
				case 1: {
					Dynamic v = _switch_2->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",215)
						return v;
					}
				}
				;break;
				case 0: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",216)
					return def();
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",214)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",214)
	return _Function_1_1::Block(this,k,def);
}


HX_DEFINE_DYNAMIC_FUNC2(Map_obj,getOrElse,return )

Dynamic Map_obj::getOrElseC( Dynamic k,Dynamic c){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::getOrElseC")
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::data::collections::Map_obj *__this,Dynamic &k,Dynamic &c){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",221)
			::Option _switch_3 = (__this->get(k));
			switch((_switch_3)->GetIndex()){
				case 1: {
					Dynamic v = _switch_3->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",222)
						return v;
					}
				}
				;break;
				case 0: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",223)
					return c;
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",221)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",221)
	return _Function_1_1::Block(this,k,c);
}


HX_DEFINE_DYNAMIC_FUNC2(Map_obj,getOrElseC,return )

bool Map_obj::contains( ::Tuple2 t){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::contains")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",228)
	Dynamic ke = this->__Field(HX_CSTRING("getKeyEqual"))();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",229)
	Dynamic ve = this->__Field(HX_CSTRING("getValueEqual"))();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",230)
	for(::cpp::FastIterator_obj< ::Tuple2 > *__it = ::cpp::CreateFastIterator< ::Tuple2 >(this->__Field(HX_CSTRING("entries"))()->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		::Tuple2 e = __it->next();
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",231)
			if ((bool(ke(e->__Field(HX_CSTRING("_1")),t->__Field(HX_CSTRING("_1")))) && bool(ve(t->__Field(HX_CSTRING("_2")),t->__Field(HX_CSTRING("_2"))))))
				return true;
		}
;
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",234)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,contains,return )

bool Map_obj::containsKey( Dynamic k){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::containsKey")
	struct _Function_1_1{
		inline static bool Block( ::haxe::data::collections::Map_obj *__this,Dynamic &k){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",238)
			::Option _switch_4 = (__this->get(k));
			switch((_switch_4)->GetIndex()){
				case 0: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",239)
					return false;
				}
				;break;
				case 1: {
					Dynamic v = _switch_4->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",240)
						return true;
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",238)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",238)
	return _Function_1_1::Block(this,k);
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,containsKey,return )

Dynamic Map_obj::keys( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::keys")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",245)
	Array< ::haxe::data::collections::Map > self = Array_obj< ::haxe::data::collections::Map >::__new().Add(this);
	struct _Function_1_1{
		inline static Dynamic Block( Array< ::haxe::data::collections::Map > &self){
			hx::Anon __result = hx::Anon_obj::Create();

			HX_BEGIN_LOCAL_FUNC1(_Function_2_1,Array< ::haxe::data::collections::Map >,self)
			Dynamic run(){
{
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",249)
					Array< Dynamic > entryIterator = Array_obj< Dynamic >::__new().Add(self[0]->__Field(HX_CSTRING("entries"))()->__Field(HX_CSTRING("iterator"))());
					struct _Function_3_1{
						inline static Dynamic Block( Array< Dynamic > &entryIterator){
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("hasNext") , entryIterator[0]->__Field(HX_CSTRING("hasNext")));

							HX_BEGIN_LOCAL_FUNC1(_Function_4_1,Array< Dynamic >,entryIterator)
							Dynamic run(){
{
									__SAFE_POINT
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",255)
									return entryIterator[0]->__Field(HX_CSTRING("next"))()->__Field(HX_CSTRING("_1"));
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							__result->Add(HX_CSTRING("next") ,  Dynamic(new _Function_4_1(entryIterator)));
							return __result;
						}
					};
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",251)
					return _Function_3_1::Block(entryIterator);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0(return)

			__result->Add(HX_CSTRING("iterator") ,  Dynamic(new _Function_2_1(self)));
			return __result;
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",247)
	return _Function_1_1::Block(self);
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,keys,return )

::haxe::data::collections::Set Map_obj::keySet( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::keySet")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",263)
	return ::haxe::data::collections::Set_obj::create(this->_keyOrder_dyn(),this->_keyEqual_dyn(),this->_keyHash_dyn(),this->_keyShow_dyn())->addAll(this->__Field(HX_CSTRING("keys"))());
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,keySet,return )

Dynamic Map_obj::values( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::values")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",267)
	Array< ::haxe::data::collections::Map > self = Array_obj< ::haxe::data::collections::Map >::__new().Add(this);
	struct _Function_1_1{
		inline static Dynamic Block( Array< ::haxe::data::collections::Map > &self){
			hx::Anon __result = hx::Anon_obj::Create();

			HX_BEGIN_LOCAL_FUNC1(_Function_2_1,Array< ::haxe::data::collections::Map >,self)
			Dynamic run(){
{
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",271)
					Array< Dynamic > entryIterator = Array_obj< Dynamic >::__new().Add(self[0]->__Field(HX_CSTRING("entries"))()->__Field(HX_CSTRING("iterator"))());
					struct _Function_3_1{
						inline static Dynamic Block( Array< Dynamic > &entryIterator){
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("hasNext") , entryIterator[0]->__Field(HX_CSTRING("hasNext")));

							HX_BEGIN_LOCAL_FUNC1(_Function_4_1,Array< Dynamic >,entryIterator)
							Dynamic run(){
{
									__SAFE_POINT
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",277)
									return entryIterator[0]->__Field(HX_CSTRING("next"))()->__Field(HX_CSTRING("_2"));
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							__result->Add(HX_CSTRING("next") ,  Dynamic(new _Function_4_1(entryIterator)));
							return __result;
						}
					};
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",273)
					return _Function_3_1::Block(entryIterator);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0(return)

			__result->Add(HX_CSTRING("iterator") ,  Dynamic(new _Function_2_1(self)));
			return __result;
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",269)
	return _Function_1_1::Block(self);
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,values,return )

Dynamic Map_obj::iterator( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::iterator")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",285)
	return ::haxe::functional::FoldableExtensions_obj::iterator(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,iterator,return )

int Map_obj::compare( ::haxe::data::collections::Map other){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::compare")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",289)
	Array< ::Tuple2 > a1 = ::IterableExtensions_obj::toArray(this);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",290)
	Array< ::Tuple2 > a2 = ::IterableExtensions_obj::toArray(other);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",292)
	Array< Dynamic > ko = Array_obj< Dynamic >::__new().Add(this->__Field(HX_CSTRING("getKeyOrder"))());
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",293)
	Array< Dynamic > vo = Array_obj< Dynamic >::__new().Add(this->__Field(HX_CSTRING("getValueOrder"))());

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,ko,Array< Dynamic >,vo)
	int run(::Tuple2 t1,::Tuple2 t2){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",296)
			int c = ko->__get(0)(t1->__Field(HX_CSTRING("_1")),t2->__Field(HX_CSTRING("_1")));
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",297)
			return (  ((c != 0)) ? int(c) : int(vo->__get(0)(t1->__Field(HX_CSTRING("_2")),t2->__Field(HX_CSTRING("_2")))) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",295)
	Dynamic sorter =  Dynamic(new _Function_1_1(ko,vo));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",303)
	a1->sort(sorter);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",304)
	a2->sort(sorter);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",306)
	return ::ArrayExtensions_obj::compare(a1,a2);
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,compare,return )

bool Map_obj::equals( ::haxe::data::collections::Map other){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::equals")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",310)
	::haxe::data::collections::Set keys1 = this->keySet();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",311)
	::haxe::data::collections::Set keys2 = other->keySet();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",312)
	if (!(keys1->equals(keys2)))
		return false;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",314)
	Dynamic ve = this->__Field(HX_CSTRING("getValueEqual"))();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",316)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(keys1->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		Dynamic key = __it->next();
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",317)
			Dynamic v1 = ::OptionExtensions_obj::get(this->get(key));
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",318)
			Dynamic v2 = ::OptionExtensions_obj::get(other->get(key));
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",319)
			if (!(ve(v1,v2)))
				return false;
		}
;
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",321)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,equals,return )

::String Map_obj::toString( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::toString")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",325)
	Array< Dynamic > ksh = Array_obj< Dynamic >::__new().Add(this->__Field(HX_CSTRING("getKeyShow"))());
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",326)
	Array< Dynamic > vsh = Array_obj< Dynamic >::__new().Add(this->__Field(HX_CSTRING("getValueShow"))());

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,ksh,Array< Dynamic >,vsh)
	::String run(::Tuple2 t){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",327)
			return (((ksh->__get(0)(t->__Field(HX_CSTRING("_1"))) + HX_CSTRING(" -> "))) + vsh->__get(0)(t->__Field(HX_CSTRING("_2"))));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",327)
	return (HX_CSTRING("Map ") + ::IterableExtensions_obj::toString(::haxe::functional::FoldableExtensions_obj::elements(this), Dynamic(new _Function_1_1(ksh,vsh)),null(),null(),null()));
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,toString,return )

int Map_obj::hashCode( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::hashCode")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",331)
	Array< Dynamic > kha = Array_obj< Dynamic >::__new().Add(this->__Field(HX_CSTRING("getKeyHash"))());
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",332)
	Array< Dynamic > vha = Array_obj< Dynamic >::__new().Add(this->__Field(HX_CSTRING("getValueHash"))());

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,kha,Array< Dynamic >,vha)
	int run(int a,::Tuple2 b){
		__SAFE_POINT;
		return (a + ((((kha->__get(0)(b->__Field(HX_CSTRING("_1"))) * 49157) + 6151)) * vha->__get(0)(b->__Field(HX_CSTRING("_2")))));
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",333)
	return this->__Field(HX_CSTRING("foldl"))(786433, Dynamic(new _Function_1_1(kha,vha))).Cast< int >();
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,hashCode,return )

::haxe::text::json::JValue Map_obj::decompose( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::decompose")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",337)
	return ::ArrayExtensions_obj::decompose(::IterableExtensions_obj::toArray(this));
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,decompose,return )

int Map_obj::load( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::load")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",351)
	return (  ((this->_buckets->length == 0)) ? int(::haxe::data::collections::Map_obj::MaxLoad) : int(::Math_obj::round((double(this->size()) / double(this->_buckets->length)))) );
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,load,return )

::haxe::data::collections::Map Map_obj::withKeyOrderFunction( Dynamic order){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::withKeyOrderFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",356)
	return ::haxe::data::collections::Map_obj::create(order,this->_keyEqual_dyn(),this->_keyHash_dyn(),this->_keyShow_dyn(),this->_valueOrder_dyn(),this->_valueEqual_dyn(),this->_valueHash_dyn(),this->_valueShow_dyn())->addAll(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,withKeyOrderFunction,return )

::haxe::data::collections::Map Map_obj::withKeyEqualFunction( Dynamic equal){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::withKeyEqualFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",360)
	return ::haxe::data::collections::Map_obj::create(this->_keyOrder_dyn(),equal,this->_keyHash_dyn(),this->_keyShow_dyn(),this->_valueOrder_dyn(),this->_valueEqual_dyn(),this->_valueHash_dyn(),this->_valueShow_dyn())->addAll(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,withKeyEqualFunction,return )

::haxe::data::collections::Map Map_obj::withKeyHashFunction( Dynamic hash){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::withKeyHashFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",364)
	return ::haxe::data::collections::Map_obj::create(this->_keyOrder_dyn(),this->_keyEqual_dyn(),hash,this->_keyShow_dyn(),this->_valueOrder_dyn(),this->_valueEqual_dyn(),this->_valueHash_dyn(),this->_valueShow_dyn())->addAll(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,withKeyHashFunction,return )

::haxe::data::collections::Map Map_obj::withKeyShowFunction( Dynamic show){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::withKeyShowFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",368)
	return ::haxe::data::collections::Map_obj::create(this->_keyOrder_dyn(),this->_keyEqual_dyn(),this->_keyHash_dyn(),show,this->_valueOrder_dyn(),this->_valueEqual_dyn(),this->_valueHash_dyn(),this->_valueShow_dyn())->addAll(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,withKeyShowFunction,return )

::haxe::data::collections::Map Map_obj::withValueOrderFunction( Dynamic order){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::withValueOrderFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",372)
	return ::haxe::data::collections::Map_obj::create(this->_keyOrder_dyn(),this->_keyEqual_dyn(),this->_keyHash_dyn(),this->_keyShow_dyn(),order,this->_valueEqual_dyn(),this->_valueHash_dyn(),this->_valueShow_dyn())->addAll(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,withValueOrderFunction,return )

::haxe::data::collections::Map Map_obj::withValueEqualFunction( Dynamic equal){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::withValueEqualFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",376)
	return ::haxe::data::collections::Map_obj::create(this->_keyOrder_dyn(),this->_keyEqual_dyn(),this->_keyHash_dyn(),this->_keyShow_dyn(),this->_valueOrder_dyn(),equal,this->_valueHash_dyn(),this->_valueShow_dyn())->addAll(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,withValueEqualFunction,return )

::haxe::data::collections::Map Map_obj::withValueHashFunction( Dynamic hash){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::withValueHashFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",380)
	return ::haxe::data::collections::Map_obj::create(this->_keyOrder_dyn(),this->_keyEqual_dyn(),this->_keyHash_dyn(),this->_keyShow_dyn(),this->_valueOrder_dyn(),this->_valueEqual_dyn(),hash,this->_valueShow_dyn())->addAll(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,withValueHashFunction,return )

::haxe::data::collections::Map Map_obj::withValueShowFunction( Dynamic show){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::withValueShowFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",384)
	return ::haxe::data::collections::Map_obj::create(this->_keyOrder_dyn(),this->_keyEqual_dyn(),this->_keyHash_dyn(),this->_keyShow_dyn(),this->_valueOrder_dyn(),this->_valueEqual_dyn(),this->_valueHash_dyn(),show)->addAll(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,withValueShowFunction,return )

Dynamic Map_obj::entries( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::entries")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",388)
	Array< Array< Array< ::Tuple2 > > > buckets = Array_obj< Array< Array< ::Tuple2 > > >::__new().Add(this->_buckets);
	struct _Function_1_1{
		inline static Dynamic Block( Array< Array< Array< ::Tuple2 > > > &buckets){
			hx::Anon __result = hx::Anon_obj::Create();

			HX_BEGIN_LOCAL_FUNC1(_Function_2_1,Array< Array< Array< ::Tuple2 > > >,buckets)
			Dynamic run(){
{
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",392)
					Array< int > bucket = Array_obj< int >::__new().Add(0);
					Array< int > element = Array_obj< int >::__new().Add(0);

					HX_BEGIN_LOCAL_FUNC3(_Function_3_1,Array< int >,bucket,Array< Array< Array< ::Tuple2 > > >,buckets,Array< int >,element)
					::Option run(){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",395)
							while((bucket->__get(0) < buckets[0]->length)){
								__SAFE_POINT
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",396)
								if ((element->__get(0) >= buckets->__get(0)[bucket->__get(0)]->length)){
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",397)
									element[0] = 0;
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",398)
									++(bucket[0]);
								}
								else{
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",401)
									return ::Option_obj::Some(buckets->__get(0)->__get(bucket->__get(0))->__get((element[0])++));
								}
							}
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",405)
							return ::Option_obj::None;
						}
						return null();
					}
					HX_END_LOCAL_FUNC0(return)

					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",394)
					Array< Dynamic > computeNextValue = Array_obj< Dynamic >::__new().Add( Dynamic(new _Function_3_1(bucket,buckets,element)));
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",408)
					Array< ::Option > nextValue = Array_obj< ::Option >::__new().Add(computeNextValue->__get(0)());
					struct _Function_3_2{
						inline static Dynamic Block( Array< ::Option > &nextValue,Array< Dynamic > &computeNextValue){
							hx::Anon __result = hx::Anon_obj::Create();

							HX_BEGIN_LOCAL_FUNC1(_Function_4_1,Array< ::Option >,nextValue)
							bool run(){
{
									__SAFE_POINT
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",412)
									return !(::OptionExtensions_obj::isEmpty(nextValue->__get(0)));
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							__result->Add(HX_CSTRING("hasNext") ,  Dynamic(new _Function_4_1(nextValue)));

							HX_BEGIN_LOCAL_FUNC2(_Function_4_2,Array< ::Option >,nextValue,Array< Dynamic >,computeNextValue)
							::Tuple2 run(){
{
									__SAFE_POINT
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",416)
									::Option value = nextValue->__get(0);
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",418)
									nextValue[0] = computeNextValue->__get(0)();
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",420)
									return ::OptionExtensions_obj::get(value).Cast< ::Tuple2 >();
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							__result->Add(HX_CSTRING("next") ,  Dynamic(new _Function_4_2(nextValue,computeNextValue)));
							return __result;
						}
					};
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",410)
					return _Function_3_2::Block(nextValue,computeNextValue);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0(return)

			__result->Add(HX_CSTRING("iterator") ,  Dynamic(new _Function_2_1(buckets)));
			return __result;
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",390)
	Dynamic iterable = _Function_1_1::Block(buckets);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",426)
	return iterable;
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,entries,return )

::haxe::data::collections::Map Map_obj::removeInternal( Dynamic k,Dynamic v,bool ignoreValue){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::removeInternal")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",430)
	int bucket = this->bucketFor(k);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",432)
	Array< ::Tuple2 > list = this->_buckets->__get(bucket);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",434)
	Dynamic ke = this->__Field(HX_CSTRING("getKeyEqual"))();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",435)
	Dynamic ve = this->__Field(HX_CSTRING("getValueEqual"))();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",437)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",437)
		int _g1 = 0;
		int _g = list->length;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",437)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",437)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",438)
			::Tuple2 entry = list->__get(i);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",440)
			if (ke(entry->__Field(HX_CSTRING("_1")),k)){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",441)
				if ((bool(ignoreValue) || bool(ve(entry->__Field(HX_CSTRING("_2")),v)))){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",442)
					::haxe::data::collections::Map newMap = this->copyWithMod(bucket);
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",444)
					newMap->_buckets[bucket] = list->slice(0,i)->concat(list->slice((i + 1),list->length));
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",445)
					hx::SubEq(newMap->_size,1);
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",447)
					if ((newMap->load() < ::haxe::data::collections::Map_obj::MinLoad)){
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",448)
						newMap->rebalance();
					}
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",451)
					return newMap;
				}
				else{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",454)
					return this;
				}
			}
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",459)
	return this;
}


HX_DEFINE_DYNAMIC_FUNC3(Map_obj,removeInternal,return )

::haxe::data::collections::Map Map_obj::copyWithMod( int index){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::copyWithMod")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",463)
	Array< Array< ::Tuple2 > > newTable = Array_obj< Array< ::Tuple2 > >::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",465)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",465)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",465)
		while((_g < index)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",465)
			int i = (_g)++;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",466)
			newTable->push(this->_buckets->__get(i));
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",469)
	newTable->push(Array_obj< ::Tuple2 >::__new()->concat(this->_buckets->__get(index)));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",471)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",471)
		int _g1 = ((index + 1));
		int _g = this->_buckets->length;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",471)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",471)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",472)
			newTable->push(this->_buckets->__get(i));
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",475)
	return ::haxe::data::collections::Map_obj::__new(this->_keyOrder_dyn(),this->_keyEqual_dyn(),this->_keyHash_dyn(),this->_keyShow_dyn(),this->_valueOrder_dyn(),this->_valueEqual_dyn(),this->_valueHash_dyn(),this->_valueShow_dyn(),newTable,this->size());
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,copyWithMod,return )

Void Map_obj::rebalance( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Map_obj::rebalance")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",479)
		int newSize = ::Math_obj::round((double(this->size()) / double(((double(((::haxe::data::collections::Map_obj::MaxLoad + ::haxe::data::collections::Map_obj::MinLoad))) / double(2))))));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",481)
		if ((newSize > 0)){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",482)
			Dynamic all = this->__Field(HX_CSTRING("entries"))();
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",484)
			this->_buckets = Array_obj< Array< ::Tuple2 > >::__new();
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",486)
			{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",486)
				int _g = 0;
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",486)
				while((_g < newSize)){
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",486)
					int i = (_g)++;
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",487)
					this->_buckets->push(Array_obj< ::Tuple2 >::__new());
				}
			}
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",490)
			for(::cpp::FastIterator_obj< ::Tuple2 > *__it = ::cpp::CreateFastIterator< ::Tuple2 >(all->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
				::Tuple2 e = __it->next();
				{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",491)
					int bucket = this->bucketFor(e->__Field(HX_CSTRING("_1")));
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",493)
					this->_buckets[bucket]->push(e);
				}
;
				__SAFE_POINT
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,rebalance,(void))

int Map_obj::bucketFor( Dynamic k){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::bucketFor")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",499)
	return hx::Mod(this->__Field(HX_CSTRING("getKeyHash"))()(k),this->_buckets->length);
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,bucketFor,return )

Array< ::Tuple2 > Map_obj::listFor( Dynamic k){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::listFor")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",503)
	return (  ((this->_buckets->length == 0)) ? Array< ::Tuple2 >(Array_obj< ::Tuple2 >::__new()) : Array< ::Tuple2 >(this->_buckets->__get(this->bucketFor(k))) );
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,listFor,return )

int Map_obj::size( ){
	HX_SOURCE_PUSH("Map_obj::size")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",508)
	return this->_size;
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,size,return )

Dynamic Map_obj::getKeyOrder( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::getKeyOrder")
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::data::collections::Map_obj *__this){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",521)
			Dynamic it = __this->__Field(HX_CSTRING("iterator"))();
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",522)
			return (  (!(it->__Field(HX_CSTRING("hasNext"))().Cast< bool >())) ? Dynamic(::Stax_obj::getOrderFor(null())) : Dynamic(__this->_keyOrder = ::Stax_obj::getOrderFor(it->__Field(HX_CSTRING("next"))().Cast< ::Tuple2 >()->__Field(HX_CSTRING("_1")))) );
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",520)
	return (  ((null() == this->_keyOrder_dyn())) ? Dynamic(_Function_1_1::Block(this)) : Dynamic(this->_keyOrder_dyn()) );
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getKeyOrder,return )

Dynamic Map_obj::getKeyEqual( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::getKeyEqual")
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::data::collections::Map_obj *__this){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",531)
			Dynamic it = __this->__Field(HX_CSTRING("iterator"))();
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",532)
			return (  (!(it->__Field(HX_CSTRING("hasNext"))().Cast< bool >())) ? Dynamic(::Stax_obj::getEqualFor(null())) : Dynamic(__this->_keyEqual = ::Stax_obj::getEqualFor(it->__Field(HX_CSTRING("next"))().Cast< ::Tuple2 >()->__Field(HX_CSTRING("_1")))) );
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",530)
	return (  ((null() == this->_keyEqual_dyn())) ? Dynamic(_Function_1_1::Block(this)) : Dynamic(this->_keyEqual_dyn()) );
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getKeyEqual,return )

Dynamic Map_obj::getKeyHash( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::getKeyHash")
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::data::collections::Map_obj *__this){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",541)
			Dynamic it = __this->__Field(HX_CSTRING("iterator"))();
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",542)
			return (  (!(it->__Field(HX_CSTRING("hasNext"))().Cast< bool >())) ? Dynamic(::Stax_obj::getHashFor(null())) : Dynamic(__this->_keyHash = ::Stax_obj::getHashFor(it->__Field(HX_CSTRING("next"))().Cast< ::Tuple2 >()->__Field(HX_CSTRING("_1")))) );
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",540)
	return (  ((null() == this->_keyHash_dyn())) ? Dynamic(_Function_1_1::Block(this)) : Dynamic(this->_keyHash_dyn()) );
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getKeyHash,return )

Dynamic Map_obj::getKeyShow( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::getKeyShow")
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::data::collections::Map_obj *__this){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",551)
			Dynamic it = __this->__Field(HX_CSTRING("iterator"))();
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",552)
			return (  (!(it->__Field(HX_CSTRING("hasNext"))().Cast< bool >())) ? Dynamic(::Stax_obj::getShowFor(null())) : Dynamic(__this->_keyShow = ::Stax_obj::getShowFor(it->__Field(HX_CSTRING("next"))().Cast< ::Tuple2 >()->__Field(HX_CSTRING("_1")))) );
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",550)
	return (  ((null() == this->_keyShow_dyn())) ? Dynamic(_Function_1_1::Block(this)) : Dynamic(this->_keyShow_dyn()) );
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getKeyShow,return )

Dynamic Map_obj::getValueOrder( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::getValueOrder")
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::data::collections::Map_obj *__this){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",561)
			Dynamic it = __this->__Field(HX_CSTRING("iterator"))();
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",562)
			return (  (!(it->__Field(HX_CSTRING("hasNext"))().Cast< bool >())) ? Dynamic(::Stax_obj::getOrderFor(null())) : Dynamic(__this->_valueOrder = ::Stax_obj::getOrderFor(it->__Field(HX_CSTRING("next"))().Cast< ::Tuple2 >()->__Field(HX_CSTRING("_2")))) );
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",560)
	return (  ((null() == this->_valueOrder_dyn())) ? Dynamic(_Function_1_1::Block(this)) : Dynamic(this->_valueOrder_dyn()) );
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getValueOrder,return )

Dynamic Map_obj::getValueEqual( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::getValueEqual")
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::data::collections::Map_obj *__this){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",571)
			Dynamic it = __this->__Field(HX_CSTRING("iterator"))();
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",572)
			return (  (!(it->__Field(HX_CSTRING("hasNext"))().Cast< bool >())) ? Dynamic(::Stax_obj::getEqualFor(null())) : Dynamic(__this->_valueEqual = ::Stax_obj::getEqualFor(it->__Field(HX_CSTRING("next"))().Cast< ::Tuple2 >()->__Field(HX_CSTRING("_2")))) );
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",570)
	return (  ((null() == this->_valueEqual_dyn())) ? Dynamic(_Function_1_1::Block(this)) : Dynamic(this->_valueEqual_dyn()) );
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getValueEqual,return )

Dynamic Map_obj::getValueHash( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::getValueHash")
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::data::collections::Map_obj *__this){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",581)
			Dynamic it = __this->__Field(HX_CSTRING("iterator"))();
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",582)
			return (  (!(it->__Field(HX_CSTRING("hasNext"))().Cast< bool >())) ? Dynamic(::Stax_obj::getHashFor(null())) : Dynamic(__this->_valueHash = ::Stax_obj::getHashFor(it->__Field(HX_CSTRING("next"))().Cast< ::Tuple2 >()->__Field(HX_CSTRING("_2")))) );
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",580)
	return (  ((null() == this->_valueHash_dyn())) ? Dynamic(_Function_1_1::Block(this)) : Dynamic(this->_valueHash_dyn()) );
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getValueHash,return )

Dynamic Map_obj::getValueShow( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::getValueShow")
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::data::collections::Map_obj *__this){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",591)
			Dynamic it = __this->__Field(HX_CSTRING("iterator"))();
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",592)
			return (  (!(it->__Field(HX_CSTRING("hasNext"))().Cast< bool >())) ? Dynamic(::Stax_obj::getShowFor(null())) : Dynamic(__this->_valueShow = ::Stax_obj::getShowFor(it->__Field(HX_CSTRING("next"))().Cast< ::Tuple2 >()->__Field(HX_CSTRING("_2")))) );
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",590)
	return (  ((null() == this->_valueShow_dyn())) ? Dynamic(_Function_1_1::Block(this)) : Dynamic(this->_valueShow_dyn()) );
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getValueShow,return )

int Map_obj::MaxLoad;

int Map_obj::MinLoad;

::haxe::data::collections::Map Map_obj::create( Dynamic korder,Dynamic kequal,Dynamic khash,Dynamic kshow,Dynamic vorder,Dynamic vequal,Dynamic vhash,Dynamic vshow){
	HX_SOURCE_PUSH("Map_obj::create")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",56)
	return ::haxe::data::collections::Map_obj::__new(korder,kequal,khash,kshow,vorder,vequal,vhash,vshow,Array_obj< Array< ::Tuple2 > >::__new().Add(Array_obj< ::Tuple2 >::__new()),0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Map_obj,create,return )

Dynamic Map_obj::factory( Dynamic $t1,Dynamic $t2,Dynamic $t3,Dynamic $t4,Dynamic $t5,Dynamic $t6,Dynamic $t7,Dynamic $t8){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::factory")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",60)
	Array< Dynamic > vshow = Array_obj< Dynamic >::__new().Add($t8);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",60)
	Array< Dynamic > vhash = Array_obj< Dynamic >::__new().Add($t7);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",60)
	Array< Dynamic > vequal = Array_obj< Dynamic >::__new().Add($t6);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",60)
	Array< Dynamic > vorder = Array_obj< Dynamic >::__new().Add($t5);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",60)
	Array< Dynamic > kshow = Array_obj< Dynamic >::__new().Add($t4);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",60)
	Array< Dynamic > khash = Array_obj< Dynamic >::__new().Add($t3);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",60)
	Array< Dynamic > kequal = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",60)
	Array< Dynamic > korder = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC8(_Function_1_1,Array< Dynamic >,vequal,Array< Dynamic >,kshow,Array< Dynamic >,korder,Array< Dynamic >,vorder,Array< Dynamic >,vhash,Array< Dynamic >,kequal,Array< Dynamic >,khash,Array< Dynamic >,vshow)
	::haxe::data::collections::Map run(){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",62)
			return ::haxe::data::collections::Map_obj::create(korder->__get(0),kequal->__get(0),khash->__get(0),kshow->__get(0),vorder->__get(0),vequal->__get(0),vhash->__get(0),vshow->__get(0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",61)
	return  Dynamic(new _Function_1_1(vequal,kshow,korder,vorder,vhash,kequal,khash,vshow));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(Map_obj,factory,return )

::haxe::data::collections::Map Map_obj::extract( ::haxe::text::json::JValue v,Dynamic $t1,Dynamic $t2,Dynamic korder,Dynamic kequal,Dynamic khash,Dynamic kshow,Dynamic vorder,Dynamic vequal,Dynamic vhash,Dynamic vshow){
	__SAFE_POINT
	HX_SOURCE_PUSH("Map_obj::extract")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",340)
	Array< Dynamic > ve = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",340)
	Array< Dynamic > ke = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,ke,Array< Dynamic >,ve)
	::Tuple2 run(::haxe::text::json::JValue v1){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",341)
			return ::Tuple2_obj::extract(v1,ke->__get(0),ve->__get(0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",341)
	Dynamic te =  Dynamic(new _Function_1_1(ke,ve));
	struct _Function_1_2{
		inline static ::haxe::data::collections::Map Block( Dynamic &vequal,::haxe::text::json::JValue &v,Dynamic &kshow,Dynamic &korder,Dynamic &vorder,Dynamic &vhash,Dynamic &te,Dynamic &kequal,Dynamic &khash,Dynamic &vshow){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",343)
			::haxe::text::json::JValue _switch_5 = (v);
			switch((_switch_5)->GetIndex()){
				case 4: {
					Array< ::haxe::text::json::JValue > v1 = _switch_5->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",344)
						return ::haxe::data::collections::Map_obj::create(korder,kequal,khash,kshow,vorder,vequal,vhash,vshow)->addAll(::ArrayExtensions_obj::map(v1,te));
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",346)
					return ::Stax_obj::error((HX_CSTRING("Expected Array but was: ") + v)).Cast< ::haxe::data::collections::Map >();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Map.hx",343)
	return _Function_1_2::Block(vequal,v,kshow,korder,vorder,vhash,te,kequal,khash,vshow);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(Map_obj,extract,return )


Map_obj::Map_obj()
{
}

void Map_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Map);
	HX_MARK_MEMBER_NAME(keyEqual,"keyEqual");
	HX_MARK_MEMBER_NAME(keyOrder,"keyOrder");
	HX_MARK_MEMBER_NAME(keyHash,"keyHash");
	HX_MARK_MEMBER_NAME(keyShow,"keyShow");
	HX_MARK_MEMBER_NAME(valueEqual,"valueEqual");
	HX_MARK_MEMBER_NAME(valueOrder,"valueOrder");
	HX_MARK_MEMBER_NAME(valueHash,"valueHash");
	HX_MARK_MEMBER_NAME(valueShow,"valueShow");
	HX_MARK_MEMBER_NAME(_buckets,"_buckets");
	HX_MARK_MEMBER_NAME(_size,"_size");
	HX_MARK_MEMBER_NAME(_pf,"_pf");
	HX_MARK_MEMBER_NAME(_keyEqual,"_keyEqual");
	HX_MARK_MEMBER_NAME(_keyOrder,"_keyOrder");
	HX_MARK_MEMBER_NAME(_keyHash,"_keyHash");
	HX_MARK_MEMBER_NAME(_keyShow,"_keyShow");
	HX_MARK_MEMBER_NAME(_valueEqual,"_valueEqual");
	HX_MARK_MEMBER_NAME(_valueOrder,"_valueOrder");
	HX_MARK_MEMBER_NAME(_valueHash,"_valueHash");
	HX_MARK_MEMBER_NAME(_valueShow,"_valueShow");
	HX_MARK_END_CLASS();
}

Dynamic Map_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_pf") ) { return _pf; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
		if (HX_FIELD_EQ(inName,"keys") ) { return keys_dyn(); }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_size") ) { return _size; }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"foldl") ) { return foldl_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"orElse") ) { return orElse_dyn(); }
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"keySet") ) { return keySet_dyn(); }
		if (HX_FIELD_EQ(inName,"values") ) { return values_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"MaxLoad") ) { return MaxLoad; }
		if (HX_FIELD_EQ(inName,"MinLoad") ) { return MinLoad; }
		if (HX_FIELD_EQ(inName,"factory") ) { return factory_dyn(); }
		if (HX_FIELD_EQ(inName,"extract") ) { return extract_dyn(); }
		if (HX_FIELD_EQ(inName,"keyHash") ) { return getKeyHash(); }
		if (HX_FIELD_EQ(inName,"keyShow") ) { return getKeyShow(); }
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		if (HX_FIELD_EQ(inName,"entries") ) { return entries_dyn(); }
		if (HX_FIELD_EQ(inName,"listFor") ) { return listFor_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyEqual") ) { return getKeyEqual(); }
		if (HX_FIELD_EQ(inName,"keyOrder") ) { return getKeyOrder(); }
		if (HX_FIELD_EQ(inName,"_buckets") ) { return _buckets; }
		if (HX_FIELD_EQ(inName,"orAlways") ) { return orAlways_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		if (HX_FIELD_EQ(inName,"_keyHash") ) { return _keyHash; }
		if (HX_FIELD_EQ(inName,"_keyShow") ) { return _keyShow; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"valueHash") ) { return getValueHash(); }
		if (HX_FIELD_EQ(inName,"valueShow") ) { return getValueShow(); }
		if (HX_FIELD_EQ(inName,"orAlwaysC") ) { return orAlwaysC_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"getOrElse") ) { return getOrElse_dyn(); }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		if (HX_FIELD_EQ(inName,"rebalance") ) { return rebalance_dyn(); }
		if (HX_FIELD_EQ(inName,"bucketFor") ) { return bucketFor_dyn(); }
		if (HX_FIELD_EQ(inName,"_keyEqual") ) { return _keyEqual; }
		if (HX_FIELD_EQ(inName,"_keyOrder") ) { return _keyOrder; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"valueEqual") ) { return getValueEqual(); }
		if (HX_FIELD_EQ(inName,"valueOrder") ) { return getValueOrder(); }
		if (HX_FIELD_EQ(inName,"toFunction") ) { return toFunction_dyn(); }
		if (HX_FIELD_EQ(inName,"getOrElseC") ) { return getOrElseC_dyn(); }
		if (HX_FIELD_EQ(inName,"_valueHash") ) { return _valueHash; }
		if (HX_FIELD_EQ(inName,"_valueShow") ) { return _valueShow; }
		if (HX_FIELD_EQ(inName,"getKeyHash") ) { return getKeyHash_dyn(); }
		if (HX_FIELD_EQ(inName,"getKeyShow") ) { return getKeyShow_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isDefinedAt") ) { return isDefinedAt_dyn(); }
		if (HX_FIELD_EQ(inName,"removeByKey") ) { return removeByKey_dyn(); }
		if (HX_FIELD_EQ(inName,"containsKey") ) { return containsKey_dyn(); }
		if (HX_FIELD_EQ(inName,"copyWithMod") ) { return copyWithMod_dyn(); }
		if (HX_FIELD_EQ(inName,"_valueEqual") ) { return _valueEqual; }
		if (HX_FIELD_EQ(inName,"_valueOrder") ) { return _valueOrder; }
		if (HX_FIELD_EQ(inName,"getKeyOrder") ) { return getKeyOrder_dyn(); }
		if (HX_FIELD_EQ(inName,"getKeyEqual") ) { return getKeyEqual_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getValueHash") ) { return getValueHash_dyn(); }
		if (HX_FIELD_EQ(inName,"getValueShow") ) { return getValueShow_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getValueOrder") ) { return getValueOrder_dyn(); }
		if (HX_FIELD_EQ(inName,"getValueEqual") ) { return getValueEqual_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"removeAllByKey") ) { return removeAllByKey_dyn(); }
		if (HX_FIELD_EQ(inName,"removeInternal") ) { return removeInternal_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"withKeyHashFunction") ) { return withKeyHashFunction_dyn(); }
		if (HX_FIELD_EQ(inName,"withKeyShowFunction") ) { return withKeyShowFunction_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"withKeyOrderFunction") ) { return withKeyOrderFunction_dyn(); }
		if (HX_FIELD_EQ(inName,"withKeyEqualFunction") ) { return withKeyEqualFunction_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"withValueHashFunction") ) { return withValueHashFunction_dyn(); }
		if (HX_FIELD_EQ(inName,"withValueShowFunction") ) { return withValueShowFunction_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"withValueOrderFunction") ) { return withValueOrderFunction_dyn(); }
		if (HX_FIELD_EQ(inName,"withValueEqualFunction") ) { return withValueEqualFunction_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Map_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_pf") ) { _pf=inValue.Cast< ::haxe::functional::PartialFunction1 >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_size") ) { _size=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"MaxLoad") ) { MaxLoad=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MinLoad") ) { MinLoad=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keyHash") ) { keyHash=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keyShow") ) { keyShow=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"keyEqual") ) { keyEqual=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keyOrder") ) { keyOrder=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_buckets") ) { _buckets=inValue.Cast< Array< Array< ::Tuple2 > > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyHash") ) { _keyHash=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyShow") ) { _keyShow=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"valueHash") ) { valueHash=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"valueShow") ) { valueShow=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyEqual") ) { _keyEqual=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyOrder") ) { _keyOrder=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"valueEqual") ) { valueEqual=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"valueOrder") ) { valueOrder=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_valueHash") ) { _valueHash=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_valueShow") ) { _valueShow=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_valueEqual") ) { _valueEqual=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_valueOrder") ) { _valueOrder=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Map_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_buckets"));
	outFields->push(HX_CSTRING("_size"));
	outFields->push(HX_CSTRING("_pf"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MaxLoad"),
	HX_CSTRING("MinLoad"),
	HX_CSTRING("create"),
	HX_CSTRING("factory"),
	HX_CSTRING("extract"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("keyEqual"),
	HX_CSTRING("keyOrder"),
	HX_CSTRING("keyHash"),
	HX_CSTRING("keyShow"),
	HX_CSTRING("valueEqual"),
	HX_CSTRING("valueOrder"),
	HX_CSTRING("valueHash"),
	HX_CSTRING("valueShow"),
	HX_CSTRING("_buckets"),
	HX_CSTRING("_size"),
	HX_CSTRING("_pf"),
	HX_CSTRING("isDefinedAt"),
	HX_CSTRING("orElse"),
	HX_CSTRING("orAlways"),
	HX_CSTRING("orAlwaysC"),
	HX_CSTRING("call"),
	HX_CSTRING("toFunction"),
	HX_CSTRING("empty"),
	HX_CSTRING("append"),
	HX_CSTRING("foldl"),
	HX_CSTRING("set"),
	HX_CSTRING("add"),
	HX_CSTRING("addAll"),
	HX_CSTRING("remove"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("removeByKey"),
	HX_CSTRING("removeAllByKey"),
	HX_CSTRING("get"),
	HX_CSTRING("getOrElse"),
	HX_CSTRING("getOrElseC"),
	HX_CSTRING("contains"),
	HX_CSTRING("containsKey"),
	HX_CSTRING("keys"),
	HX_CSTRING("keySet"),
	HX_CSTRING("values"),
	HX_CSTRING("iterator"),
	HX_CSTRING("compare"),
	HX_CSTRING("equals"),
	HX_CSTRING("toString"),
	HX_CSTRING("hashCode"),
	HX_CSTRING("decompose"),
	HX_CSTRING("load"),
	HX_CSTRING("withKeyOrderFunction"),
	HX_CSTRING("withKeyEqualFunction"),
	HX_CSTRING("withKeyHashFunction"),
	HX_CSTRING("withKeyShowFunction"),
	HX_CSTRING("withValueOrderFunction"),
	HX_CSTRING("withValueEqualFunction"),
	HX_CSTRING("withValueHashFunction"),
	HX_CSTRING("withValueShowFunction"),
	HX_CSTRING("entries"),
	HX_CSTRING("removeInternal"),
	HX_CSTRING("copyWithMod"),
	HX_CSTRING("rebalance"),
	HX_CSTRING("bucketFor"),
	HX_CSTRING("listFor"),
	HX_CSTRING("size"),
	HX_CSTRING("_keyEqual"),
	HX_CSTRING("_keyOrder"),
	HX_CSTRING("_keyHash"),
	HX_CSTRING("_keyShow"),
	HX_CSTRING("_valueEqual"),
	HX_CSTRING("_valueOrder"),
	HX_CSTRING("_valueHash"),
	HX_CSTRING("_valueShow"),
	HX_CSTRING("getKeyOrder"),
	HX_CSTRING("getKeyEqual"),
	HX_CSTRING("getKeyHash"),
	HX_CSTRING("getKeyShow"),
	HX_CSTRING("getValueOrder"),
	HX_CSTRING("getValueEqual"),
	HX_CSTRING("getValueHash"),
	HX_CSTRING("getValueShow"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Map_obj::MaxLoad,"MaxLoad");
	HX_MARK_MEMBER_NAME(Map_obj::MinLoad,"MinLoad");
};

Class Map_obj::__mClass;

void Map_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.data.collections.Map"), hx::TCanCast< Map_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Map_obj::__boot()
{
	hx::Static(MaxLoad) = 10;
	hx::Static(MinLoad) = 1;
}

} // end namespace haxe
} // end namespace data
} // end namespace collections
