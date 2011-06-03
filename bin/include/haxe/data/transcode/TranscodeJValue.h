#ifndef INCLUDED_haxe_data_transcode_TranscodeJValue
#define INCLUDED_haxe_data_transcode_TranscodeJValue

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ValueType)
HX_DECLARE_CLASS3(haxe,data,transcode,TranscodeJValue)
HX_DECLARE_CLASS3(haxe,text,json,JValue)
namespace haxe{
namespace data{
namespace transcode{


class TranscodeJValue_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TranscodeJValue_obj OBJ_;
		TranscodeJValue_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< TranscodeJValue_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TranscodeJValue_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("TranscodeJValue"); }

		static Dynamic _createDecomposeImpl( Dynamic $t1);
		static Dynamic _createDecomposeImpl_dyn();

		static Dynamic getDecomposerFor( ::ValueType v);
		static Dynamic getDecomposerFor_dyn();

		static Dynamic _createExtractorImpl( Dynamic $t1);
		static Dynamic _createExtractorImpl_dyn();

		static Dynamic getExtractorFor( ::ValueType $t2,Array< Dynamic > $t3);
		static Dynamic getExtractorFor_dyn();

};

} // end namespace haxe
} // end namespace data
} // end namespace transcode

#endif /* INCLUDED_haxe_data_transcode_TranscodeJValue */ 
