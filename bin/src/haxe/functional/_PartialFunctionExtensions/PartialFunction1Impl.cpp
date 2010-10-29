#include <hxcpp.h>

#ifndef INCLUDED_DynamicExtensions
#include <DynamicExtensions.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_Product
#include <Product.h>
#endif
#ifndef INCLUDED_Stax
#include <Stax.h>
#endif
#ifndef INCLUDED_Tuple2
#include <Tuple2.h>
#endif
#ifndef INCLUDED__Prelude_AbstractProduct
#include <_Prelude/AbstractProduct.h>
#endif
#ifndef INCLUDED_haxe_functional_PartialFunction1
#include <haxe/functional/PartialFunction1.h>
#endif
#ifndef INCLUDED_haxe_functional__PartialFunctionExtensions_PartialFunction1Impl
#include <haxe/functional/_PartialFunctionExtensions/PartialFunction1Impl.h>
#endif
namespace haxe{
namespace functional{
namespace _PartialFunctionExtensions{

Void PartialFunction1Impl_obj::__construct(Array< ::Tuple2 > def)
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",32)
	this->_def = def;
}
;
	return null();
}

PartialFunction1Impl_obj::~PartialFunction1Impl_obj() { }

Dynamic PartialFunction1Impl_obj::__CreateEmpty() { return  new PartialFunction1Impl_obj; }
hx::ObjectPtr< PartialFunction1Impl_obj > PartialFunction1Impl_obj::__new(Array< ::Tuple2 > def)
{  hx::ObjectPtr< PartialFunction1Impl_obj > result = new PartialFunction1Impl_obj();
	result->__construct(def);
	return result;}

Dynamic PartialFunction1Impl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PartialFunction1Impl_obj > result = new PartialFunction1Impl_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *PartialFunction1Impl_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::haxe::functional::PartialFunction1_obj)) return operator ::haxe::functional::PartialFunction1_obj *();
	return super::__ToInterface(inType);
}

bool PartialFunction1Impl_obj::isDefinedAt( Dynamic a){
	__SAFE_POINT
	HX_SOURCE_PUSH("PartialFunction1Impl_obj::isDefinedAt")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",36)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",36)
		int _g = 0;
		Array< ::Tuple2 > _g1 = this->_def;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",36)
		while((_g < _g1->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",36)
			::Tuple2 d = _g1->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",36)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",37)
			if (d->__Field(HX_CSTRING("_1"))(a).Cast< bool >())
				return true;
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",40)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(PartialFunction1Impl_obj,isDefinedAt,return )

::haxe::functional::PartialFunction1 PartialFunction1Impl_obj::orElse( ::haxe::functional::PartialFunction1 that){
	__SAFE_POINT
	HX_SOURCE_PUSH("PartialFunction1Impl_obj::orElse")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",44)
	return ::haxe::functional::_PartialFunctionExtensions::PartialFunction1Impl_obj::create(this->_def->concat(Array_obj< ::Tuple2 >::__new().Add(::Tuple2_obj::create(that->isDefinedAt_dyn(),that->__Field(HX_CSTRING("call"))))));
}


HX_DEFINE_DYNAMIC_FUNC1(PartialFunction1Impl_obj,orElse,return )

::haxe::functional::PartialFunction1 PartialFunction1Impl_obj::orAlways( Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("PartialFunction1Impl_obj::orAlways")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	bool run(Dynamic a){
{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",51)
			return true;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",50)
	return ::haxe::functional::_PartialFunctionExtensions::PartialFunction1Impl_obj::create(this->_def->concat(Array_obj< ::Tuple2 >::__new().Add(::DynamicExtensions_obj::entuple(( Dynamic(new _Function_1_1())),f))));
}


HX_DEFINE_DYNAMIC_FUNC1(PartialFunction1Impl_obj,orAlways,return )

::haxe::functional::PartialFunction1 PartialFunction1Impl_obj::orAlwaysC( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("PartialFunction1Impl_obj::orAlwaysC")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",55)
	Array< Dynamic > z = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	bool run(Dynamic a){
{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",57)
			return true;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)


	HX_BEGIN_LOCAL_FUNC1(_Function_1_2,Array< Dynamic >,z)
	Dynamic run(Dynamic a){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",57)
			return z->__get(0)();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",56)
	return ::haxe::functional::_PartialFunctionExtensions::PartialFunction1Impl_obj::create(this->_def->concat(Array_obj< ::Tuple2 >::__new().Add(::DynamicExtensions_obj::entuple(( Dynamic(new _Function_1_1())), Dynamic(new _Function_1_2(z))))));
}


HX_DEFINE_DYNAMIC_FUNC1(PartialFunction1Impl_obj,orAlwaysC,return )

Dynamic PartialFunction1Impl_obj::call( Dynamic a){
	__SAFE_POINT
	HX_SOURCE_PUSH("PartialFunction1Impl_obj::call")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",62)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",62)
		int _g = 0;
		Array< ::Tuple2 > _g1 = this->_def;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",62)
		while((_g < _g1->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",62)
			::Tuple2 d = _g1->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",62)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",63)
			if (d->__Field(HX_CSTRING("_1"))(a).Cast< bool >())
				return d->__Field(HX_CSTRING("_2"))(a);
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",66)
	return ::Stax_obj::error((HX_CSTRING("Function undefined at ") + a));
}


HX_DEFINE_DYNAMIC_FUNC1(PartialFunction1Impl_obj,call,return )

Dynamic PartialFunction1Impl_obj::toFunction( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("PartialFunction1Impl_obj::toFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",70)
	Array< ::haxe::functional::_PartialFunctionExtensions::PartialFunction1Impl > self = Array_obj< ::haxe::functional::_PartialFunctionExtensions::PartialFunction1Impl >::__new().Add(this);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::haxe::functional::_PartialFunctionExtensions::PartialFunction1Impl >,self)
	::Option run(Dynamic a){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",73)
			return (  (self[0]->isDefinedAt(a)) ? ::Option(::Option_obj::Some(self[0]->__Field(HX_CSTRING("call"))(a))) : ::Option(::Option_obj::None) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",72)
	return  Dynamic(new _Function_1_1(self));
}


HX_DEFINE_DYNAMIC_FUNC0(PartialFunction1Impl_obj,toFunction,return )

::haxe::functional::_PartialFunctionExtensions::PartialFunction1Impl PartialFunction1Impl_obj::create( Array< ::Tuple2 > def){
	HX_SOURCE_PUSH("PartialFunction1Impl_obj::create")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",28)
	return ::haxe::functional::_PartialFunctionExtensions::PartialFunction1Impl_obj::__new(def);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PartialFunction1Impl_obj,create,return )


PartialFunction1Impl_obj::PartialFunction1Impl_obj()
{
}

void PartialFunction1Impl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PartialFunction1Impl);
	HX_MARK_MEMBER_NAME(_def,"_def");
	HX_MARK_END_CLASS();
}

Dynamic PartialFunction1Impl_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_def") ) { return _def; }
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"orElse") ) { return orElse_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"orAlways") ) { return orAlways_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"orAlwaysC") ) { return orAlwaysC_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"toFunction") ) { return toFunction_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isDefinedAt") ) { return isDefinedAt_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic PartialFunction1Impl_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_def") ) { _def=inValue.Cast< Array< ::Tuple2 > >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void PartialFunction1Impl_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_def"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_def"),
	HX_CSTRING("isDefinedAt"),
	HX_CSTRING("orElse"),
	HX_CSTRING("orAlways"),
	HX_CSTRING("orAlwaysC"),
	HX_CSTRING("call"),
	HX_CSTRING("toFunction"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class PartialFunction1Impl_obj::__mClass;

void PartialFunction1Impl_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional._PartialFunctionExtensions.PartialFunction1Impl"), hx::TCanCast< PartialFunction1Impl_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void PartialFunction1Impl_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace _PartialFunctionExtensions
