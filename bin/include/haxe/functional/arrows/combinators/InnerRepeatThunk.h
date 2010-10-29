#ifndef INCLUDED_haxe_functional_arrows_combinators_InnerRepeatThunk
#define INCLUDED_haxe_functional_arrows_combinators_InnerRepeatThunk

#include <hxcpp.h>

#include <haxe/functional/arrows/Arrow.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS3(haxe,functional,arrows,ArrowInstance)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,InnerRepeatThunk)
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{


class InnerRepeatThunk_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef InnerRepeatThunk_obj OBJ_;
		InnerRepeatThunk_obj();
		Void __construct(::haxe::functional::arrows::Arrow $t1,::haxe::functional::arrows::ArrowInstance a);

	public:
		static hx::ObjectPtr< InnerRepeatThunk_obj > __new(::haxe::functional::arrows::Arrow $t1,::haxe::functional::arrows::ArrowInstance a);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~InnerRepeatThunk_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("InnerRepeatThunk"); }

		bool cancelled; /* REM */ 
		Dynamic cancel; /* REM */ 
		virtual ::String getName( );
		Dynamic getName_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators

#endif /* INCLUDED_haxe_functional_arrows_combinators_InnerRepeatThunk */ 
