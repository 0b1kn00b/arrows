#ifndef INCLUDED_haxe_data_transcode_ExtractorHelpers
#define INCLUDED_haxe_data_transcode_ExtractorHelpers

#include <hxcpp.h>

HX_DECLARE_CLASS3(haxe,data,transcode,ExtractorHelpers)
HX_DECLARE_CLASS3(haxe,text,json,JValue)
namespace haxe{
namespace data{
namespace transcode{


class ExtractorHelpers_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ExtractorHelpers_obj OBJ_;
		ExtractorHelpers_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ExtractorHelpers_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ExtractorHelpers_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ExtractorHelpers"); }

		static Dynamic extractFieldValue( ::haxe::text::json::JValue j,::String n,Dynamic e,::haxe::text::json::JValue def);
		static Dynamic extractFieldValue_dyn();

};

} // end namespace haxe
} // end namespace data
} // end namespace transcode

#endif /* INCLUDED_haxe_data_transcode_ExtractorHelpers */ 
