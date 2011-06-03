#ifndef INCLUDED_DynamicExtensions
#define INCLUDED_DynamicExtensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(DynamicExtensions)
HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS0(Tuple2)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS3(haxe,data,collections,Collection)
HX_DECLARE_CLASS3(haxe,data,collections,Map)
HX_DECLARE_CLASS2(haxe,functional,Foldable)
HX_DECLARE_CLASS2(haxe,functional,PartialFunction1)


class DynamicExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DynamicExtensions_obj OBJ_;
		DynamicExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< DynamicExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DynamicExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("DynamicExtensions"); }

		static Dynamic withEffect( Dynamic t,Dynamic f);
		static Dynamic withEffect_dyn();

		static Dynamic withEffectP( Dynamic a,Dynamic f);
		static Dynamic withEffectP_dyn();

		static Dynamic into( Dynamic a,Dynamic f);
		static Dynamic into_dyn();

		static bool isInstanceOf( Dynamic o,Dynamic c);
		static Dynamic isInstanceOf_dyn();

		static ::Tuple2 entuple( Dynamic a,Dynamic b);
		static Dynamic entuple_dyn();

		static Dynamic memoize( Dynamic $t1);
		static Dynamic memoize_dyn();

		static Dynamic toThunk( Dynamic $t1);
		static Dynamic toThunk_dyn();

		static Dynamic toConstantFunction( Dynamic $t1);
		static Dynamic toConstantFunction_dyn();

		static ::haxe::data::collections::Map toMap( Dynamic d);
		static Dynamic toMap_dyn();

};


#endif /* INCLUDED_DynamicExtensions */ 
