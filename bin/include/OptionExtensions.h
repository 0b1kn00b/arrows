#ifndef INCLUDED_OptionExtensions
#define INCLUDED_OptionExtensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Either)
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(OptionExtensions)
HX_DECLARE_CLASS3(haxe,text,json,JValue)


class OptionExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef OptionExtensions_obj OBJ_;
		OptionExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< OptionExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~OptionExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("OptionExtensions"); }

		static ::Option toOption( Dynamic t);
		static Dynamic toOption_dyn();

		static Dynamic toArray( ::Option o);
		static Dynamic toArray_dyn();

		static ::Option map( ::Option o,Dynamic f);
		static Dynamic map_dyn();

		static ::Option then( ::Option o1,::Option o2);
		static Dynamic then_dyn();

		static Void foreach( ::Option o,Dynamic f);
		static Dynamic foreach_dyn();

		static ::Option filter( ::Option o,Dynamic f);
		static Dynamic filter_dyn();

		static ::Option flatMap( ::Option o,Dynamic f);
		static Dynamic flatMap_dyn();

		static ::Option flatten( ::Option o1);
		static Dynamic flatten_dyn();

		static ::Option zip( ::Option o1,::Option o2);
		static Dynamic zip_dyn();

		static Dynamic get( ::Option o);
		static Dynamic get_dyn();

		static ::Option orElse( ::Option o1,Dynamic thunk);
		static Dynamic orElse_dyn();

		static ::Option orElseC( ::Option o1,::Option o2);
		static Dynamic orElseC_dyn();

		static ::Either orEither( ::Option o1,Dynamic thunk);
		static Dynamic orEither_dyn();

		static ::Either orEitherC( ::Option o1,Dynamic c);
		static Dynamic orEitherC_dyn();

		static Dynamic getOrElse( ::Option o,Dynamic thunk);
		static Dynamic getOrElse_dyn();

		static Dynamic getOrElseC( ::Option o,Dynamic c);
		static Dynamic getOrElseC_dyn();

		static bool isEmpty( ::Option o);
		static Dynamic isEmpty_dyn();

		static ::haxe::text::json::JValue decompose( ::Option v);
		static Dynamic decompose_dyn();

		static ::Option extract( ::Enum c,::haxe::text::json::JValue v,Dynamic e);
		static Dynamic extract_dyn();

};


#endif /* INCLUDED_OptionExtensions */ 
