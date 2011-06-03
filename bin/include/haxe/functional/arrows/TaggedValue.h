#ifndef INCLUDED_haxe_functional_arrows_TaggedValue
#define INCLUDED_haxe_functional_arrows_TaggedValue

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxe,functional,arrows,TaggedValue)
namespace haxe{
namespace functional{
namespace arrows{


class TaggedValue_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TaggedValue_obj OBJ_;
		TaggedValue_obj();
		Void __construct(Dynamic tag,Dynamic value);

	public:
		static hx::ObjectPtr< TaggedValue_obj > __new(Dynamic tag,Dynamic value);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TaggedValue_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("TaggedValue"); }

		Dynamic tag; /* REM */ 
		Dynamic value; /* REM */ 
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows

#endif /* INCLUDED_haxe_functional_arrows_TaggedValue */ 
