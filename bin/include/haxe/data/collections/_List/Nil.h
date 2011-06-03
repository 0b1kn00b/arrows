#ifndef INCLUDED_haxe_data_collections__List_Nil
#define INCLUDED_haxe_data_collections__List_Nil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/data/collections/List.h>
HX_DECLARE_CLASS3(haxe,data,collections,Collection)
HX_DECLARE_CLASS3(haxe,data,collections,List)
HX_DECLARE_CLASS4(haxe,data,collections,_List,Nil)
HX_DECLARE_CLASS2(haxe,functional,Foldable)
namespace haxe{
namespace data{
namespace collections{
namespace _List{


class Nil_obj : public ::haxe::data::collections::List_obj{
	public:
		typedef ::haxe::data::collections::List_obj super;
		typedef Nil_obj OBJ_;
		Nil_obj();
		Void __construct(Dynamic order,Dynamic equal,Dynamic hash,Dynamic show);

	public:
		static hx::ObjectPtr< Nil_obj > __new(Dynamic order,Dynamic equal,Dynamic hash,Dynamic show);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Nil_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Nil"); }

};

} // end namespace haxe
} // end namespace data
} // end namespace collections
} // end namespace _List

#endif /* INCLUDED_haxe_data_collections__List_Nil */ 
