#ifndef INCLUDED_haxe_functional_P
#define INCLUDED_haxe_functional_P

#include <hxcpp.h>

HX_DECLARE_CLASS2(haxe,functional,P)
namespace haxe{
namespace functional{


class P_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef P_obj OBJ_;
		P_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< P_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~P_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("P"); }

		static Dynamic isNull( );
		static Dynamic isNull_dyn();

		static Dynamic isNotNull( );
		static Dynamic isNotNull_dyn();

		static Dynamic isGreaterThan( double $t1);
		static Dynamic isGreaterThan_dyn();

		static Dynamic isLessThan( double $t1);
		static Dynamic isLessThan_dyn();

		static Dynamic isGreaterThanInt( int $t1);
		static Dynamic isGreaterThanInt_dyn();

		static Dynamic isLessThanInt( int $t1);
		static Dynamic isLessThanInt_dyn();

		static Dynamic isEqualTo( Dynamic $t1,Dynamic $t2);
		static Dynamic isEqualTo_dyn();

		static Dynamic startsWith( ::String $t1);
		static Dynamic startsWith_dyn();

		static Dynamic endsWith( ::String $t1);
		static Dynamic endsWith_dyn();

		static Dynamic contains( ::String $t1);
		static Dynamic contains_dyn();

};

} // end namespace haxe
} // end namespace functional

#endif /* INCLUDED_haxe_functional_P */ 
