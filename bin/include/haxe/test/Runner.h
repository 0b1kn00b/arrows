#ifndef INCLUDED_haxe_test_Runner
#define INCLUDED_haxe_test_Runner

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS2(haxe,test,Dispatcher)
HX_DECLARE_CLASS2(haxe,test,Runner)
HX_DECLARE_CLASS2(haxe,test,TestFixture)
HX_DECLARE_CLASS2(haxe,test,TestHandler)
namespace haxe{
namespace test{


class Runner_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Runner_obj OBJ_;
		Runner_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Runner_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Runner_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Runner"); }

		Array< ::haxe::test::TestFixture > fixtures; /* REM */ 
		::haxe::test::Dispatcher onProgress; /* REM */ 
		::haxe::test::Dispatcher onStart; /* REM */ 
		::haxe::test::Dispatcher onComplete; /* REM */ 
		int length; /* REM */ 
		virtual ::haxe::test::Runner addAll( Dynamic tests,Dynamic prefix,::EReg pattern);
		Dynamic addAll_dyn();

		virtual ::haxe::test::Runner add( Dynamic $t5,Dynamic $t6,::EReg $t7);
		Dynamic add_dyn();

		virtual ::haxe::test::Runner addFixture( ::haxe::test::TestFixture fixture);
		Dynamic addFixture_dyn();

		virtual ::haxe::test::Runner addFixtures( Dynamic fixtures);
		Dynamic addFixtures_dyn();

		virtual ::haxe::test::TestFixture getFixture( int index);
		Dynamic getFixture_dyn();

		virtual bool isMethod( Dynamic test,::String name);
		Dynamic isMethod_dyn();

		int pos; /* REM */ 
		virtual ::haxe::test::Runner run( );
		Dynamic run_dyn();

		virtual Void runNext( );
		Dynamic runNext_dyn();

		virtual Void runFixture( ::haxe::test::TestFixture fixture);
		Dynamic runFixture_dyn();

		virtual Void testComplete( ::haxe::test::TestHandler h);
		Dynamic testComplete_dyn();

		virtual Dynamic addBeforeAll( Dynamic test,Dynamic $t1);
		Dynamic addBeforeAll_dyn();

		virtual Dynamic addAfterAll( Dynamic test,Array< int > $t1,Dynamic $t2);
		Dynamic addAfterAll_dyn();

		static Dynamic findMethodByName( Dynamic $t1,::String $t2);
		static Dynamic findMethodByName_dyn();

};

} // end namespace haxe
} // end namespace test

#endif /* INCLUDED_haxe_test_Runner */ 
