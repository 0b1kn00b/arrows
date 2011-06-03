#ifndef INCLUDED_haxe_data_collections_Map
#define INCLUDED_haxe_data_collections_Map

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/PartialFunction1.h>
#include <haxe/data/collections/Collection.h>
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple2)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS3(haxe,data,collections,Collection)
HX_DECLARE_CLASS3(haxe,data,collections,Map)
HX_DECLARE_CLASS3(haxe,data,collections,Set)
HX_DECLARE_CLASS2(haxe,functional,Foldable)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction1)
HX_DECLARE_CLASS3(haxe,text,json,JValue)
namespace haxe{
namespace data{
namespace collections{


class Map_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Map_obj OBJ_;
		Map_obj();
		Void __construct(Dynamic korder,Dynamic kequal,Dynamic khash,Dynamic kshow,Dynamic vorder,Dynamic vequal,Dynamic vhash,Dynamic vshow,Array< Array< ::Tuple2 > > buckets,int size);

	public:
		static hx::ObjectPtr< Map_obj > __new(Dynamic korder,Dynamic kequal,Dynamic khash,Dynamic kshow,Dynamic vorder,Dynamic vequal,Dynamic vhash,Dynamic vshow,Array< Array< ::Tuple2 > > buckets,int size);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Map_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::haxe::data::collections::Collection_obj *()
			{ return new ::haxe::data::collections::Collection_delegate_< Map_obj >(this); }
		inline operator ::haxe::functional::PartialFunction1_obj *()
			{ return new ::haxe::functional::PartialFunction1_delegate_< Map_obj >(this); }
		inline operator ::haxe::functional::Foldable_obj *()
			{ return new ::haxe::functional::Foldable_delegate_< Map_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("Map"); }

		Dynamic keyEqual; /* REM */ 
	Dynamic &keyEqual_dyn() { return keyEqual;}
		Dynamic keyOrder; /* REM */ 
	Dynamic &keyOrder_dyn() { return keyOrder;}
		Dynamic keyHash; /* REM */ 
	Dynamic &keyHash_dyn() { return keyHash;}
		Dynamic keyShow; /* REM */ 
	Dynamic &keyShow_dyn() { return keyShow;}
		Dynamic valueEqual; /* REM */ 
	Dynamic &valueEqual_dyn() { return valueEqual;}
		Dynamic valueOrder; /* REM */ 
	Dynamic &valueOrder_dyn() { return valueOrder;}
		Dynamic valueHash; /* REM */ 
	Dynamic &valueHash_dyn() { return valueHash;}
		Dynamic valueShow; /* REM */ 
	Dynamic &valueShow_dyn() { return valueShow;}
		Array< Array< ::Tuple2 > > _buckets; /* REM */ 
		int _size; /* REM */ 
		::haxe::functional::PartialFunction1 _pf; /* REM */ 
		virtual bool isDefinedAt( Dynamic _tmp_k);
		Dynamic isDefinedAt_dyn();

		virtual ::haxe::functional::PartialFunction1 orElse( ::haxe::functional::PartialFunction1 _tmp_that);
		Dynamic orElse_dyn();

		virtual ::haxe::functional::PartialFunction1 orAlways( Dynamic _tmp_f);
		Dynamic orAlways_dyn();

		virtual ::haxe::functional::PartialFunction1 orAlwaysC( Dynamic _tmp_v);
		Dynamic orAlwaysC_dyn();

		virtual Dynamic call( Dynamic _tmp_k);
		Dynamic call_dyn();

		virtual Dynamic toFunction( );
		Dynamic toFunction_dyn();

		virtual ::haxe::functional::Foldable empty( );
		Dynamic empty_dyn();

		virtual Dynamic append( Dynamic _tmp_t);
		Dynamic append_dyn();

		virtual Dynamic foldl( Dynamic _tmp_z,Dynamic _tmp_f);
		Dynamic foldl_dyn();

		virtual ::haxe::data::collections::Map set( Dynamic k,Dynamic v);
		Dynamic set_dyn();

		virtual Dynamic add( Dynamic _tmp_t);
		Dynamic add_dyn();

		virtual Dynamic addAll( Dynamic _tmp_i);
		Dynamic addAll_dyn();

		virtual Dynamic remove( Dynamic _tmp_t);
		Dynamic remove_dyn();

		virtual Dynamic removeAll( Dynamic _tmp_i);
		Dynamic removeAll_dyn();

		virtual ::haxe::data::collections::Map removeByKey( Dynamic k);
		Dynamic removeByKey_dyn();

		virtual ::haxe::data::collections::Map removeAllByKey( Dynamic i);
		Dynamic removeAllByKey_dyn();

		virtual ::Option get( Dynamic k);
		Dynamic get_dyn();

		virtual Dynamic getOrElse( Dynamic k,Dynamic def);
		Dynamic getOrElse_dyn();

		virtual Dynamic getOrElseC( Dynamic k,Dynamic c);
		Dynamic getOrElseC_dyn();

		virtual bool contains( Dynamic _tmp_t);
		Dynamic contains_dyn();

		virtual bool containsKey( Dynamic k);
		Dynamic containsKey_dyn();

		virtual Dynamic keys( );
		Dynamic keys_dyn();

		virtual ::haxe::data::collections::Set keySet( );
		Dynamic keySet_dyn();

		virtual Dynamic values( );
		Dynamic values_dyn();

		virtual Dynamic iterator( );
		Dynamic iterator_dyn();

		virtual int compare( ::haxe::data::collections::Map other);
		Dynamic compare_dyn();

		virtual bool equals( ::haxe::data::collections::Map other);
		Dynamic equals_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual int hashCode( );
		Dynamic hashCode_dyn();

		virtual ::haxe::text::json::JValue decompose( );
		Dynamic decompose_dyn();

		virtual int load( );
		Dynamic load_dyn();

		virtual ::haxe::data::collections::Map withKeyOrderFunction( Dynamic order);
		Dynamic withKeyOrderFunction_dyn();

		virtual ::haxe::data::collections::Map withKeyEqualFunction( Dynamic equal);
		Dynamic withKeyEqualFunction_dyn();

		virtual ::haxe::data::collections::Map withKeyHashFunction( Dynamic hash);
		Dynamic withKeyHashFunction_dyn();

		virtual ::haxe::data::collections::Map withKeyShowFunction( Dynamic show);
		Dynamic withKeyShowFunction_dyn();

		virtual ::haxe::data::collections::Map withValueOrderFunction( Dynamic order);
		Dynamic withValueOrderFunction_dyn();

		virtual ::haxe::data::collections::Map withValueEqualFunction( Dynamic equal);
		Dynamic withValueEqualFunction_dyn();

		virtual ::haxe::data::collections::Map withValueHashFunction( Dynamic hash);
		Dynamic withValueHashFunction_dyn();

		virtual ::haxe::data::collections::Map withValueShowFunction( Dynamic show);
		Dynamic withValueShowFunction_dyn();

		virtual Dynamic entries( );
		Dynamic entries_dyn();

		virtual ::haxe::data::collections::Map removeInternal( Dynamic k,Dynamic v,bool ignoreValue);
		Dynamic removeInternal_dyn();

		virtual ::haxe::data::collections::Map copyWithMod( int index);
		Dynamic copyWithMod_dyn();

		virtual Void rebalance( );
		Dynamic rebalance_dyn();

		virtual int bucketFor( Dynamic k);
		Dynamic bucketFor_dyn();

		virtual Array< ::Tuple2 > listFor( Dynamic k);
		Dynamic listFor_dyn();

		virtual int size( );
		Dynamic size_dyn();

		Dynamic _keyEqual; /* REM */ 
	Dynamic &_keyEqual_dyn() { return _keyEqual;}
		Dynamic _keyOrder; /* REM */ 
	Dynamic &_keyOrder_dyn() { return _keyOrder;}
		Dynamic _keyHash; /* REM */ 
	Dynamic &_keyHash_dyn() { return _keyHash;}
		Dynamic _keyShow; /* REM */ 
	Dynamic &_keyShow_dyn() { return _keyShow;}
		Dynamic _valueEqual; /* REM */ 
	Dynamic &_valueEqual_dyn() { return _valueEqual;}
		Dynamic _valueOrder; /* REM */ 
	Dynamic &_valueOrder_dyn() { return _valueOrder;}
		Dynamic _valueHash; /* REM */ 
	Dynamic &_valueHash_dyn() { return _valueHash;}
		Dynamic _valueShow; /* REM */ 
	Dynamic &_valueShow_dyn() { return _valueShow;}
		virtual Dynamic getKeyOrder( );
		Dynamic getKeyOrder_dyn();

		virtual Dynamic getKeyEqual( );
		Dynamic getKeyEqual_dyn();

		virtual Dynamic getKeyHash( );
		Dynamic getKeyHash_dyn();

		virtual Dynamic getKeyShow( );
		Dynamic getKeyShow_dyn();

		virtual Dynamic getValueOrder( );
		Dynamic getValueOrder_dyn();

		virtual Dynamic getValueEqual( );
		Dynamic getValueEqual_dyn();

		virtual Dynamic getValueHash( );
		Dynamic getValueHash_dyn();

		virtual Dynamic getValueShow( );
		Dynamic getValueShow_dyn();

		static int MaxLoad; /* REM */ 
		static int MinLoad; /* REM */ 
		static ::haxe::data::collections::Map create( Dynamic korder,Dynamic kequal,Dynamic khash,Dynamic kshow,Dynamic vorder,Dynamic vequal,Dynamic vhash,Dynamic vshow);
		static Dynamic create_dyn();

		static Dynamic factory( Dynamic $t1,Dynamic $t2,Dynamic $t3,Dynamic $t4,Dynamic $t5,Dynamic $t6,Dynamic $t7,Dynamic $t8);
		static Dynamic factory_dyn();

		static ::haxe::data::collections::Map extract( ::haxe::text::json::JValue v,Dynamic $t1,Dynamic $t2,Dynamic korder,Dynamic kequal,Dynamic khash,Dynamic kshow,Dynamic vorder,Dynamic vequal,Dynamic vhash,Dynamic vshow);
		static Dynamic extract_dyn();

};

} // end namespace haxe
} // end namespace data
} // end namespace collections

#endif /* INCLUDED_haxe_data_collections_Map */ 
