#ifndef INCLUDED_haxe_test_Notifier
#define INCLUDED_haxe_test_Notifier

#include <hxcpp.h>

HX_DECLARE_CLASS2(haxe,test,Notifier)
namespace haxe{
namespace test{


class Notifier_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Notifier_obj OBJ_;
		Notifier_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Notifier_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Notifier_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Notifier"); }

		Array< Dynamic > handlers; /* REM */ 
		virtual Dynamic add( Dynamic h);
		Dynamic add_dyn();

		virtual Dynamic remove( Dynamic h);
		Dynamic remove_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual bool dispatch( );
		Dynamic dispatch_dyn();

		virtual bool has( );
		Dynamic has_dyn();

		static Void stop( );
		static Dynamic stop_dyn();

};

} // end namespace haxe
} // end namespace test

#endif /* INCLUDED_haxe_test_Notifier */ 
