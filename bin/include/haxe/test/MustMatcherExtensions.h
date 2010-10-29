#ifndef INCLUDED_haxe_test_MustMatcherExtensions
#define INCLUDED_haxe_test_MustMatcherExtensions

#include <hxcpp.h>

HX_DECLARE_CLASS0(Either)
HX_DECLARE_CLASS2(haxe,test,MustMatcherExtensions)
namespace haxe{
namespace test{


class MustMatcherExtensions_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MustMatcherExtensions_obj OBJ_;
		MustMatcherExtensions_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< MustMatcherExtensions_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MustMatcherExtensions_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("MustMatcherExtensions"); }

		static Dynamic negate( Dynamic $t1);
		static Dynamic negate_dyn();

		static Dynamic _or( Dynamic $t1,Dynamic $t2);
		static Dynamic _or_dyn();

		static Dynamic _and( Dynamic $t1,Dynamic $t2);
		static Dynamic _and_dyn();

};

} // end namespace haxe
} // end namespace test

#endif /* INCLUDED_haxe_test_MustMatcherExtensions */ 
