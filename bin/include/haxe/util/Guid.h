#ifndef INCLUDED_haxe_util_Guid
#define INCLUDED_haxe_util_Guid

#include <hxcpp.h>

HX_DECLARE_CLASS2(haxe,util,Guid)
namespace haxe{
namespace util{


class Guid_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Guid_obj OBJ_;
		Guid_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Guid_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Guid_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Guid"); }

		static ::String generate( );
		static Dynamic generate_dyn();

};

} // end namespace haxe
} // end namespace util

#endif /* INCLUDED_haxe_util_Guid */ 
