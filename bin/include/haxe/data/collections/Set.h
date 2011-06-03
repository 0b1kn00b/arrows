#ifndef INCLUDED_haxe_data_collections_Set
#define INCLUDED_haxe_data_collections_Set

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/data/collections/Collection.h>
HX_DECLARE_CLASS3(haxe,data,collections,Collection)
HX_DECLARE_CLASS3(haxe,data,collections,Map)
HX_DECLARE_CLASS3(haxe,data,collections,Set)
HX_DECLARE_CLASS2(haxe,functional,Foldable)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction1)
HX_DECLARE_CLASS3(haxe,text,json,JValue)
namespace haxe{
namespace data{
namespace collections{


class Set_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Set_obj OBJ_;
		Set_obj();
		Void __construct(::haxe::data::collections::Map map);

	public:
		static hx::ObjectPtr< Set_obj > __new(::haxe::data::collections::Map map);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Set_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::haxe::data::collections::Collection_obj *()
			{ return new ::haxe::data::collections::Collection_delegate_< Set_obj >(this); }
		inline operator ::haxe::functional::Foldable_obj *()
			{ return new ::haxe::functional::Foldable_delegate_< Set_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("Set"); }

		Dynamic equal; /* REM */ 
	Dynamic &equal_dyn() { return equal;}
		Dynamic order; /* REM */ 
	Dynamic &order_dyn() { return order;}
		Dynamic hash; /* REM */ 
	Dynamic &hash_dyn() { return hash;}
		Dynamic show; /* REM */ 
	Dynamic &show_dyn() { return show;}
		::haxe::data::collections::Map _map; /* REM */ 
		virtual bool contains( Dynamic _tmp_e);
		Dynamic contains_dyn();

		virtual ::haxe::functional::Foldable empty( );
		Dynamic empty_dyn();

		virtual Dynamic append( Dynamic _tmp_t);
		Dynamic append_dyn();

		virtual Dynamic foldl( Dynamic _tmp_z,Dynamic _tmp_f);
		Dynamic foldl_dyn();

		virtual Dynamic add( Dynamic _tmp_t);
		Dynamic add_dyn();

		virtual Dynamic addAll( Dynamic _tmp_it);
		Dynamic addAll_dyn();

		virtual Dynamic remove( Dynamic _tmp_t);
		Dynamic remove_dyn();

		virtual Dynamic removeAll( Dynamic _tmp_it);
		Dynamic removeAll_dyn();

		virtual Dynamic iterator( );
		Dynamic iterator_dyn();

		virtual bool equals( ::haxe::data::collections::Set other);
		Dynamic equals_dyn();

		virtual int compare( ::haxe::data::collections::Set other);
		Dynamic compare_dyn();

		virtual int hashCode( );
		Dynamic hashCode_dyn();

		virtual ::haxe::text::json::JValue decompose( );
		Dynamic decompose_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::haxe::data::collections::Set withOrderFunction( Dynamic order);
		Dynamic withOrderFunction_dyn();

		virtual ::haxe::data::collections::Set withEqualFunction( Dynamic equal);
		Dynamic withEqualFunction_dyn();

		virtual ::haxe::data::collections::Set withHashFunction( Dynamic hash);
		Dynamic withHashFunction_dyn();

		virtual ::haxe::data::collections::Set withShowFunction( Dynamic show);
		Dynamic withShowFunction_dyn();

		virtual ::haxe::data::collections::Set copyWithMod( ::haxe::data::collections::Map newMap);
		Dynamic copyWithMod_dyn();

		virtual int size( );
		Dynamic size_dyn();

		virtual Dynamic getOrder( );
		Dynamic getOrder_dyn();

		virtual Dynamic getEqual( );
		Dynamic getEqual_dyn();

		virtual Dynamic getHash( );
		Dynamic getHash_dyn();

		virtual Dynamic getShow( );
		Dynamic getShow_dyn();

		static ::haxe::data::collections::Set create( Dynamic order,Dynamic equal,Dynamic hash,Dynamic show);
		static Dynamic create_dyn();

		static Dynamic factory( Dynamic $t1,Dynamic $t2,Dynamic $t3,Dynamic $t4);
		static Dynamic factory_dyn();

		static ::haxe::data::collections::Set extract( ::haxe::text::json::JValue v,Dynamic e,Dynamic order,Dynamic equal,Dynamic hash,Dynamic show);
		static Dynamic extract_dyn();

};

} // end namespace haxe
} // end namespace data
} // end namespace collections

#endif /* INCLUDED_haxe_data_collections_Set */ 
