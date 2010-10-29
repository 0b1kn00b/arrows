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
#ifndef INCLUDED_haxe_functional_PartialFunction2
#include <haxe/functional/PartialFunction2.h>
#endif
#ifndef INCLUDED_haxe_functional__PartialFunctionExtensions_PartialFunction2Impl
#include <haxe/functional/_PartialFunctionExtensions/PartialFunction2Impl.h>
#endif
namespace haxe{
namespace functional{
namespace _PartialFunctionExtensions{

Void PartialFunction2Impl_obj::__construct(Array< ::Tuple2 > def)
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",93)
	this->_def = def;
}
;
	return null();
}

PartialFunction2Impl_obj::~PartialFunction2Impl_obj() { }

Dynamic PartialFunction2Impl_obj::__CreateEmpty() { return  new PartialFunction2Impl_obj; }
hx::ObjectPtr< PartialFunction2Impl_obj > PartialFunction2Impl_obj::__new(Array< ::Tuple2 > def)
{  hx::ObjectPtr< PartialFunction2Impl_obj > result = new PartialFunction2Impl_obj();
	result->__construct(def);
	return result;}

Dynamic PartialFunction2Impl_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PartialFunction2Impl_obj > result = new PartialFunction2Impl_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *PartialFunction2Impl_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::haxe::functional::PartialFunction2_obj)) return operator ::haxe::functional::PartialFunction2_obj *();
	return super::__ToInterface(inType);
}

bool PartialFunction2Impl_obj::isDefinedAt( Dynamic a,Dynamic b){
	__SAFE_POINT
	HX_SOURCE_PUSH("PartialFunction2Impl_obj::isDefinedAt")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",97)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",97)
		int _g = 0;
		Array< ::Tuple2 > _g1 = this->_def;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",97)
		while((_g < _g1->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",97)
			::Tuple2 d = _g1->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",97)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",98)
			if (d->__Field(HX_CSTRING("_1"))(a,b).Cast< bool >())
				return true;
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",101)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(PartialFunction2Impl_obj,isDefinedAt,return )

::haxe::functional::PartialFunction2 PartialFunction2Impl_obj::orElse( ::haxe::functional::PartialFunction2 that){
	__SAFE_POINT
	HX_SOURCE_PUSH("PartialFunction2Impl_obj::orElse")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",105)
	return ::haxe::functional::_PartialFunctionExtensions::PartialFunction2Impl_obj::create(this->_def->concat(Array_obj< ::Tuple2 >::__new().Add(::Tuple2_obj::create(that->isDefinedAt_dyn(),that->__Field(HX_CSTRING("call"))))));
}


HX_DEFINE_DYNAMIC_FUNC1(PartialFunction2Impl_obj,orElse,return )

::haxe::functional::PartialFunction2 PartialFunction2Impl_obj::orAlways( Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("PartialFunction2Impl_obj::orAlways")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	bool run(Dynamic a,Dynamic b){
{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",112)
			return true;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",111)
	return ::haxe::functional::_PartialFunctionExtensions::PartialFunction2Impl_obj::create(this->_def->concat(Array_obj< ::Tuple2 >::__new().Add(::DynamicExtensions_obj::entuple(( Dynamic(new _Function_1_1())),f))));
}


HX_DEFINE_DYNAMIC_FUNC1(PartialFunction2Impl_obj,orAlways,return )

::haxe::functional::PartialFunction2 PartialFunction2Impl_obj::orAlwaysC( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("PartialFunction2Impl_obj::orAlwaysC")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",116)
	Array< Dynamic > z = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	bool run(Dynamic a,Dynamic b){
{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",118)
			return true;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)


	HX_BEGIN_LOCAL_FUNC1(_Function_1_2,Array< Dynamic >,z)
	Dynamic run(Dynamic a,Dynamic b){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",118)
			return z->__get(0)();
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",117)
	return ::haxe::functional::_PartialFunctionExtensions::PartialFunction2Impl_obj::create(this->_def->concat(Array_obj< ::Tuple2 >::__new().Add(::DynamicExtensions_obj::entuple(( Dynamic(new _Function_1_1())), Dynamic(new _Function_1_2(z))))));
}


HX_DEFINE_DYNAMIC_FUNC1(PartialFunction2Impl_obj,orAlwaysC,return )

Dynamic PartialFunction2Impl_obj::call( Dynamic a,Dynamic b){
	__SAFE_POINT
	HX_SOURCE_PUSH("PartialFunction2Impl_obj::call")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",123)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",123)
		int _g = 0;
		Array< ::Tuple2 > _g1 = this->_def;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",123)
		while((_g < _g1->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",123)
			::Tuple2 d = _g1->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",123)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",124)
			if (d->__Field(HX_CSTRING("_1"))(a,b).Cast< bool >())
				return d->__Field(HX_CSTRING("_2"))(a,b);
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",127)
	return ::Stax_obj::error((((((((HX_CSTRING("Function undefined at (") + a)) + HX_CSTRING(", "))) + b)) + HX_CSTRING(")")));
}


HX_DEFINE_DYNAMIC_FUNC2(PartialFunction2Impl_obj,call,return )

Dynamic PartialFunction2Impl_obj::toFunction( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("PartialFunction2Impl_obj::toFunction")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",131)
	Array< ::haxe::functional::_PartialFunctionExtensions::PartialFunction2Impl > self = Array_obj< ::haxe::functional::_PartialFunctionExtensions::PartialFunction2Impl >::__new().Add(this);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::haxe::functional::_PartialFunctionExtensions::PartialFunction2Impl >,self)
	::Option run(Dynamic a,Dynamic b){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",134)
			return (  (self[0]->isDefinedAt(a,b)) ? ::Option(::Option_obj::Some(self[0]->__Field(HX_CSTRING("call"))(a,b))) : ::Option(::Option_obj::None) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",133)
	return  Dynamic(new _Function_1_1(self));
}


HX_DEFINE_DYNAMIC_FUNC0(PartialFunction2Impl_obj,toFunction,return )

::haxe::functional::_PartialFunctionExtensions::PartialFunction2Impl PartialFunction2Impl_obj::create( Array< ::Tuple2 > def){
	HX_SOURCE_PUSH("PartialFunction2Impl_obj::create")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PartialFunctionExtensions.hx",89)
	return ::haxe::functional::_PartialFunctionExtensions::PartialFunction2Impl_obj::__new(def);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PartialFunction2Impl_obj,create,return )


PartialFunction2Impl_obj::PartialFunction2Impl_obj()
{
}

void PartialFunction2Impl_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PartialFunction2Impl);
	HX_MARK_MEMBER_NAME(_def,"_def");
	HX_MARK_END_CLASS();
}

Dynamic PartialFunction2Impl_obj::__Field(const ::String &inName)
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

Dynamic PartialFunction2Impl_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_def") ) { _def=inValue.Cast< Array< ::Tuple2 > >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void PartialFunction2Impl_obj::__GetFields(Array< ::String> &outFields)
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

Class PartialFunction2Impl_obj::__mClass;

void PartialFunction2Impl_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional._PartialFunctionExtensions.PartialFunction2Impl"), hx::TCanCast< PartialFunction2Impl_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void PartialFunction2Impl_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace _PartialFunctionExtensions
