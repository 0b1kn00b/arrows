#ifndef INCLUDED_haxe_data_collections_IterableExtensions
#define INCLUDED_haxe_data_collections_IterableExtensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple2)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS3(haxe,data,collections,Collection)
HX_DECLARE_CLASS3(haxe,data,collections,IterableExtensions)
HX_DECLARE_CLASS3(haxe,data,collections,Map)
HX_DECLARE_CLASS2(haxe,functional,Foldable)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction1)
namespace haxe{
namespace data{
namespace collections{


class IterableExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef IterableExtensions_obj OBJ_;
		IterableExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< IterableExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~IterableExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("IterableExtensions"); }

		static int size( Dynamic iterable);
		static Dynamic size_dyn();

		static Dynamic filter( Dynamic iter,Dynamic f);
		static Dynamic filter_dyn();

		static Dynamic foldl( Dynamic iter,Dynamic seed,Dynamic mapper);
		static Dynamic foldl_dyn();

		static Dynamic concat( Dynamic iter1,Dynamic iter2);
		static Dynamic concat_dyn();

		static Dynamic foldr( Dynamic iterable,Dynamic z,Dynamic f);
		static Dynamic foldr_dyn();

		static ::Option headOption( Dynamic iter);
		static Dynamic headOption_dyn();

		static Dynamic head( Dynamic iter);
		static Dynamic head_dyn();

		static ::Option tailOption( Dynamic iter);
		static Dynamic tailOption_dyn();

		static Dynamic drop( Dynamic iter,int n);
		static Dynamic drop_dyn();

		static Dynamic take( Dynamic iter,int n);
		static Dynamic take_dyn();

		static Dynamic tail( Dynamic iter);
		static Dynamic tail_dyn();

		static bool exists( Dynamic iter,Dynamic eq,Dynamic value);
		static Dynamic exists_dyn();

		static Dynamic nub( Dynamic iter);
		static Dynamic nub_dyn();

		static Dynamic duplicates( Dynamic iter);
		static Dynamic duplicates_dyn();

		static Dynamic at( Dynamic iter,int index);
		static Dynamic at_dyn();

		static Dynamic map( Dynamic iter,Dynamic $t1);
		static Dynamic map_dyn();

		static Dynamic flatMap( Dynamic iter,Dynamic $t1);
		static Dynamic flatMap_dyn();

		static Dynamic zip( Dynamic iter1,Dynamic iter2);
		static Dynamic zip_dyn();

		static Dynamic append( Dynamic iter,Dynamic e);
		static Dynamic append_dyn();

		static Dynamic cons( Dynamic iter,Dynamic e);
		static Dynamic cons_dyn();

		static Dynamic toArray( Dynamic i);
		static Dynamic toArray_dyn();

		static Dynamic reversed( Dynamic iter);
		static Dynamic reversed_dyn();

		static bool _and( Dynamic iter);
		static Dynamic _and_dyn();

		static bool _or( Dynamic iter);
		static Dynamic _or_dyn();

		static Dynamic scanl( Dynamic iter,Dynamic init,Dynamic f);
		static Dynamic scanl_dyn();

		static Dynamic scanr( Dynamic iter,Dynamic init,Dynamic f);
		static Dynamic scanr_dyn();

		static Dynamic scanl1( Dynamic iter,Dynamic f);
		static Dynamic scanl1_dyn();

		static Dynamic scanr1( Dynamic iter,Dynamic f);
		static Dynamic scanr1_dyn();

		static bool existsP( Dynamic iter,Dynamic ref,Dynamic f);
		static Dynamic existsP_dyn();

		static Dynamic nubBy( Dynamic iter,Dynamic $t1);
		static Dynamic nubBy_dyn();

		static Dynamic intersectBy( Dynamic iter1,Dynamic $t1,Dynamic $t2);
		static Dynamic intersectBy_dyn();

		static Dynamic intersect( Dynamic iter1,Dynamic $t1);
		static Dynamic intersect_dyn();

		static Dynamic unionBy( Dynamic iter1,Dynamic iter2,Dynamic f);
		static Dynamic unionBy_dyn();

		static Dynamic _union( Dynamic iter1,Dynamic iter2);
		static Dynamic _union_dyn();

		static ::Tuple2 partition( Dynamic iter,Dynamic f);
		static Dynamic partition_dyn();

		static ::Tuple2 partitionWhile( Dynamic iter,Dynamic f);
		static Dynamic partitionWhile_dyn();

		static int count( Dynamic iter,Dynamic f);
		static Dynamic count_dyn();

		static int countWhile( Dynamic iter,Dynamic f);
		static Dynamic countWhile_dyn();

		static Dynamic elements( Dynamic iter);
		static Dynamic elements_dyn();

		static Dynamic appendAll( Dynamic iter,Dynamic i);
		static Dynamic appendAll_dyn();

		static bool isEmpty( Dynamic iter);
		static Dynamic isEmpty_dyn();

		static ::Option find( Dynamic iter,Dynamic f);
		static Dynamic find_dyn();

		static Dynamic forEach( Dynamic iter,Dynamic f);
		static Dynamic forEach_dyn();

		static bool forAll( Dynamic iter,Dynamic f);
		static Dynamic forAll_dyn();

		static bool forAny( Dynamic iter,Dynamic f);
		static Dynamic forAny_dyn();

		static ::haxe::data::collections::Map groupBy( Dynamic iter,Dynamic grouper);
		static Dynamic groupBy_dyn();

		static Dynamic sort( Dynamic iter);
		static Dynamic sort_dyn();

		static Dynamic unwind( Dynamic root,Dynamic $t1,Dynamic breadth);
		static Dynamic unwind_dyn();

		static bool contains( Dynamic iter,Dynamic v);
		static Dynamic contains_dyn();

};

} // end namespace haxe
} // end namespace data
} // end namespace collections

#endif /* INCLUDED_haxe_data_collections_IterableExtensions */ 
