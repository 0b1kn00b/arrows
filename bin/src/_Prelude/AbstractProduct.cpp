#include <hxcpp.h>

#ifndef INCLUDED_ArrayExtensions
#include <ArrayExtensions.h>
#endif
#ifndef INCLUDED_Product
#include <Product.h>
#endif
#ifndef INCLUDED_Stax
#include <Stax.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED__Prelude_AbstractProduct
#include <_Prelude/AbstractProduct.h>
#endif
#ifndef INCLUDED_haxe_data_transcode_TranscodeJValue
#include <haxe/data/transcode/TranscodeJValue.h>
#endif
#ifndef INCLUDED_haxe_text_json_JValue
#include <haxe/text/json/JValue.h>
#endif
namespace _Prelude{

Void AbstractProduct_obj::__construct(Array< Dynamic > elements)
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",340)
	this->_productElements = elements;
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",341)
	this->_orders = Array_obj< Dynamic >::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",341)
	this->_equals = Array_obj< Dynamic >::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",341)
	this->_hashes = Array_obj< Dynamic >::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",341)
	this->_shows = Array_obj< Dynamic >::__new();
}
;
	return null();
}

AbstractProduct_obj::~AbstractProduct_obj() { }

Dynamic AbstractProduct_obj::__CreateEmpty() { return  new AbstractProduct_obj; }
hx::ObjectPtr< AbstractProduct_obj > AbstractProduct_obj::__new(Array< Dynamic > elements)
{  hx::ObjectPtr< AbstractProduct_obj > result = new AbstractProduct_obj();
	result->__construct(elements);
	return result;}

Dynamic AbstractProduct_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AbstractProduct_obj > result = new AbstractProduct_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *AbstractProduct_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::Product_obj)) return operator ::Product_obj *();
	return super::__ToInterface(inType);
}

Dynamic AbstractProduct_obj::productElement( int n){
	HX_SOURCE_PUSH("AbstractProduct_obj::productElement")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",345)
	return this->_productElements->__get(n);
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractProduct_obj,productElement,return )

::String AbstractProduct_obj::toString( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AbstractProduct_obj::toString")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",349)
	::String s = (((this->getProductPrefix() + HX_CSTRING("("))) + this->__Field(HX_CSTRING("getShow"))(0)(this->__Field(HX_CSTRING("productElement"))(0)));
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",350)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",350)
		int _g1 = 1;
		int _g = this->getProductArity();
		HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",350)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",350)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",351)
			hx::AddEq(s,(HX_CSTRING(", ") + this->__Field(HX_CSTRING("getShow"))(i)(this->__Field(HX_CSTRING("productElement"))(i))));
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",352)
	return (s + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractProduct_obj,toString,return )

int AbstractProduct_obj::hashCode( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AbstractProduct_obj::hashCode")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",362)
	int h = 0;
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",363)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",363)
		int _g1 = 0;
		int _g = this->getProductArity();
		HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",363)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",363)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",364)
			hx::AddEq(h,(::_Prelude::AbstractProduct_obj::_baseHashes->__get((this->getProductArity() - 2))->__get(i) * this->__Field(HX_CSTRING("getHash"))(i)(this->__Field(HX_CSTRING("productElement"))(i))));
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",365)
	return h;
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractProduct_obj,hashCode,return )

int AbstractProduct_obj::productCompare( ::_Prelude::AbstractProduct other){
	__SAFE_POINT
	HX_SOURCE_PUSH("AbstractProduct_obj::productCompare")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",369)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",369)
		int _g1 = 0;
		int _g = this->getProductArity();
		HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",369)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",369)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",370)
			int c = this->__Field(HX_CSTRING("getOrder"))(i)(this->__Field(HX_CSTRING("productElement"))(i),other->__Field(HX_CSTRING("productElement"))(i));
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",371)
			if ((c != 0))
				return c;
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",374)
	return 0;
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractProduct_obj,productCompare,return )

::haxe::text::json::JValue AbstractProduct_obj::productDecompose( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AbstractProduct_obj::productDecompose")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	::haxe::text::json::JValue run(Dynamic t){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",378)
			return ::haxe::data::transcode::TranscodeJValue_obj::getDecomposerFor(::Type_obj::_typeof(t))(t);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",378)
	return ::haxe::text::json::JValue_obj::JArray(::ArrayExtensions_obj::map(this->_productElements, Dynamic(new _Function_1_1())));
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractProduct_obj,productDecompose,return )

bool AbstractProduct_obj::productEquals( ::_Prelude::AbstractProduct other){
	__SAFE_POINT
	HX_SOURCE_PUSH("AbstractProduct_obj::productEquals")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",382)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",382)
		int _g1 = 0;
		int _g = this->getProductArity();
		HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",382)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",382)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",383)
			if (!(this->__Field(HX_CSTRING("getEqual"))(i)(this->__Field(HX_CSTRING("productElement"))(i),other->__Field(HX_CSTRING("productElement"))(i))))
				return false;
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",385)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractProduct_obj,productEquals,return )

::String AbstractProduct_obj::getProductPrefix( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AbstractProduct_obj::getProductPrefix")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",389)
	return ::Stax_obj::error(HX_CSTRING("Not implemented")).Cast< ::String >();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractProduct_obj,getProductPrefix,return )

int AbstractProduct_obj::getProductArity( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("AbstractProduct_obj::getProductArity")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",393)
	return ::Stax_obj::error(HX_CSTRING("Not implemented")).Cast< int >();
}


HX_DEFINE_DYNAMIC_FUNC0(AbstractProduct_obj,getProductArity,return )

Dynamic AbstractProduct_obj::getOrder( int i){
	__SAFE_POINT
	HX_SOURCE_PUSH("AbstractProduct_obj::getOrder")
	struct _Function_1_1{
		inline static Dynamic Block( ::_Prelude::AbstractProduct_obj *__this,int &i){
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",402)
			return __this->_orders[i] = ::Stax_obj::getOrderFor(__this->__Field(HX_CSTRING("productElement"))(i));
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",401)
	return (  ((null() == this->_orders->__get(i))) ? Dynamic(_Function_1_1::Block(this,i)) : Dynamic(this->_orders->__get(i)) );
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractProduct_obj,getOrder,return )

Dynamic AbstractProduct_obj::getEqual( int i){
	__SAFE_POINT
	HX_SOURCE_PUSH("AbstractProduct_obj::getEqual")
	struct _Function_1_1{
		inline static Dynamic Block( ::_Prelude::AbstractProduct_obj *__this,int &i){
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",409)
			return __this->_equals[i] = ::Stax_obj::getEqualFor(__this->__Field(HX_CSTRING("productElement"))(i));
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",408)
	return (  ((null() == this->_equals->__get(i))) ? Dynamic(_Function_1_1::Block(this,i)) : Dynamic(this->_equals->__get(i)) );
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractProduct_obj,getEqual,return )

Dynamic AbstractProduct_obj::getHash( int i){
	__SAFE_POINT
	HX_SOURCE_PUSH("AbstractProduct_obj::getHash")
	struct _Function_1_1{
		inline static Dynamic Block( ::_Prelude::AbstractProduct_obj *__this,int &i){
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",416)
			return __this->_hashes[i] = ::Stax_obj::getHashFor(__this->__Field(HX_CSTRING("productElement"))(i));
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",415)
	return (  ((null() == this->_hashes->__get(i))) ? Dynamic(_Function_1_1::Block(this,i)) : Dynamic(this->_hashes->__get(i)) );
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractProduct_obj,getHash,return )

Dynamic AbstractProduct_obj::getShow( int i){
	__SAFE_POINT
	HX_SOURCE_PUSH("AbstractProduct_obj::getShow")
	struct _Function_1_1{
		inline static Dynamic Block( ::_Prelude::AbstractProduct_obj *__this,int &i){
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",423)
			return __this->_shows[i] = ::Stax_obj::getShowFor(__this->__Field(HX_CSTRING("productElement"))(i));
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",422)
	return (  ((null() == this->_shows->__get(i))) ? Dynamic(_Function_1_1::Block(this,i)) : Dynamic(this->_shows->__get(i)) );
}


HX_DEFINE_DYNAMIC_FUNC1(AbstractProduct_obj,getShow,return )

Array< Array< int > > AbstractProduct_obj::_baseHashes;


AbstractProduct_obj::AbstractProduct_obj()
{
}

void AbstractProduct_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AbstractProduct);
	HX_MARK_MEMBER_NAME(productPrefix,"productPrefix");
	HX_MARK_MEMBER_NAME(productArity,"productArity");
	HX_MARK_MEMBER_NAME(_productElements,"_productElements");
	HX_MARK_MEMBER_NAME(_orders,"_orders");
	HX_MARK_MEMBER_NAME(_equals,"_equals");
	HX_MARK_MEMBER_NAME(_hashes,"_hashes");
	HX_MARK_MEMBER_NAME(_shows,"_shows");
	HX_MARK_END_CLASS();
}

Dynamic AbstractProduct_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_shows") ) { return _shows; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_orders") ) { return _orders; }
		if (HX_FIELD_EQ(inName,"_equals") ) { return _equals; }
		if (HX_FIELD_EQ(inName,"_hashes") ) { return _hashes; }
		if (HX_FIELD_EQ(inName,"getHash") ) { return getHash_dyn(); }
		if (HX_FIELD_EQ(inName,"getShow") ) { return getShow_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		if (HX_FIELD_EQ(inName,"getOrder") ) { return getOrder_dyn(); }
		if (HX_FIELD_EQ(inName,"getEqual") ) { return getEqual_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_baseHashes") ) { return _baseHashes; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"productArity") ) { return getProductArity(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"productPrefix") ) { return getProductPrefix(); }
		if (HX_FIELD_EQ(inName,"productEquals") ) { return productEquals_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"productElement") ) { return productElement_dyn(); }
		if (HX_FIELD_EQ(inName,"productCompare") ) { return productCompare_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getProductArity") ) { return getProductArity_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_productElements") ) { return _productElements; }
		if (HX_FIELD_EQ(inName,"productDecompose") ) { return productDecompose_dyn(); }
		if (HX_FIELD_EQ(inName,"getProductPrefix") ) { return getProductPrefix_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic AbstractProduct_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_shows") ) { _shows=inValue.Cast< Array< Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_orders") ) { _orders=inValue.Cast< Array< Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_equals") ) { _equals=inValue.Cast< Array< Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hashes") ) { _hashes=inValue.Cast< Array< Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_baseHashes") ) { _baseHashes=inValue.Cast< Array< Array< int > > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"productArity") ) { productArity=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"productPrefix") ) { productPrefix=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_productElements") ) { _productElements=inValue.Cast< Array< Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void AbstractProduct_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("productPrefix"));
	outFields->push(HX_CSTRING("productArity"));
	outFields->push(HX_CSTRING("_productElements"));
	outFields->push(HX_CSTRING("_orders"));
	outFields->push(HX_CSTRING("_equals"));
	outFields->push(HX_CSTRING("_hashes"));
	outFields->push(HX_CSTRING("_shows"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_baseHashes"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("productPrefix"),
	HX_CSTRING("productArity"),
	HX_CSTRING("_productElements"),
	HX_CSTRING("productElement"),
	HX_CSTRING("toString"),
	HX_CSTRING("hashCode"),
	HX_CSTRING("productCompare"),
	HX_CSTRING("productDecompose"),
	HX_CSTRING("productEquals"),
	HX_CSTRING("getProductPrefix"),
	HX_CSTRING("getProductArity"),
	HX_CSTRING("_orders"),
	HX_CSTRING("_equals"),
	HX_CSTRING("_hashes"),
	HX_CSTRING("_shows"),
	HX_CSTRING("getOrder"),
	HX_CSTRING("getEqual"),
	HX_CSTRING("getHash"),
	HX_CSTRING("getShow"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbstractProduct_obj::_baseHashes,"_baseHashes");
};

Class AbstractProduct_obj::__mClass;

void AbstractProduct_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("_Prelude.AbstractProduct"), hx::TCanCast< AbstractProduct_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void AbstractProduct_obj::__boot()
{
	hx::Static(_baseHashes) = Array_obj< Array< int > >::__new().Add(Array_obj< int >::__new().Add(786433).Add(24593)).Add(Array_obj< int >::__new().Add(196613).Add(3079).Add(389)).Add(Array_obj< int >::__new().Add(1543).Add(49157).Add(196613).Add(97)).Add(Array_obj< int >::__new().Add(12289).Add(769).Add(393241).Add(193).Add(53));
}

} // end namespace _Prelude
