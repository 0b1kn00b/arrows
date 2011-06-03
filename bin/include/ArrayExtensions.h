#ifndef INCLUDED_ArrayExtensions
#define INCLUDED_ArrayExtensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

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

		static Dynamic sort( Dynamic v);
		static Dynamic sort_dyn();

		static Dynamic sortWith( Dynamic v,Dynamic order);
		static Dynamic sortWith_dyn();

		static int compare( Dynamic v1,Dynamic v2);
		static Dynamic compare_dyn();

		static int compareWith( Dynamic v1,Dynamic v2,Dynamic order);
		static Dynamic compareWith_dyn();

		static bool equals( Dynamic v1,Dynamic v2);
		static Dynamic equals_dyn();

		static bool equalsWith( Dynamic v1,Dynamic v2,Dynamic equal);
		static Dynamic equalsWith_dyn();

		static ::String toString( Dynamic v);
		static Dynamic toString_dyn();

		static ::String toStringWith( Dynamic v,Dynamic show);
		static Dynamic toStringWith_dyn();

		static int hashCode( Dynamic v);
		static Dynamic hashCode_dyn();

		static int hashCodeWith( Dynamic v,Dynamic hash);
		static Dynamic hashCodeWith_dyn();

		static Dynamic filter( Dynamic a,Dynamic f);
		static Dynamic filter_dyn();

		static int size( Dynamic a);
		static Dynamic size_dyn();

		static int indexOf( Dynamic a,Dynamic t);
		static Dynamic indexOf_dyn();

		static Dynamic map( Dynamic a,Dynamic f);
		static Dynamic map_dyn();

		static Dynamic then( Dynamic a1,Dynamic a2);
		static Dynamic then_dyn();

		static Dynamic flatMap( Dynamic a,Dynamic f);
		static Dynamic flatMap_dyn();

		static Dynamic foldl( Dynamic a,Dynamic z,Dynamic f);
		static Dynamic foldl_dyn();

		static Dynamic foldr( Dynamic a,Dynamic z,Dynamic f);
		static Dynamic foldr_dyn();

		static Array< ::Tuple2 > zip( Dynamic a,Dynamic b);
		static Dynamic zip_dyn();

		static Dynamic append( Dynamic a,Dynamic t);
		static Dynamic append_dyn();

		static Dynamic snapshot( Dynamic a);
		static Dynamic snapshot_dyn();

		static Dynamic first( Dynamic a);
		static Dynamic first_dyn();

		static ::Option firstOption( Dynamic a);
		static Dynamic firstOption_dyn();

		static Dynamic last( Dynamic a);
		static Dynamic last_dyn();

		static ::Option lastOption( Dynamic a);
		static Dynamic lastOption_dyn();

		static bool contains( Dynamic a,Dynamic t);
		static Dynamic contains_dyn();

		static Dynamic foreach( Dynamic a,Dynamic f);
		static Dynamic foreach_dyn();

		static Dynamic take( Dynamic a,int n);
		static Dynamic take_dyn();

		static Dynamic takeWhile( Dynamic a,Dynamic p);
		static Dynamic takeWhile_dyn();

		static Dynamic drop( Dynamic a,int n);
		static Dynamic drop_dyn();

		static Dynamic dropWhile( Dynamic a,Dynamic p);
		static Dynamic dropWhile_dyn();

		static ::haxe::text::json::JValue decompose( Dynamic v);
		static Dynamic decompose_dyn();

		static Dynamic extract( ::Class c,::haxe::text::json::JValue v,Dynamic e);
		static Dynamic extract_dyn();

};


#endif /* INCLUDED_ArrayExtensions */ 
