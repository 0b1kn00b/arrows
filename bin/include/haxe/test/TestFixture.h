#ifndef INCLUDED_haxe_test_TestFixture
#define INCLUDED_haxe_test_TestFixture

#include <hxcpp.h>

HX_DECLARE_CLASS2(haxe,test,Dispatcher)
HX_DECLARE_CLASS2(haxe,test,TestFixture)
namespace haxe{
namespace test{


class TestFixture_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TestFixture_obj OBJ_;
		TestFixture_obj();
		Void __construct(Dynamic target,::String methodName,Dynamic method,::String setup,::String teardown);

	public:
		static hx::ObjectPtr< TestFixture_obj > __new(Dynamic target,::String methodName,Dynamic method,::String setup,::String teardown);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TestFixture_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("TestFixture"); }

		Dynamic target; /* REM */ 
		::String methodName; /* REM */ 
		Dynamic method; /* REM */ 
	Dynamic &method_dyn() { return method;}
		::String setup; /* REM */ 
		::String teardown; /* REM */ 
		::haxe::test::Dispatcher onTested; /* REM */ 
		::haxe::test::Dispatcher onTimeout; /* REM */ 
		::haxe::test::Dispatcher onComplete; /* REM */ 
		virtual Void checkMethod( ::String name,::String arg);
		Dynamic checkMethod_dyn();

};

} // end namespace haxe
} // end namespace test

#endif /* INCLUDED_haxe_test_TestFixture */ 
