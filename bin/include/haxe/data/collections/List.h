#ifndef INCLUDED_haxe_data_collections_List
#define INCLUDED_haxe_data_collections_List

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/data/collections/Collection.h>
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS3(haxe,data,collections,Collection)
HX_DECLARE_CLASS3(haxe,data,collections,List)
HX_DECLARE_CLASS2(haxe,functional,Foldable)
HX_DECLARE_CLASS3(haxe,text,json,JValue)
namespace haxe{
namespace data{
namespace collections{


class List_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef List_obj OBJ_;
		List_obj();
		Void __construct(Dynamic order,Dynamic equal,Dynamic hash,Dynamic show);

	public:
		static hx::ObjectPtr< List_obj > __new(Dynamic order,Dynamic equal,Dynamic hash,Dynamic show);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~List_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::haxe::data::collections::Collection_obj *()
			{ return new ::haxe::data::collections::Collection_delegate_< List_obj >(this); }
		inline operator ::haxe::functional::Foldable_obj *()
			{ return new ::haxe::functional::Foldable_delegate_< List_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("List"); }

		Dynamic head; /* REM */ 
		::haxe::data::collections::List tail; /* REM */ 
		Dynamic first; /* REM */ 
		Dynamic last; /* REM */ 
		::Option headOption; /* REM */ 
		::Option firstOption; /* REM */ 
		::Option lastOption; /* REM */ 
		Dynamic equal; /* REM */ 
	Dynamic &equal_dyn() { return equal;}
		Dynamic order; /* REM */ 
	Dynamic &order_dyn() { return order;}
		Dynamic hash; /* REM */ 
	Dynamic &hash_dyn() { return hash;}
		Dynamic show; /* REM */ 
	Dynamic &show_dyn() { return show;}
		virtual ::haxe::functional::Foldable empty( );
		Dynamic empty_dyn();

		virtual ::haxe::data::collections::List cons( Dynamic head);
		Dynamic cons_dyn();

		virtual ::haxe::data::collections::List prepend( Dynamic head);
		Dynamic prepend_dyn();

		virtual ::haxe::data::collections::List prependAll( Dynamic iterable);
		Dynamic prependAll_dyn();

		virtual ::haxe::data::collections::List prependAllR( Dynamic iterable);
		Dynamic prependAllR_dyn();

		virtual Dynamic append( Dynamic _tmp_b);
		Dynamic append_dyn();

		virtual Dynamic foldl( Dynamic _tmp_z,Dynamic _tmp_f);
		Dynamic foldl_dyn();

		virtual Dynamic foldr( Dynamic z,Dynamic f);
		Dynamic foldr_dyn();

		virtual bool contains( Dynamic _tmp_t);
		Dynamic contains_dyn();

		virtual Dynamic add( Dynamic _tmp_t);
		Dynamic add_dyn();

		virtual Dynamic addAll( Dynamic _tmp_i);
		Dynamic addAll_dyn();

		virtual Dynamic remove( Dynamic _tmp_t);
		Dynamic remove_dyn();

		virtual Dynamic removeAll( Dynamic _tmp_i);
		Dynamic removeAll_dyn();

		virtual ::haxe::data::collections::List concat( ::haxe::data::collections::List l);
		Dynamic concat_dyn();

		virtual ::haxe::data::collections::List drop( int n);
		Dynamic drop_dyn();

		virtual ::haxe::data::collections::List dropWhile( Dynamic pred);
		Dynamic dropWhile_dyn();

		virtual ::haxe::data::collections::List take( int n);
		Dynamic take_dyn();

		virtual ::haxe::data::collections::List map( Dynamic $t1);
		Dynamic map_dyn();

		virtual ::haxe::data::collections::List flatMap( Dynamic $t1);
		Dynamic flatMap_dyn();

		virtual ::haxe::data::collections::List filter( Dynamic $t1);
		Dynamic filter_dyn();

		virtual ::haxe::data::collections::List reverse( );
		Dynamic reverse_dyn();

		virtual ::haxe::data::collections::List zip( ::haxe::data::collections::List that);
		Dynamic zip_dyn();

		virtual ::haxe::data::collections::List gaps( Dynamic $t1,Dynamic equal);
		Dynamic gaps_dyn();

		virtual ::haxe::data::collections::List sort( );
		Dynamic sort_dyn();

		virtual Dynamic iterator( );
		Dynamic iterator_dyn();

		virtual ::haxe::data::collections::List withOrderFunction( Dynamic order);
		Dynamic withOrderFunction_dyn();

		virtual ::haxe::data::collections::List withEqualFunction( Dynamic equal);
		Dynamic withEqualFunction_dyn();

		virtual ::haxe::data::collections::List withHashFunction( Dynamic hash);
		Dynamic withHashFunction_dyn();

		virtual ::haxe::data::collections::List withShowFunction( Dynamic show);
		Dynamic withShowFunction_dyn();

		Dynamic _equal; /* REM */ 
	Dynamic &_equal_dyn() { return _equal;}
		Dynamic _order; /* REM */ 
	Dynamic &_order_dyn() { return _order;}
		Dynamic _hash; /* REM */ 
	Dynamic &_hash_dyn() { return _hash;}
		Dynamic _show; /* REM */ 
	Dynamic &_show_dyn() { return _show;}
		virtual Dynamic getOrder( );
		Dynamic getOrder_dyn();

		virtual Dynamic getEqual( );
		Dynamic getEqual_dyn();

		virtual Dynamic getHash( );
		Dynamic getHash_dyn();

		virtual Dynamic getShow( );
		Dynamic getShow_dyn();

		virtual bool equals( ::haxe::data::collections::List other);
		Dynamic equals_dyn();

		virtual int compare( ::haxe::data::collections::List other);
		Dynamic compare_dyn();

		virtual int hashCode( );
		Dynamic hashCode_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual int size( );
		Dynamic size_dyn();

		virtual ::haxe::text::json::JValue decompose( );
		Dynamic decompose_dyn();

		virtual Dynamic getHead( );
		Dynamic getHead_dyn();

		virtual Dynamic getLast( );
		Dynamic getLast_dyn();

		virtual ::Option getHeadOption( );
		Dynamic getHeadOption_dyn();

		virtual ::Option getLastOption( );
		Dynamic getLastOption_dyn();

		virtual ::haxe::data::collections::List getTail( );
		Dynamic getTail_dyn();

		static ::haxe::data::collections::List nil( Dynamic order,Dynamic equal,Dynamic hash,Dynamic show);
		static Dynamic nil_dyn();

		static ::haxe::data::collections::List create( Dynamic order,Dynamic equal,Dynamic hash,Dynamic show);
		static Dynamic create_dyn();

		static Dynamic factory( Dynamic $t1,Dynamic $t2,Dynamic $t3,Dynamic $t4);
		static Dynamic factory_dyn();

		static ::haxe::data::collections::List extract( ::haxe::text::json::JValue v,Dynamic e,Dynamic order,Dynamic equal,Dynamic hash,Dynamic show);
		static Dynamic extract_dyn();

};

} // end namespace haxe
} // end namespace data
} // end namespace collections

#endif /* INCLUDED_haxe_data_collections_List */ 
