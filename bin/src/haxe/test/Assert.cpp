#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Either
#include <Either.h>
#endif
#ifndef INCLUDED_Future
#include <Future.h>
#endif
#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_IntHash
#include <IntHash.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_OptionExtensions
#include <OptionExtensions.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Stax
#include <Stax.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_test_Assert
#include <haxe/test/Assert.h>
#endif
#ifndef INCLUDED_haxe_test_Assertation
#include <haxe/test/Assertation.h>
#endif
namespace haxe{
namespace test{

Void Assert_obj::__construct()
{
	return null();
}

Assert_obj::~Assert_obj() { }

Dynamic Assert_obj::__CreateEmpty() { return  new Assert_obj; }
hx::ObjectPtr< Assert_obj > Assert_obj::__new()
{  hx::ObjectPtr< Assert_obj > result = new Assert_obj();
	result->__construct();
	return result;}

Dynamic Assert_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assert_obj > result = new Assert_obj();
	result->__construct();
	return result;}

::List Assert_obj::results;

Void Assert_obj::that( Dynamic obj,Dynamic cond,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::that")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",53)
		::Either _switch_1 = (cond(obj));
		switch((_switch_1)->GetIndex()){
			case 0: {
				Dynamic result = _switch_1->__Param(0);
{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",54)
					::haxe::test::Assert_obj::isTrue(false,(((((HX_CSTRING("Expected: ") + result->__Field(HX_CSTRING("assertion")).Cast< ::String >())) + HX_CSTRING(", Found: x = "))) + ::haxe::test::Assert_obj::q(obj)),pos);
				}
			}
			;break;
			case 1: {
{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",55)
					::haxe::test::Assert_obj::isTrue(true,null(),pos);
				}
			}
			;break;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assert_obj,that,(void))

Void Assert_obj::isTrue( bool cond,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::isTrue")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",67)
		if ((::haxe::test::Assert_obj::results == null()))
			hx::Throw (HX_CSTRING("Assert.results is not currently bound to any assert context"));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",68)
		if ((null() == msg))
			msg = HX_CSTRING("expected true");
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",70)
		if (cond){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",71)
			::haxe::test::Assert_obj::results->add(::haxe::test::Assertation_obj::Success(pos));
		}
		else{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",73)
			::haxe::test::Assert_obj::results->add(::haxe::test::Assertation_obj::Failure(msg,pos));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,isTrue,(void))

Void Assert_obj::isFalse( bool value,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::isFalse")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",83)
		if ((null() == msg))
			msg = HX_CSTRING("expected false");
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",85)
		::haxe::test::Assert_obj::isTrue((value == false),msg,pos);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,isFalse,(void))

Void Assert_obj::isNull( Dynamic value,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::isNull")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",95)
		if ((msg == null()))
			msg = (HX_CSTRING("expected null but was ") + ::haxe::test::Assert_obj::q(value));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",97)
		::haxe::test::Assert_obj::isTrue((value == null()),msg,pos);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,isNull,(void))

Void Assert_obj::notNull( Dynamic value,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::notNull")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",107)
		if ((null() == msg))
			msg = HX_CSTRING("expected false");
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",109)
		::haxe::test::Assert_obj::isTrue((value != null()),msg,pos);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,notNull,(void))

Void Assert_obj::is( Dynamic value,Dynamic type,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::is")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",120)
		if ((msg == null()))
			msg = (((((HX_CSTRING("expected type ") + ::haxe::test::Assert_obj::typeToString(type))) + HX_CSTRING(" but was "))) + ::haxe::test::Assert_obj::typeToString(value));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",121)
		::haxe::test::Assert_obj::isTrue(::Std_obj::is(value,type),msg,pos);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assert_obj,is,(void))

Void Assert_obj::notEquals( Dynamic expected,Dynamic value,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::notEquals")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",136)
		if ((msg == null()))
			msg = (((((((HX_CSTRING("expected ") + ::haxe::test::Assert_obj::q(expected))) + HX_CSTRING(" and testa value "))) + ::haxe::test::Assert_obj::q(value))) + HX_CSTRING(" should be different"));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",137)
		::haxe::test::Assert_obj::isFalse((expected == value),msg,pos);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assert_obj,notEquals,(void))

Void Assert_obj::equals( Dynamic expected,Dynamic value,Dynamic equal,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::equals")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",152)
		if ((equal == null()))
			equal = ::Stax_obj::getEqualFor(expected);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",154)
		if ((msg == null()))
			msg = (((((HX_CSTRING("expected ") + ::haxe::test::Assert_obj::q(expected))) + HX_CSTRING(" but was "))) + ::haxe::test::Assert_obj::q(value));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",155)
		::haxe::test::Assert_obj::isTrue(equal(expected,value),msg,pos);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Assert_obj,equals,(void))

Void Assert_obj::matches( ::EReg pattern,Dynamic value,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::matches")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",170)
		if ((msg == null()))
			msg = (((HX_CSTRING("the value ") + ::haxe::test::Assert_obj::q(value))) + HX_CSTRING("does not match the provided pattern"));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",171)
		::haxe::test::Assert_obj::isTrue(pattern->match(value),msg,pos);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assert_obj,matches,(void))

Void Assert_obj::floatEquals( double expected,double value,Dynamic approx,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::floatEquals")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",188)
		if ((msg == null()))
			msg = (((((HX_CSTRING("expected ") + expected)) + HX_CSTRING(" but was "))) + value);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",189)
		if (::Math_obj::isNaN(expected)){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",190)
			if (::Math_obj::isNaN(value)){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",191)
				return ::haxe::test::Assert_obj::isTrue(true,msg,pos);
			}
			else{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",193)
				return ::haxe::test::Assert_obj::isTrue(false,msg,pos);
			}
		}
		else{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",194)
			if (::Math_obj::isNaN(value))
				return ::haxe::test::Assert_obj::isTrue(false,msg,pos);
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",196)
		if ((null() == approx))
			approx = 1e-5;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",198)
		return ::haxe::test::Assert_obj::isTrue((::Math_obj::abs((value - expected)) < approx),msg,pos);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Assert_obj,floatEquals,(void))

::String Assert_obj::getTypeName( Dynamic v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Assert_obj::getTypeName")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",202)
	::ValueType _switch_2 = (::Type_obj::_typeof(v));
	switch((_switch_2)->GetIndex()){
		case 0: {
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",204)
			return null();
		}
		;break;
		case 1: {
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",205)
			return HX_CSTRING("Int");
		}
		;break;
		case 2: {
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",206)
			return HX_CSTRING("Float");
		}
		;break;
		case 3: {
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",207)
			return HX_CSTRING("Bool");
		}
		;break;
		case 5: {
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",208)
			return HX_CSTRING("function");
		}
		;break;
		case 6: {
			::Class c = _switch_2->__Param(0);
{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",209)
				return ::Type_obj::getClassName(c);
			}
		}
		;break;
		case 7: {
			::Enum e = _switch_2->__Param(0);
{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",210)
				return ::Type_obj::getEnumName(e);
			}
		}
		;break;
		case 4: {
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",211)
			return HX_CSTRING("Object");
		}
		;break;
		case 8: {
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",212)
			return HX_CSTRING("Unknown");
		}
		;break;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assert_obj,getTypeName,return )

bool Assert_obj::isIterable( Dynamic v,bool isAnonym){
	__SAFE_POINT
	HX_SOURCE_PUSH("Assert_obj::isIterable")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",217)
	Array< ::String > fields = (  (isAnonym) ? Array< ::String >(::Reflect_obj::fields(v)) : Array< ::String >(::Type_obj::getInstanceFields(::Type_obj::getClass(v))) );
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",218)
	if (!(::Lambda_obj::has(fields,HX_CSTRING("iterator"),null())))
		return false;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",219)
	return ::Reflect_obj::isFunction(::Reflect_obj::field(v,HX_CSTRING("iterator")));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assert_obj,isIterable,return )

bool Assert_obj::isIterator( Dynamic v,bool isAnonym){
	__SAFE_POINT
	HX_SOURCE_PUSH("Assert_obj::isIterator")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",223)
	Array< ::String > fields = (  (isAnonym) ? Array< ::String >(::Reflect_obj::fields(v)) : Array< ::String >(::Type_obj::getInstanceFields(::Type_obj::getClass(v))) );
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",224)
	if ((bool(!(::Lambda_obj::has(fields,HX_CSTRING("next"),null()))) || bool(!(::Lambda_obj::has(fields,HX_CSTRING("hasNext"),null())))))
		return false;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",225)
	return (bool(::Reflect_obj::isFunction(::Reflect_obj::field(v,HX_CSTRING("next")))) && bool(::Reflect_obj::isFunction(::Reflect_obj::field(v,HX_CSTRING("hasNext")))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assert_obj,isIterator,return )

bool Assert_obj::sameAs( Dynamic $t1,Dynamic $t2,Dynamic status){
	__SAFE_POINT
	HX_SOURCE_PUSH("Assert_obj::sameAs")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",228)
	Array< Dynamic > value = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",228)
	Array< Dynamic > expected = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",229)
	::String texpected = ::haxe::test::Assert_obj::getTypeName(expected->__get(0));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",230)
	::String tvalue = ::haxe::test::Assert_obj::getTypeName(value->__get(0));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",231)
	bool isanonym = (texpected == HX_CSTRING("Object"));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",233)
	if ((texpected != tvalue)){
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",234)
		status->__FieldRef(HX_CSTRING("error")) = (((((((HX_CSTRING("expected type ") + texpected)) + HX_CSTRING(" but it is "))) + tvalue)) + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",235)
		return false;
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",237)
	::ValueType _switch_3 = (::Type_obj::_typeof(expected->__get(0)));
	switch((_switch_3)->GetIndex()){
		case 0: case 1: case 2: case 3: {
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",240)
			if ((expected->__get(0) != value->__get(0))){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",241)
				status->__FieldRef(HX_CSTRING("error")) = (((((((HX_CSTRING("expected ") + expected->__get(0))) + HX_CSTRING(" but it is "))) + value->__get(0))) + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",242)
				return false;
			}
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",244)
			return true;
		}
		;break;
		case 5: {
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",246)
			if (!(::Reflect_obj::compareMethods(expected->__get(0),value->__get(0)))){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",248)
				status->__FieldRef(HX_CSTRING("error")) = (HX_CSTRING("expected same function reference") + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",249)
				return false;
			}
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",251)
			return true;
		}
		;break;
		case 6: {
			::Class c = _switch_3->__Param(0);
{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",253)
				::String cexpected = ::Type_obj::getClassName(c);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",254)
				::String cvalue = ::Type_obj::getClassName(::Type_obj::getClass(value->__get(0)));
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",255)
				if ((cexpected != cvalue)){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",257)
					status->__FieldRef(HX_CSTRING("error")) = (((((((HX_CSTRING("expected instance of ") + cexpected)) + HX_CSTRING(" but it is "))) + cvalue)) + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",258)
					return false;
				}
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",262)
				if (::Std_obj::is(expected->__get(0),hx::ClassOf< Array<int> >())){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",263)
					if ((bool(status->__Field(HX_CSTRING("recursive")).Cast< bool >()) || bool((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))))){
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",264)
						if ((expected[0]->__Field(HX_CSTRING("length")) != value[0]->__Field(HX_CSTRING("length")))){
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",265)
							status->__FieldRef(HX_CSTRING("error")) = (((((((HX_CSTRING("expected ") + expected[0]->__Field(HX_CSTRING("length")))) + HX_CSTRING(" elements but they were "))) + value[0]->__Field(HX_CSTRING("length")))) + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",266)
							return false;
						}
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",268)
						::String path = status->__Field(HX_CSTRING("path")).Cast< ::String >();
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",269)
						{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",269)
							int _g1 = 0;
							Dynamic _g = expected[0]->__Field(HX_CSTRING("length"));
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",269)
							while((_g1 < _g)){
								__SAFE_POINT
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",269)
								int i = (_g1)++;
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",270)
								status->__FieldRef(HX_CSTRING("path")) = (  ((path == HX_CSTRING(""))) ? ::String((((HX_CSTRING("array[") + i)) + HX_CSTRING("]"))) : ::String((((((path + HX_CSTRING("["))) + i)) + HX_CSTRING("]"))) );
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",271)
								if (!(::haxe::test::Assert_obj::sameAs(expected->__get(0)[i],value->__get(0)[i],status))){
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",273)
									status->__FieldRef(HX_CSTRING("error")) = (((((((HX_CSTRING("expected ") + ::haxe::test::Assert_obj::q(expected->__get(0)))) + HX_CSTRING(" but it is "))) + ::haxe::test::Assert_obj::q(value->__get(0)))) + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",274)
									return false;
								}
							}
						}
					}
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",278)
					return true;
				}
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",282)
				if (::Std_obj::is(expected->__get(0),hx::ClassOf< ::Date >())){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",283)
					if ((expected[0]->__Field(HX_CSTRING("getTime"))() != value[0]->__Field(HX_CSTRING("getTime"))())){
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",284)
						status->__FieldRef(HX_CSTRING("error")) = (((((((HX_CSTRING("expected ") + ::haxe::test::Assert_obj::q(expected->__get(0)))) + HX_CSTRING(" but it is "))) + ::haxe::test::Assert_obj::q(value->__get(0)))) + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",285)
						return false;
					}
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",287)
					return true;
				}
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",291)
				if (::Std_obj::is(expected->__get(0),hx::ClassOf< ::haxe::io::Bytes >())){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",292)
					if ((bool(status->__Field(HX_CSTRING("recursive")).Cast< bool >()) || bool((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))))){
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",293)
						::haxe::io::Bytes ebytes = expected->__get(0);
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",294)
						::haxe::io::Bytes vbytes = value->__get(0);
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",295)
						if ((ebytes->length != vbytes->length))
							return false;
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",296)
						{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",296)
							int _g1 = 0;
							int _g = ebytes->length;
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",296)
							while((_g1 < _g)){
								__SAFE_POINT
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",296)
								int i = (_g1)++;
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",297)
								if ((ebytes->b->__get(i) != vbytes->b->__get(i))){
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",299)
									status->__FieldRef(HX_CSTRING("error")) = (((((((HX_CSTRING("expected byte ") + ebytes->b->__get(i))) + HX_CSTRING(" but wss "))) + ebytes->b->__get(i))) + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",300)
									return false;
								}
							}
						}
					}
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",303)
					return true;
				}
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",307)
				if ((bool(::Std_obj::is(expected->__get(0),hx::ClassOf< ::Hash >())) || bool(::Std_obj::is(expected->__get(0),hx::ClassOf< ::IntHash >())))){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",308)
					if ((bool(status->__Field(HX_CSTRING("recursive")).Cast< bool >()) || bool((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))))){
						struct _Function_4_1{
							inline static Dynamic Block( Array< Dynamic > &expected){
								hx::Anon __result = hx::Anon_obj::Create();

								HX_BEGIN_LOCAL_FUNC1(_Function_5_1,Array< Dynamic >,expected)
								Dynamic run(){
									__SAFE_POINT;
									return expected[0]->__Field(HX_CSTRING("keys"))();
									return null();
								}
								HX_END_LOCAL_FUNC0(return)

								__result->Add(HX_CSTRING("iterator") ,  Dynamic(new _Function_5_1(expected)));
								return __result;
							}
						};
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",309)
						Array< ::String > keys = ::Lambda_obj::array(_Function_4_1::Block(expected));
						struct _Function_4_2{
							inline static Dynamic Block( Array< Dynamic > &value){
								hx::Anon __result = hx::Anon_obj::Create();

								HX_BEGIN_LOCAL_FUNC1(_Function_5_1,Array< Dynamic >,value)
								Dynamic run(){
									__SAFE_POINT;
									return value[0]->__Field(HX_CSTRING("keys"))();
									return null();
								}
								HX_END_LOCAL_FUNC0(return)

								__result->Add(HX_CSTRING("iterator") ,  Dynamic(new _Function_5_1(value)));
								return __result;
							}
						};
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",310)
						Array< Dynamic > vkeys = ::Lambda_obj::array(_Function_4_2::Block(value));
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",311)
						if ((keys->length != vkeys->length)){
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",312)
							status->__FieldRef(HX_CSTRING("error")) = (((((((HX_CSTRING("expected ") + keys->length)) + HX_CSTRING(" keys but they were "))) + vkeys->length)) + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",313)
							return false;
						}
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",315)
						::String path = status->__Field(HX_CSTRING("path")).Cast< ::String >();
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",316)
						{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",316)
							int _g = 0;
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",316)
							while((_g < keys->length)){
								__SAFE_POINT
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",316)
								::String key = keys->__get(_g);
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",316)
								++(_g);
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",317)
								status->__FieldRef(HX_CSTRING("path")) = (  ((path == HX_CSTRING(""))) ? ::String((((HX_CSTRING("hash[") + key)) + HX_CSTRING("]"))) : ::String((((((path + HX_CSTRING("["))) + key)) + HX_CSTRING("]"))) );
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",318)
								if (!(::haxe::test::Assert_obj::sameAs(expected[0]->__Field(HX_CSTRING("get"))(key),value[0]->__Field(HX_CSTRING("get"))(key),status))){
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",320)
									status->__FieldRef(HX_CSTRING("error")) = (((((((HX_CSTRING("expected ") + ::haxe::test::Assert_obj::q(expected->__get(0)))) + HX_CSTRING(" but it is "))) + ::haxe::test::Assert_obj::q(value->__get(0)))) + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",321)
									return false;
								}
							}
						}
					}
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",325)
					return true;
				}
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",329)
				if (::haxe::test::Assert_obj::isIterator(expected->__get(0),false)){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",330)
					if ((bool(status->__Field(HX_CSTRING("recursive")).Cast< bool >()) || bool((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))))){
						struct _Function_4_1{
							inline static Dynamic Block( Array< Dynamic > &expected){
								hx::Anon __result = hx::Anon_obj::Create();

								HX_BEGIN_LOCAL_FUNC1(_Function_5_1,Array< Dynamic >,expected)
								Dynamic run(){
									return expected->__get(0);
									return null();
								}
								HX_END_LOCAL_FUNC0(return)

								__result->Add(HX_CSTRING("iterator") ,  Dynamic(new _Function_5_1(expected)));
								return __result;
							}
						};
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",331)
						Array< Dynamic > evalues = ::Lambda_obj::array(_Function_4_1::Block(expected));
						struct _Function_4_2{
							inline static Dynamic Block( Array< Dynamic > &value){
								hx::Anon __result = hx::Anon_obj::Create();

								HX_BEGIN_LOCAL_FUNC1(_Function_5_1,Array< Dynamic >,value)
								Dynamic run(){
									return value->__get(0);
									return null();
								}
								HX_END_LOCAL_FUNC0(return)

								__result->Add(HX_CSTRING("iterator") ,  Dynamic(new _Function_5_1(value)));
								return __result;
							}
						};
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",332)
						Array< Dynamic > vvalues = ::Lambda_obj::array(_Function_4_2::Block(value));
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",333)
						if ((evalues->length != vvalues->length)){
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",334)
							status->__FieldRef(HX_CSTRING("error")) = (((((((HX_CSTRING("expected ") + evalues->length)) + HX_CSTRING(" values in Iterator but they were "))) + vvalues->length)) + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",335)
							return false;
						}
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",337)
						::String path = status->__Field(HX_CSTRING("path")).Cast< ::String >();
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",338)
						{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",338)
							int _g1 = 0;
							int _g = evalues->length;
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",338)
							while((_g1 < _g)){
								__SAFE_POINT
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",338)
								int i = (_g1)++;
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",339)
								status->__FieldRef(HX_CSTRING("path")) = (  ((path == HX_CSTRING(""))) ? ::String((((HX_CSTRING("iterator[") + i)) + HX_CSTRING("]"))) : ::String((((((path + HX_CSTRING("["))) + i)) + HX_CSTRING("]"))) );
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",340)
								if (!(::haxe::test::Assert_obj::sameAs(evalues->__get(i),vvalues->__get(i),status))){
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",342)
									status->__FieldRef(HX_CSTRING("error")) = (((((((HX_CSTRING("expected ") + ::haxe::test::Assert_obj::q(expected->__get(0)))) + HX_CSTRING(" but it is "))) + ::haxe::test::Assert_obj::q(value->__get(0)))) + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",343)
									return false;
								}
							}
						}
					}
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",347)
					return true;
				}
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",351)
				if (::haxe::test::Assert_obj::isIterable(expected->__get(0),false)){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",352)
					if ((bool(status->__Field(HX_CSTRING("recursive")).Cast< bool >()) || bool((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))))){
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",353)
						Array< Dynamic > evalues = ::Lambda_obj::array(expected->__get(0));
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",354)
						Array< Dynamic > vvalues = ::Lambda_obj::array(value->__get(0));
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",355)
						if ((evalues->length != vvalues->length)){
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",356)
							status->__FieldRef(HX_CSTRING("error")) = (((((((HX_CSTRING("expected ") + evalues->length)) + HX_CSTRING(" values in Iterable but they were "))) + vvalues->length)) + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",357)
							return false;
						}
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",359)
						::String path = status->__Field(HX_CSTRING("path")).Cast< ::String >();
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",360)
						{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",360)
							int _g1 = 0;
							int _g = evalues->length;
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",360)
							while((_g1 < _g)){
								__SAFE_POINT
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",360)
								int i = (_g1)++;
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",361)
								status->__FieldRef(HX_CSTRING("path")) = (  ((path == HX_CSTRING(""))) ? ::String((((HX_CSTRING("iterable[") + i)) + HX_CSTRING("]"))) : ::String((((((path + HX_CSTRING("["))) + i)) + HX_CSTRING("]"))) );
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",362)
								if (!(::haxe::test::Assert_obj::sameAs(evalues->__get(i),vvalues->__get(i),status)))
									return false;
							}
						}
					}
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",366)
					return true;
				}
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",369)
				if ((bool(status->__Field(HX_CSTRING("recursive")).Cast< bool >()) || bool((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))))){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",370)
					Array< ::String > fields = ::Type_obj::getInstanceFields(::Type_obj::getClass(expected->__get(0)));
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",371)
					::String path = status->__Field(HX_CSTRING("path")).Cast< ::String >();
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",372)
					{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",372)
						int _g = 0;
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",372)
						while((_g < fields->length)){
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",372)
							::String field = fields->__get(_g);
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",372)
							++(_g);
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",373)
							status->__FieldRef(HX_CSTRING("path")) = (  ((path == HX_CSTRING(""))) ? ::String(field) : ::String((((path + HX_CSTRING("."))) + field)) );
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",374)
							Dynamic e = ::Reflect_obj::field(expected->__get(0),field);
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",375)
							if (::Reflect_obj::isFunction(e))
								continue;
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",376)
							Dynamic v = ::Reflect_obj::field(value->__get(0),field);
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",377)
							if (!(::haxe::test::Assert_obj::sameAs(e,v,status)))
								return false;
						}
					}
				}
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",382)
				return true;
			}
		}
		;break;
		case 7: {
			::Enum e = _switch_3->__Param(0);
{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",384)
				::String eexpected = ::Type_obj::getEnumName(e);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",385)
				::String evalue = ::Type_obj::getEnumName(::Type_obj::getEnum(value->__get(0)));
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",386)
				if ((eexpected != evalue)){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",388)
					status->__FieldRef(HX_CSTRING("error")) = (((((((HX_CSTRING("expected enumeration of ") + eexpected)) + HX_CSTRING(" but it is "))) + evalue)) + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",389)
					return false;
				}
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",392)
				if ((bool(status->__Field(HX_CSTRING("recursive")).Cast< bool >()) || bool((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))))){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",393)
					if ((expected[0]->__Index() != value[0]->__Index())){
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",394)
						status->__FieldRef(HX_CSTRING("error")) = (((((((HX_CSTRING("expected ") + ::haxe::test::Assert_obj::q(::Type_obj::enumConstructor(expected->__get(0))))) + HX_CSTRING(" but is "))) + ::haxe::test::Assert_obj::q(::Type_obj::enumConstructor(value->__get(0))))) + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",395)
						return false;
					}
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",397)
					Array< Dynamic > eparams = ::Type_obj::enumParameters(expected->__get(0));
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",398)
					Array< Dynamic > vparams = ::Type_obj::enumParameters(value->__get(0));
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",399)
					::String path = status->__Field(HX_CSTRING("path")).Cast< ::String >();
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",400)
					{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",400)
						int _g1 = 0;
						int _g = eparams->length;
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",400)
						while((_g1 < _g)){
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",400)
							int i = (_g1)++;
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",401)
							status->__FieldRef(HX_CSTRING("path")) = (  ((path == HX_CSTRING(""))) ? ::String((((HX_CSTRING("enum[") + i)) + HX_CSTRING("]"))) : ::String((((((path + HX_CSTRING("["))) + i)) + HX_CSTRING("]"))) );
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",402)
							if (!(::haxe::test::Assert_obj::sameAs(eparams->__get(i),vparams->__get(i),status))){
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",403)
								status->__FieldRef(HX_CSTRING("error")) = (((((((HX_CSTRING("expected ") + ::haxe::test::Assert_obj::q(expected->__get(0)))) + HX_CSTRING(" but it is "))) + ::haxe::test::Assert_obj::q(value->__get(0)))) + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",404)
								return false;
							}
						}
					}
				}
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",408)
				return true;
			}
		}
		;break;
		case 4: {
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",410)
			if ((bool(status->__Field(HX_CSTRING("recursive")).Cast< bool >()) || bool((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))))){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",411)
				Array< ::String > fields = ::Reflect_obj::fields(expected->__get(0));
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",412)
				::String path = status->__Field(HX_CSTRING("path")).Cast< ::String >();
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",413)
				{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",413)
					int _g = 0;
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",413)
					while((_g < fields->length)){
						__SAFE_POINT
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",413)
						::String field = fields->__get(_g);
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",413)
						++(_g);
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",414)
						status->__FieldRef(HX_CSTRING("path")) = (  ((path == HX_CSTRING(""))) ? ::String(field) : ::String((((path + HX_CSTRING("."))) + field)) );
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",415)
						if (!(::Reflect_obj::hasField(value->__get(0),field))){
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",416)
							status->__FieldRef(HX_CSTRING("error")) = (((((HX_CSTRING("expected field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) + HX_CSTRING(" does not exist in "))) + value->__get(0));
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",417)
							return false;
						}
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",419)
						Dynamic e = ::Reflect_obj::field(expected->__get(0),field);
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",420)
						if (::Reflect_obj::isFunction(e))
							continue;
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",421)
						Dynamic v = ::Reflect_obj::field(value->__get(0),field);
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",422)
						if (!(::haxe::test::Assert_obj::sameAs(e,v,status)))
							return false;
					}
				}
			}
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",428)
			if (::haxe::test::Assert_obj::isIterator(expected->__get(0),true)){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",429)
				if (!((::haxe::test::Assert_obj::isIterator(value->__get(0),true)))){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",430)
					status->__FieldRef(HX_CSTRING("error")) = (HX_CSTRING("expected Iterable but it is not ") + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",431)
					return false;
				}
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",433)
				if ((bool(status->__Field(HX_CSTRING("recursive")).Cast< bool >()) || bool((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))))){
					struct _Function_4_1{
						inline static Dynamic Block( Array< Dynamic > &expected){
							hx::Anon __result = hx::Anon_obj::Create();

							HX_BEGIN_LOCAL_FUNC1(_Function_5_1,Array< Dynamic >,expected)
							Dynamic run(){
								return expected->__get(0);
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							__result->Add(HX_CSTRING("iterator") ,  Dynamic(new _Function_5_1(expected)));
							return __result;
						}
					};
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",434)
					Array< Dynamic > evalues = ::Lambda_obj::array(_Function_4_1::Block(expected));
					struct _Function_4_2{
						inline static Dynamic Block( Array< Dynamic > &value){
							hx::Anon __result = hx::Anon_obj::Create();

							HX_BEGIN_LOCAL_FUNC1(_Function_5_1,Array< Dynamic >,value)
							Dynamic run(){
								return value->__get(0);
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							__result->Add(HX_CSTRING("iterator") ,  Dynamic(new _Function_5_1(value)));
							return __result;
						}
					};
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",435)
					Array< Dynamic > vvalues = ::Lambda_obj::array(_Function_4_2::Block(value));
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",436)
					if ((evalues->length != vvalues->length)){
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",437)
						status->__FieldRef(HX_CSTRING("error")) = (((((((HX_CSTRING("expected ") + evalues->length)) + HX_CSTRING(" values in Iterator but they were "))) + vvalues->length)) + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",438)
						return false;
					}
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",440)
					::String path = status->__Field(HX_CSTRING("path")).Cast< ::String >();
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",441)
					{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",441)
						int _g1 = 0;
						int _g = evalues->length;
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",441)
						while((_g1 < _g)){
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",441)
							int i = (_g1)++;
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",442)
							status->__FieldRef(HX_CSTRING("path")) = (  ((path == HX_CSTRING(""))) ? ::String((((HX_CSTRING("iterator[") + i)) + HX_CSTRING("]"))) : ::String((((((path + HX_CSTRING("["))) + i)) + HX_CSTRING("]"))) );
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",443)
							if (!(::haxe::test::Assert_obj::sameAs(evalues->__get(i),vvalues->__get(i),status))){
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",445)
								status->__FieldRef(HX_CSTRING("error")) = (((((((HX_CSTRING("expected ") + ::haxe::test::Assert_obj::q(expected->__get(0)))) + HX_CSTRING(" but it is "))) + ::haxe::test::Assert_obj::q(value->__get(0)))) + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",446)
								return false;
							}
						}
					}
				}
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",450)
				return true;
			}
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",454)
			if (::haxe::test::Assert_obj::isIterable(expected->__get(0),true)){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",455)
				if (!((::haxe::test::Assert_obj::isIterable(value->__get(0),true)))){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",456)
					status->__FieldRef(HX_CSTRING("error")) = (HX_CSTRING("expected Iterator but it is not ") + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",457)
					return false;
				}
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",459)
				if ((bool(status->__Field(HX_CSTRING("recursive")).Cast< bool >()) || bool((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))))){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",460)
					Array< Dynamic > evalues = ::Lambda_obj::array(expected->__get(0));
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",461)
					Array< Dynamic > vvalues = ::Lambda_obj::array(value->__get(0));
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",462)
					if ((evalues->length != vvalues->length)){
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",463)
						status->__FieldRef(HX_CSTRING("error")) = (((((((HX_CSTRING("expected ") + evalues->length)) + HX_CSTRING(" values in Iterable but they were "))) + vvalues->length)) + ((  ((status->__Field(HX_CSTRING("path")).Cast< ::String >() == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((HX_CSTRING(" for field ") + status->__Field(HX_CSTRING("path")).Cast< ::String >())) )));
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",464)
						return false;
					}
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",466)
					::String path = status->__Field(HX_CSTRING("path")).Cast< ::String >();
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",467)
					{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",467)
						int _g1 = 0;
						int _g = evalues->length;
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",467)
						while((_g1 < _g)){
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",467)
							int i = (_g1)++;
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",468)
							status->__FieldRef(HX_CSTRING("path")) = (  ((path == HX_CSTRING(""))) ? ::String((((HX_CSTRING("iterable[") + i)) + HX_CSTRING("]"))) : ::String((((((path + HX_CSTRING("["))) + i)) + HX_CSTRING("]"))) );
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",469)
							if (!(::haxe::test::Assert_obj::sameAs(evalues->__get(i),vvalues->__get(i),status)))
								return false;
						}
					}
				}
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",473)
				return true;
			}
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",475)
			return true;
		}
		;break;
		case 8: {
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",477)
			return hx::Throw (HX_CSTRING("Unable to compare  two unknown types"));
		}
		;break;
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",479)
	return hx::Throw ((((((HX_CSTRING("Unable to compare values: ") + ::haxe::test::Assert_obj::q(expected->__get(0)))) + HX_CSTRING(" and "))) + ::haxe::test::Assert_obj::q(value->__get(0))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,sameAs,return )

::String Assert_obj::q( Dynamic v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Assert_obj::q")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",484)
	if ((null() == v)){
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",485)
		return HX_CSTRING("null");
	}
	else{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",486)
		if (::Std_obj::is(v,hx::ClassOf< ::String >())){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",487)
			return (((HX_CSTRING("\"") + ::StringTools_obj::replace(v,HX_CSTRING("\""),HX_CSTRING("\\\"")))) + HX_CSTRING("\""));
		}
		else{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",489)
			return (HX_CSTRING("") + v);
		}
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assert_obj,q,return )

Void Assert_obj::looksLike( Dynamic expected,Dynamic value,Dynamic recursive,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::looksLike")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",507)
		if ((null() == recursive))
			recursive = true;
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &recursive){
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("recursive") , recursive);
				__result->Add(HX_CSTRING("path") , HX_CSTRING(""));
				__result->Add(HX_CSTRING("error") , null());
				return __result;
			}
		};
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",509)
		Dynamic status = _Function_1_1::Block(recursive);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",510)
		if (::haxe::test::Assert_obj::sameAs(expected,value,status)){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",511)
			::haxe::test::Assert_obj::isTrue(true,msg,pos);
		}
		else{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",513)
			::haxe::test::Assert_obj::fail((  ((msg == null())) ? ::String(status->__Field(HX_CSTRING("error")).Cast< ::String >()) : ::String(msg) ),pos);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Assert_obj,looksLike,(void))

Void Assert_obj::throwsException( Dynamic method,::Class type,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::throwsException")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",532)
		if ((type == null()))
			type = hx::ClassOf< ::String >();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",534)
		try{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",535)
			method();
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",536)
			::String name = ::Type_obj::getClassName(type);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",537)
			if ((name == null()))
				name = (HX_CSTRING("") + type);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",538)
			::haxe::test::Assert_obj::fail((((HX_CSTRING("exception of type ") + name)) + HX_CSTRING(" not raised")),pos);
		}
		catch(Dynamic __e){
			{
				Dynamic ex = __e;{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",540)
					::String name = ::Type_obj::getClassName(type);
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",541)
					if ((name == null()))
						name = (HX_CSTRING("") + type);
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",542)
					::haxe::test::Assert_obj::isTrue(::Std_obj::is(ex,type),(((((HX_CSTRING("expected throw of type ") + name)) + HX_CSTRING(" but was "))) + ex),pos);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assert_obj,throwsException,(void))

Void Assert_obj::equalsOneOf( Dynamic value,Array< Dynamic > possibilities,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::equalsOneOf")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",554)
		if (::Lambda_obj::has(possibilities,value,null())){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",555)
			::haxe::test::Assert_obj::isTrue(true,msg,pos);
		}
		else{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",557)
			::haxe::test::Assert_obj::fail((  ((msg == null())) ? ::String((((((HX_CSTRING("value ") + ::haxe::test::Assert_obj::q(value))) + HX_CSTRING(" not found in the expected possibilities "))) + possibilities)) : ::String(msg) ),pos);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assert_obj,equalsOneOf,(void))

Void Assert_obj::contains( Dynamic values,Dynamic match,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::contains")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",569)
		if (::Lambda_obj::has(values,match,null())){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",570)
			::haxe::test::Assert_obj::isTrue(true,msg,pos);
		}
		else{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",572)
			::haxe::test::Assert_obj::fail((  ((msg == null())) ? ::String((((((HX_CSTRING("values ") + values)) + HX_CSTRING(" do not contain "))) + match)) : ::String(msg) ),pos);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assert_obj,contains,(void))

Void Assert_obj::notContains( Dynamic values,Dynamic match,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::notContains")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",585)
		if (!(::Lambda_obj::has(values,match,null()))){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",586)
			::haxe::test::Assert_obj::isTrue(true,msg,pos);
		}
		else{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",588)
			::haxe::test::Assert_obj::fail((  ((msg == null())) ? ::String((((((HX_CSTRING("values ") + values)) + HX_CSTRING(" do contain "))) + match)) : ::String(msg) ),pos);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assert_obj,notContains,(void))

Void Assert_obj::stringContains( ::String match,::String value,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::stringContains")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",600)
		if ((bool((value != null())) && bool((value.indexOf(match,null()) >= 0)))){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",601)
			::haxe::test::Assert_obj::isTrue(true,msg,pos);
		}
		else{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",603)
			::haxe::test::Assert_obj::fail((  ((msg == null())) ? ::String((((((HX_CSTRING("value ") + ::haxe::test::Assert_obj::q(value))) + HX_CSTRING(" does not contain "))) + ::haxe::test::Assert_obj::q(match))) : ::String(msg) ),pos);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assert_obj,stringContains,(void))

Void Assert_obj::stringSequence( Array< ::String > sequence,::String value,::String msg,Dynamic pos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::stringSequence")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",608)
		if ((null() == value)){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",610)
			::haxe::test::Assert_obj::fail((  ((msg == null())) ? ::String(HX_CSTRING("null argument value")) : ::String(msg) ),pos);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",611)
			return null();
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",613)
		int p = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",614)
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",614)
			int _g = 0;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",614)
			while((_g < sequence->length)){
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",614)
				::String s = sequence->__get(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",614)
				++(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",616)
				int p2 = value.indexOf(s,p);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",617)
				if ((p2 < 0)){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",619)
					if ((msg == null())){
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",621)
						msg = (((HX_CSTRING("expected '") + s)) + HX_CSTRING("' after "));
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",622)
						if ((p > 0)){
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",624)
							::String cut = value.substr(0,p);
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",625)
							if ((cut.length > 30))
								cut = (HX_CSTRING("...") + cut.substr(-27,null()));
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",627)
							hx::AddEq(msg,(((HX_CSTRING(" '") + cut)) + HX_CSTRING("'")));
						}
						else{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",629)
							hx::AddEq(msg,HX_CSTRING(" begin"));
						}
					}
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",631)
					::haxe::test::Assert_obj::fail(msg,pos);
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",632)
					return null();
				}
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",634)
				p = (p2 + s.length);
			}
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",636)
		::haxe::test::Assert_obj::isTrue(true,msg,pos);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assert_obj,stringSequence,(void))

Void Assert_obj::fail( Dynamic __o_msg,Dynamic pos){
::String msg = __o_msg.Default(HX_CSTRING("failure expected"));
	HX_SOURCE_PUSH("Assert_obj::fail");
{
		__SAFE_POINT
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",646)
		::haxe::test::Assert_obj::isTrue(false,msg,pos);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assert_obj,fail,(void))

Void Assert_obj::warn( ::String msg){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::warn")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",655)
		::haxe::test::Assert_obj::results->add(::haxe::test::Assertation_obj::Warning(msg));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assert_obj,warn,(void))

HX_BEGIN_DEFAULT_FUNC(__default_createAsync,Assert_obj)
Dynamic run(Dynamic f,Dynamic timeout){
	HX_SOURCE_PUSH("Assert_obj::createAsync")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Void run(){
{
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",670)
	return  Dynamic(new _Function_1_1());
}
HX_END_LOCAL_FUNC2(return )
HX_END_DEFAULT_FUNC

Dynamic Assert_obj::createAsync;

Void Assert_obj::delivered( ::Future $t1,Dynamic $t2,Dynamic timeout){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::delivered")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",678)
		Array< Dynamic > assertions = Array_obj< Dynamic >::__new().Add($t2);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",678)
		Array< ::Future > future = Array_obj< ::Future >::__new().Add($t1);

		HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< ::Future >,future,Array< Dynamic >,assertions)
		Void run(){
{
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",680)
				if (future[0]->isCanceled()){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",681)
					::haxe::test::Assert_obj::fail((((HX_CSTRING("expected delivery of future ") + ::haxe::test::Assert_obj::q(future->__get(0)))) + HX_CSTRING(", but it was canceled")),hx::SourceInfo(HX_CSTRING("Assert.hx"),681,HX_CSTRING("haxe.test.Assert"),HX_CSTRING("delivered")));
				}
				else{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",684)
					assertions->__get(0)(::OptionExtensions_obj::get(future[0]->value()));
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",679)
		Array< Dynamic > f = Array_obj< Dynamic >::__new().Add(::haxe::test::Assert_obj::createAsync( Dynamic(new _Function_1_1(future,assertions)),timeout));

		HX_BEGIN_LOCAL_FUNC1(_Function_1_2,Array< Dynamic >,f)
		Void run(Dynamic value){
{
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",688)
				f->__get(0)();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",688)
		future[0]->deliverTo( Dynamic(new _Function_1_2(f)));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",690)
		future[0]->ifCanceled(f->__get(0));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,delivered,(void))

Void Assert_obj::canceled( ::Future future,Dynamic assertions,Dynamic timeout){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::canceled")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",697)
		future->ifCanceled(::haxe::test::Assert_obj::createAsync(assertions,timeout));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,canceled,(void))

Void Assert_obj::notDelivered( ::Future $t1,Dynamic timeout,Dynamic $t2){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Assert_obj::notDelivered")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",702)
		Array< Dynamic > pos = Array_obj< Dynamic >::__new().Add($t2);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",702)
		Array< ::Future > future = Array_obj< ::Future >::__new().Add($t1);

		HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< ::Future >,future,Array< Dynamic >,pos)
		Void run(){
{
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",704)
				if (future[0]->isDelivered()){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",705)
					::haxe::test::Assert_obj::fail((HX_CSTRING("Did not expect delivery of: ") + ::OptionExtensions_obj::get(future[0]->value())),pos->__get(0));
				}
				else{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",708)
					::haxe::test::Assert_obj::isTrue(true,null(),hx::SourceInfo(HX_CSTRING("Assert.hx"),708,HX_CSTRING("haxe.test.Assert"),HX_CSTRING("notDelivered")));
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",703)
		Array< Dynamic > f = Array_obj< Dynamic >::__new().Add(::haxe::test::Assert_obj::createAsync( Dynamic(new _Function_1_1(future,pos)),(timeout + 10)));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",712)
		f->__get(0)();

		HX_BEGIN_LOCAL_FUNC1(_Function_1_2,Array< Dynamic >,f)
		Void run(Dynamic value){
{
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",716)
				f->__get(0)();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",716)
		future[0]->deliverTo( Dynamic(new _Function_1_2(f)));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assert_obj,notDelivered,(void))

HX_BEGIN_DEFAULT_FUNC(__default_createEvent,Assert_obj)
Dynamic run(Dynamic f,Dynamic timeout){
	HX_SOURCE_PUSH("Assert_obj::createEvent")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Void run(Dynamic e){
{
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",737)
	return  Dynamic(new _Function_1_1());
}
HX_END_LOCAL_FUNC2(return )
HX_END_DEFAULT_FUNC

Dynamic Assert_obj::createEvent;

::String Assert_obj::typeToString( Dynamic t){
	__SAFE_POINT
	HX_SOURCE_PUSH("Assert_obj::typeToString")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",742)
	try{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",743)
		::Class _t = ::Type_obj::getClass(t);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",744)
		if ((_t != null()))
			t = _t;
	}
	catch(Dynamic __e){
		{
			Dynamic e = __e;{
			}
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",747)
	try{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",747)
		return ::Type_obj::getClassName(t);
	}
	catch(Dynamic __e){
		{
			Dynamic e = __e;{
			}
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",748)
	try{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",749)
		::Enum _t = ::Type_obj::getEnum(t);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",750)
		if ((_t != null()))
			t = _t;
	}
	catch(Dynamic __e){
		{
			Dynamic e = __e;{
			}
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",753)
	try{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",753)
		return ::Type_obj::getEnumName(t);
	}
	catch(Dynamic __e){
		{
			Dynamic e = __e;{
			}
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",754)
	try{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",754)
		return ::Std_obj::string(::Type_obj::_typeof(t));
	}
	catch(Dynamic __e){
		{
			Dynamic e = __e;{
			}
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",755)
	try{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",755)
		return ::Std_obj::string(t);
	}
	catch(Dynamic __e){
		{
			Dynamic e = __e;{
			}
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Assert.hx",756)
	return HX_CSTRING("<unable to retrieve type name>");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assert_obj,typeToString,return )


Assert_obj::Assert_obj()
{
}

void Assert_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assert);
	HX_MARK_END_CLASS();
}

Dynamic Assert_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"q") ) { return q_dyn(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"is") ) { return is_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"that") ) { return that_dyn(); }
		if (HX_FIELD_EQ(inName,"fail") ) { return fail_dyn(); }
		if (HX_FIELD_EQ(inName,"warn") ) { return warn_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isTrue") ) { return isTrue_dyn(); }
		if (HX_FIELD_EQ(inName,"isNull") ) { return isNull_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"sameAs") ) { return sameAs_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"results") ) { return results; }
		if (HX_FIELD_EQ(inName,"isFalse") ) { return isFalse_dyn(); }
		if (HX_FIELD_EQ(inName,"notNull") ) { return notNull_dyn(); }
		if (HX_FIELD_EQ(inName,"matches") ) { return matches_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"canceled") ) { return canceled_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"notEquals") ) { return notEquals_dyn(); }
		if (HX_FIELD_EQ(inName,"looksLike") ) { return looksLike_dyn(); }
		if (HX_FIELD_EQ(inName,"delivered") ) { return delivered_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isIterable") ) { return isIterable_dyn(); }
		if (HX_FIELD_EQ(inName,"isIterator") ) { return isIterator_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"floatEquals") ) { return floatEquals_dyn(); }
		if (HX_FIELD_EQ(inName,"getTypeName") ) { return getTypeName_dyn(); }
		if (HX_FIELD_EQ(inName,"equalsOneOf") ) { return equalsOneOf_dyn(); }
		if (HX_FIELD_EQ(inName,"notContains") ) { return notContains_dyn(); }
		if (HX_FIELD_EQ(inName,"createAsync") ) { return createAsync; }
		if (HX_FIELD_EQ(inName,"createEvent") ) { return createEvent; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"notDelivered") ) { return notDelivered_dyn(); }
		if (HX_FIELD_EQ(inName,"typeToString") ) { return typeToString_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stringContains") ) { return stringContains_dyn(); }
		if (HX_FIELD_EQ(inName,"stringSequence") ) { return stringSequence_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"throwsException") ) { return throwsException_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Assert_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"results") ) { results=inValue.Cast< ::List >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createAsync") ) { createAsync=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"createEvent") ) { createEvent=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Assert_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("results"),
	HX_CSTRING("that"),
	HX_CSTRING("isTrue"),
	HX_CSTRING("isFalse"),
	HX_CSTRING("isNull"),
	HX_CSTRING("notNull"),
	HX_CSTRING("is"),
	HX_CSTRING("notEquals"),
	HX_CSTRING("equals"),
	HX_CSTRING("matches"),
	HX_CSTRING("floatEquals"),
	HX_CSTRING("getTypeName"),
	HX_CSTRING("isIterable"),
	HX_CSTRING("isIterator"),
	HX_CSTRING("sameAs"),
	HX_CSTRING("q"),
	HX_CSTRING("looksLike"),
	HX_CSTRING("throwsException"),
	HX_CSTRING("equalsOneOf"),
	HX_CSTRING("contains"),
	HX_CSTRING("notContains"),
	HX_CSTRING("stringContains"),
	HX_CSTRING("stringSequence"),
	HX_CSTRING("fail"),
	HX_CSTRING("warn"),
	HX_CSTRING("createAsync"),
	HX_CSTRING("delivered"),
	HX_CSTRING("canceled"),
	HX_CSTRING("notDelivered"),
	HX_CSTRING("createEvent"),
	HX_CSTRING("typeToString"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assert_obj::results,"results");
	HX_MARK_MEMBER_NAME(Assert_obj::createAsync,"createAsync");
	HX_MARK_MEMBER_NAME(Assert_obj::createEvent,"createEvent");
};

Class Assert_obj::__mClass;

void Assert_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.Assert"), hx::TCanCast< Assert_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Assert_obj::__boot()
{
	hx::Static(results);
	hx::Static(createAsync) = new __default_createAsync;

	hx::Static(createEvent) = new __default_createEvent;

}

} // end namespace haxe
} // end namespace test
