#ifndef INCLUDED_Function2Extensions
#define INCLUDED_Function2Extensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Function2Extensions)


class Function2Extensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Function2Extensions_obj OBJ_;
		Function2Extensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Function2Extensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Function2Extensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Function2Extensions"); }

		static Dynamic swallow( Dynamic f);
		static Dynamic swallow_dyn();

		static Dynamic swallowWith( Dynamic $t1,Dynamic $t2);
		static Dynamic swallowWith_dyn();

		static Dynamic thenDo( Dynamic $t1,Dynamic $t2);
		static Dynamic thenDo_dyn();

		static Dynamic returning( Dynamic $t1,Dynamic $t2);
		static Dynamic returning_dyn();

		static Dynamic returningC( Dynamic f,Dynamic value);
		static Dynamic returningC_dyn();

		static Dynamic flip( Dynamic $t1);
		static Dynamic flip_dyn();

		static Dynamic curry( Dynamic $t2);
		static Dynamic curry_dyn();

		static Dynamic uncurry( Dynamic $t1);
		static Dynamic uncurry_dyn();

		static Dynamic lazy( Dynamic $t1,Dynamic $t2,Dynamic $t3);
		static Dynamic lazy_dyn();

		static Dynamic toEffect( Dynamic $t1);
		static Dynamic toEffect_dyn();

};


#endif /* INCLUDED_Function2Extensions */ 
