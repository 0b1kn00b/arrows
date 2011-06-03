#ifndef INCLUDED_haxe_util_ObjectExtensions
#define INCLUDED_haxe_util_ObjectExtensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple2)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS2(haxe,util,ObjectExtensions)
namespace haxe{
namespace util{


class ObjectExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ObjectExtensions_obj OBJ_;
		ObjectExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ObjectExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ObjectExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ObjectExtensions"); }

		static Dynamic copy( Dynamic d,Dynamic shallow);
		static Dynamic copy_dyn();

		static Dynamic copyTo( Dynamic src,Dynamic dest,Dynamic $t1);
		static Dynamic copyTo_dyn();

		static Dynamic extendWith( Dynamic dest,Dynamic src,Dynamic shallow);
		static Dynamic extendWith_dyn();

		static Array< ::String > fields( Dynamic d);
		static Dynamic fields_dyn();

		static Dynamic mapValues( Dynamic $t1,Dynamic $t2);
		static Dynamic mapValues_dyn();

		static Dynamic set( Dynamic d,::String k,Dynamic v);
		static Dynamic set_dyn();

		static Dynamic setAny( Dynamic d,::String k,Dynamic v);
		static Dynamic setAny_dyn();

		static Dynamic setAll( Dynamic d,Dynamic fields);
		static Dynamic setAll_dyn();

		static Dynamic replaceAll( Dynamic d1,Dynamic d2,Dynamic def);
		static Dynamic replaceAll_dyn();

		static Dynamic setAllAny( Dynamic d,Dynamic fields);
		static Dynamic setAllAny_dyn();

		static Dynamic replaceAllAny( Dynamic d1,Dynamic d2,Dynamic def);
		static Dynamic replaceAllAny_dyn();

		static ::Option get( Dynamic d,::String k);
		static Dynamic get_dyn();

		static ::Option getAny( Dynamic d,::String k);
		static Dynamic getAny_dyn();

		static Array< Dynamic > extractFieldValues( Dynamic $t1,::String $t2);
		static Dynamic extractFieldValues_dyn();

		static Array< ::Tuple2 > extractAll( Dynamic $t1);
		static Dynamic extractAll_dyn();

		static Array< ::Tuple2 > extractAllAny( Dynamic d);
		static Dynamic extractAllAny_dyn();

		static Array< Dynamic > extractValuesAny( Dynamic d,Dynamic names,Dynamic def);
		static Dynamic extractValuesAny_dyn();

		static Dynamic extractValues( Dynamic d,Dynamic names,Dynamic def);
		static Dynamic extractValues_dyn();

		static Dynamic iterator( Dynamic d);
		static Dynamic iterator_dyn();

};

} // end namespace haxe
} // end namespace util

#endif /* INCLUDED_haxe_util_ObjectExtensions */ 
