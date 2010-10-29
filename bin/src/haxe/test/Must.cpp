#include <hxcpp.h>

#ifndef INCLUDED_Either
#include <Either.h>
#endif
#ifndef INCLUDED_Stax
#include <Stax.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringExtensions
#include <StringExtensions.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_data_collections_Collection
#include <haxe/data/collections/Collection.h>
#endif
#ifndef INCLUDED_haxe_functional_Foldable
#include <haxe/functional/Foldable.h>
#endif
#ifndef INCLUDED_haxe_test_Must
#include <haxe/test/Must.h>
#endif
namespace haxe{
namespace test{

Void Must_obj::__construct()
{
	return null();
}

Must_obj::~Must_obj() { }

Dynamic Must_obj::__CreateEmpty() { return  new Must_obj; }
hx::ObjectPtr< Must_obj > Must_obj::__new()
{  hx::ObjectPtr< Must_obj > result = new Must_obj();
	result->__construct();
	return result;}

Dynamic Must_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Must_obj > result = new Must_obj();
	result->__construct();
	return result;}

Dynamic Must_obj::equal( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Must_obj::equal")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",32)
	Array< Dynamic > equal = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",32)
	Array< Dynamic > expected = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",33)
	if ((equal->__get(0) == null()))
		equal[0] = ::Stax_obj::getEqualFor(expected->__get(0));

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,equal,Array< Dynamic >,expected)
	::Either run(Dynamic value){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &value){
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("assertion") , (HX_CSTRING("x == ") + value));
					__result->Add(HX_CSTRING("negation") , (HX_CSTRING("x != ") + value));
					return __result;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",36)
			Dynamic result = _Function_2_1::Block(value);
			struct _Function_2_2{
				inline static ::Either Block( Dynamic &result){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",42)
					return ::Either_obj::Left(result);
				}
			};
			struct _Function_2_3{
				inline static ::Either Block( Dynamic &result){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",45)
					return ::Either_obj::Right(result);
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",41)
			return (  (!(equal->__get(0)(value,expected->__get(0)))) ? ::Either(_Function_2_2::Block(result)) : ::Either(_Function_2_3::Block(result)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",35)
	return  Dynamic(new _Function_1_1(equal,expected));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Must_obj,equal,return )

Dynamic Must_obj::beTrue( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Must_obj::beTrue")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	::Either run(bool value){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( ){
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("assertion") , HX_CSTRING("x == true"));
					__result->Add(HX_CSTRING("negation") , HX_CSTRING("x == false"));
					return __result;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",52)
			Dynamic result = _Function_2_1::Block();
			struct _Function_2_2{
				inline static ::Either Block( Dynamic &result){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",58)
					return ::Either_obj::Left(result);
				}
			};
			struct _Function_2_3{
				inline static ::Either Block( Dynamic &result){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",61)
					return ::Either_obj::Right(result);
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",57)
			return (  (!(value)) ? ::Either(_Function_2_2::Block(result)) : ::Either(_Function_2_3::Block(result)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",51)
	return  Dynamic(new _Function_1_1());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Must_obj,beTrue,return )

Dynamic Must_obj::beFalse( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Must_obj::beFalse")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	::Either run(bool value){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( ){
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("assertion") , HX_CSTRING("x == false"));
					__result->Add(HX_CSTRING("negation") , HX_CSTRING("x == true"));
					return __result;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",68)
			Dynamic result = _Function_2_1::Block();
			struct _Function_2_2{
				inline static ::Either Block( Dynamic &result){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",74)
					return ::Either_obj::Left(result);
				}
			};
			struct _Function_2_3{
				inline static ::Either Block( Dynamic &result){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",77)
					return ::Either_obj::Right(result);
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",73)
			return (  (value) ? ::Either(_Function_2_2::Block(result)) : ::Either(_Function_2_3::Block(result)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",67)
	return  Dynamic(new _Function_1_1());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Must_obj,beFalse,return )

Dynamic Must_obj::beGreaterThan( double $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Must_obj::beGreaterThan")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",82)
	Array< double > ref = Array_obj< double >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< double >,ref)
	::Either run(double value){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( Array< double > &ref){
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("assertion") , (HX_CSTRING("x > ") + ref->__get(0)));
					__result->Add(HX_CSTRING("negation") , (HX_CSTRING("x <= ") + ref->__get(0)));
					return __result;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",84)
			Dynamic result = _Function_2_1::Block(ref);
			struct _Function_2_2{
				inline static ::Either Block( Dynamic &result){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",90)
					return ::Either_obj::Left(result);
				}
			};
			struct _Function_2_3{
				inline static ::Either Block( Dynamic &result){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",93)
					return ::Either_obj::Right(result);
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",89)
			return (  ((value <= ref->__get(0))) ? ::Either(_Function_2_2::Block(result)) : ::Either(_Function_2_3::Block(result)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",83)
	return  Dynamic(new _Function_1_1(ref));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Must_obj,beGreaterThan,return )

Dynamic Must_obj::beLessThan( double $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Must_obj::beLessThan")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",98)
	Array< double > ref = Array_obj< double >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< double >,ref)
	::Either run(double value){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( Array< double > &ref){
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("assertion") , (HX_CSTRING("x < ") + ref->__get(0)));
					__result->Add(HX_CSTRING("negation") , (HX_CSTRING("x >= ") + ref->__get(0)));
					return __result;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",100)
			Dynamic result = _Function_2_1::Block(ref);
			struct _Function_2_2{
				inline static ::Either Block( Dynamic &result){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",106)
					return ::Either_obj::Left(result);
				}
			};
			struct _Function_2_3{
				inline static ::Either Block( Dynamic &result){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",109)
					return ::Either_obj::Right(result);
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",105)
			return (  ((value >= ref->__get(0))) ? ::Either(_Function_2_2::Block(result)) : ::Either(_Function_2_3::Block(result)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",99)
	return  Dynamic(new _Function_1_1(ref));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Must_obj,beLessThan,return )

Dynamic Must_obj::beGreaterThanInt( int $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Must_obj::beGreaterThanInt")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",114)
	Array< int > ref = Array_obj< int >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< int >,ref)
	::Either run(int value){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( Array< int > &ref){
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("assertion") , (HX_CSTRING("x > ") + ref->__get(0)));
					__result->Add(HX_CSTRING("negation") , (HX_CSTRING("x <= ") + ref->__get(0)));
					return __result;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",116)
			Dynamic result = _Function_2_1::Block(ref);
			struct _Function_2_2{
				inline static ::Either Block( Dynamic &result){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",122)
					return ::Either_obj::Left(result);
				}
			};
			struct _Function_2_3{
				inline static ::Either Block( Dynamic &result){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",125)
					return ::Either_obj::Right(result);
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",121)
			return (  ((value <= ref->__get(0))) ? ::Either(_Function_2_2::Block(result)) : ::Either(_Function_2_3::Block(result)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",115)
	return  Dynamic(new _Function_1_1(ref));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Must_obj,beGreaterThanInt,return )

Dynamic Must_obj::beLessThanInt( int $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Must_obj::beLessThanInt")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",130)
	Array< int > ref = Array_obj< int >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< int >,ref)
	::Either run(int value){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( Array< int > &ref){
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("assertion") , (HX_CSTRING("x < ") + ref->__get(0)));
					__result->Add(HX_CSTRING("negation") , (HX_CSTRING("x >= ") + ref->__get(0)));
					return __result;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",132)
			Dynamic result = _Function_2_1::Block(ref);
			struct _Function_2_2{
				inline static ::Either Block( Dynamic &result){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",138)
					return ::Either_obj::Left(result);
				}
			};
			struct _Function_2_3{
				inline static ::Either Block( Dynamic &result){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",141)
					return ::Either_obj::Right(result);
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",137)
			return (  ((value >= ref->__get(0))) ? ::Either(_Function_2_2::Block(result)) : ::Either(_Function_2_3::Block(result)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",131)
	return  Dynamic(new _Function_1_1(ref));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Must_obj,beLessThanInt,return )

Dynamic Must_obj::haveLength( int $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Must_obj::haveLength")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",146)
	Array< int > length = Array_obj< int >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< int >,length)
	::Either run(Dynamic value){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",148)
			int len = 0;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",150)
			for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(value->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
				Dynamic e = __it->next();
				++(len);
				__SAFE_POINT
			}
			struct _Function_2_1{
				inline static Dynamic Block( Array< int > &length){
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("assertion") , (HX_CSTRING("x.length == ") + length->__get(0)));
					__result->Add(HX_CSTRING("negation") , (HX_CSTRING("x.length != ") + length->__get(0)));
					return __result;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",152)
			Dynamic result = _Function_2_1::Block(length);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",157)
			return (  ((len != length->__get(0))) ? ::Either(::Either_obj::Left(result)) : ::Either(::Either_obj::Right(result)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",147)
	return  Dynamic(new _Function_1_1(length));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Must_obj,haveLength,return )

Dynamic Must_obj::haveClass( ::Class $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Must_obj::haveClass")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",161)
	Array< ::Class > c = Array_obj< ::Class >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::Class >,c)
	::Either run(Dynamic value){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( Array< ::Class > &c){
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("assertion") , (((HX_CSTRING("x.isInstanceOf(") + ::Type_obj::getClassName(c->__get(0)))) + HX_CSTRING(")")));
					__result->Add(HX_CSTRING("negation") , (((HX_CSTRING("!x.isInstanceOf(") + ::Type_obj::getClassName(c->__get(0)))) + HX_CSTRING(")")));
					return __result;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",163)
			Dynamic result = _Function_2_1::Block(c);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",168)
			return (  (!(::Std_obj::is(value,c->__get(0)))) ? ::Either(::Either_obj::Left(result)) : ::Either(::Either_obj::Right(result)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",162)
	return  Dynamic(new _Function_1_1(c));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Must_obj,haveClass,return )

Dynamic Must_obj::containElement( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Must_obj::containElement")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",172)
	Array< Dynamic > element = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,element)
	::Either run(::haxe::data::collections::Collection c){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( Array< Dynamic > &element){
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("assertion") , (((HX_CSTRING("x.contains(") + element->__get(0))) + HX_CSTRING(")")));
					__result->Add(HX_CSTRING("negation") , (((HX_CSTRING("!x.contains(") + element->__get(0))) + HX_CSTRING(")")));
					return __result;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",174)
			Dynamic result = _Function_2_1::Block(element);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",179)
			return (  (!(c->contains(element->__get(0)))) ? ::Either(::Either_obj::Left(result)) : ::Either(::Either_obj::Right(result)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",173)
	return  Dynamic(new _Function_1_1(element));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Must_obj,containElement,return )

Dynamic Must_obj::containString( ::String $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Must_obj::containString")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",183)
	Array< ::String > sub = Array_obj< ::String >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::String >,sub)
	::Either run(::String value){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( Array< ::String > &sub){
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("assertion") , (((HX_CSTRING("x.contains(\"") + sub->__get(0))) + HX_CSTRING("\")")));
					__result->Add(HX_CSTRING("negation") , (((HX_CSTRING("!x.contains(\"") + sub->__get(0))) + HX_CSTRING("\")")));
					return __result;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",185)
			Dynamic result = _Function_2_1::Block(sub);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",190)
			return (  (!(::StringExtensions_obj::contains(value,sub->__get(0)))) ? ::Either(::Either_obj::Left(result)) : ::Either(::Either_obj::Right(result)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",184)
	return  Dynamic(new _Function_1_1(sub));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Must_obj,containString,return )

Dynamic Must_obj::startWithString( ::String $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Must_obj::startWithString")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",194)
	Array< ::String > s = Array_obj< ::String >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::String >,s)
	::Either run(::String value){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( Array< ::String > &s){
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("assertion") , (((HX_CSTRING("x.startsWith(\"") + s->__get(0))) + HX_CSTRING("\")")));
					__result->Add(HX_CSTRING("negation") , (((HX_CSTRING("!x.startsWith(\"") + s->__get(0))) + HX_CSTRING("\")")));
					return __result;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",196)
			Dynamic result = _Function_2_1::Block(s);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",201)
			return (  (!(::StringExtensions_obj::startsWith(value,s->__get(0)))) ? ::Either(::Either_obj::Left(result)) : ::Either(::Either_obj::Right(result)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",195)
	return  Dynamic(new _Function_1_1(s));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Must_obj,startWithString,return )

Dynamic Must_obj::endWithString( ::String $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Must_obj::endWithString")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",205)
	Array< ::String > s = Array_obj< ::String >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::String >,s)
	::Either run(::String value){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( Array< ::String > &s){
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("assertion") , (((HX_CSTRING("x.endsWith(\"") + s->__get(0))) + HX_CSTRING("\")")));
					__result->Add(HX_CSTRING("negation") , (((HX_CSTRING("!x.endsWith(\"") + s->__get(0))) + HX_CSTRING("\")")));
					return __result;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",207)
			Dynamic result = _Function_2_1::Block(s);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",212)
			return (  (!(::StringExtensions_obj::endsWith(value,s->__get(0)))) ? ::Either(::Either_obj::Left(result)) : ::Either(::Either_obj::Right(result)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",206)
	return  Dynamic(new _Function_1_1(s));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Must_obj,endWithString,return )

Dynamic Must_obj::beNull( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Must_obj::beNull")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	::Either run(Dynamic value){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( ){
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("assertion") , HX_CSTRING("x == null"));
					__result->Add(HX_CSTRING("negation") , HX_CSTRING("x != null"));
					return __result;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",218)
			Dynamic result = _Function_2_1::Block();
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",223)
			return (  ((value != null())) ? ::Either(::Either_obj::Left(result)) : ::Either(::Either_obj::Right(result)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",217)
	return  Dynamic(new _Function_1_1());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Must_obj,beNull,return )

Dynamic Must_obj::beNonNull( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Must_obj::beNonNull")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	::Either run(Dynamic value){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( ){
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("assertion") , HX_CSTRING("x != null"));
					__result->Add(HX_CSTRING("negation") , HX_CSTRING("x == null"));
					return __result;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",229)
			Dynamic result = _Function_2_1::Block();
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",234)
			return (  ((value == null())) ? ::Either(::Either_obj::Left(result)) : ::Either(::Either_obj::Right(result)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatchers.hx",228)
	return  Dynamic(new _Function_1_1());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Must_obj,beNonNull,return )


Must_obj::Must_obj()
{
}

void Must_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Must);
	HX_MARK_END_CLASS();
}

Dynamic Must_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"equal") ) { return equal_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"beTrue") ) { return beTrue_dyn(); }
		if (HX_FIELD_EQ(inName,"beNull") ) { return beNull_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"beFalse") ) { return beFalse_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"haveClass") ) { return haveClass_dyn(); }
		if (HX_FIELD_EQ(inName,"beNonNull") ) { return beNonNull_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"beLessThan") ) { return beLessThan_dyn(); }
		if (HX_FIELD_EQ(inName,"haveLength") ) { return haveLength_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"beGreaterThan") ) { return beGreaterThan_dyn(); }
		if (HX_FIELD_EQ(inName,"beLessThanInt") ) { return beLessThanInt_dyn(); }
		if (HX_FIELD_EQ(inName,"containString") ) { return containString_dyn(); }
		if (HX_FIELD_EQ(inName,"endWithString") ) { return endWithString_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"containElement") ) { return containElement_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"startWithString") ) { return startWithString_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"beGreaterThanInt") ) { return beGreaterThanInt_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Must_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Must_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("equal"),
	HX_CSTRING("beTrue"),
	HX_CSTRING("beFalse"),
	HX_CSTRING("beGreaterThan"),
	HX_CSTRING("beLessThan"),
	HX_CSTRING("beGreaterThanInt"),
	HX_CSTRING("beLessThanInt"),
	HX_CSTRING("haveLength"),
	HX_CSTRING("haveClass"),
	HX_CSTRING("containElement"),
	HX_CSTRING("containString"),
	HX_CSTRING("startWithString"),
	HX_CSTRING("endWithString"),
	HX_CSTRING("beNull"),
	HX_CSTRING("beNonNull"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Must_obj::__mClass;

void Must_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.Must"), hx::TCanCast< Must_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Must_obj::__boot()
{
}

} // end namespace haxe
} // end namespace test
