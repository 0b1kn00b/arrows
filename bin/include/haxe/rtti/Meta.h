#ifndef INCLUDED_haxe_rtti_Meta
#define INCLUDED_haxe_rtti_Meta

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,rtti,Meta)
namespace haxe{
namespace rtti{


class Meta_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Meta_obj OBJ_;
		Meta_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Meta_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Meta_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Meta"); }

		static Dynamic getType( Dynamic t);
		static Dynamic getType_dyn();

		static Dynamic getStatics( Dynamic t);
		static Dynamic getStatics_dyn();

		static Dynamic getFields( Dynamic t);
		static Dynamic getFields_dyn();

};

} // end namespace haxe
} // end namespace rtti

#endif /* INCLUDED_haxe_rtti_Meta */ 
