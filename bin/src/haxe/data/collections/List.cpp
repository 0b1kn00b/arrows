#include <hxcpp.h>

#ifndef INCLUDED_ArrayExtensions
#include <ArrayExtensions.h>
#endif
#ifndef INCLUDED_IntExtensions
#include <IntExtensions.h>
#endif
#ifndef INCLUDED_IterableExtensions
#include <IterableExtensions.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
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
#ifndef INCLUDED_haxe_data_collections_List
#include <haxe/data/collections/List.h>
#endif
#ifndef INCLUDED_haxe_data_collections__List_Cons
#include <haxe/data/collections/_List/Cons.h>
#endif
#ifndef INCLUDED_haxe_data_collections__List_Nil
#include <haxe/data/collections/_List/Nil.h>
#endif
#ifndef INCLUDED_haxe_functional_Foldable
#include <haxe/functional/Foldable.h>
#endif
#ifndef INCLUDED_haxe_functional_FoldableExtensions
#include <haxe/functional/FoldableExtensions.h>
#endif
#ifndef INCLUDED_haxe_text_json_JValue
#include <haxe/text/json/JValue.h>
#endif
namespace haxe{
namespace data{
namespace collections{

Void List_obj::__construct(Dynamic order,Dynamic equal,Dynamic hash,Dynamic show)
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",65)
	this->_order = order;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",66)
	this->_equal = equal;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",67)
	this->_hash = hash;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",68)
	this->_show = show;
}
;
	return null();
}

List_obj::~List_obj() { }

Dynamic List_obj::__CreateEmpty() { return  new List_obj; }
hx::ObjectPtr< List_obj > List_obj::__new(Dynamic order,Dynamic equal,Dynamic hash,Dynamic show)
{  hx::ObjectPtr< List_obj > result = new List_obj();
	result->__construct(order,equal,hash,show);
	return result;}

Dynamic List_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< List_obj > result = new List_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *List_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::haxe::data::collections::Collection_obj)) return operator ::haxe::data::collections::Collection_obj *();
	return super::__ToInterface(inType);
}

::haxe::functional::Foldable List_obj::empty( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::empty")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",72)
	return ::haxe::data::collections::List_obj::nil(null(),null(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,empty,return )

::haxe::data::collections::List List_obj::cons( Dynamic head){
	HX_SOURCE_PUSH("List_obj::cons")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",80)
	return ::haxe::data::collections::_List::Cons_obj::__new(this->_order_dyn(),this->_equal_dyn(),this->_hash_dyn(),this->_show_dyn(),head,this);
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,cons,return )

::haxe::data::collections::List List_obj::prepend( Dynamic head){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::prepend")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",85)
	return this->cons(head);
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,prepend,return )

::haxe::data::collections::List List_obj::prependAll( Dynamic iterable){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::prependAll")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",89)
	::haxe::data::collections::List result = this;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",91)
	Array< Dynamic > array = ::IterableExtensions_obj::toArray(iterable);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",93)
	array->reverse();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",95)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",95)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",95)
		while((_g < array->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",95)
			Dynamic e = array->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",95)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",95)
			result = result->cons(e);
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",97)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,prependAll,return )

::haxe::data::collections::List List_obj::prependAllR( Dynamic iterable){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::prependAllR")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",101)
	::haxe::data::collections::List result = this;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",103)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(iterable->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		Dynamic e = __it->next();
		result = result->cons(e);
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",105)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,prependAllR,return )

::haxe::data::collections::List List_obj::append( Dynamic b){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::append")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",109)
	return this->add(b);
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,append,return )

Dynamic List_obj::foldl( Dynamic z,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::foldl")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",113)
	Dynamic acc = z;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",114)
	::haxe::data::collections::List cur = this;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",116)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",116)
		int _g1 = 0;
		int _g = this->size();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",116)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",116)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",117)
			acc = f(acc,cur->__Field(HX_CSTRING("getHead"))());
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",119)
			cur = cur->getTail();
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",122)
	return acc;
}


HX_DEFINE_DYNAMIC_FUNC2(List_obj,foldl,return )

Dynamic List_obj::foldr( Dynamic z,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::foldr")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",129)
	Array< Dynamic > a = ::IterableExtensions_obj::toArray(this);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",131)
	Dynamic acc = z;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",133)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",133)
		int _g1 = 0;
		int _g = this->size();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",133)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",133)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",134)
			Dynamic e = a->__get((((this->size() - 1)) - i));
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",136)
			acc = f(e,acc);
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",139)
	return acc;
}


HX_DEFINE_DYNAMIC_FUNC2(List_obj,foldr,return )

bool List_obj::contains( Dynamic t){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::contains")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",143)
	::haxe::data::collections::List cur = this;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",144)
	Dynamic eq = this->__Field(HX_CSTRING("getEqual"))();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",145)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",145)
		int _g1 = 0;
		int _g = this->size();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",145)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",145)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",146)
			if (eq(t,cur->__Field(HX_CSTRING("getHead"))()))
				return true;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",147)
			cur = cur->getTail();
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",150)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,contains,return )

::haxe::data::collections::List List_obj::add( Dynamic t){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::add")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	::haxe::data::collections::List run(Dynamic b,::haxe::data::collections::List a){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",158)
			return a->cons(b);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",157)
	return this->__Field(HX_CSTRING("foldr"))(::haxe::data::collections::List_obj::create(this->_order_dyn(),this->_equal_dyn(),this->_hash_dyn(),this->_show_dyn())->cons(t), Dynamic(new _Function_1_1())).Cast< ::haxe::data::collections::List >();
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,add,return )

::haxe::data::collections::List List_obj::addAll( Dynamic i){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::addAll")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",163)
	Array< Dynamic > a = Array_obj< Dynamic >::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",165)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(i->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		Dynamic e = __it->next();
		a->push(e);
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",167)
	a->reverse();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",169)
	::haxe::data::collections::List r = ::haxe::data::collections::List_obj::create(this->_order_dyn(),this->_equal_dyn(),this->_hash_dyn(),this->_show_dyn());
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",171)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",171)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",171)
		while((_g < a->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",171)
			Dynamic e = a->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",171)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",171)
			r = r->cons(e);
		}
	}

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	::haxe::data::collections::List run(Dynamic b,::haxe::data::collections::List a1){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",174)
			return a1->cons(b);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",173)
	return this->__Field(HX_CSTRING("foldr"))(r, Dynamic(new _Function_1_1())).Cast< ::haxe::data::collections::List >();
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,addAll,return )

::haxe::data::collections::List List_obj::remove( Dynamic t){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::remove")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",179)
	Array< Dynamic > pre = Array_obj< Dynamic >::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",180)
	::haxe::data::collections::List post = ::haxe::data::collections::List_obj::nil(this->_order_dyn(),this->_equal_dyn(),this->_hash_dyn(),this->_show_dyn());
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",181)
	::haxe::data::collections::List cur = this;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",182)
	Dynamic eq = this->__Field(HX_CSTRING("getEqual"))();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",183)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",183)
		int _g1 = 0;
		int _g = this->size();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",183)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",183)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",184)
			if (eq(t,cur->__Field(HX_CSTRING("getHead"))())){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",185)
				post = cur->getTail();
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",187)
				break;
			}
			else{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",190)
				pre->push(cur->__Field(HX_CSTRING("getHead"))());
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",192)
				cur = cur->getTail();
			}
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",196)
	pre->reverse();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",198)
	::haxe::data::collections::List result = post;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",200)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",200)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",200)
		while((_g < pre->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",200)
			Dynamic e = pre->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",200)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",201)
			result = result->cons(e);
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",204)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,remove,return )

::haxe::data::collections::List List_obj::removeAll( Dynamic i){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::removeAll")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",208)
	::haxe::data::collections::List r = this;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",210)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(i->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		Dynamic e = __it->next();
		r = r->remove(e);
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",212)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,removeAll,return )

::haxe::data::collections::List List_obj::concat( ::haxe::data::collections::List l){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::concat")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",217)
	return this->addAll(l);
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,concat,return )

::haxe::data::collections::List List_obj::drop( int n){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::drop")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",222)
	::haxe::data::collections::List cur = this;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",224)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",224)
		int _g1 = 0;
		int _g = ::IntExtensions_obj::min(this->size(),n);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",224)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",224)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",225)
			cur = cur->getTail();
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",228)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,drop,return )

::haxe::data::collections::List List_obj::dropWhile( Dynamic pred){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::dropWhile")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",233)
	::haxe::data::collections::List cur = this;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",235)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",235)
		int _g1 = 0;
		int _g = this->size();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",235)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",235)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",236)
			if (pred(cur->__Field(HX_CSTRING("getHead"))()))
				return cur;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",238)
			cur = cur->getTail();
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",241)
	return cur;
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,dropWhile,return )

::haxe::data::collections::List List_obj::take( int n){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::take")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",246)
	return this->reverse()->drop((this->size() - n));
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,take,return )

::haxe::data::collections::List List_obj::map( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::map")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",250)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	::haxe::data::collections::List run(Dynamic e,::haxe::data::collections::List list){
		__SAFE_POINT;
		return list->cons(f->__get(0)(e));
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",251)
	return this->__Field(HX_CSTRING("foldr"))(::haxe::data::collections::List_obj::create(null(),null(),null(),null()), Dynamic(new _Function_1_1(f))).Cast< ::haxe::data::collections::List >();
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,map,return )

::haxe::data::collections::List List_obj::flatMap( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::flatMap")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",255)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	::haxe::data::collections::List run(Dynamic e,::haxe::data::collections::List list){
		__SAFE_POINT;
		return list->prependAll(f->__get(0)(e));
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",256)
	return this->__Field(HX_CSTRING("foldr"))(::haxe::data::collections::List_obj::create(null(),null(),null(),null()), Dynamic(new _Function_1_1(f))).Cast< ::haxe::data::collections::List >();
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,flatMap,return )

::haxe::data::collections::List List_obj::filter( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::filter")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",260)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	::haxe::data::collections::List run(Dynamic e,::haxe::data::collections::List list){
		__SAFE_POINT;
		return (  (f->__get(0)(e)) ? ::haxe::data::collections::List(list->cons(e)) : ::haxe::data::collections::List(list) );
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",261)
	return this->__Field(HX_CSTRING("foldr"))(::haxe::data::collections::List_obj::create(this->_order_dyn(),this->_equal_dyn(),this->_hash_dyn(),this->_show_dyn()), Dynamic(new _Function_1_1(f))).Cast< ::haxe::data::collections::List >();
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,filter,return )

::haxe::data::collections::List List_obj::reverse( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::reverse")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	::haxe::data::collections::List run(::haxe::data::collections::List a,Dynamic b){
		__SAFE_POINT;
		return a->cons(b);
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",267)
	return this->__Field(HX_CSTRING("foldl"))(::haxe::data::collections::List_obj::create(this->_order_dyn(),this->_equal_dyn(),this->_hash_dyn(),this->_show_dyn()), Dynamic(new _Function_1_1())).Cast< ::haxe::data::collections::List >();
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,reverse,return )

::haxe::data::collections::List List_obj::zip( ::haxe::data::collections::List that){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::zip")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",272)
	int len = ::IntExtensions_obj::min(this->size(),that->size());
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",274)
	Dynamic iterator1 = this->reverse()->drop(::IntExtensions_obj::max(0,(this->size() - len)))->__Field(HX_CSTRING("iterator"))();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",275)
	Dynamic iterator2 = that->reverse()->drop(::IntExtensions_obj::max(0,(that->size() - len)))->__Field(HX_CSTRING("iterator"))();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",277)
	::haxe::data::collections::List r = ::haxe::data::collections::List_obj::create(null(),null(),null(),null());
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",279)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",279)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",279)
		while((_g < len)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",279)
			int i = (_g)++;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",280)
			r = r->cons(::Tuple2_obj::create(iterator1->__Field(HX_CSTRING("next"))(),iterator2->__Field(HX_CSTRING("next"))()));
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",283)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,zip,return )

::haxe::data::collections::List List_obj::gaps( Dynamic $t1,Dynamic equal){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::gaps")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",290)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	::haxe::data::collections::List run(::Tuple2 tuple){
		__SAFE_POINT;
		return f->__get(0)(tuple->__Field(HX_CSTRING("_1")),tuple->__Field(HX_CSTRING("_2")));
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",291)
	return ::haxe::functional::FoldableExtensions_obj::flatMapTo(this->zip(this->drop(1)),::haxe::data::collections::List_obj::nil(null(),equal,null(),null()), Dynamic(new _Function_1_1(f))).Cast< ::haxe::data::collections::List >();
}


HX_DEFINE_DYNAMIC_FUNC2(List_obj,gaps,return )

::haxe::data::collections::List List_obj::sort( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::sort")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",298)
	Array< Dynamic > a = ::IterableExtensions_obj::toArray(this);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",299)
	a->sort(this->__Field(HX_CSTRING("getOrder"))());
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",300)
	::haxe::data::collections::List result = ::haxe::data::collections::List_obj::create(this->_order_dyn(),this->_equal_dyn(),this->_hash_dyn(),this->_show_dyn());
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",302)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",302)
		int _g1 = 0;
		int _g = a->length;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",302)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",302)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",303)
			result = result->cons(a->__get((((a->length - 1)) - i)));
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",306)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,sort,return )

Dynamic List_obj::iterator( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::iterator")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",310)
	return ::haxe::functional::FoldableExtensions_obj::iterator(this);
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,iterator,return )

::haxe::data::collections::List List_obj::withOrderFunction( Dynamic order){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::withOrderFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",314)
	return ::haxe::data::collections::List_obj::create(order,this->_equal_dyn(),this->_hash_dyn(),this->_show_dyn())->addAll(this);
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,withOrderFunction,return )

::haxe::data::collections::List List_obj::withEqualFunction( Dynamic equal){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::withEqualFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",318)
	return ::haxe::data::collections::List_obj::create(this->_order_dyn(),equal,this->_hash_dyn(),this->_show_dyn())->addAll(this);
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,withEqualFunction,return )

::haxe::data::collections::List List_obj::withHashFunction( Dynamic hash){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::withHashFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",322)
	return ::haxe::data::collections::List_obj::create(this->_order_dyn(),this->_equal_dyn(),hash,this->_show_dyn())->addAll(this);
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,withHashFunction,return )

::haxe::data::collections::List List_obj::withShowFunction( Dynamic show){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::withShowFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",326)
	return ::haxe::data::collections::List_obj::create(this->_order_dyn(),this->_equal_dyn(),this->_hash_dyn(),show)->addAll(this);
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,withShowFunction,return )

Dynamic List_obj::getOrder( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::getOrder")
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::data::collections::List_obj *__this){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",335)
			return (  ((__this->size() == 0)) ? Dynamic(::Stax_obj::getOrderFor(null())) : Dynamic(__this->_order = ::Stax_obj::getOrderFor(__this->__Field(HX_CSTRING("getHead"))())) );
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",334)
	return (  ((null() == this->_order_dyn())) ? Dynamic(_Function_1_1::Block(this)) : Dynamic(this->_order_dyn()) );
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,getOrder,return )

Dynamic List_obj::getEqual( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::getEqual")
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::data::collections::List_obj *__this){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",344)
			return (  ((__this->size() == 0)) ? Dynamic(::Stax_obj::getEqualFor(null())) : Dynamic(__this->_equal = ::Stax_obj::getEqualFor(__this->__Field(HX_CSTRING("getHead"))())) );
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",343)
	return (  ((null() == this->_equal_dyn())) ? Dynamic(_Function_1_1::Block(this)) : Dynamic(this->_equal_dyn()) );
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,getEqual,return )

Dynamic List_obj::getHash( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::getHash")
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::data::collections::List_obj *__this){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",353)
			return (  ((__this->size() == 0)) ? Dynamic(::Stax_obj::getHashFor(null())) : Dynamic(__this->_hash = ::Stax_obj::getHashFor(__this->__Field(HX_CSTRING("getHead"))())) );
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",352)
	return (  ((null() == this->_hash_dyn())) ? Dynamic(_Function_1_1::Block(this)) : Dynamic(this->_hash_dyn()) );
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,getHash,return )

Dynamic List_obj::getShow( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::getShow")
	struct _Function_1_1{
		inline static Dynamic Block( ::haxe::data::collections::List_obj *__this){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",362)
			return (  ((__this->size() == 0)) ? Dynamic(::Stax_obj::getShowFor(null())) : Dynamic(__this->_show = ::Stax_obj::getShowFor(__this->__Field(HX_CSTRING("getHead"))())) );
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",361)
	return (  ((null() == this->_show_dyn())) ? Dynamic(_Function_1_1::Block(this)) : Dynamic(this->_show_dyn()) );
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,getShow,return )

bool List_obj::equals( ::haxe::data::collections::List other){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::equals")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",370)
	return ::ArrayExtensions_obj::equalsWith(::IterableExtensions_obj::toArray(this),::IterableExtensions_obj::toArray(other),this->__Field(HX_CSTRING("getEqual"))());
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,equals,return )

int List_obj::compare( ::haxe::data::collections::List other){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::compare")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",374)
	return ::ArrayExtensions_obj::compareWith(::IterableExtensions_obj::toArray(this),::IterableExtensions_obj::toArray(other),this->__Field(HX_CSTRING("getOrder"))());
}


HX_DEFINE_DYNAMIC_FUNC1(List_obj,compare,return )

int List_obj::hashCode( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::hashCode")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",378)
	Array< Dynamic > ha = Array_obj< Dynamic >::__new().Add(this->__Field(HX_CSTRING("getHash"))());

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,ha)
	int run(int a,Dynamic b){
		__SAFE_POINT;
		return (a * ((ha->__get(0)(b) + 12289)));
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",379)
	return this->__Field(HX_CSTRING("foldl"))(12289, Dynamic(new _Function_1_1(ha))).Cast< int >();
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,hashCode,return )

::String List_obj::toString( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::toString")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",383)
	return (HX_CSTRING("List ") + ::ArrayExtensions_obj::toStringWith(::IterableExtensions_obj::toArray(this),this->__Field(HX_CSTRING("getShow"))()));
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,toString,return )

int List_obj::size( ){
	HX_SOURCE_PUSH("List_obj::size")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",387)
	return 0;
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,size,return )

::haxe::text::json::JValue List_obj::decompose( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::decompose")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",391)
	return ::ArrayExtensions_obj::decompose(::IterableExtensions_obj::toArray(this));
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,decompose,return )

Dynamic List_obj::getHead( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::getHead")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",403)
	return ::Stax_obj::error(HX_CSTRING("List has no head element"));
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,getHead,return )

Dynamic List_obj::getLast( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::getLast")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",407)
	return ::Stax_obj::error(HX_CSTRING("List has no last element"));
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,getLast,return )

::Option List_obj::getHeadOption( ){
	HX_SOURCE_PUSH("List_obj::getHeadOption")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",411)
	return ::Option_obj::None;
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,getHeadOption,return )

::Option List_obj::getLastOption( ){
	HX_SOURCE_PUSH("List_obj::getLastOption")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",415)
	return ::Option_obj::None;
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,getLastOption,return )

::haxe::data::collections::List List_obj::getTail( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::getTail")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",419)
	return ::Stax_obj::error(HX_CSTRING("List has no head")).Cast< ::haxe::data::collections::List >();
}


HX_DEFINE_DYNAMIC_FUNC0(List_obj,getTail,return )

::haxe::data::collections::List List_obj::nil( Dynamic order,Dynamic equal,Dynamic hash,Dynamic show){
	HX_SOURCE_PUSH("List_obj::nil")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",50)
	return ::haxe::data::collections::_List::Nil_obj::__new(order,equal,hash,show);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(List_obj,nil,return )

::haxe::data::collections::List List_obj::create( Dynamic order,Dynamic equal,Dynamic hash,Dynamic show){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::create")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",54)
	return ::haxe::data::collections::List_obj::nil(order,equal,hash,show);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(List_obj,create,return )

Dynamic List_obj::factory( Dynamic $t1,Dynamic $t2,Dynamic $t3,Dynamic $t4){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::factory")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",58)
	Array< Dynamic > show = Array_obj< Dynamic >::__new().Add($t4);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",58)
	Array< Dynamic > hash = Array_obj< Dynamic >::__new().Add($t3);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",58)
	Array< Dynamic > equal = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",58)
	Array< Dynamic > order = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC4(_Function_1_1,Array< Dynamic >,equal,Array< Dynamic >,show,Array< Dynamic >,order,Array< Dynamic >,hash)
	::haxe::data::collections::List run(){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",60)
			return ::haxe::data::collections::List_obj::create(order->__get(0),equal->__get(0),hash->__get(0),show->__get(0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",59)
	return  Dynamic(new _Function_1_1(equal,show,order,hash));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(List_obj,factory,return )

::haxe::data::collections::List List_obj::extract( ::haxe::text::json::JValue v,Dynamic e,Dynamic order,Dynamic equal,Dynamic hash,Dynamic show){
	__SAFE_POINT
	HX_SOURCE_PUSH("List_obj::extract")
	struct _Function_1_1{
		inline static ::haxe::data::collections::List Block( Dynamic &equal,Dynamic &show,Dynamic &e,::haxe::text::json::JValue &v,Dynamic &order,Dynamic &hash){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",395)
			::haxe::text::json::JValue _switch_1 = (v);
			switch((_switch_1)->GetIndex()){
				case 4: {
					Array< ::haxe::text::json::JValue > v1 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",396)
						return ::haxe::data::collections::List_obj::create(order,equal,hash,show)->addAll(::ArrayExtensions_obj::map(v1,e));
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",398)
					return ::Stax_obj::error((HX_CSTRING("Expected Array but was: ") + v)).Cast< ::haxe::data::collections::List >();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",395)
	return _Function_1_1::Block(equal,show,e,v,order,hash);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(List_obj,extract,return )


List_obj::List_obj()
{
}

void List_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(List);
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_MEMBER_NAME(tail,"tail");
	HX_MARK_MEMBER_NAME(first,"first");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_MEMBER_NAME(headOption,"headOption");
	HX_MARK_MEMBER_NAME(firstOption,"firstOption");
	HX_MARK_MEMBER_NAME(lastOption,"lastOption");
	HX_MARK_MEMBER_NAME(equal,"equal");
	HX_MARK_MEMBER_NAME(order,"order");
	HX_MARK_MEMBER_NAME(hash,"hash");
	HX_MARK_MEMBER_NAME(show,"show");
	HX_MARK_MEMBER_NAME(_equal,"_equal");
	HX_MARK_MEMBER_NAME(_order,"_order");
	HX_MARK_MEMBER_NAME(_hash,"_hash");
	HX_MARK_MEMBER_NAME(_show,"_show");
	HX_MARK_END_CLASS();
}

Dynamic List_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"nil") ) { return nil_dyn(); }
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"map") ) { return map_dyn(); }
		if (HX_FIELD_EQ(inName,"zip") ) { return zip_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { return getHead(); }
		if (HX_FIELD_EQ(inName,"tail") ) { return getTail(); }
		if (HX_FIELD_EQ(inName,"last") ) { return getLast(); }
		if (HX_FIELD_EQ(inName,"hash") ) { return getHash(); }
		if (HX_FIELD_EQ(inName,"show") ) { return getShow(); }
		if (HX_FIELD_EQ(inName,"cons") ) { return cons_dyn(); }
		if (HX_FIELD_EQ(inName,"drop") ) { return drop_dyn(); }
		if (HX_FIELD_EQ(inName,"take") ) { return take_dyn(); }
		if (HX_FIELD_EQ(inName,"gaps") ) { return gaps_dyn(); }
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { return getHead(); }
		if (HX_FIELD_EQ(inName,"equal") ) { return getEqual(); }
		if (HX_FIELD_EQ(inName,"order") ) { return getOrder(); }
		if (HX_FIELD_EQ(inName,"empty") ) { return empty_dyn(); }
		if (HX_FIELD_EQ(inName,"foldl") ) { return foldl_dyn(); }
		if (HX_FIELD_EQ(inName,"foldr") ) { return foldr_dyn(); }
		if (HX_FIELD_EQ(inName,"_hash") ) { return _hash; }
		if (HX_FIELD_EQ(inName,"_show") ) { return _show; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		if (HX_FIELD_EQ(inName,"_equal") ) { return _equal; }
		if (HX_FIELD_EQ(inName,"_order") ) { return _order; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"factory") ) { return factory_dyn(); }
		if (HX_FIELD_EQ(inName,"extract") ) { return extract_dyn(); }
		if (HX_FIELD_EQ(inName,"prepend") ) { return prepend_dyn(); }
		if (HX_FIELD_EQ(inName,"flatMap") ) { return flatMap_dyn(); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return reverse_dyn(); }
		if (HX_FIELD_EQ(inName,"getHash") ) { return getHash_dyn(); }
		if (HX_FIELD_EQ(inName,"getShow") ) { return getShow_dyn(); }
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		if (HX_FIELD_EQ(inName,"getHead") ) { return getHead_dyn(); }
		if (HX_FIELD_EQ(inName,"getLast") ) { return getLast_dyn(); }
		if (HX_FIELD_EQ(inName,"getTail") ) { return getTail_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"getOrder") ) { return getOrder_dyn(); }
		if (HX_FIELD_EQ(inName,"getEqual") ) { return getEqual_dyn(); }
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		if (HX_FIELD_EQ(inName,"dropWhile") ) { return dropWhile_dyn(); }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"headOption") ) { return getHeadOption(); }
		if (HX_FIELD_EQ(inName,"lastOption") ) { return getLastOption(); }
		if (HX_FIELD_EQ(inName,"prependAll") ) { return prependAll_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstOption") ) { return getHeadOption(); }
		if (HX_FIELD_EQ(inName,"prependAllR") ) { return prependAllR_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getHeadOption") ) { return getHeadOption_dyn(); }
		if (HX_FIELD_EQ(inName,"getLastOption") ) { return getLastOption_dyn(); }
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

Dynamic List_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tail") ) { tail=inValue.Cast< ::haxe::data::collections::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hash") ) { hash=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"show") ) { show=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"first") ) { first=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"equal") ) { equal=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"order") ) { order=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hash") ) { _hash=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_show") ) { _show=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_equal") ) { _equal=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_order") ) { _order=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"headOption") ) { headOption=inValue.Cast< ::Option >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastOption") ) { lastOption=inValue.Cast< ::Option >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstOption") ) { firstOption=inValue.Cast< ::Option >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void List_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("head"));
	outFields->push(HX_CSTRING("tail"));
	outFields->push(HX_CSTRING("first"));
	outFields->push(HX_CSTRING("last"));
	outFields->push(HX_CSTRING("headOption"));
	outFields->push(HX_CSTRING("firstOption"));
	outFields->push(HX_CSTRING("lastOption"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("nil"),
	HX_CSTRING("create"),
	HX_CSTRING("factory"),
	HX_CSTRING("extract"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("head"),
	HX_CSTRING("tail"),
	HX_CSTRING("first"),
	HX_CSTRING("last"),
	HX_CSTRING("headOption"),
	HX_CSTRING("firstOption"),
	HX_CSTRING("lastOption"),
	HX_CSTRING("equal"),
	HX_CSTRING("order"),
	HX_CSTRING("hash"),
	HX_CSTRING("show"),
	HX_CSTRING("empty"),
	HX_CSTRING("cons"),
	HX_CSTRING("prepend"),
	HX_CSTRING("prependAll"),
	HX_CSTRING("prependAllR"),
	HX_CSTRING("append"),
	HX_CSTRING("foldl"),
	HX_CSTRING("foldr"),
	HX_CSTRING("contains"),
	HX_CSTRING("add"),
	HX_CSTRING("addAll"),
	HX_CSTRING("remove"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("concat"),
	HX_CSTRING("drop"),
	HX_CSTRING("dropWhile"),
	HX_CSTRING("take"),
	HX_CSTRING("map"),
	HX_CSTRING("flatMap"),
	HX_CSTRING("filter"),
	HX_CSTRING("reverse"),
	HX_CSTRING("zip"),
	HX_CSTRING("gaps"),
	HX_CSTRING("sort"),
	HX_CSTRING("iterator"),
	HX_CSTRING("withOrderFunction"),
	HX_CSTRING("withEqualFunction"),
	HX_CSTRING("withHashFunction"),
	HX_CSTRING("withShowFunction"),
	HX_CSTRING("_equal"),
	HX_CSTRING("_order"),
	HX_CSTRING("_hash"),
	HX_CSTRING("_show"),
	HX_CSTRING("getOrder"),
	HX_CSTRING("getEqual"),
	HX_CSTRING("getHash"),
	HX_CSTRING("getShow"),
	HX_CSTRING("equals"),
	HX_CSTRING("compare"),
	HX_CSTRING("hashCode"),
	HX_CSTRING("toString"),
	HX_CSTRING("size"),
	HX_CSTRING("decompose"),
	HX_CSTRING("getHead"),
	HX_CSTRING("getLast"),
	HX_CSTRING("getHeadOption"),
	HX_CSTRING("getLastOption"),
	HX_CSTRING("getTail"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class List_obj::__mClass;

void List_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.data.collections.List"), hx::TCanCast< List_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void List_obj::__boot()
{
}

} // end namespace haxe
} // end namespace data
} // end namespace collections
