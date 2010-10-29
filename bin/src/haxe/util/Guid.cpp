#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_util_Guid
#include <haxe/util/Guid.h>
#endif
namespace haxe{
namespace util{

Void Guid_obj::__construct()
{
	return null();
}

Guid_obj::~Guid_obj() { }

Dynamic Guid_obj::__CreateEmpty() { return  new Guid_obj; }
hx::ObjectPtr< Guid_obj > Guid_obj::__new()
{  hx::ObjectPtr< Guid_obj > result = new Guid_obj();
	result->__construct();
	return result;}

Dynamic Guid_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Guid_obj > result = new Guid_obj();
	result->__construct();
	return result;}

::String Guid_obj::generate( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Guid_obj::generate")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/Guid.hx",22)
	::String result = HX_CSTRING("");
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/Guid.hx",24)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/Guid.hx",24)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/Guid.hx",24)
		while((_g < 32)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/Guid.hx",24)
			int j = (_g)++;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/Guid.hx",25)
			if ((bool((j == 8)) || bool((bool((j == 12)) || bool((bool((j == 16)) || bool((j == 20)))))))){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/Guid.hx",26)
				hx::AddEq(result,HX_CSTRING("-"));
			}
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/Guid.hx",29)
			hx::AddEq(result,::StringTools_obj::hex(::Math_obj::floor((::Math_obj::random() * 16)),null()));
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/util/Guid.hx",32)
	return result.toUpperCase();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Guid_obj,generate,return )


Guid_obj::Guid_obj()
{
}

void Guid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Guid);
	HX_MARK_END_CLASS();
}

Dynamic Guid_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"generate") ) { return generate_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Guid_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Guid_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("generate"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Guid_obj::__mClass;

void Guid_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.util.Guid"), hx::TCanCast< Guid_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Guid_obj::__boot()
{
}

} // end namespace haxe
} // end namespace util
