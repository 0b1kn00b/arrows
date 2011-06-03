#ifndef INCLUDED_haxe_functional_arrows_combinators_PollThunk
#define INCLUDED_haxe_functional_arrows_combinators_PollThunk

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/Arrow.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,PollThunk)
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{


class PollThunk_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef PollThunk_obj OBJ_;
		PollThunk_obj();
		Void __construct(Dynamic predicate);

	public:
		static hx::ObjectPtr< PollThunk_obj > __new(Dynamic predicate);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~PollThunk_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("PollThunk"); }

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators

#endif /* INCLUDED_haxe_functional_arrows_combinators_PollThunk */ 
