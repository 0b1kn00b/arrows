#include <hxcpp.h>

#ifndef INCLUDED_Product
#include <Product.h>
#endif
#ifndef INCLUDED_Stax
#include <Stax.h>
#endif
#ifndef INCLUDED_Tuple5
#include <Tuple5.h>
#endif
#ifndef INCLUDED__Prelude_AbstractProduct
#include <_Prelude/AbstractProduct.h>
#endif
#ifndef INCLUDED_haxe_text_json_JValue
#include <haxe/text/json/JValue.h>
#endif

Void Tuple5_obj::__construct(Dynamic first,Dynamic second,Dynamic third,Dynamic fourth,Dynamic fifth)
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",575)
	super::__construct(Array_obj< Dynamic >::__new().Add(first).Add(second).Add(third).Add(fourth).Add(fifth));
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",577)
	this->__FieldRef(HX_CSTRING("_1")) = first;
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",577)
	this->__FieldRef(HX_CSTRING("_2")) = second;
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",577)
	this->__FieldRef(HX_CSTRING("_3")) = third;
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",577)
	this->__FieldRef(HX_CSTRING("_4")) = fourth;
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",577)
	this->__FieldRef(HX_CSTRING("_5")) = fifth;
}
;
	return null();
}

Tuple5_obj::~Tuple5_obj() { }

Dynamic Tuple5_obj::__CreateEmpty() { return  new Tuple5_obj; }
hx::ObjectPtr< Tuple5_obj > Tuple5_obj::__new(Dynamic first,Dynamic second,Dynamic third,Dynamic fourth,Dynamic fifth)
{  hx::ObjectPtr< Tuple5_obj > result = new Tuple5_obj();
	result->__construct(first,second,third,fourth,fifth);
	return result;}

Dynamic Tuple5_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tuple5_obj > result = new Tuple5_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

::String Tuple5_obj::getProductPrefix( ){
	HX_SOURCE_PUSH("Tuple5_obj::getProductPrefix")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",581)
	return HX_CSTRING("Tuple5");
}


HX_DEFINE_DYNAMIC_FUNC0(Tuple5_obj,getProductPrefix,return )

int Tuple5_obj::getProductArity( ){
	HX_SOURCE_PUSH("Tuple5_obj::getProductArity")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",585)
	return 5;
}


HX_DEFINE_DYNAMIC_FUNC0(Tuple5_obj,getProductArity,return )

int Tuple5_obj::compare( ::Tuple5 other){
	__SAFE_POINT
	HX_SOURCE_PUSH("Tuple5_obj::compare")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",589)
	return this->productCompare(other);
}


HX_DEFINE_DYNAMIC_FUNC1(Tuple5_obj,compare,return )

bool Tuple5_obj::equals( ::Tuple5 other){
	__SAFE_POINT
	HX_SOURCE_PUSH("Tuple5_obj::equals")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",593)
	return this->productEquals(other);
}


HX_DEFINE_DYNAMIC_FUNC1(Tuple5_obj,equals,return )

::haxe::text::json::JValue Tuple5_obj::decompose( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Tuple5_obj::decompose")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",600)
	return this->productDecompose();
}


HX_DEFINE_DYNAMIC_FUNC0(Tuple5_obj,decompose,return )

::Tuple5 Tuple5_obj::create( Dynamic a,Dynamic b,Dynamic c,Dynamic d,Dynamic e){
	HX_SOURCE_PUSH("Tuple5_obj::create")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",597)
	return ::Tuple5_obj::__new(a,b,c,d,e);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Tuple5_obj,create,return )

::Tuple5 Tuple5_obj::extract( ::haxe::text::json::JValue v,Dynamic e1,Dynamic e2,Dynamic e3,Dynamic e4,Dynamic e5){
	__SAFE_POINT
	HX_SOURCE_PUSH("Tuple5_obj::extract")
	struct _Function_1_1{
		inline static ::Tuple5 Block( Dynamic &e3,::haxe::text::json::JValue &v,Dynamic &e2,Dynamic &e5,Dynamic &e1,Dynamic &e4){
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",603)
			::haxe::text::json::JValue _switch_1 = (v);
			switch((_switch_1)->GetIndex()){
				case 4: {
					Array< ::haxe::text::json::JValue > v1 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",604)
						return ::Tuple5_obj::create(e1(v1->__get(0)),e2(v1->__get(1)),e3(v1->__get(2)),e4(v1->__get(3)),e5(v1->__get(4)));
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",606)
					return ::Stax_obj::error((HX_CSTRING("Expected Array but was: ") + v)).Cast< ::Tuple5 >();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",603)
	return _Function_1_1::Block(e3,v,e2,e5,e1,e4);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Tuple5_obj,extract,return )


Tuple5_obj::Tuple5_obj()
{
}

void Tuple5_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tuple5);
	HX_MARK_MEMBER_NAME(_1,"_1");
	HX_MARK_MEMBER_NAME(_2,"_2");
	HX_MARK_MEMBER_NAME(_3,"_3");
	HX_MARK_MEMBER_NAME(_4,"_4");
	HX_MARK_MEMBER_NAME(_5,"_5");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic Tuple5_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_1") ) { return _1; }
		if (HX_FIELD_EQ(inName,"_2") ) { return _2; }
		if (HX_FIELD_EQ(inName,"_3") ) { return _3; }
		if (HX_FIELD_EQ(inName,"_4") ) { return _4; }
		if (HX_FIELD_EQ(inName,"_5") ) { return _5; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"extract") ) { return extract_dyn(); }
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getProductArity") ) { return getProductArity_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getProductPrefix") ) { return getProductPrefix_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Tuple5_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_1") ) { _1=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_2") ) { _2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_3") ) { _3=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_4") ) { _4=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_5") ) { _5=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Tuple5_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_1"));
	outFields->push(HX_CSTRING("_2"));
	outFields->push(HX_CSTRING("_3"));
	outFields->push(HX_CSTRING("_4"));
	outFields->push(HX_CSTRING("_5"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("extract"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_1"),
	HX_CSTRING("_2"),
	HX_CSTRING("_3"),
	HX_CSTRING("_4"),
	HX_CSTRING("_5"),
	HX_CSTRING("getProductPrefix"),
	HX_CSTRING("getProductArity"),
	HX_CSTRING("compare"),
	HX_CSTRING("equals"),
	HX_CSTRING("decompose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Tuple5_obj::__mClass;

void Tuple5_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Tuple5"), hx::TCanCast< Tuple5_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Tuple5_obj::__boot()
{
}

