#ifndef INCLUDED_Function0Extensions
#define INCLUDED_Function0Extensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Function0Extensions)


class Function0Extensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Function0Extensions_obj OBJ_;
		Function0Extensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Function0Extensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Function0Extensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Function0Extensions"); }

		static Dynamic swallow( Dynamic $t1);
		static Dynamic swallow_dyn();

		static Dynamic thenDo( Dynamic $t1,Dynamic $t2);
		static Dynamic thenDo_dyn();

		static Dynamic returning( Dynamic $t1,Dynamic $t2);
		static Dynamic returning_dyn();

		static Dynamic returningC( Dynamic f,Dynamic value);
		static Dynamic returningC_dyn();

		static Dynamic promote( Dynamic $t1);
		static Dynamic promote_dyn();

		static Dynamic promoteEffect( Dynamic $t1);
		static Dynamic promoteEffect_dyn();

		static Dynamic stage( Dynamic f,Dynamic before,Dynamic after);
		static Dynamic stage_dyn();

		static Dynamic toEffect( Dynamic $t1);
		static Dynamic toEffect_dyn();

};


#endif /* INCLUDED_Function0Extensions */ 
