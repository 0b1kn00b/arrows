#include <hxcpp.h>

#ifndef INCLUDED_IterableExtensions
#include <IterableExtensions.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_data_collections_Collection
#include <haxe/data/collections/Collection.h>
#endif
#ifndef INCLUDED_haxe_data_collections_List
#include <haxe/data/collections/List.h>
#endif
#ifndef INCLUDED_haxe_data_collections_Map
#include <haxe/data/collections/Map.h>
#endif
#ifndef INCLUDED_haxe_data_collections_Set
#include <haxe/data/collections/Set.h>
#endif
#ifndef INCLUDED_haxe_functional_Foldable
#include <haxe/functional/Foldable.h>
#endif
#ifndef INCLUDED_haxe_functional_PartialFunction1
#include <haxe/functional/PartialFunction1.h>
#endif

Void IterableExtensions_obj::__construct()
{
	return null();
}

IterableExtensions_obj::~IterableExtensions_obj() { }

Dynamic IterableExtensions_obj::__CreateEmpty() { return  new IterableExtensions_obj; }
hx::ObjectPtr< IterableExtensions_obj > IterableExtensions_obj::__new()
{  hx::ObjectPtr< IterableExtensions_obj > result = new IterableExtensions_obj();
	result->__construct();
	return result;}

Dynamic IterableExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IterableExtensions_obj > result = new IterableExtensions_obj();
	result->__construct();
	return result;}

::String IterableExtensions_obj::toString( Dynamic i,Dynamic show,Dynamic __o_prefix,Dynamic __o_suffix,Dynamic __o_sep){
::String prefix = __o_prefix.Default(HX_CSTRING("("));
::String suffix = __o_suffix.Default(HX_CSTRING(")"));
::String sep = __o_sep.Default(HX_CSTRING(", "));
	HX_SOURCE_PUSH("IterableExtensions_obj::toString");
{
		__SAFE_POINT
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1100)
		return ::IterableExtensions_obj::mkString(i,show,prefix,suffix,sep);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(IterableExtensions_obj,toString,return )

::String IterableExtensions_obj::mkString( Dynamic i,Dynamic show,Dynamic __o_prefix,Dynamic __o_suffix,Dynamic __o_sep){
::String prefix = __o_prefix.Default(HX_CSTRING("("));
::String suffix = __o_suffix.Default(HX_CSTRING(")"));
::String sep = __o_sep.Default(HX_CSTRING(", "));
	HX_SOURCE_PUSH("IterableExtensions_obj::mkString");
{
		__SAFE_POINT
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1104)
		if ((show == null()))
			show = ::Std_obj::string_dyn();
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1106)
		::String s = prefix;
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1108)
		bool isFirst = true;
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1110)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(i->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
			Dynamic t = __it->next();
			{
				HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1111)
				if (isFirst){
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1111)
					isFirst = false;
				}
				else{
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1111)
					hx::AddEq(s,sep);
				}
				HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1113)
				hx::AddEq(s,show(t));
			}
;
			__SAFE_POINT
		}
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1116)
		return (s + suffix);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(IterableExtensions_obj,mkString,return )

::haxe::data::collections::List IterableExtensions_obj::toList( Dynamic i){
	__SAFE_POINT
	HX_SOURCE_PUSH("IterableExtensions_obj::toList")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1120)
	return ::haxe::data::collections::List_obj::create(null(),null(),null(),null())->addAll(i);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IterableExtensions_obj,toList,return )

::haxe::data::collections::Set IterableExtensions_obj::toSet( Dynamic i){
	__SAFE_POINT
	HX_SOURCE_PUSH("IterableExtensions_obj::toSet")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1124)
	return ::haxe::data::collections::Set_obj::create(null(),null(),null(),null())->addAll(i);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IterableExtensions_obj,toSet,return )

::haxe::data::collections::Map IterableExtensions_obj::toMap( Dynamic i){
	__SAFE_POINT
	HX_SOURCE_PUSH("IterableExtensions_obj::toMap")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1128)
	return ::haxe::data::collections::Map_obj::create(null(),null(),null(),null(),null(),null(),null(),null())->addAll(i);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IterableExtensions_obj,toMap,return )

Array< Dynamic > IterableExtensions_obj::toArray( Dynamic i){
	__SAFE_POINT
	HX_SOURCE_PUSH("IterableExtensions_obj::toArray")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1132)
	Array< Dynamic > a = Array_obj< Dynamic >::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1133)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(i->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		Dynamic e = __it->next();
		a->push(e);
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1134)
	return a;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IterableExtensions_obj,toArray,return )


IterableExtensions_obj::IterableExtensions_obj()
{
}

void IterableExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IterableExtensions);
	HX_MARK_END_CLASS();
}

Dynamic IterableExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toSet") ) { return toSet_dyn(); }
		if (HX_FIELD_EQ(inName,"toMap") ) { return toMap_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toList") ) { return toList_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"mkString") ) { return mkString_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic IterableExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void IterableExtensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("mkString"),
	HX_CSTRING("toList"),
	HX_CSTRING("toSet"),
	HX_CSTRING("toMap"),
	HX_CSTRING("toArray"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class IterableExtensions_obj::__mClass;

void IterableExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("IterableExtensions"), hx::TCanCast< IterableExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void IterableExtensions_obj::__boot()
{
}

