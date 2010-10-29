#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_data_collections_List
#include <haxe/data/collections/List.h>
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
namespace haxe{
namespace functional{

Void FoldableExtensions_obj::__construct()
{
	return null();
}

FoldableExtensions_obj::~FoldableExtensions_obj() { }

Dynamic FoldableExtensions_obj::__CreateEmpty() { return  new FoldableExtensions_obj; }
hx::ObjectPtr< FoldableExtensions_obj > FoldableExtensions_obj::__new()
{  hx::ObjectPtr< FoldableExtensions_obj > result = new FoldableExtensions_obj();
	result->__construct();
	return result;}

Dynamic FoldableExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FoldableExtensions_obj > result = new FoldableExtensions_obj();
	result->__construct();
	return result;}

Dynamic FoldableExtensions_obj::foldr( ::haxe::functional::Foldable foldable,Dynamic z,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::foldr")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",30)
	Array< Dynamic > a = ::haxe::functional::FoldableExtensions_obj::toArray(foldable);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",32)
	a->reverse();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",34)
	Dynamic acc = z;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",36)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",36)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",36)
		while((_g < a->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",36)
			Dynamic e = a->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",36)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",37)
			acc = f(e,acc);
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",40)
	return acc;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FoldableExtensions_obj,foldr,return )

Dynamic FoldableExtensions_obj::filter( ::haxe::functional::Foldable foldable,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::filter")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",43)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	::haxe::functional::Foldable run(::haxe::functional::Foldable a,Dynamic b){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",45)
			return (  (f->__get(0)(b)) ? ::haxe::functional::Foldable(a->__Field(HX_CSTRING("append"))(b)) : ::haxe::functional::Foldable(a) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",44)
	return foldable->__Field(HX_CSTRING("foldl"))(foldable->empty(), Dynamic(new _Function_1_1(f))).Cast< ::haxe::functional::Foldable >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,filter,return )

::Tuple2 FoldableExtensions_obj::partition( ::haxe::functional::Foldable foldable,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::partition")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",49)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	::Tuple2 run(::Tuple2 a,Dynamic b){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",51)
			return (  (f->__get(0)(b)) ? ::Tuple2(::Tuple2_obj::create(a->__Field(HX_CSTRING("_1")).Cast< ::haxe::functional::Foldable >()->__Field(HX_CSTRING("append"))(b),a->__Field(HX_CSTRING("_2")).Cast< ::haxe::functional::Foldable >())) : ::Tuple2(::Tuple2_obj::create(a->__Field(HX_CSTRING("_1")).Cast< ::haxe::functional::Foldable >(),a->__Field(HX_CSTRING("_2")).Cast< ::haxe::functional::Foldable >()->__Field(HX_CSTRING("append"))(b))) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",50)
	return foldable->__Field(HX_CSTRING("foldl"))(::Tuple2_obj::create(foldable->empty(),foldable->empty()), Dynamic(new _Function_1_1(f))).Cast< ::Tuple2 >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,partition,return )

::Tuple2 FoldableExtensions_obj::partitionWhile( ::haxe::functional::Foldable foldable,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::partitionWhile")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",55)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",56)
	Array< bool > partitioning = Array_obj< bool >::__new().Add(true);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< bool >,partitioning,Array< Dynamic >,f)
	::Tuple2 run(::Tuple2 a,Dynamic b){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static ::Tuple2 Block( Dynamic &b,::Tuple2 &a,Array< bool > &partitioning,Array< Dynamic > &f){
					struct _Function_3_1{
						inline static ::Tuple2 Block( ::Tuple2 &a,Dynamic &b){
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",61)
							return ::Tuple2_obj::create(a->__Field(HX_CSTRING("_1")).Cast< ::haxe::functional::Foldable >()->__Field(HX_CSTRING("append"))(b),a->__Field(HX_CSTRING("_2")).Cast< ::haxe::functional::Foldable >());
						}
					};
					struct _Function_3_2{
						inline static ::Tuple2 Block( Dynamic &b,Array< bool > &partitioning,::Tuple2 &a){
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",64)
							partitioning[0] = false;
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",66)
							return ::Tuple2_obj::create(a->__Field(HX_CSTRING("_1")).Cast< ::haxe::functional::Foldable >(),a->__Field(HX_CSTRING("_2")).Cast< ::haxe::functional::Foldable >()->__Field(HX_CSTRING("append"))(b));
						}
					};
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",60)
					return (  (f->__get(0)(b)) ? ::Tuple2(_Function_3_1::Block(a,b)) : ::Tuple2(_Function_3_2::Block(b,partitioning,a)) );
				}
			};
			struct _Function_2_2{
				inline static ::Tuple2 Block( ::Tuple2 &a,Dynamic &b){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",70)
					return ::Tuple2_obj::create(a->__Field(HX_CSTRING("_1")).Cast< ::haxe::functional::Foldable >(),a->__Field(HX_CSTRING("_2")).Cast< ::haxe::functional::Foldable >()->__Field(HX_CSTRING("append"))(b));
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",59)
			return (  (partitioning->__get(0)) ? ::Tuple2(_Function_2_1::Block(b,a,partitioning,f)) : ::Tuple2(_Function_2_2::Block(a,b)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",58)
	return foldable->__Field(HX_CSTRING("foldl"))(::Tuple2_obj::create(foldable->empty(),foldable->empty()), Dynamic(new _Function_1_1(partitioning,f))).Cast< ::Tuple2 >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,partitionWhile,return )

::haxe::functional::Foldable FoldableExtensions_obj::map( ::haxe::functional::Foldable src,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::map")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",76)
	return ::haxe::functional::FoldableExtensions_obj::mapTo(src,src->empty(),f).Cast< ::haxe::functional::Foldable >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,map,return )

Dynamic FoldableExtensions_obj::mapTo( ::haxe::functional::Foldable src,::haxe::functional::Foldable dest,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::mapTo")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",79)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	::haxe::functional::Foldable run(::haxe::functional::Foldable a,Dynamic b){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",81)
			return a->__Field(HX_CSTRING("append"))(f->__get(0)(b));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",80)
	return src->__Field(HX_CSTRING("foldl"))(dest, Dynamic(new _Function_1_1(f))).Cast< ::haxe::functional::Foldable >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FoldableExtensions_obj,mapTo,return )

Dynamic FoldableExtensions_obj::flatMap( ::haxe::functional::Foldable src,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::flatMap")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",86)
	return ::haxe::functional::FoldableExtensions_obj::flatMapTo(src,src->empty(),f);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,flatMap,return )

Dynamic FoldableExtensions_obj::flatMapTo( ::haxe::functional::Foldable src,::haxe::functional::Foldable dest,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::flatMapTo")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",89)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	::haxe::functional::Foldable run(::haxe::functional::Foldable a,Dynamic b){
{
			__SAFE_POINT

			HX_BEGIN_LOCAL_FUNC0(_Function_2_1)
			::haxe::functional::Foldable run(::haxe::functional::Foldable a1,Dynamic b1){
{
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",92)
					return a1->__Field(HX_CSTRING("append"))(b1);
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",91)
			return f->__get(0)(b)->__Field(HX_CSTRING("foldl"))(a, Dynamic(new _Function_2_1())).Cast< ::haxe::functional::Foldable >();
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",90)
	return src->__Field(HX_CSTRING("foldl"))(dest, Dynamic(new _Function_1_1(f))).Cast< ::haxe::functional::Foldable >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FoldableExtensions_obj,flatMapTo,return )

Dynamic FoldableExtensions_obj::take( ::haxe::functional::Foldable foldable,int $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::take")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",97)
	Array< int > n = Array_obj< int >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< int >,n)
	::haxe::functional::Foldable run(::haxe::functional::Foldable a,Dynamic b){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",99)
			return (  (((n[0])-- > 0)) ? ::haxe::functional::Foldable(a->__Field(HX_CSTRING("append"))(b)) : ::haxe::functional::Foldable(a) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",98)
	return foldable->__Field(HX_CSTRING("foldl"))(foldable->empty(), Dynamic(new _Function_1_1(n))).Cast< ::haxe::functional::Foldable >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,take,return )

Dynamic FoldableExtensions_obj::takeWhile( ::haxe::functional::Foldable foldable,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::takeWhile")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",103)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",104)
	Array< bool > taking = Array_obj< bool >::__new().Add(true);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< bool >,taking,Array< Dynamic >,f)
	::haxe::functional::Foldable run(::haxe::functional::Foldable a,Dynamic b){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static ::haxe::functional::Foldable Block( Dynamic &b,Array< bool > &taking,::haxe::functional::Foldable &a,Array< Dynamic > &f){
					struct _Function_3_1{
						inline static ::haxe::functional::Foldable Block( Array< bool > &taking,::haxe::functional::Foldable &a){
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",107)
							taking[0] = false;
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",107)
							return a;
						}
					};
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",107)
					return (  (f->__get(0)(b)) ? ::haxe::functional::Foldable(a->__Field(HX_CSTRING("append"))(b)) : ::haxe::functional::Foldable(_Function_3_1::Block(taking,a)) );
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",107)
			return (  (taking->__get(0)) ? ::haxe::functional::Foldable(_Function_2_1::Block(b,taking,a,f)) : ::haxe::functional::Foldable(a) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",106)
	return foldable->__Field(HX_CSTRING("foldl"))(foldable->empty(), Dynamic(new _Function_1_1(taking,f))).Cast< ::haxe::functional::Foldable >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,takeWhile,return )

Dynamic FoldableExtensions_obj::drop( ::haxe::functional::Foldable foldable,int $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::drop")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",111)
	Array< int > n = Array_obj< int >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< int >,n)
	::haxe::functional::Foldable run(::haxe::functional::Foldable a,Dynamic b){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",113)
			return (  (((n[0])-- > 0)) ? ::haxe::functional::Foldable(a) : ::haxe::functional::Foldable(a->__Field(HX_CSTRING("append"))(b)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",112)
	return foldable->__Field(HX_CSTRING("foldl"))(foldable->empty(), Dynamic(new _Function_1_1(n))).Cast< ::haxe::functional::Foldable >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,drop,return )

Dynamic FoldableExtensions_obj::dropWhile( ::haxe::functional::Foldable foldable,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::dropWhile")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",117)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",118)
	Array< bool > dropping = Array_obj< bool >::__new().Add(true);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< bool >,dropping,Array< Dynamic >,f)
	::haxe::functional::Foldable run(::haxe::functional::Foldable a,Dynamic b){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static ::haxe::functional::Foldable Block( Dynamic &b,Array< bool > &dropping,::haxe::functional::Foldable &a,Array< Dynamic > &f){
					struct _Function_3_1{
						inline static ::haxe::functional::Foldable Block( Array< bool > &dropping,Dynamic &b,::haxe::functional::Foldable &a){
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",121)
							dropping[0] = false;
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",121)
							return a->__Field(HX_CSTRING("append"))(b);
						}
					};
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",121)
					return (  (f->__get(0)(b)) ? ::haxe::functional::Foldable(a) : ::haxe::functional::Foldable(_Function_3_1::Block(dropping,b,a)) );
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",121)
			return (  (dropping->__get(0)) ? ::haxe::functional::Foldable(_Function_2_1::Block(b,dropping,a,f)) : ::haxe::functional::Foldable(a->__Field(HX_CSTRING("append"))(b)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",120)
	return foldable->__Field(HX_CSTRING("foldl"))(foldable->empty(), Dynamic(new _Function_1_1(dropping,f))).Cast< ::haxe::functional::Foldable >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,dropWhile,return )

int FoldableExtensions_obj::count( ::haxe::functional::Foldable foldable,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::count")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",125)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	int run(int a,Dynamic b){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",127)
			return (a + ((  (f->__get(0)(b)) ? int(1) : int(0) )));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",126)
	return foldable->__Field(HX_CSTRING("foldl"))(0, Dynamic(new _Function_1_1(f))).Cast< int >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,count,return )

int FoldableExtensions_obj::countWhile( ::haxe::functional::Foldable foldable,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::countWhile")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",131)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",132)
	Array< bool > counting = Array_obj< bool >::__new().Add(true);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< bool >,counting,Array< Dynamic >,f)
	int run(int a,Dynamic b){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static int Block( Dynamic &b,int &a,Array< bool > &counting,Array< Dynamic > &f){
					struct _Function_3_1{
						inline static int Block( Array< bool > &counting,int &a){
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",139)
							counting[0] = false;
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",141)
							return a;
						}
					};
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",137)
					return (  (f->__get(0)(b)) ? int((a + 1)) : int(_Function_3_1::Block(counting,a)) );
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",135)
			return (  (!(counting->__get(0))) ? int(a) : int(_Function_2_1::Block(b,a,counting,f)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",134)
	return foldable->__Field(HX_CSTRING("foldl"))(0, Dynamic(new _Function_1_1(counting,f))).Cast< int >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,countWhile,return )

Dynamic FoldableExtensions_obj::scanl( ::haxe::functional::Foldable foldable,Dynamic init,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::scanl")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",148)
	Array< Dynamic > a = ::haxe::functional::FoldableExtensions_obj::toArray(foldable);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",150)
	Dynamic result = foldable->empty()->__Field(HX_CSTRING("append"))(init);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",152)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",152)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",152)
		while((_g < a->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",152)
			Dynamic e = a->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",152)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",153)
			result = result->__Field(HX_CSTRING("append"))(f(e,init));
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",155)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FoldableExtensions_obj,scanl,return )

Dynamic FoldableExtensions_obj::scanr( ::haxe::functional::Foldable foldable,Dynamic init,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::scanr")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",159)
	Array< Dynamic > a = ::haxe::functional::FoldableExtensions_obj::toArray(foldable);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",161)
	a->reverse();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",163)
	Dynamic result = foldable->empty()->__Field(HX_CSTRING("append"))(init);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",165)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",165)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",165)
		while((_g < a->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",165)
			Dynamic e = a->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",165)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",166)
			result = result->__Field(HX_CSTRING("append"))(f(e,init));
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",168)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FoldableExtensions_obj,scanr,return )

Dynamic FoldableExtensions_obj::scanl1( ::haxe::functional::Foldable foldable,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::scanl1")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",172)
	Dynamic iterator = ::haxe::functional::FoldableExtensions_obj::toArray(foldable)->iterator();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",173)
	::haxe::functional::Foldable result = foldable->empty();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",175)
	if (!(iterator->__Field(HX_CSTRING("hasNext"))().Cast< bool >()))
		return result;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",178)
	Dynamic accum = iterator->__Field(HX_CSTRING("next"))();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",179)
	result = result->__Field(HX_CSTRING("append"))(accum);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",181)
	while(iterator->__Field(HX_CSTRING("hasNext"))().Cast< bool >()){
		__SAFE_POINT
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",182)
		result = result->__Field(HX_CSTRING("append"))(f(iterator->__Field(HX_CSTRING("next"))(),accum));
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",184)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,scanl1,return )

Dynamic FoldableExtensions_obj::scanr1( ::haxe::functional::Foldable foldable,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::scanr1")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",188)
	Array< Dynamic > a = ::haxe::functional::FoldableExtensions_obj::toArray(foldable);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",189)
	a->reverse();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",190)
	Dynamic iterator = a->iterator();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",191)
	::haxe::functional::Foldable result = foldable->empty();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",193)
	if (!(iterator->__Field(HX_CSTRING("hasNext"))().Cast< bool >()))
		return result;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",196)
	Dynamic accum = iterator->__Field(HX_CSTRING("next"))();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",197)
	result = result->__Field(HX_CSTRING("append"))(accum);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",199)
	while(iterator->__Field(HX_CSTRING("hasNext"))().Cast< bool >()){
		__SAFE_POINT
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",200)
		result = result->__Field(HX_CSTRING("append"))(f(iterator->__Field(HX_CSTRING("next"))(),accum));
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",202)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,scanr1,return )

Dynamic FoldableExtensions_obj::elements( ::haxe::functional::Foldable foldable){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::elements")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",206)
	return ::haxe::functional::FoldableExtensions_obj::toArray(foldable);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FoldableExtensions_obj,elements,return )

Dynamic FoldableExtensions_obj::concat( ::haxe::functional::Foldable foldable,::haxe::functional::Foldable rest){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::concat")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	::haxe::functional::Foldable run(::haxe::functional::Foldable a,Dynamic b){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",211)
			return a->__Field(HX_CSTRING("append"))(b);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",210)
	return rest->__Field(HX_CSTRING("foldl"))(foldable, Dynamic(new _Function_1_1())).Cast< ::haxe::functional::Foldable >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,concat,return )

Dynamic FoldableExtensions_obj::append( ::haxe::functional::Foldable foldable,Dynamic e){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::append")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",216)
	return foldable->__Field(HX_CSTRING("append"))(e);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,append,return )

Dynamic FoldableExtensions_obj::appendAll( ::haxe::functional::Foldable foldable,Dynamic i){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::appendAll")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",220)
	::haxe::functional::Foldable acc = foldable;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",222)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(i->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		Dynamic e = __it->next();
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",222)
			acc = acc->__Field(HX_CSTRING("append"))(e);
		}
;
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",224)
	return acc;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,appendAll,return )

Dynamic FoldableExtensions_obj::iterator( ::haxe::functional::Foldable foldable){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::iterator")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",228)
	return ::haxe::functional::FoldableExtensions_obj::elements(foldable)->__Field(HX_CSTRING("iterator"))();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FoldableExtensions_obj,iterator,return )

bool FoldableExtensions_obj::isEmpty( ::haxe::functional::Foldable foldable){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::isEmpty")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",232)
	return !(::haxe::functional::FoldableExtensions_obj::iterator(foldable)->__Field(HX_CSTRING("hasNext"))().Cast< bool >());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FoldableExtensions_obj,isEmpty,return )

::haxe::functional::Foldable FoldableExtensions_obj::foreach( ::haxe::functional::Foldable foldable,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::foreach")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",235)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	int run(int a,Dynamic b){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",236)
			f->__get(0)(b);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",236)
			return a;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",236)
	foldable->__Field(HX_CSTRING("foldl"))(1, Dynamic(new _Function_1_1(f)));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",238)
	return foldable;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,foreach,return )

::Option FoldableExtensions_obj::find( ::haxe::functional::Foldable foldable,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::find")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",241)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	::Option run(::Option a,Dynamic b){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static ::Option Block( Dynamic &b,::Option &a,Array< Dynamic > &f){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",243)
					::Option _switch_1 = (a);
					switch((_switch_1)->GetIndex()){
						case 0: {
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",244)
							return ::OptionExtensions_obj::filter(::OptionExtensions_obj::toOption(b),f->__get(0));
						}
						;break;
						default: {
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",246)
							return a;
						}
					}
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",243)
			return _Function_2_1::Block(b,a,f);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",242)
	return foldable->__Field(HX_CSTRING("foldl"))(::Option_obj::None, Dynamic(new _Function_1_1(f))).Cast< ::Option >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,find,return )

bool FoldableExtensions_obj::forAll( ::haxe::functional::Foldable foldable,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::forAll")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",251)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	bool run(bool a,Dynamic b){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static bool Block( Dynamic &b,bool &a,Array< Dynamic > &f){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",253)
					bool _switch_2 = (a);
					if (  ( _switch_2==true)){
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",254)
						return f->__get(0)(b);
					}
					else if (  ( _switch_2==false)){
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",255)
						return false;
					}
					else  {
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",253)
						return null();
					}
;
;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",253)
			return _Function_2_1::Block(b,a,f);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",252)
	return foldable->__Field(HX_CSTRING("foldl"))(true, Dynamic(new _Function_1_1(f))).Cast< bool >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,forAll,return )

bool FoldableExtensions_obj::forAny( ::haxe::functional::Foldable foldable,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::forAny")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",260)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	bool run(bool a,Dynamic b){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static bool Block( Dynamic &b,bool &a,Array< Dynamic > &f){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",262)
					bool _switch_3 = (a);
					if (  ( _switch_3==false)){
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",263)
						return f->__get(0)(b);
					}
					else if (  ( _switch_3==true)){
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",264)
						return true;
					}
					else  {
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",262)
						return null();
					}
;
;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",262)
			return _Function_2_1::Block(b,a,f);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",261)
	return foldable->__Field(HX_CSTRING("foldl"))(false, Dynamic(new _Function_1_1(f))).Cast< bool >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,forAny,return )

bool FoldableExtensions_obj::exists( ::haxe::functional::Foldable foldable,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::exists")
	struct _Function_1_1{
		inline static bool Block( ::haxe::functional::Foldable &foldable,Dynamic &f){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",270)
			::Option _switch_4 = (::haxe::functional::FoldableExtensions_obj::find(foldable,f));
			switch((_switch_4)->GetIndex()){
				case 1: {
					Dynamic v = _switch_4->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",271)
						return true;
					}
				}
				;break;
				case 0: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",272)
					return false;
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",270)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",270)
	return _Function_1_1::Block(foldable,f);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,exists,return )

bool FoldableExtensions_obj::existsP( ::haxe::functional::Foldable foldable,Dynamic ref,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::existsP")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",277)
	bool result = false;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",279)
	Array< Dynamic > a = ::haxe::functional::FoldableExtensions_obj::toArray(foldable);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",281)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",281)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",281)
		while((_g < a->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",281)
			Dynamic e = a->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",281)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",282)
			if (f(e,ref))
				result = true;
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",285)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FoldableExtensions_obj,existsP,return )

bool FoldableExtensions_obj::contains( ::haxe::functional::Foldable foldable,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::contains")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",288)
	Array< Dynamic > member = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,member)
	bool run(Dynamic e){
{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",289)
			return (e == member->__get(0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",289)
	return ::haxe::functional::FoldableExtensions_obj::exists(foldable, Dynamic(new _Function_1_1(member)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,contains,return )

Dynamic FoldableExtensions_obj::nubBy( ::haxe::functional::Foldable foldable,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::nubBy")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",292)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	::haxe::functional::Foldable run(::haxe::functional::Foldable a,Dynamic b){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static ::haxe::functional::Foldable Block( ::haxe::functional::Foldable &a){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",295)
					return a;
				}
			};
			struct _Function_2_2{
				inline static ::haxe::functional::Foldable Block( ::haxe::functional::Foldable &a,Dynamic &b){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",298)
					return a->__Field(HX_CSTRING("append"))(b);
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",294)
			return (  (::haxe::functional::FoldableExtensions_obj::existsP(a,b,f->__get(0))) ? ::haxe::functional::Foldable(_Function_2_1::Block(a)) : ::haxe::functional::Foldable(_Function_2_2::Block(a,b)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",293)
	return foldable->__Field(HX_CSTRING("foldl"))(foldable->empty(), Dynamic(new _Function_1_1(f))).Cast< ::haxe::functional::Foldable >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,nubBy,return )

Dynamic FoldableExtensions_obj::nub( ::haxe::functional::Foldable foldable){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::nub")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",304)
	Dynamic it = ::haxe::functional::FoldableExtensions_obj::iterator(foldable);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",305)
	Dynamic first = (  (it->__Field(HX_CSTRING("hasNext"))().Cast< bool >()) ? Dynamic(it->__Field(HX_CSTRING("next"))()) : Dynamic(null()) );
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",306)
	return ::haxe::functional::FoldableExtensions_obj::nubBy(foldable,::Stax_obj::getEqualFor(first));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FoldableExtensions_obj,nub,return )

Dynamic FoldableExtensions_obj::intersectBy( ::haxe::functional::Foldable foldable1,::haxe::functional::Foldable $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::intersectBy")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",309)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",309)
	Array< ::haxe::functional::Foldable > foldable2 = Array_obj< ::haxe::functional::Foldable >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< ::haxe::functional::Foldable >,foldable2,Array< Dynamic >,f)
	::haxe::functional::Foldable run(::haxe::functional::Foldable a,Dynamic b){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",311)
			return (  (::haxe::functional::FoldableExtensions_obj::existsP(foldable2->__get(0),b,f->__get(0))) ? ::haxe::functional::Foldable(a->__Field(HX_CSTRING("append"))(b)) : ::haxe::functional::Foldable(a) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",310)
	return foldable1->__Field(HX_CSTRING("foldl"))(foldable1->empty(), Dynamic(new _Function_1_1(foldable2,f))).Cast< ::haxe::functional::Foldable >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FoldableExtensions_obj,intersectBy,return )

Dynamic FoldableExtensions_obj::intersect( ::haxe::functional::Foldable foldable1,::haxe::functional::Foldable foldable2){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::intersect")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",316)
	Dynamic it = ::haxe::functional::FoldableExtensions_obj::iterator(foldable1);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",317)
	Dynamic first = (  (it->__Field(HX_CSTRING("hasNext"))().Cast< bool >()) ? Dynamic(it->__Field(HX_CSTRING("next"))()) : Dynamic(null()) );
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",318)
	return ::haxe::functional::FoldableExtensions_obj::intersectBy(foldable1,foldable2,::Stax_obj::getEqualFor(first));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,intersect,return )

::String FoldableExtensions_obj::mkString( ::haxe::functional::Foldable foldable,Dynamic __o_$t1,Dynamic $t2){
::String $t1 = __o_$t1.Default(HX_CSTRING(", "));
	HX_SOURCE_PUSH("FoldableExtensions_obj::mkString");
{
		__SAFE_POINT
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",321)
		Array< Dynamic > show = Array_obj< Dynamic >::__new().Add($t2);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",321)
		Array< ::String > sep = Array_obj< ::String >::__new().Add($t1);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",322)
		Array< bool > isFirst = Array_obj< bool >::__new().Add(true);

		HX_BEGIN_LOCAL_FUNC3(_Function_1_1,Array< Dynamic >,show,Array< bool >,isFirst,Array< ::String >,sep)
		::String run(::String a,Dynamic b){
{
				__SAFE_POINT
				struct _Function_2_1{
					inline static ::String Block( Array< bool > &isFirst){
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",325)
						isFirst[0] = false;
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",325)
						return HX_CSTRING("");
					}
				};
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",325)
				::String prefix = (  (isFirst->__get(0)) ? ::String(_Function_2_1::Block(isFirst)) : ::String(sep->__get(0)) );
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",326)
				if ((null() == show->__get(0)))
					show[0] = ::Stax_obj::getShowFor(b);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",328)
				return (((a + prefix)) + show->__get(0)(b));
			}
			return null();
		}
		HX_END_LOCAL_FUNC2(return)

		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",324)
		return foldable->__Field(HX_CSTRING("foldl"))(HX_CSTRING(""), Dynamic(new _Function_1_1(show,isFirst,sep))).Cast< ::String >();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FoldableExtensions_obj,mkString,return )

::haxe::data::collections::Map FoldableExtensions_obj::groupBy( ::haxe::functional::Foldable foldable,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::groupBy")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",332)
	Array< Dynamic > grouper = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",333)
	Array< ::haxe::functional::Foldable > def = Array_obj< ::haxe::functional::Foldable >::__new().Add(foldable->empty());

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,grouper,Array< ::haxe::functional::Foldable >,def)
	::haxe::data::collections::Map run(::haxe::data::collections::Map map,Dynamic e){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",335)
			Dynamic key = grouper->__get(0)(e);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",336)
			::haxe::functional::Foldable result = map->__Field(HX_CSTRING("getOrElseC"))(key,def->__get(0)).Cast< ::haxe::functional::Foldable >();
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",337)
			return map->set(key,result->__Field(HX_CSTRING("append"))(e));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",334)
	return foldable->__Field(HX_CSTRING("foldl"))(::haxe::data::collections::Map_obj::create(null(),null(),null(),null(),null(),null(),null(),null()), Dynamic(new _Function_1_1(grouper,def))).Cast< ::haxe::data::collections::Map >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FoldableExtensions_obj,groupBy,return )

Array< Dynamic > FoldableExtensions_obj::toArray( ::haxe::functional::Foldable foldable){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::toArray")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",342)
	Array< Array< Dynamic > > es = Array_obj< Array< Dynamic > >::__new().Add(Array_obj< Dynamic >::__new());

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Array< Dynamic > >,es)
	::haxe::functional::Foldable run(::haxe::functional::Foldable a,Dynamic b){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",344)
			es[0]->push(b);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",344)
			return a;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",344)
	foldable->__Field(HX_CSTRING("foldl"))(foldable->empty(), Dynamic(new _Function_1_1(es)));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",346)
	return es->__get(0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FoldableExtensions_obj,toArray,return )

::haxe::data::collections::Map FoldableExtensions_obj::toMap( ::haxe::functional::Foldable foldable){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::toMap")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",350)
	::haxe::data::collections::Map dest = ::haxe::data::collections::Map_obj::create(null(),null(),null(),null(),null(),null(),null(),null());

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	::haxe::data::collections::Map run(::haxe::data::collections::Map a,::Tuple2 b){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",352)
			return a->append(b);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",351)
	return foldable->__Field(HX_CSTRING("foldl"))(dest, Dynamic(new _Function_1_1())).Cast< ::haxe::data::collections::Map >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FoldableExtensions_obj,toMap,return )

::haxe::data::collections::List FoldableExtensions_obj::toList( ::haxe::functional::Foldable foldable){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::toList")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",357)
	::haxe::data::collections::List dest = ::haxe::data::collections::List_obj::create(null(),null(),null(),null());

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	::haxe::data::collections::List run(::haxe::data::collections::List a,Dynamic b){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",359)
			return a->append(b);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",358)
	return foldable->__Field(HX_CSTRING("foldl"))(dest, Dynamic(new _Function_1_1())).Cast< ::haxe::data::collections::List >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FoldableExtensions_obj,toList,return )

::haxe::data::collections::Set FoldableExtensions_obj::toSet( ::haxe::functional::Foldable foldable){
	__SAFE_POINT
	HX_SOURCE_PUSH("FoldableExtensions_obj::toSet")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",364)
	::haxe::data::collections::Set dest = ::haxe::data::collections::Set_obj::create(null(),null(),null(),null());

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	::haxe::data::collections::Set run(::haxe::data::collections::Set a,Dynamic b){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",366)
			return a->append(b);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/FoldableExtensions.hx",365)
	return foldable->__Field(HX_CSTRING("foldl"))(dest, Dynamic(new _Function_1_1())).Cast< ::haxe::data::collections::Set >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FoldableExtensions_obj,toSet,return )


FoldableExtensions_obj::FoldableExtensions_obj()
{
}

void FoldableExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FoldableExtensions);
	HX_MARK_END_CLASS();
}

Dynamic FoldableExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map_dyn(); }
		if (HX_FIELD_EQ(inName,"nub") ) { return nub_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"take") ) { return take_dyn(); }
		if (HX_FIELD_EQ(inName,"drop") ) { return drop_dyn(); }
		if (HX_FIELD_EQ(inName,"find") ) { return find_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"foldr") ) { return foldr_dyn(); }
		if (HX_FIELD_EQ(inName,"mapTo") ) { return mapTo_dyn(); }
		if (HX_FIELD_EQ(inName,"count") ) { return count_dyn(); }
		if (HX_FIELD_EQ(inName,"scanl") ) { return scanl_dyn(); }
		if (HX_FIELD_EQ(inName,"scanr") ) { return scanr_dyn(); }
		if (HX_FIELD_EQ(inName,"nubBy") ) { return nubBy_dyn(); }
		if (HX_FIELD_EQ(inName,"toMap") ) { return toMap_dyn(); }
		if (HX_FIELD_EQ(inName,"toSet") ) { return toSet_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		if (HX_FIELD_EQ(inName,"scanl1") ) { return scanl1_dyn(); }
		if (HX_FIELD_EQ(inName,"scanr1") ) { return scanr1_dyn(); }
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		if (HX_FIELD_EQ(inName,"append") ) { return append_dyn(); }
		if (HX_FIELD_EQ(inName,"forAll") ) { return forAll_dyn(); }
		if (HX_FIELD_EQ(inName,"forAny") ) { return forAny_dyn(); }
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		if (HX_FIELD_EQ(inName,"toList") ) { return toList_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flatMap") ) { return flatMap_dyn(); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"foreach") ) { return foreach_dyn(); }
		if (HX_FIELD_EQ(inName,"existsP") ) { return existsP_dyn(); }
		if (HX_FIELD_EQ(inName,"groupBy") ) { return groupBy_dyn(); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"elements") ) { return elements_dyn(); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return iterator_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"mkString") ) { return mkString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"partition") ) { return partition_dyn(); }
		if (HX_FIELD_EQ(inName,"flatMapTo") ) { return flatMapTo_dyn(); }
		if (HX_FIELD_EQ(inName,"takeWhile") ) { return takeWhile_dyn(); }
		if (HX_FIELD_EQ(inName,"dropWhile") ) { return dropWhile_dyn(); }
		if (HX_FIELD_EQ(inName,"appendAll") ) { return appendAll_dyn(); }
		if (HX_FIELD_EQ(inName,"intersect") ) { return intersect_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"countWhile") ) { return countWhile_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"intersectBy") ) { return intersectBy_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"partitionWhile") ) { return partitionWhile_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic FoldableExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void FoldableExtensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("foldr"),
	HX_CSTRING("filter"),
	HX_CSTRING("partition"),
	HX_CSTRING("partitionWhile"),
	HX_CSTRING("map"),
	HX_CSTRING("mapTo"),
	HX_CSTRING("flatMap"),
	HX_CSTRING("flatMapTo"),
	HX_CSTRING("take"),
	HX_CSTRING("takeWhile"),
	HX_CSTRING("drop"),
	HX_CSTRING("dropWhile"),
	HX_CSTRING("count"),
	HX_CSTRING("countWhile"),
	HX_CSTRING("scanl"),
	HX_CSTRING("scanr"),
	HX_CSTRING("scanl1"),
	HX_CSTRING("scanr1"),
	HX_CSTRING("elements"),
	HX_CSTRING("concat"),
	HX_CSTRING("append"),
	HX_CSTRING("appendAll"),
	HX_CSTRING("iterator"),
	HX_CSTRING("isEmpty"),
	HX_CSTRING("foreach"),
	HX_CSTRING("find"),
	HX_CSTRING("forAll"),
	HX_CSTRING("forAny"),
	HX_CSTRING("exists"),
	HX_CSTRING("existsP"),
	HX_CSTRING("contains"),
	HX_CSTRING("nubBy"),
	HX_CSTRING("nub"),
	HX_CSTRING("intersectBy"),
	HX_CSTRING("intersect"),
	HX_CSTRING("mkString"),
	HX_CSTRING("groupBy"),
	HX_CSTRING("toArray"),
	HX_CSTRING("toMap"),
	HX_CSTRING("toList"),
	HX_CSTRING("toSet"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class FoldableExtensions_obj::__mClass;

void FoldableExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.FoldableExtensions"), hx::TCanCast< FoldableExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void FoldableExtensions_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
