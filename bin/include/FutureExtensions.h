#ifndef INCLUDED_FutureExtensions
#define INCLUDED_FutureExtensions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Future)
HX_DECLARE_CLASS0(FutureExtensions)


class FutureExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FutureExtensions_obj OBJ_;
		FutureExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FutureExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FutureExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("FutureExtensions"); }

		static ::Future toFuture( Dynamic t);
		static Dynamic toFuture_dyn();

};


#endif /* INCLUDED_FutureExtensions */ 
