#include <hxcpp.h>

#ifndef INCLUDED_Product
#include <Product.h>
#endif
#ifndef INCLUDED_Stax
#include <Stax.h>
#endif
#ifndef INCLUDED_Tuple3
#include <Tuple3.h>
#endif
#ifndef INCLUDED_Tuple4
#include <Tuple4.h>
#endif
#ifndef INCLUDED__Prelude_AbstractProduct
#include <_Prelude/AbstractProduct.h>
#endif
#ifndef INCLUDED_haxe_text_json_JValue
#include <haxe/text/json/JValue.h>
#endif

Void Tuple3_obj::__construct(Dynamic first,Dynamic second,Dynamic third)
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",480)
	super::__construct(Array_obj< Dynamic >::__new().Add(first).Add(second).Add(third));
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",482)
	this->__FieldRef(HX_CSTRING("_1")) = first;
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",482)
	this->__FieldRef(HX_CSTRING("_2")) = second;
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",482)
	this->__FieldRef(HX_CSTRING("_3")) = third;
}
;
	return null();
}

Tuple3_obj::~Tuple3_obj() { }

Dynamic Tuple3_obj::__CreateEmpty() { return  new Tuple3_obj; }
hx::ObjectPtr< Tuple3_obj > Tuple3_obj::__new(Dynamic first,Dynamic second,Dynamic third)
{  hx::ObjectPtr< Tuple3_obj > result = new Tuple3_obj();
	result->__construct(first,second,third);
	return result;}

Dynamic Tuple3_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tuple3_obj > result = new Tuple3_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String Tuple3_obj::getProductPrefix( ){
	HX_SOURCE_PUSH("Tuple3_obj::getProductPrefix")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",486)
	return HX_CSTRING("Tuple3");
}


HX_DEFINE_DYNAMIC_FUNC0(Tuple3_obj,getProductPrefix,return )

int Tuple3_obj::getProductArity( ){
	HX_SOURCE_PUSH("Tuple3_obj::getProductArity")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",490)
	return 3;
}


HX_DEFINE_DYNAMIC_FUNC0(Tuple3_obj,getProductArity,return )

::Tuple4 Tuple3_obj::entuple( Dynamic d){
	__SAFE_POINT
	HX_SOURCE_PUSH("Tuple3_obj::entuple")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",494)
	return ::Tuple4_obj::create(this->__Field(HX_CSTRING("_1")),this->__Field(HX_CSTRING("_2")),this->__Field(HX_CSTRING("_3")),d);
}


HX_DEFINE_DYNAMIC_FUNC1(Tuple3_obj,entuple,return )

int Tuple3_obj::compare( ::Tuple3 other){
	__SAFE_POINT
	HX_SOURCE_PUSH("Tuple3_obj::compare")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",498)
	return this->productCompare(other);
}


HX_DEFINE_DYNAMIC_FUNC1(Tuple3_obj,compare,return )

bool Tuple3_obj::equals( ::Tuple3 other){
	__SAFE_POINT
	HX_SOURCE_PUSH("Tuple3_obj::equals")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",502)
	return this->productEquals(other);
}


HX_DEFINE_DYNAMIC_FUNC1(Tuple3_obj,equals,return )

::haxe::text::json::JValue Tuple3_obj::decompose( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Tuple3_obj::decompose")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",509)
	return this->productDecompose();
}


HX_DEFINE_DYNAMIC_FUNC0(Tuple3_obj,decompose,return )

::Tuple3 Tuple3_obj::create( Dynamic a,Dynamic b,Dynamic c){
	HX_SOURCE_PUSH("Tuple3_obj::create")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",506)
	return ::Tuple3_obj::__new(a,b,c);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Tuple3_obj,create,return )

::Tuple3 Tuple3_obj::extract( ::haxe::text::json::JValue v,Dynamic e1,Dynamic e2,Dynamic e3){
	__SAFE_POINT
	HX_SOURCE_PUSH("Tuple3_obj::extract")
	struct _Function_1_1{
		inline static ::Tuple3 Block( Dynamic &e3,::haxe::text::json::JValue &v,Dynamic &e2,Dynamic &e1){
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",512)
			::haxe::text::json::JValue _switch_1 = (v);
			switch((_switch_1)->GetIndex()){
				case 4: {
					Array< ::haxe::text::json::JValue > v1 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",513)
						return ::Tuple3_obj::create(e1(v1->__get(0)),e2(v1->__get(1)),e3(v1->__get(2)));
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",515)
					return ::Stax_obj::error((HX_CSTRING("Expected Array but was: ") + v)).Cast< ::Tuple3 >();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",512)
	return _Function_1_1::Block(e3,v,e2,e1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Tuple3_obj,extract,return )


Tuple3_obj::Tuple3_obj()
{
}

void Tuple3_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tuple3);
	HX_MARK_MEMBER_NAME(_1,"_1");
	HX_MARK_MEMBER_NAME(_2,"_2");
	HX_MARK_MEMBER_NAME(_3,"_3");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic Tuple3_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_1") ) { return _1; }
		if (HX_FIELD_EQ(inName,"_2") ) { return _2; }
		if (HX_FIELD_EQ(inName,"_3") ) { return _3; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"extract") ) { return extract_dyn(); }
		if (HX_FIELD_EQ(inName,"entuple") ) { return entuple_dyn(); }
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

Dynamic Tuple3_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_1") ) { _1=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_2") ) { _2=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_3") ) { _3=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Tuple3_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_1"));
	outFields->push(HX_CSTRING("_2"));
	outFields->push(HX_CSTRING("_3"));
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
	HX_CSTRING("getProductPrefix"),
	HX_CSTRING("getProductArity"),
	HX_CSTRING("entuple"),
	HX_CSTRING("compare"),
	HX_CSTRING("equals"),
	HX_CSTRING("decompose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Tuple3_obj::__mClass;

void Tuple3_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Tuple3"), hx::TCanCast< Tuple3_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Tuple3_obj::__boot()
{
}

