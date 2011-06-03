#ifndef INCLUDED_haxe_test_Assertation
#define INCLUDED_haxe_test_Assertation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS2(haxe,test,Assertation)
namespace haxe{
namespace test{


class Assertation_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Assertation_obj OBJ_;

	public:
		Assertation_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("haxe.test.Assertation"); }
		::String __ToString() const { return HX_CSTRING("Assertation.") + tag; }

		static ::haxe::test::Assertation AsyncError(Dynamic e,Array< ::haxe::StackItem > stack);
		static Dynamic AsyncError_dyn();
		static ::haxe::test::Assertation Error(Dynamic e,Array< ::haxe::StackItem > stack);
		static Dynamic Error_dyn();
		static ::haxe::test::Assertation Failure(::String msg,Dynamic pos);
		static Dynamic Failure_dyn();
		static ::haxe::test::Assertation SetupError(Dynamic e,Array< ::haxe::StackItem > stack);
		static Dynamic SetupError_dyn();
		static ::haxe::test::Assertation Success(Dynamic pos);
		static Dynamic Success_dyn();
		static ::haxe::test::Assertation TeardownError(Dynamic e,Array< ::haxe::StackItem > stack);
		static Dynamic TeardownError_dyn();
		static ::haxe::test::Assertation TimeoutError(int missedAsyncs,Array< ::haxe::StackItem > stack);
		static Dynamic TimeoutError_dyn();
		static ::haxe::test::Assertation Warning(::String msg);
		static Dynamic Warning_dyn();
};

} // end namespace haxe
} // end namespace test

#endif /* INCLUDED_haxe_test_Assertation */ 
