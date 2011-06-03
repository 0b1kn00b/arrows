#ifndef INCLUDED_haxe_functional_arrows_blaze_CallPool
#define INCLUDED_haxe_functional_arrows_blaze_CallPool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(colhx,Collection)
HX_DECLARE_CLASS1(colhx,DList)
HX_DECLARE_CLASS4(haxe,functional,arrows,blaze,Call)
HX_DECLARE_CLASS4(haxe,functional,arrows,blaze,CallPool)
namespace haxe{
namespace functional{
namespace arrows{
namespace blaze{


class CallPool_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CallPool_obj OBJ_;
		CallPool_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< CallPool_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~CallPool_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("CallPool"); }

		::colhx::DList free; /* REM */ 
		::colhx::DList used; /* REM */ 
		virtual ::haxe::functional::arrows::blaze::Call get( );
		Dynamic get_dyn();

		virtual Void release( ::haxe::functional::arrows::blaze::Call o);
		Dynamic release_dyn();

		static ::haxe::functional::arrows::blaze::CallPool data; /* REM */ 
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace blaze

#endif /* INCLUDED_haxe_functional_arrows_blaze_CallPool */ 
