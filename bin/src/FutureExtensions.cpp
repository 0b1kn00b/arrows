#include <hxcpp.h>

#ifndef INCLUDED_Future
#include <Future.h>
#endif
#ifndef INCLUDED_FutureExtensions
#include <FutureExtensions.h>
#endif

Void FutureExtensions_obj::__construct()
{
	return null();
}

FutureExtensions_obj::~FutureExtensions_obj() { }

Dynamic FutureExtensions_obj::__CreateEmpty() { return  new FutureExtensions_obj; }
hx::ObjectPtr< FutureExtensions_obj > FutureExtensions_obj::__new()
{  hx::ObjectPtr< FutureExtensions_obj > result = new FutureExtensions_obj();
	result->__construct();
	return result;}

Dynamic FutureExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FutureExtensions_obj > result = new FutureExtensions_obj();
	result->__construct();
	return result;}

::Future FutureExtensions_obj::toFuture( Dynamic t){
	__SAFE_POINT
	HX_SOURCE_PUSH("FutureExtensions_obj::toFuture")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1094)
	return ::Future_obj::create()->deliver(t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FutureExtensions_obj,toFuture,return )


FutureExtensions_obj::FutureExtensions_obj()
{
}

void FutureExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FutureExtensions);
	HX_MARK_END_CLASS();
}

Dynamic FutureExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toFuture") ) { return toFuture_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic FutureExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void FutureExtensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("toFuture"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class FutureExtensions_obj::__mClass;

void FutureExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("FutureExtensions"), hx::TCanCast< FutureExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void FutureExtensions_obj::__boot()
{
}

