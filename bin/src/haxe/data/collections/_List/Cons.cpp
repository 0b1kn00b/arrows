#include <hxcpp.h>

#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_haxe_data_collections_Collection
#include <haxe/data/collections/Collection.h>
#endif
#ifndef INCLUDED_haxe_data_collections_List
#include <haxe/data/collections/List.h>
#endif
#ifndef INCLUDED_haxe_data_collections__List_Cons
#include <haxe/data/collections/_List/Cons.h>
#endif
#ifndef INCLUDED_haxe_functional_Foldable
#include <haxe/functional/Foldable.h>
#endif
namespace haxe{
namespace data{
namespace collections{
namespace _List{

Void Cons_obj::__construct(Dynamic order,Dynamic equal,Dynamic hash,Dynamic show,Dynamic head,::haxe::data::collections::List tail)
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",429)
	super::__construct(order,equal,hash,show);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",430)
	this->__FieldRef(HX_CSTRING("_head")) = head;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",431)
	this->_tail = tail;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",432)
	this->_size = (tail->size() + 1);
}
;
	return null();
}

Cons_obj::~Cons_obj() { }

Dynamic Cons_obj::__CreateEmpty() { return  new Cons_obj; }
hx::ObjectPtr< Cons_obj > Cons_obj::__new(Dynamic order,Dynamic equal,Dynamic hash,Dynamic show,Dynamic head,::haxe::data::collections::List tail)
{  hx::ObjectPtr< Cons_obj > result = new Cons_obj();
	result->__construct(order,equal,hash,show,head,tail);
	return result;}

Dynamic Cons_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Cons_obj > result = new Cons_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Dynamic Cons_obj::getHead( ){
	HX_SOURCE_PUSH("Cons_obj::getHead")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",436)
	return this->__Field(HX_CSTRING("_head"));
}


HX_DEFINE_DYNAMIC_FUNC0(Cons_obj,getHead,return )

Dynamic Cons_obj::getLast( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Cons_obj::getLast")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",440)
	::haxe::data::collections::List cur = this;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",442)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",442)
		int _g1 = 0;
		int _g = ((this->size() - 1));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",442)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",442)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",443)
			cur = cur->getTail();
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",446)
	return cur->__Field(HX_CSTRING("getHead"))();
}


HX_DEFINE_DYNAMIC_FUNC0(Cons_obj,getLast,return )

::haxe::data::collections::List Cons_obj::getTail( ){
	HX_SOURCE_PUSH("Cons_obj::getTail")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",450)
	return this->_tail;
}


HX_DEFINE_DYNAMIC_FUNC0(Cons_obj,getTail,return )

::Option Cons_obj::getHeadOption( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Cons_obj::getHeadOption")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",454)
	return ::Option_obj::Some(this->__Field(HX_CSTRING("getHead"))());
}


HX_DEFINE_DYNAMIC_FUNC0(Cons_obj,getHeadOption,return )

::Option Cons_obj::getLastOption( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Cons_obj::getLastOption")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",458)
	return ::Option_obj::Some(this->__Field(HX_CSTRING("getLast"))());
}


HX_DEFINE_DYNAMIC_FUNC0(Cons_obj,getLastOption,return )

int Cons_obj::size( ){
	HX_SOURCE_PUSH("Cons_obj::size")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/collections/List.hx",462)
	return this->_size;
}


HX_DEFINE_DYNAMIC_FUNC0(Cons_obj,size,return )


Cons_obj::Cons_obj()
{
}

void Cons_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Cons);
	HX_MARK_MEMBER_NAME(_head,"_head");
	HX_MARK_MEMBER_NAME(_tail,"_tail");
	HX_MARK_MEMBER_NAME(_size,"_size");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic Cons_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return size_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_head") ) { return _head; }
		if (HX_FIELD_EQ(inName,"_tail") ) { return _tail; }
		if (HX_FIELD_EQ(inName,"_size") ) { return _size; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getHead") ) { return getHead_dyn(); }
		if (HX_FIELD_EQ(inName,"getLast") ) { return getLast_dyn(); }
		if (HX_FIELD_EQ(inName,"getTail") ) { return getTail_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getHeadOption") ) { return getHeadOption_dyn(); }
		if (HX_FIELD_EQ(inName,"getLastOption") ) { return getLastOption_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Cons_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_head") ) { _head=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tail") ) { _tail=inValue.Cast< ::haxe::data::collections::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_size") ) { _size=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Cons_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_head"));
	outFields->push(HX_CSTRING("_tail"));
	outFields->push(HX_CSTRING("_size"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_head"),
	HX_CSTRING("_tail"),
	HX_CSTRING("_size"),
	HX_CSTRING("getHead"),
	HX_CSTRING("getLast"),
	HX_CSTRING("getTail"),
	HX_CSTRING("getHeadOption"),
	HX_CSTRING("getLastOption"),
	HX_CSTRING("size"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Cons_obj::__mClass;

void Cons_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.data.collections._List.Cons"), hx::TCanCast< Cons_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Cons_obj::__boot()
{
}

} // end namespace haxe
} // end namespace data
} // end namespace collections
} // end namespace _List
