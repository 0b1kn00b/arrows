#ifndef INCLUDED_Full
#define INCLUDED_Full

#include <hxcpp.h>

HX_DECLARE_CLASS0(Full)


class Full_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Full_obj OBJ_;
		Full_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Full_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Full_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Full"); }

		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_Full */ 
