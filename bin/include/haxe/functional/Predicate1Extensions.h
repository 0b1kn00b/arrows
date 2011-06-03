#ifndef INCLUDED_haxe_functional_Predicate1Extensions
#define INCLUDED_haxe_functional_Predicate1Extensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,functional,Predicate1Extensions)
namespace haxe{
namespace functional{


class Predicate1Extensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Predicate1Extensions_obj OBJ_;
		Predicate1Extensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Predicate1Extensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Predicate1Extensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Predicate1Extensions"); }

		static Dynamic _and( Dynamic $t1,Dynamic $t2);
		static Dynamic _and_dyn();

		static Dynamic andAll( Dynamic $t1,Dynamic $t2);
		static Dynamic andAll_dyn();

		static Dynamic _or( Dynamic $t1,Dynamic $t2);
		static Dynamic _or_dyn();

		static Dynamic orAny( Dynamic $t1,Dynamic $t2);
		static Dynamic orAny_dyn();

		static Dynamic negate( Dynamic $t1);
		static Dynamic negate_dyn();

};

} // end namespace haxe
} // end namespace functional

#endif /* INCLUDED_haxe_functional_Predicate1Extensions */ 
