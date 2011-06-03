#ifndef INCLUDED_haxe_functional_arrows_FactoryExtension
#define INCLUDED_haxe_functional_arrows_FactoryExtension

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS3(haxe,functional,arrows,FactoryExtension)
namespace haxe{
namespace functional{
namespace arrows{


class FactoryExtension_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FactoryExtension_obj OBJ_;
		FactoryExtension_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< FactoryExtension_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FactoryExtension_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("FactoryExtension"); }

		static ::haxe::functional::arrows::Arrow lift( Dynamic $t1);
		static Dynamic lift_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows

#endif /* INCLUDED_haxe_functional_arrows_FactoryExtension */ 
