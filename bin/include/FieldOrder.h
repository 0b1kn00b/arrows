#ifndef INCLUDED_FieldOrder
#define INCLUDED_FieldOrder

#include <hxcpp.h>

HX_DECLARE_CLASS0(FieldOrder)


class FieldOrder_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FieldOrder_obj OBJ_;
		FieldOrder_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FieldOrder_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FieldOrder_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("FieldOrder"); }

		static int Ascending; /* REM */ 
		static int Descending; /* REM */ 
		static int Ignore; /* REM */ 
};


#endif /* INCLUDED_FieldOrder */ 
