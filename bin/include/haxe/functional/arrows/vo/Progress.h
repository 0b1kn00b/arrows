#ifndef INCLUDED_haxe_functional_arrows_vo_Progress
#define INCLUDED_haxe_functional_arrows_vo_Progress

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,functional,arrows,vo,Progress)
namespace haxe{
namespace functional{
namespace arrows{
namespace vo{


class Progress_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Progress_obj OBJ_;
		Progress_obj();
		Void __construct(Dynamic detail);

	public:
		static hx::ObjectPtr< Progress_obj > __new(Dynamic detail);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Progress_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Progress"); }

		Dynamic detail; /* REM */ 
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace vo

#endif /* INCLUDED_haxe_functional_arrows_vo_Progress */ 
