#ifndef INCLUDED_haxe_test_Dispatcher
#define INCLUDED_haxe_test_Dispatcher

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,test,Dispatcher)
namespace haxe{
namespace test{


class Dispatcher_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Dispatcher_obj OBJ_;
		Dispatcher_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Dispatcher_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Dispatcher_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Dispatcher"); }

		Array< Dynamic > handlers; /* REM */ 
		virtual Dynamic add( Dynamic h);
		Dynamic add_dyn();

		virtual Dynamic remove( Dynamic h);
		Dynamic remove_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual bool dispatch( Dynamic e);
		Dynamic dispatch_dyn();

		virtual bool has( );
		Dynamic has_dyn();

		static Void stop( );
		static Dynamic stop_dyn();

};

} // end namespace haxe
} // end namespace test

#endif /* INCLUDED_haxe_test_Dispatcher */ 
