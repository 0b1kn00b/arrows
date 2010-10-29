#ifndef INCLUDED_haxe_data_collections__List_Cons
#define INCLUDED_haxe_data_collections__List_Cons

#include <hxcpp.h>

#include <haxe/data/collections/List.h>
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS3(haxe,data,collections,Collection)
HX_DECLARE_CLASS3(haxe,data,collections,List)
HX_DECLARE_CLASS4(haxe,data,collections,_List,Cons)
HX_DECLARE_CLASS2(haxe,functional,Foldable)
namespace haxe{
namespace data{
namespace collections{
namespace _List{


class Cons_obj : public ::haxe::data::collections::List_obj{
	public:
		typedef ::haxe::data::collections::List_obj super;
		typedef Cons_obj OBJ_;
		Cons_obj();
		Void __construct(Dynamic order,Dynamic equal,Dynamic hash,Dynamic show,Dynamic head,::haxe::data::collections::List tail);

	public:
		static hx::ObjectPtr< Cons_obj > __new(Dynamic order,Dynamic equal,Dynamic hash,Dynamic show,Dynamic head,::haxe::data::collections::List tail);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Cons_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Cons"); }

		Dynamic _head; /* REM */ 
		::haxe::data::collections::List _tail; /* REM */ 
		int _size; /* REM */ 
		virtual Dynamic getHead( );
		Dynamic getHead_dyn();

		virtual Dynamic getLast( );
		Dynamic getLast_dyn();

		virtual ::haxe::data::collections::List getTail( );
		Dynamic getTail_dyn();

		virtual ::Option getHeadOption( );
		Dynamic getHeadOption_dyn();

		virtual ::Option getLastOption( );
		Dynamic getLastOption_dyn();

		virtual int size( );
		Dynamic size_dyn();

};

} // end namespace haxe
} // end namespace data
} // end namespace collections
} // end namespace _List

#endif /* INCLUDED_haxe_data_collections__List_Cons */ 
