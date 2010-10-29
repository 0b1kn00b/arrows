#include <hxcpp.h>

#ifndef INCLUDED_Product
#include <Product.h>
#endif
#ifndef INCLUDED_Stax
#include <Stax.h>
#endif
#ifndef INCLUDED_Tuple2
#include <Tuple2.h>
#endif
#ifndef INCLUDED_Tuple3
#include <Tuple3.h>
#endif
#ifndef INCLUDED__Prelude_AbstractProduct
#include <_Prelude/AbstractProduct.h>
#endif
#ifndef INCLUDED_haxe_text_json_JValue
#include <haxe/text/json/JValue.h>
#endif

Void Tuple2_obj::__construct(Dynamic first,Dynamic second)
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",434)
	super::__construct(Array_obj< Dynamic >::__new().Add(first).Add(second));
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",436)
	this->__FieldRef(HX_CSTRING("_1")) = first;
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",436)
	this->__FieldRef(HX_CSTRING("_2")) = second;
}
;
	return null();
}

Tuple2_obj::~Tuple2_obj() { }

Dynamic Tuple2_obj::__CreateEmpty() { return  new Tuple2_obj; }
hx::ObjectPtr< Tuple2_obj > Tuple2_obj::__new(Dynamic first,Dynamic second)
{  hx::ObjectPtr< Tuple2_obj > result = new Tuple2_obj();
	result->__construct(first,second);
	return result;}

Dynamic Tuple2_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tuple2_obj > result = new Tuple2_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String Tuple2_obj::getProductPrefix( ){
	HX_SOURCE_PUSH("Tuple2_obj::getProductPrefix")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",440)
	return HX_CSTRING("Tuple2");
}


HX_DEFINE_DYNAMIC_FUNC0(Tuple2_obj,getProductPrefix,return )

int Tuple2_obj::getProductArity( ){
	HX_SOURCE_PUSH("Tuple2_obj::getProductArity")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",444)
	return 2;
}


HX_DEFINE_DYNAMIC_FUNC0(Tuple2_obj,getProductArity,return )

::Tuple3 Tuple2_obj::entuple( Dynamic c){
	__SAFE_POINT
	HX_SOURCE_PUSH("Tuple2_obj::entuple")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",448)
	return ::Tuple3_obj::create(this->__Field(HX_CSTRING("_1")),this->__Field(HX_CSTRING("_2")),c);
}


HX_DEFINE_DYNAMIC_FUNC1(Tuple2_obj,entuple,return )

int Tuple2_obj::compare( ::Tuple2 other){
	__SAFE_POINT
	HX_SOURCE_PUSH("Tuple2_obj::compare")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",452)
	return this->productCompare(other);
}


HX_DEFINE_DYNAMIC_FUNC1(Tuple2_obj,compare,return )

bool Tuple2_obj::equals( ::Tuple2 other){
	__SAFE_POINT
	HX_SOURCE_PUSH("Tuple2_obj::equals")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",456)
	return this->productEquals(other);
}


HX_DEFINE_DYNAMIC_FUNC1(Tuple2_obj,equals,return )

::haxe::text::json::JValue Tuple2_obj::decompose( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Tuple2_obj::decompose")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",463)
	return this->productDecompose();
}


HX_DEFINE_DYNAMIC_FUNC0(Tuple2_obj,decompose,return )

::Tuple2 Tuple2_obj::create( Dynamic a,Dynamic b){
	HX_SOURCE_PUSH("Tuple2_obj::create")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",460)
	return ::Tuple2_obj::__new(a,b);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tuple2_obj,create,return )

::Tuple2 Tuple2_obj::extract( ::haxe::text::json::JValue v,Dynamic e1,Dynamic e2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Tuple2_obj::extract")
	struct _Function_1_1{
		inline static ::Tuple2 Block( ::haxe::text::json::JValue &v,Dynamic &e2,Dynamic &e1){
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",466)
			::haxe::text::json::JValue _switch_1 = (v);
			switch((_switch_1)->GetIndex()){
				case 4: {
					Array< ::haxe::text::json::JValue > v1 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",467)
						return ::Tuple2_obj::create(e1(v1->__get(0)),e2(v1->__get(1)));
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",469)
					return ::Stax_obj::error((HX_CSTRING("Expected Array but was: ") + v)).Cast< ::Tuple2 >();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",466)
	return _Function_1_1::Block(v,e2,e1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Tuple2_obj,extract,return )


Tuple2_obj::Tuple2_obj()
{
}

void Tuple2_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tuple2);
	HX_MARK_MEMBER_NAME(_1,"_1");
	HX_MARK_MEMBER_NAME(_2,"_2");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic Tuple2_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_1") ) { return _1; }
		if (HX_FIELD_EQ(inName,"_2") ) { return _2; }
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

Dynamic Tuple2_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"_1") ) { _1=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_2") ) { _2=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Tuple2_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_1"));
	outFields->push(HX_CSTRING("_2"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	HX_CSTRING("extract"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_1"),
	HX_CSTRING("_2"),
	HX_CSTRING("getProductPrefix"),
	HX_CSTRING("getProductArity"),
	HX_CSTRING("entuple"),
	HX_CSTRING("compare"),
	HX_CSTRING("equals"),
	HX_CSTRING("decompose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Tuple2_obj::__mClass;

void Tuple2_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Tuple2"), hx::TCanCast< Tuple2_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Tuple2_obj::__boot()
{
}

