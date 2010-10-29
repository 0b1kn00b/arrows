#ifndef INCLUDED_EitherExtensions
#define INCLUDED_EitherExtensions

#include <hxcpp.h>

HX_DECLARE_CLASS0(Either)
HX_DECLARE_CLASS0(EitherExtensions)
HX_DECLARE_CLASS0(Option)


class EitherExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EitherExtensions_obj OBJ_;
		EitherExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< EitherExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~EitherExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("EitherExtensions"); }

		static ::Either toLeft( Dynamic v);
		static Dynamic toLeft_dyn();

		static ::Either toRight( Dynamic v);
		static Dynamic toRight_dyn();

		static ::Either flip( ::Either e);
		static Dynamic flip_dyn();

		static ::Option left( ::Either e);
		static Dynamic left_dyn();

		static bool isLeft( ::Either e);
		static Dynamic isLeft_dyn();

		static bool isRight( ::Either e);
		static Dynamic isRight_dyn();

		static ::Option right( ::Either e);
		static Dynamic right_dyn();

		static Dynamic get( ::Either e);
		static Dynamic get_dyn();

		static ::Either mapLeft( ::Either e,Dynamic f);
		static Dynamic mapLeft_dyn();

		static ::Either map( ::Either e,Dynamic f1,Dynamic f2);
		static Dynamic map_dyn();

		static ::Either mapRight( ::Either e,Dynamic f);
		static Dynamic mapRight_dyn();

		static ::Either flatMap( ::Either e,Dynamic f1,Dynamic f2);
		static Dynamic flatMap_dyn();

		static ::Either composeLeft( ::Either e1,::Either e2,Dynamic ac,Dynamic bc);
		static Dynamic composeLeft_dyn();

		static ::Either composeRight( ::Either e1,::Either e2,Dynamic ac,Dynamic bc);
		static Dynamic composeRight_dyn();

};


#endif /* INCLUDED_EitherExtensions */ 
