#ifndef INCLUDED_IterableExtensions
#define INCLUDED_IterableExtensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IterableExtensions)
HX_DECLARE_CLASS3(haxe,data,collections,Collection)
HX_DECLARE_CLASS3(haxe,data,collections,List)
HX_DECLARE_CLASS3(haxe,data,collections,Map)
HX_DECLARE_CLASS3(haxe,data,collections,Set)
HX_DECLARE_CLASS2(haxe,functional,Foldable)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction1)


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

		static ::String toString( Dynamic i,Dynamic show,Dynamic prefix,Dynamic suffix,Dynamic sep);
		static Dynamic toString_dyn();

		static ::String mkString( Dynamic i,Dynamic show,Dynamic prefix,Dynamic suffix,Dynamic sep);
		static Dynamic mkString_dyn();

		static ::haxe::data::collections::List toList( Dynamic i);
		static Dynamic toList_dyn();

		static ::haxe::data::collections::Set toSet( Dynamic i);
		static Dynamic toSet_dyn();

		static ::haxe::data::collections::Map toMap( Dynamic i);
		static Dynamic toMap_dyn();

		static Dynamic toArray( Dynamic i);
		static Dynamic toArray_dyn();

};


#endif /* INCLUDED_IterableExtensions */ 
