#ifndef INCLUDED_ArrayExtensions
#define INCLUDED_ArrayExtensions

#include <hxcpp.h>

HX_DECLARE_CLASS0(ArrayExtensions)
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple2)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS3(haxe,text,json,JValue)


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

		static Array< Dynamic > sort( Array< Dynamic > v);
		static Dynamic sort_dyn();

		static Array< Dynamic > sortWith( Array< Dynamic > v,Dynamic order);
		static Dynamic sortWith_dyn();

		static int compare( Array< Dynamic > v1,Array< Dynamic > v2);
		static Dynamic compare_dyn();

		static int compareWith( Array< Dynamic > v1,Array< Dynamic > v2,Dynamic order);
		static Dynamic compareWith_dyn();

		static bool equals( Array< Dynamic > v1,Array< Dynamic > v2);
		static Dynamic equals_dyn();

		static bool equalsWith( Array< Dynamic > v1,Array< Dynamic > v2,Dynamic equal);
		static Dynamic equalsWith_dyn();

		static ::String toString( Array< Dynamic > v);
		static Dynamic toString_dyn();

		static ::String toStringWith( Array< Dynamic > v,Dynamic show);
		static Dynamic toStringWith_dyn();

		static int hashCode( Array< Dynamic > v);
		static Dynamic hashCode_dyn();

		static int hashCodeWith( Array< Dynamic > v,Dynamic hash);
		static Dynamic hashCodeWith_dyn();

		static Array< Dynamic > filter( Array< Dynamic > a,Dynamic f);
		static Dynamic filter_dyn();

		static int size( Array< Dynamic > a);
		static Dynamic size_dyn();

		static int indexOf( Array< Dynamic > a,Dynamic t);
		static Dynamic indexOf_dyn();

		static Array< Dynamic > map( Array< Dynamic > a,Dynamic f);
		static Dynamic map_dyn();

		static Array< Dynamic > then( Array< Dynamic > a1,Array< Dynamic > a2);
		static Dynamic then_dyn();

		static Array< Dynamic > flatMap( Array< Dynamic > a,Dynamic f);
		static Dynamic flatMap_dyn();

		static Dynamic foldl( Array< Dynamic > a,Dynamic z,Dynamic f);
		static Dynamic foldl_dyn();

		static Dynamic foldr( Array< Dynamic > a,Dynamic z,Dynamic f);
		static Dynamic foldr_dyn();

		static Array< ::Tuple2 > zip( Array< Dynamic > a,Array< Dynamic > b);
		static Dynamic zip_dyn();

		static Array< Dynamic > append( Array< Dynamic > a,Dynamic t);
		static Dynamic append_dyn();

		static Array< Dynamic > snapshot( Array< Dynamic > a);
		static Dynamic snapshot_dyn();

		static Dynamic first( Array< Dynamic > a);
		static Dynamic first_dyn();

		static ::Option firstOption( Array< Dynamic > a);
		static Dynamic firstOption_dyn();

		static Dynamic last( Array< Dynamic > a);
		static Dynamic last_dyn();

		static ::Option lastOption( Array< Dynamic > a);
		static Dynamic lastOption_dyn();

		static bool contains( Array< Dynamic > a,Dynamic t);
		static Dynamic contains_dyn();

		static Array< Dynamic > foreach( Array< Dynamic > a,Dynamic f);
		static Dynamic foreach_dyn();

		static Array< Dynamic > take( Array< Dynamic > a,int n);
		static Dynamic take_dyn();

		static Array< Dynamic > takeWhile( Array< Dynamic > a,Dynamic p);
		static Dynamic takeWhile_dyn();

		static Array< Dynamic > drop( Array< Dynamic > a,int n);
		static Dynamic drop_dyn();

		static Array< Dynamic > dropWhile( Array< Dynamic > a,Dynamic p);
		static Dynamic dropWhile_dyn();

		static ::haxe::text::json::JValue decompose( Array< Dynamic > v);
		static Dynamic decompose_dyn();

		static Array< Dynamic > extract( ::Class c,::haxe::text::json::JValue v,Dynamic e);
		static Dynamic extract_dyn();

};


#endif /* INCLUDED_ArrayExtensions */ 
