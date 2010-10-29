#include <hxcpp.h>

#ifndef INCLUDED_haxe_rtti_Meta
#include <haxe/rtti/Meta.h>
#endif
namespace haxe{
namespace rtti{

Void Meta_obj::__construct()
{
	return null();
}

Meta_obj::~Meta_obj() { }

Dynamic Meta_obj::__CreateEmpty() { return  new Meta_obj; }
hx::ObjectPtr< Meta_obj > Meta_obj::__new()
{  hx::ObjectPtr< Meta_obj > result = new Meta_obj();
	result->__construct();
	return result;}

Dynamic Meta_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Meta_obj > result = new Meta_obj();
	result->__construct();
	return result;}

Dynamic Meta_obj::getType( Dynamic t){
	HX_SOURCE_PUSH("Meta_obj::getType")
	HX_SOURCE_POS("D:\\stack\\platform\\win\\programs\\Motion-Twin\\haxe/std/haxe/rtti/Meta.hx",36)
	Dynamic meta = t->__Field(HX_CSTRING("__meta__"));
	HX_SOURCE_POS("D:\\stack\\platform\\win\\programs\\Motion-Twin\\haxe/std/haxe/rtti/Meta.hx",37)
	return (  (((meta == null()))) ? Dynamic(meta) : Dynamic(meta->__Field(HX_CSTRING("obj"))) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Meta_obj,getType,return )

Dynamic Meta_obj::getStatics( Dynamic t){
	HX_SOURCE_PUSH("Meta_obj::getStatics")
	HX_SOURCE_POS("D:\\stack\\platform\\win\\programs\\Motion-Twin\\haxe/std/haxe/rtti/Meta.hx",44)
	Dynamic meta = t->__Field(HX_CSTRING("__meta__"));
	HX_SOURCE_POS("D:\\stack\\platform\\win\\programs\\Motion-Twin\\haxe/std/haxe/rtti/Meta.hx",45)
	return (  (((meta == null()))) ? Dynamic(meta) : Dynamic(meta->__Field(HX_CSTRING("statics"))) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Meta_obj,getStatics,return )

Dynamic Meta_obj::getFields( Dynamic t){
	HX_SOURCE_PUSH("Meta_obj::getFields")
	HX_SOURCE_POS("D:\\stack\\platform\\win\\programs\\Motion-Twin\\haxe/std/haxe/rtti/Meta.hx",52)
	Dynamic meta = t->__Field(HX_CSTRING("__meta__"));
	HX_SOURCE_POS("D:\\stack\\platform\\win\\programs\\Motion-Twin\\haxe/std/haxe/rtti/Meta.hx",53)
	return (  (((meta == null()))) ? Dynamic(meta) : Dynamic(meta->__Field(HX_CSTRING("fields"))) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Meta_obj,getFields,return )


Meta_obj::Meta_obj()
{
}

void Meta_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Meta);
	HX_MARK_END_CLASS();
}

Dynamic Meta_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getFields") ) { return getFields_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getStatics") ) { return getStatics_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Meta_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Meta_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getType"),
	HX_CSTRING("getStatics"),
	HX_CSTRING("getFields"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Meta_obj::__mClass;

void Meta_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.rtti.Meta"), hx::TCanCast< Meta_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Meta_obj::__boot()
{
}

} // end namespace haxe
} // end namespace rtti
