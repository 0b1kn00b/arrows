#ifndef INCLUDED_haxe_data_transcode_MapExtensions
#define INCLUDED_haxe_data_transcode_MapExtensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,data,collections,Collection)
HX_DECLARE_CLASS3(haxe,data,collections,Map)
HX_DECLARE_CLASS3(haxe,data,transcode,MapExtensions)
HX_DECLARE_CLASS2(haxe,functional,Foldable)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction1)
HX_DECLARE_CLASS3(haxe,text,json,JValue)
namespace haxe{
namespace data{
namespace transcode{


class MapExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MapExtensions_obj OBJ_;
		MapExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< MapExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MapExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("MapExtensions"); }

		static ::haxe::text::json::JValue stringKeyDecompose( ::haxe::data::collections::Map v);
		static Dynamic stringKeyDecompose_dyn();

		static ::haxe::data::collections::Map stringKeyExtract( ::haxe::text::json::JValue v,Dynamic $t4,Dynamic $t5,Dynamic $t6,Dynamic $t7,Dynamic $t8);
		static Dynamic stringKeyExtract_dyn();

};

} // end namespace haxe
} // end namespace data
} // end namespace transcode

#endif /* INCLUDED_haxe_data_transcode_MapExtensions */ 
