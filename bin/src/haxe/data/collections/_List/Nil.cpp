#include <hxcpp.h>

#ifndef INCLUDED_haxe_data_collections_Collection
#include <haxe/data/collections/Collection.h>
#endif
#ifndef INCLUDED_haxe_data_collections_List
#include <haxe/data/collections/List.h>
#endif
#ifndef INCLUDED_haxe_data_collections__List_Nil
#include <haxe/data/collections/_List/Nil.h>
#endif
#ifndef INCLUDED_haxe_functional_Foldable
#include <haxe/functional/Foldable.h>
#endif
namespace haxe{
namespace data{
namespace collections{
namespace _List{

Void Nil_obj::__construct(Dynamic order,Dynamic equal,Dynamic hash,Dynamic show)
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",468)
	super::__construct(order,equal,hash,show);
}
;
	return null();
}

Nil_obj::~Nil_obj() { }

Dynamic Nil_obj::__CreateEmpty() { return  new Nil_obj; }
hx::ObjectPtr< Nil_obj > Nil_obj::__new(Dynamic order,Dynamic equal,Dynamic hash,Dynamic show)
{  hx::ObjectPtr< Nil_obj > result = new Nil_obj();
	result->__construct(order,equal,hash,show);
	return result;}

Dynamic Nil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Nil_obj > result = new Nil_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


Nil_obj::Nil_obj()
{
}

void Nil_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Nil);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic Nil_obj::__Field(const ::String &inName)
{
	return super::__Field(inName);
}

Dynamic Nil_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Nil_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Nil_obj::__mClass;

void Nil_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.data.collections._List.Nil"), hx::TCanCast< Nil_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Nil_obj::__boot()
{
}

} // end namespace haxe
} // end namespace data
} // end namespace collections
} // end namespace _List
