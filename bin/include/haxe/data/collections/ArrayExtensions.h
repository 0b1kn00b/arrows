#ifndef INCLUDED_haxe_data_collections_ArrayExtensions
#define INCLUDED_haxe_data_collections_ArrayExtensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple2)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS3(haxe,data,collections,ArrayExtensions)
HX_DECLARE_CLASS3(haxe,data,collections,Collection)
HX_DECLARE_CLASS3(haxe,data,collections,List)
HX_DECLARE_CLASS3(haxe,data,collections,Map)
HX_DECLARE_CLASS3(haxe,data,collections,Set)
HX_DECLARE_CLASS2(haxe,functional,Foldable)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction1)
namespace haxe{
namespace data{
namespace collections{


class ArrayExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArrayExtensions_obj OBJ_;
		ArrayExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ArrayExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ArrayExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ArrayExtensions"); }

		static ::Tuple2 partition( Dynamic arr,Dynamic $t1);
		static Dynamic partition_dyn();

		static ::Tuple2 partitionWhile( Dynamic arr,Dynamic $t1);
		static Dynamic partitionWhile_dyn();

		static Dynamic mapTo( Dynamic src,Dynamic dest,Dynamic $t1);
		static Dynamic mapTo_dyn();

		static Dynamic flatMapTo( Dynamic src,Dynamic dest,Dynamic $t1);
		static Dynamic flatMapTo_dyn();

		static int count( Dynamic arr,Dynamic $t1);
		static Dynamic count_dyn();

		static int countWhile( Dynamic arr,Dynamic $t1);
		static Dynamic countWhile_dyn();

		static Dynamic scanl( Dynamic arr,Dynamic init,Dynamic f);
		static Dynamic scanl_dyn();

		static Dynamic scanr( Dynamic arr,Dynamic init,Dynamic f);
		static Dynamic scanr_dyn();

		static Dynamic scanl1( Dynamic arr,Dynamic f);
		static Dynamic scanl1_dyn();

		static Dynamic scanr1( Dynamic arr,Dynamic f);
		static Dynamic scanr1_dyn();

		static Dynamic elements( Dynamic arr);
		static Dynamic elements_dyn();

		static Dynamic appendAll( Dynamic arr,Dynamic i);
		static Dynamic appendAll_dyn();

		static Dynamic concat( Dynamic arr0,Dynamic arr1);
		static Dynamic concat_dyn();

		static bool isEmpty( Dynamic arr);
		static Dynamic isEmpty_dyn();

		static ::Option find( Dynamic arr,Dynamic $t1);
		static Dynamic find_dyn();

		static bool forAll( Dynamic arr,Dynamic $t1);
		static Dynamic forAll_dyn();

		static bool forAny( Dynamic arr,Dynamic $t1);
		static Dynamic forAny_dyn();

		static bool exists( Dynamic arr,Dynamic f);
		static Dynamic exists_dyn();

		static bool existsP( Dynamic arr,Dynamic ref,Dynamic f);
		static Dynamic existsP_dyn();

		static Dynamic nubBy( Dynamic arr,Dynamic $t1);
		static Dynamic nubBy_dyn();

		static Dynamic nub( Dynamic arr);
		static Dynamic nub_dyn();

		static Dynamic intersectBy( Dynamic arr1,Dynamic $t1,Dynamic $t2);
		static Dynamic intersectBy_dyn();

		static Dynamic intersect( Dynamic arr1,Dynamic arr2);
		static Dynamic intersect_dyn();

		static ::String mkString( Dynamic arr,Dynamic $t1,Dynamic $t2);
		static Dynamic mkString_dyn();

		static ::haxe::data::collections::Map groupBy( Dynamic arr,Dynamic $t1);
		static Dynamic groupBy_dyn();

		static ::haxe::data::collections::List toList( Dynamic arr);
		static Dynamic toList_dyn();

		static ::haxe::data::collections::Set toSet( Dynamic arr);
		static Dynamic toSet_dyn();

		static ::haxe::data::collections::Map toMap( Array< ::Tuple2 > arr);
		static Dynamic toMap_dyn();

		static Void forEach( Dynamic arr,Dynamic f);
		static Dynamic forEach_dyn();

};

} // end namespace haxe
} // end namespace data
} // end namespace collections

#endif /* INCLUDED_haxe_data_collections_ArrayExtensions */ 
