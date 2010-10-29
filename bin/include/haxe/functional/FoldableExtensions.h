#ifndef INCLUDED_haxe_functional_FoldableExtensions
#define INCLUDED_haxe_functional_FoldableExtensions

#include <hxcpp.h>

HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple2)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS3(haxe,data,collections,Collection)
HX_DECLARE_CLASS3(haxe,data,collections,List)
HX_DECLARE_CLASS3(haxe,data,collections,Map)
HX_DECLARE_CLASS3(haxe,data,collections,Set)
HX_DECLARE_CLASS2(haxe,functional,Foldable)
HX_DECLARE_CLASS2(haxe,functional,FoldableExtensions)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction1)
namespace haxe{
namespace functional{


class FoldableExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FoldableExtensions_obj OBJ_;
		FoldableExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FoldableExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FoldableExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("FoldableExtensions"); }

		static Dynamic foldr( ::haxe::functional::Foldable foldable,Dynamic z,Dynamic f);
		static Dynamic foldr_dyn();

		static Dynamic filter( ::haxe::functional::Foldable foldable,Dynamic $t1);
		static Dynamic filter_dyn();

		static ::Tuple2 partition( ::haxe::functional::Foldable foldable,Dynamic $t1);
		static Dynamic partition_dyn();

		static ::Tuple2 partitionWhile( ::haxe::functional::Foldable foldable,Dynamic $t1);
		static Dynamic partitionWhile_dyn();

		static ::haxe::functional::Foldable map( ::haxe::functional::Foldable src,Dynamic f);
		static Dynamic map_dyn();

		static Dynamic mapTo( ::haxe::functional::Foldable src,::haxe::functional::Foldable dest,Dynamic $t1);
		static Dynamic mapTo_dyn();

		static Dynamic flatMap( ::haxe::functional::Foldable src,Dynamic f);
		static Dynamic flatMap_dyn();

		static Dynamic flatMapTo( ::haxe::functional::Foldable src,::haxe::functional::Foldable dest,Dynamic $t1);
		static Dynamic flatMapTo_dyn();

		static Dynamic take( ::haxe::functional::Foldable foldable,int $t1);
		static Dynamic take_dyn();

		static Dynamic takeWhile( ::haxe::functional::Foldable foldable,Dynamic $t1);
		static Dynamic takeWhile_dyn();

		static Dynamic drop( ::haxe::functional::Foldable foldable,int $t1);
		static Dynamic drop_dyn();

		static Dynamic dropWhile( ::haxe::functional::Foldable foldable,Dynamic $t1);
		static Dynamic dropWhile_dyn();

		static int count( ::haxe::functional::Foldable foldable,Dynamic $t1);
		static Dynamic count_dyn();

		static int countWhile( ::haxe::functional::Foldable foldable,Dynamic $t1);
		static Dynamic countWhile_dyn();

		static Dynamic scanl( ::haxe::functional::Foldable foldable,Dynamic init,Dynamic f);
		static Dynamic scanl_dyn();

		static Dynamic scanr( ::haxe::functional::Foldable foldable,Dynamic init,Dynamic f);
		static Dynamic scanr_dyn();

		static Dynamic scanl1( ::haxe::functional::Foldable foldable,Dynamic f);
		static Dynamic scanl1_dyn();

		static Dynamic scanr1( ::haxe::functional::Foldable foldable,Dynamic f);
		static Dynamic scanr1_dyn();

		static Dynamic elements( ::haxe::functional::Foldable foldable);
		static Dynamic elements_dyn();

		static Dynamic concat( ::haxe::functional::Foldable foldable,::haxe::functional::Foldable rest);
		static Dynamic concat_dyn();

		static Dynamic append( ::haxe::functional::Foldable foldable,Dynamic e);
		static Dynamic append_dyn();

		static Dynamic appendAll( ::haxe::functional::Foldable foldable,Dynamic i);
		static Dynamic appendAll_dyn();

		static Dynamic iterator( ::haxe::functional::Foldable foldable);
		static Dynamic iterator_dyn();

		static bool isEmpty( ::haxe::functional::Foldable foldable);
		static Dynamic isEmpty_dyn();

		static ::haxe::functional::Foldable foreach( ::haxe::functional::Foldable foldable,Dynamic $t1);
		static Dynamic foreach_dyn();

		static ::Option find( ::haxe::functional::Foldable foldable,Dynamic $t1);
		static Dynamic find_dyn();

		static bool forAll( ::haxe::functional::Foldable foldable,Dynamic $t1);
		static Dynamic forAll_dyn();

		static bool forAny( ::haxe::functional::Foldable foldable,Dynamic $t1);
		static Dynamic forAny_dyn();

		static bool exists( ::haxe::functional::Foldable foldable,Dynamic f);
		static Dynamic exists_dyn();

		static bool existsP( ::haxe::functional::Foldable foldable,Dynamic ref,Dynamic f);
		static Dynamic existsP_dyn();

		static bool contains( ::haxe::functional::Foldable foldable,Dynamic $t1);
		static Dynamic contains_dyn();

		static Dynamic nubBy( ::haxe::functional::Foldable foldable,Dynamic $t1);
		static Dynamic nubBy_dyn();

		static Dynamic nub( ::haxe::functional::Foldable foldable);
		static Dynamic nub_dyn();

		static Dynamic intersectBy( ::haxe::functional::Foldable foldable1,::haxe::functional::Foldable $t1,Dynamic $t2);
		static Dynamic intersectBy_dyn();

		static Dynamic intersect( ::haxe::functional::Foldable foldable1,::haxe::functional::Foldable foldable2);
		static Dynamic intersect_dyn();

		static ::String mkString( ::haxe::functional::Foldable foldable,Dynamic $t1,Dynamic $t2);
		static Dynamic mkString_dyn();

		static ::haxe::data::collections::Map groupBy( ::haxe::functional::Foldable foldable,Dynamic $t1);
		static Dynamic groupBy_dyn();

		static Array< Dynamic > toArray( ::haxe::functional::Foldable foldable);
		static Dynamic toArray_dyn();

		static ::haxe::data::collections::Map toMap( ::haxe::functional::Foldable foldable);
		static Dynamic toMap_dyn();

		static ::haxe::data::collections::List toList( ::haxe::functional::Foldable foldable);
		static Dynamic toList_dyn();

		static ::haxe::data::collections::Set toSet( ::haxe::functional::Foldable foldable);
		static Dynamic toSet_dyn();

};

} // end namespace haxe
} // end namespace functional

#endif /* INCLUDED_haxe_functional_FoldableExtensions */ 
