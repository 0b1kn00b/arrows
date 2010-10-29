#include <hxcpp.h>

#ifndef INCLUDED_ArrayExtensions
#include <ArrayExtensions.h>
#endif
#ifndef INCLUDED_IntExtensions
#include <IntExtensions.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED__Prelude_AbstractProduct
#include <_Prelude/AbstractProduct.h>
#endif
#ifndef INCLUDED_haxe_data_transcode_TranscodeJValue
#include <haxe/data/transcode/TranscodeJValue.h>
#endif
#ifndef INCLUDED_haxe_text_json_JValue
#include <haxe/text/json/JValue.h>
#endif

Void ArrayExtensions_obj::__construct()
{
	return null();
}

ArrayExtensions_obj::~ArrayExtensions_obj() { }

Dynamic ArrayExtensions_obj::__CreateEmpty() { return  new ArrayExtensions_obj; }
hx::ObjectPtr< ArrayExtensions_obj > ArrayExtensions_obj::__new()
{  hx::ObjectPtr< ArrayExtensions_obj > result = new ArrayExtensions_obj();
	result->__construct();
	return result;}

Dynamic ArrayExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayExtensions_obj > result = new ArrayExtensions_obj();
	result->__construct();
	return result;}

Array< Dynamic > ArrayExtensions_obj::sort( Array< Dynamic > v){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::sort")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",308)
	return ::ArrayExtensions_obj::sortWith(v,::Stax_obj::getOrderFor(v->__get(0)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayExtensions_obj,sort,return )

Array< Dynamic > ArrayExtensions_obj::sortWith( Array< Dynamic > v,Dynamic order){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::sortWith")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",312)
	Array< Dynamic > r = v->copy();
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",313)
	r->sort(order);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",314)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,sortWith,return )

int ArrayExtensions_obj::compare( Array< Dynamic > v1,Array< Dynamic > v2){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::compare")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",318)
	return ::ArrayExtensions_obj::compareWith(v1,v2,::Stax_obj::getOrderFor(v1->__get(0)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,compare,return )

int ArrayExtensions_obj::compareWith( Array< Dynamic > v1,Array< Dynamic > v2,Dynamic order){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::compareWith")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",322)
	int c = (v1->length - v2->length);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",323)
	if ((c != 0))
		return c;
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",325)
	if ((v1->length == 0))
		return 0;
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",327)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",327)
		int _g1 = 0;
		int _g = v1->length;
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",327)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",327)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",328)
			int c1 = order(v1->__get(i),v2->__get(i));
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",329)
			if ((c1 != 0))
				return c1;
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",331)
	return 0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayExtensions_obj,compareWith,return )

bool ArrayExtensions_obj::equals( Array< Dynamic > v1,Array< Dynamic > v2){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::equals")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",335)
	return ::ArrayExtensions_obj::equalsWith(v1,v2,::Stax_obj::getEqualFor(v1->__get(0)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,equals,return )

bool ArrayExtensions_obj::equalsWith( Array< Dynamic > v1,Array< Dynamic > v2,Dynamic equal){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::equalsWith")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",339)
	if ((v1->length != v2->length))
		return false;
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",340)
	if ((v1->length == 0))
		return true;
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",341)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",341)
		int _g1 = 0;
		int _g = v1->length;
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",341)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",341)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",342)
			if (!(equal(v1->__get(i),v2->__get(i))))
				return false;
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",345)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayExtensions_obj,equalsWith,return )

::String ArrayExtensions_obj::toString( Array< Dynamic > v){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::toString")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",349)
	return ::ArrayExtensions_obj::toStringWith(v,::Stax_obj::getShowFor(v->__get(0)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayExtensions_obj,toString,return )

::String ArrayExtensions_obj::toStringWith( Array< Dynamic > v,Dynamic show){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::toStringWith")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",352)
	return (((HX_CSTRING("[") + ::ArrayExtensions_obj::map(v,show)->join(HX_CSTRING(", ")))) + HX_CSTRING("]"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,toStringWith,return )

int ArrayExtensions_obj::hashCode( Array< Dynamic > v){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::hashCode")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",355)
	return ::ArrayExtensions_obj::hashCodeWith(v,::Stax_obj::getHashFor(v->__get(0)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayExtensions_obj,hashCode,return )

int ArrayExtensions_obj::hashCodeWith( Array< Dynamic > v,Dynamic hash){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::hashCodeWith")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",358)
	int h = 12289;
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",359)
	if ((v->length == 0))
		return h;
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",360)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",360)
		int _g1 = 0;
		int _g = v->length;
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",360)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",360)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",361)
			hx::AddEq(h,(hash(v->__get(i)) * 12289));
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",364)
	return h;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,hashCodeWith,return )

Array< Dynamic > ArrayExtensions_obj::filter( Array< Dynamic > a,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::filter")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",368)
	Array< Dynamic > n = Array_obj< Dynamic >::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",370)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",370)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",370)
		while((_g < a->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",370)
			Dynamic e = a->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",370)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",371)
			if (f(e))
				n->push(e);
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",373)
	return n;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,filter,return )

int ArrayExtensions_obj::size( Array< Dynamic > a){
	HX_SOURCE_PUSH("ArrayExtensions_obj::size")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",377)
	return a->length;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayExtensions_obj,size,return )

int ArrayExtensions_obj::indexOf( Array< Dynamic > a,Dynamic t){
	HX_SOURCE_PUSH("ArrayExtensions_obj::indexOf")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",381)
	int index = 0;
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",383)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",383)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",383)
		while((_g < a->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",383)
			Dynamic e = a->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",383)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",384)
			if ((e == t))
				return index;
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",386)
			++(index);
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",389)
	return -1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,indexOf,return )

Array< Dynamic > ArrayExtensions_obj::map( Array< Dynamic > a,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::map")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",393)
	Array< Dynamic > n = Array_obj< Dynamic >::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",395)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",395)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",395)
		while((_g < a->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",395)
			Dynamic e = a->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",395)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",395)
			n->push(f(e));
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",397)
	return n;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,map,return )

Array< Dynamic > ArrayExtensions_obj::then( Array< Dynamic > a1,Array< Dynamic > a2){
	HX_SOURCE_PUSH("ArrayExtensions_obj::then")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",400)
	return a2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,then,return )

Array< Dynamic > ArrayExtensions_obj::flatMap( Array< Dynamic > a,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::flatMap")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",404)
	Array< Dynamic > n = Array_obj< Dynamic >::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",406)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",406)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",406)
		while((_g < a->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",406)
			Dynamic e1 = a->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",406)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",407)
			for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(f(e1)->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
				Dynamic e2 = __it->next();
				n->push(e2);
				__SAFE_POINT
			}
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",410)
	return n;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,flatMap,return )

Dynamic ArrayExtensions_obj::foldl( Array< Dynamic > a,Dynamic z,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::foldl")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",414)
	Dynamic r = z;
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",416)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",416)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",416)
		while((_g < a->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",416)
			Dynamic e = a->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",416)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",416)
			r = f(r,e);
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",418)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayExtensions_obj,foldl,return )

Dynamic ArrayExtensions_obj::foldr( Array< Dynamic > a,Dynamic z,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::foldr")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",422)
	Dynamic r = z;
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",424)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",424)
		int _g1 = 0;
		int _g = a->length;
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",424)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",424)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",425)
			Dynamic e = a->__get((((a->length - 1)) - i));
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",427)
			r = f(e,r);
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",430)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayExtensions_obj,foldr,return )

Array< ::Tuple2 > ArrayExtensions_obj::zip( Array< Dynamic > a,Array< Dynamic > b){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::zip")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",434)
	int len = ::Math_obj::floor(::Math_obj::min(a->length,b->length));
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",436)
	Array< ::Tuple2 > r = Array_obj< ::Tuple2 >::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",438)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",438)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",438)
		while((_g < len)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",438)
			int i = (_g)++;
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",439)
			r->push(::Tuple2_obj::create(a->__get(i),b->__get(i)));
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",442)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,zip,return )

Array< Dynamic > ArrayExtensions_obj::append( Array< Dynamic > a,Dynamic t){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::append")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",446)
	Array< Dynamic > copy = ::ArrayExtensions_obj::snapshot(a);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",448)
	copy->push(t);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",450)
	return copy;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,append,return )

Array< Dynamic > ArrayExtensions_obj::snapshot( Array< Dynamic > a){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::snapshot")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",454)
	return Array_obj< Dynamic >::__new()->concat(a);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayExtensions_obj,snapshot,return )

Dynamic ArrayExtensions_obj::first( Array< Dynamic > a){
	HX_SOURCE_PUSH("ArrayExtensions_obj::first")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",458)
	return a->__get(0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayExtensions_obj,first,return )

::Option ArrayExtensions_obj::firstOption( Array< Dynamic > a){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::firstOption")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",462)
	return (  ((a->length == 0)) ? ::Option(::Option_obj::None) : ::Option(::Option_obj::Some(a->__get(0))) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayExtensions_obj,firstOption,return )

Dynamic ArrayExtensions_obj::last( Array< Dynamic > a){
	HX_SOURCE_PUSH("ArrayExtensions_obj::last")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",466)
	return a->__get((a->length - 1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayExtensions_obj,last,return )

::Option ArrayExtensions_obj::lastOption( Array< Dynamic > a){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::lastOption")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",470)
	return (  ((a->length == 0)) ? ::Option(::Option_obj::None) : ::Option(::Option_obj::Some(a->__get((a->length - 1)))) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayExtensions_obj,lastOption,return )

bool ArrayExtensions_obj::contains( Array< Dynamic > a,Dynamic t){
	HX_SOURCE_PUSH("ArrayExtensions_obj::contains")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",474)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",474)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",474)
		while((_g < a->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",474)
			Dynamic e = a->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",474)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",474)
			if ((t == e))
				return true;
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",476)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,contains,return )

Array< Dynamic > ArrayExtensions_obj::foreach( Array< Dynamic > a,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::foreach")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",480)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",480)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",480)
		while((_g < a->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",480)
			Dynamic e = a->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",480)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",480)
			f(e);
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",482)
	return a;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,foreach,return )

Array< Dynamic > ArrayExtensions_obj::take( Array< Dynamic > a,int n){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::take")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",485)
	return a->slice(0,::IntExtensions_obj::min(n,a->length));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,take,return )

Array< Dynamic > ArrayExtensions_obj::takeWhile( Array< Dynamic > a,Dynamic p){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::takeWhile")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",488)
	Array< Dynamic > r = Array_obj< Dynamic >::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",490)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",490)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",490)
		while((_g < a->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",490)
			Dynamic e = a->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",490)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",491)
			if (p(e)){
				HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",491)
				r->push(e);
			}
			else{
				HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",491)
				break;
			}
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",494)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,takeWhile,return )

Array< Dynamic > ArrayExtensions_obj::drop( Array< Dynamic > a,int n){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::drop")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",497)
	return (  ((n >= a->length)) ? Array< Dynamic >(Array_obj< Dynamic >::__new()) : Array< Dynamic >(a->slice(n,null())) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,drop,return )

Array< Dynamic > ArrayExtensions_obj::dropWhile( Array< Dynamic > a,Dynamic p){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::dropWhile")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",500)
	Array< Dynamic > r = Array_obj< Dynamic >::__new()->concat(a);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",502)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",502)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",502)
		while((_g < a->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",502)
			Dynamic e = a->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",502)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",503)
			if (p(e)){
				HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",503)
				r->shift();
			}
			else{
				HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",503)
				break;
			}
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",506)
	return r;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,dropWhile,return )

::haxe::text::json::JValue ArrayExtensions_obj::decompose( Array< Dynamic > v){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::decompose")
	struct _Function_1_1{
		inline static ::haxe::text::json::JValue Block( Array< Dynamic > &v){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",510)
			Dynamic d = ::haxe::data::transcode::TranscodeJValue_obj::getDecomposerFor(::Type_obj::_typeof(v->__get(0)));
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",511)
			return ::haxe::text::json::JValue_obj::JArray(::ArrayExtensions_obj::map(v,d));
		}
	};
	struct _Function_1_2{
		inline static ::haxe::text::json::JValue Block( ){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",514)
			return ::haxe::text::json::JValue_obj::JArray(Array_obj< ::haxe::text::json::JValue >::__new());
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",509)
	return (  ((::ArrayExtensions_obj::size(v) != 0)) ? ::haxe::text::json::JValue(_Function_1_1::Block(v)) : ::haxe::text::json::JValue(_Function_1_2::Block()) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayExtensions_obj,decompose,return )

Array< Dynamic > ArrayExtensions_obj::extract( ::Class c,::haxe::text::json::JValue v,Dynamic e){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrayExtensions_obj::extract")
	struct _Function_1_1{
		inline static Array< Dynamic > Block( ::haxe::text::json::JValue &v,Dynamic &e){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",518)
			::haxe::text::json::JValue _switch_1 = (v);
			switch((_switch_1)->GetIndex()){
				case 4: {
					Array< ::haxe::text::json::JValue > v1 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",519)
						return ::ArrayExtensions_obj::map(v1,e);
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",521)
					return ::Stax_obj::error((HX_CSTRING("Expected Array but was: ") + v)).Cast< Array< Dynamic > >();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",518)
	return _Function_1_1::Block(v,e);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayExtensions_obj,extract,return )


ArrayExtensions_obj::ArrayExtensions_obj()
{
}

void ArrayExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayExtensions);
	HX_MARK_END_CLASS();
}

Dynamic ArrayExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map_dyn(); }
		if (HX_FIELD_EQ(inName,"zip") ) { return zip_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"sort") ) { return sort_dyn(); }
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		if (HX_FIELD_EQ(inName,"then") ) { return then_dyn(); }
		if (HX_FIELD_EQ(inName,"last") ) { return last_dyn(); }
		if (HX_FIELD_EQ(inName,"take") ) { return take_dyn(); }
		if (HX_FIELD_EQ(inName,"drop") ) { return drop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"foldl") ) { return foldl_dyn(); }
		if (HX_FIELD_EQ(inName,"foldr") ) { return foldr_dyn(); }
		if (HX_FIELD_EQ(inName,"first") ) { return first_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return indexOf_dyn(); }
		if (HX_FIELD_EQ(inName,"flatMap") ) { return flatMap_dyn(); }
		if (HX_FIELD_EQ(inName,"foreach") ) { return foreach_dyn(); }
		if (HX_FIELD_EQ(inName,"extract") ) { return extract_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sortWith") ) { return sortWith_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		if (HX_FIELD_EQ(inName,"snapshot") ) { return snapshot_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"takeWhile") ) { return takeWhile_dyn(); }
		if (HX_FIELD_EQ(inName,"dropWhile") ) { return dropWhile_dyn(); }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"equalsWith") ) { return equalsWith_dyn(); }
		if (HX_FIELD_EQ(inName,"lastOption") ) { return lastOption_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"compareWith") ) { return compareWith_dyn(); }
		if (HX_FIELD_EQ(inName,"firstOption") ) { return firstOption_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"toStringWith") ) { return toStringWith_dyn(); }
		if (HX_FIELD_EQ(inName,"hashCodeWith") ) { return hashCodeWith_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ArrayExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ArrayExtensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("sort"),
	HX_CSTRING("sortWith"),
	HX_CSTRING("compare"),
	HX_CSTRING("compareWith"),
	HX_CSTRING("equals"),
	HX_CSTRING("equalsWith"),
	HX_CSTRING("toString"),
	HX_CSTRING("toStringWith"),
	HX_CSTRING("hashCode"),
	HX_CSTRING("hashCodeWith"),
	HX_CSTRING("filter"),
	HX_CSTRING("size"),
	HX_CSTRING("indexOf"),
	HX_CSTRING("map"),
	HX_CSTRING("then"),
	HX_CSTRING("flatMap"),
	HX_CSTRING("foldl"),
	HX_CSTRING("foldr"),
	HX_CSTRING("zip"),
	HX_CSTRING("append"),
	HX_CSTRING("snapshot"),
	HX_CSTRING("first"),
	HX_CSTRING("firstOption"),
	HX_CSTRING("last"),
	HX_CSTRING("lastOption"),
	HX_CSTRING("contains"),
	HX_CSTRING("foreach"),
	HX_CSTRING("take"),
	HX_CSTRING("takeWhile"),
	HX_CSTRING("drop"),
	HX_CSTRING("dropWhile"),
	HX_CSTRING("decompose"),
	HX_CSTRING("extract"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ArrayExtensions_obj::__mClass;

void ArrayExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("ArrayExtensions"), hx::TCanCast< ArrayExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ArrayExtensions_obj::__boot()
{
}

