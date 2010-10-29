#include <hxcpp.h>

#ifndef INCLUDED_ArrayExtensions
#include <ArrayExtensions.h>
#endif
#ifndef INCLUDED_IterableExtensions
#include <IterableExtensions.h>
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
#ifndef INCLUDED_haxe_text_json_JValue
#include <haxe/text/json/JValue.h>
#endif
namespace haxe{
namespace data{
namespace collections{

Void Set_obj::__construct(::haxe::data::collections::Map map)
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",53)
	this->_map = map;
}
;
	return null();
}

Set_obj::~Set_obj() { }

Dynamic Set_obj::__CreateEmpty() { return  new Set_obj; }
hx::ObjectPtr< Set_obj > Set_obj::__new(::haxe::data::collections::Map map)
{  hx::ObjectPtr< Set_obj > result = new Set_obj();
	result->__construct(map);
	return result;}

Dynamic Set_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Set_obj > result = new Set_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *Set_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::haxe::data::collections::Collection_obj)) return operator ::haxe::data::collections::Collection_obj *();
	return super::__ToInterface(inType);
}

bool Set_obj::contains( Dynamic e){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::contains")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",57)
	return this->_map->containsKey(e);
}


HX_DEFINE_DYNAMIC_FUNC1(Set_obj,contains,return )

::haxe::functional::Foldable Set_obj::empty( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::empty")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",61)
	return ::haxe::data::collections::Set_obj::create(null(),null(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Set_obj,empty,return )

::haxe::data::collections::Set Set_obj::append( Dynamic t){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::append")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",65)
	return this->copyWithMod(this->_map->set(t,t));
}


HX_DEFINE_DYNAMIC_FUNC1(Set_obj,append,return )

Dynamic Set_obj::foldl( Dynamic z,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::foldl")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",69)
	Dynamic acc = z;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",71)
	for(::cpp::FastIterator_obj< ::Tuple2 > *__it = ::cpp::CreateFastIterator< ::Tuple2 >(this->_map->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		::Tuple2 e = __it->next();
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",72)
			acc = f(acc,e->__Field(HX_CSTRING("_1")));
		}
;
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",75)
	return acc;
}


HX_DEFINE_DYNAMIC_FUNC2(Set_obj,foldl,return )

::haxe::data::collections::Set Set_obj::add( Dynamic t){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::add")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",79)
	return (  (this->contains(t)) ? ::haxe::data::collections::Set(this) : ::haxe::data::collections::Set(this->copyWithMod(this->_map->set(t,t))) );
}


HX_DEFINE_DYNAMIC_FUNC1(Set_obj,add,return )

::haxe::data::collections::Set Set_obj::addAll( Dynamic it){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::addAll")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",83)
	::haxe::data::collections::Set set = this;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",85)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(it->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		Dynamic e = __it->next();
		set = set->add(e);
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",87)
	return set;
}


HX_DEFINE_DYNAMIC_FUNC1(Set_obj,addAll,return )

::haxe::data::collections::Set Set_obj::remove( Dynamic t){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::remove")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",91)
	return this->copyWithMod(this->_map->removeByKey(t));
}


HX_DEFINE_DYNAMIC_FUNC1(Set_obj,remove,return )

::haxe::data::collections::Set Set_obj::removeAll( Dynamic it){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::removeAll")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",95)
	::haxe::data::collections::Set set = this;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",97)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(it->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		Dynamic e = __it->next();
		set = set->remove(e);
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",99)
	return set;
}


HX_DEFINE_DYNAMIC_FUNC1(Set_obj,removeAll,return )

Dynamic Set_obj::iterator( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::iterator")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",103)
	return ::haxe::functional::FoldableExtensions_obj::iterator(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Set_obj,iterator,return )

bool Set_obj::equals( ::haxe::data::collections::Set other){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::equals")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",107)
	::haxe::data::collections::Set all = ::haxe::functional::FoldableExtensions_obj::concat(this,other).Cast< ::haxe::data::collections::Set >();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",108)
	return (bool((all->size() == this->size())) && bool((all->size() == other->size())));
}


HX_DEFINE_DYNAMIC_FUNC1(Set_obj,equals,return )

int Set_obj::compare( ::haxe::data::collections::Set other){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::compare")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",112)
	return ::ArrayExtensions_obj::compareWith(::IterableExtensions_obj::toArray(this),::IterableExtensions_obj::toArray(other),this->__Field(HX_CSTRING("getOrder"))());
}


HX_DEFINE_DYNAMIC_FUNC1(Set_obj,compare,return )

int Set_obj::hashCode( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::hashCode")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",116)
	Array< Dynamic > ha = Array_obj< Dynamic >::__new().Add(this->__Field(HX_CSTRING("getHash"))());

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,ha)
	int run(int a,Dynamic b){
		__SAFE_POINT;
		return (a * ((ha->__get(0)(b) + 6151)));
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",117)
	return this->__Field(HX_CSTRING("foldl"))(393241, Dynamic(new _Function_1_1(ha))).Cast< int >();
}


HX_DEFINE_DYNAMIC_FUNC0(Set_obj,hashCode,return )

::haxe::text::json::JValue Set_obj::decompose( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::decompose")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",121)
	return ::ArrayExtensions_obj::decompose(::IterableExtensions_obj::toArray(this));
}


HX_DEFINE_DYNAMIC_FUNC0(Set_obj,decompose,return )

::String Set_obj::toString( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::toString")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",133)
	return (HX_CSTRING("Set ") + ::ArrayExtensions_obj::toStringWith(::IterableExtensions_obj::toArray(this),this->__Field(HX_CSTRING("getShow"))()));
}


HX_DEFINE_DYNAMIC_FUNC0(Set_obj,toString,return )

::haxe::data::collections::Set Set_obj::withOrderFunction( Dynamic order){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::withOrderFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",137)
	Dynamic m = this->_map;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",138)
	return ::haxe::data::collections::Set_obj::create(order,m->__Field(HX_CSTRING("_keyEqual")),m->__Field(HX_CSTRING("_keyHash")),m->__Field(HX_CSTRING("_keyShow")))->addAll(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Set_obj,withOrderFunction,return )

::haxe::data::collections::Set Set_obj::withEqualFunction( Dynamic equal){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::withEqualFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",142)
	Dynamic m = this->_map;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",143)
	return ::haxe::data::collections::Set_obj::create(m->__Field(HX_CSTRING("_keyOrder")),equal,m->__Field(HX_CSTRING("_keyHash")),m->__Field(HX_CSTRING("_keyShow")))->addAll(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Set_obj,withEqualFunction,return )

::haxe::data::collections::Set Set_obj::withHashFunction( Dynamic hash){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::withHashFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",147)
	Dynamic m = this->_map;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",148)
	return ::haxe::data::collections::Set_obj::create(m->__Field(HX_CSTRING("_keyOrder")),m->__Field(HX_CSTRING("_keyEqual")),hash,m->__Field(HX_CSTRING("_keyShow")))->addAll(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Set_obj,withHashFunction,return )

::haxe::data::collections::Set Set_obj::withShowFunction( Dynamic show){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::withShowFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",152)
	Dynamic m = this->_map;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",153)
	return ::haxe::data::collections::Set_obj::create(m->__Field(HX_CSTRING("_keyOrder")),m->__Field(HX_CSTRING("_keyEqual")),m->__Field(HX_CSTRING("_keyHash")),show)->addAll(this);
}


HX_DEFINE_DYNAMIC_FUNC1(Set_obj,withShowFunction,return )

::haxe::data::collections::Set Set_obj::copyWithMod( ::haxe::data::collections::Map newMap){
	HX_SOURCE_PUSH("Set_obj::copyWithMod")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",160)
	return ::haxe::data::collections::Set_obj::__new(newMap);
}


HX_DEFINE_DYNAMIC_FUNC1(Set_obj,copyWithMod,return )

int Set_obj::size( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::size")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",164)
	return this->_map->size();
}


HX_DEFINE_DYNAMIC_FUNC0(Set_obj,size,return )

Dynamic Set_obj::getOrder( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::getOrder")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",168)
	return this->_map->__Field(HX_CSTRING("getKeyOrder"))();
}


HX_DEFINE_DYNAMIC_FUNC0(Set_obj,getOrder,return )

Dynamic Set_obj::getEqual( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::getEqual")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",172)
	return this->_map->__Field(HX_CSTRING("getKeyEqual"))();
}


HX_DEFINE_DYNAMIC_FUNC0(Set_obj,getEqual,return )

Dynamic Set_obj::getHash( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::getHash")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",176)
	return this->_map->__Field(HX_CSTRING("getKeyHash"))();
}


HX_DEFINE_DYNAMIC_FUNC0(Set_obj,getHash,return )

Dynamic Set_obj::getShow( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::getShow")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",180)
	return this->_map->__Field(HX_CSTRING("getKeyShow"))();
}


HX_DEFINE_DYNAMIC_FUNC0(Set_obj,getShow,return )

::haxe::data::collections::Set Set_obj::create( Dynamic order,Dynamic equal,Dynamic hash,Dynamic show){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::create")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",42)
	return ::haxe::data::collections::Set_obj::__new(::haxe::data::collections::Map_obj::create(order,equal,hash,show,null(),null(),null(),null()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Set_obj,create,return )

Dynamic Set_obj::factory( Dynamic $t1,Dynamic $t2,Dynamic $t3,Dynamic $t4){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::factory")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",46)
	Array< Dynamic > show = Array_obj< Dynamic >::__new().Add($t4);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",46)
	Array< Dynamic > hash = Array_obj< Dynamic >::__new().Add($t3);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",46)
	Array< Dynamic > equal = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",46)
	Array< Dynamic > order = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC4(_Function_1_1,Array< Dynamic >,equal,Array< Dynamic >,show,Array< Dynamic >,order,Array< Dynamic >,hash)
	::haxe::data::collections::Set run(){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",48)
			return ::haxe::data::collections::Set_obj::create(order->__get(0),equal->__get(0),hash->__get(0),show->__get(0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",47)
	return  Dynamic(new _Function_1_1(equal,show,order,hash));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Set_obj,factory,return )

::haxe::data::collections::Set Set_obj::extract( ::haxe::text::json::JValue v,Dynamic e,Dynamic order,Dynamic equal,Dynamic hash,Dynamic show){
	__SAFE_POINT
	HX_SOURCE_PUSH("Set_obj::extract")
	struct _Function_1_1{
		inline static ::haxe::data::collections::Set Block( Dynamic &equal,Dynamic &show,Dynamic &e,::haxe::text::json::JValue &v,Dynamic &order,Dynamic &hash){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",125)
			::haxe::text::json::JValue _switch_1 = (v);
			switch((_switch_1)->GetIndex()){
				case 4: {
					Array< ::haxe::text::json::JValue > v1 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",126)
						return ::haxe::data::collections::Set_obj::create(order,equal,hash,show)->addAll(::ArrayExtensions_obj::map(v1,e));
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",128)
					return ::Stax_obj::error((HX_CSTRING("Expected Array but was: ") + v)).Cast< ::haxe::data::collections::Set >();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/Set.hx",125)
	return _Function_1_1::Block(equal,show,e,v,order,hash);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Set_obj,extract,return )


Set_obj::Set_obj()
{
}

void Set_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Set);
	HX_MARK_MEMBER_NAME(equal,"equal");
	HX_MARK_MEMBER_NAME(order,"order");
	HX_MARK_MEMBER_NAME(hash,"hash");
	HX_MARK_MEMBER_NAME(show,"show");
	HX_MARK_MEMBER_NAME(_map,"_map");
	HX_MARK_END_CLASS();
}

Dynamic Set_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { return getHash(); }
		if (HX_FIELD_EQ(inName,"show") ) { return getShow(); }
		if (HX_FIELD_EQ(inName,"_map") ) { return _map; }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"equal") ) { return getEqual(); }
		if (HX_FIELD_EQ(inName,"order") ) { return getOrder(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"foldl") ) { return foldl_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"factory") ) { return factory_dyn(); }
		if (HX_FIELD_EQ(inName,"extract") ) { return extract_dyn(); }
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		if (HX_FIELD_EQ(inName,"getHash") ) { return getHash_dyn(); }
		if (HX_FIELD_EQ(inName,"getShow") ) { return getShow_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"getOrder") ) { return getOrder_dyn(); }
		if (HX_FIELD_EQ(inName,"getEqual") ) { return getEqual_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyWithMod") ) { return copyWithMod_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"withHashFunction") ) { return withHashFunction_dyn(); }
		if (HX_FIELD_EQ(inName,"withShowFunction") ) { return withShowFunction_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"withOrderFunction") ) { return withOrderFunction_dyn(); }
		if (HX_FIELD_EQ(inName,"withEqualFunction") ) { return withEqualFunction_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Set_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hash") ) { hash=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"show") ) { show=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_map") ) { _map=inValue.Cast< ::haxe::data::collections::Map >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"equal") ) { equal=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"order") ) { order=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Set_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_map"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("factory"),
	HX_CSTRING("extract"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("equal"),
	HX_CSTRING("order"),
	HX_CSTRING("hash"),
	HX_CSTRING("show"),
	HX_CSTRING("_map"),
	HX_CSTRING("contains"),
	HX_CSTRING("empty"),
	HX_CSTRING("append"),
	HX_CSTRING("foldl"),
	HX_CSTRING("add"),
	HX_CSTRING("addAll"),
	HX_CSTRING("remove"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("iterator"),
	HX_CSTRING("equals"),
	HX_CSTRING("compare"),
	HX_CSTRING("hashCode"),
	HX_CSTRING("decompose"),
	HX_CSTRING("toString"),
	HX_CSTRING("withOrderFunction"),
	HX_CSTRING("withEqualFunction"),
	HX_CSTRING("withHashFunction"),
	HX_CSTRING("withShowFunction"),
	HX_CSTRING("copyWithMod"),
	HX_CSTRING("size"),
	HX_CSTRING("getOrder"),
	HX_CSTRING("getEqual"),
	HX_CSTRING("getHash"),
	HX_CSTRING("getShow"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Set_obj::__mClass;

void Set_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.data.collections.Set"), hx::TCanCast< Set_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Set_obj::__boot()
{
}

} // end namespace haxe
} // end namespace data
} // end namespace collections
