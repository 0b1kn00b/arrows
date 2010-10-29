#include <hxcpp.h>

#ifndef INCLUDED_Stax
#include <Stax.h>
#endif
#ifndef INCLUDED_StringExtensions
#include <StringExtensions.h>
#endif
#ifndef INCLUDED_haxe_functional_P
#include <haxe/functional/P.h>
#endif
namespace haxe{
namespace functional{

Void P_obj::__construct()
{
	return null();
}

P_obj::~P_obj() { }

Dynamic P_obj::__CreateEmpty() { return  new P_obj; }
hx::ObjectPtr< P_obj > P_obj::__new()
{  hx::ObjectPtr< P_obj > result = new P_obj();
	result->__construct();
	return result;}

Dynamic P_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< P_obj > result = new P_obj();
	result->__construct();
	return result;}

Dynamic P_obj::isNull( ){
	HX_SOURCE_PUSH("P_obj::isNull")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	bool run(Dynamic value){
{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",35)
			return (value == null());
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",34)
	return  Dynamic(new _Function_1_1());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(P_obj,isNull,return )

Dynamic P_obj::isNotNull( ){
	HX_SOURCE_PUSH("P_obj::isNotNull")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	bool run(Dynamic value){
{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",41)
			return (value != null());
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",40)
	return  Dynamic(new _Function_1_1());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(P_obj,isNotNull,return )

Dynamic P_obj::isGreaterThan( double $t1){
	HX_SOURCE_PUSH("P_obj::isGreaterThan")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",45)
	Array< double > ref = Array_obj< double >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< double >,ref)
	bool run(double value){
{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",47)
			return (value > ref->__get(0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",46)
	return  Dynamic(new _Function_1_1(ref));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(P_obj,isGreaterThan,return )

Dynamic P_obj::isLessThan( double $t1){
	HX_SOURCE_PUSH("P_obj::isLessThan")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",51)
	Array< double > ref = Array_obj< double >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< double >,ref)
	bool run(double value){
{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",53)
			return (value < ref->__get(0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",52)
	return  Dynamic(new _Function_1_1(ref));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(P_obj,isLessThan,return )

Dynamic P_obj::isGreaterThanInt( int $t1){
	HX_SOURCE_PUSH("P_obj::isGreaterThanInt")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",57)
	Array< int > ref = Array_obj< int >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< int >,ref)
	bool run(int value){
{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",59)
			return (value > ref->__get(0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",58)
	return  Dynamic(new _Function_1_1(ref));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(P_obj,isGreaterThanInt,return )

Dynamic P_obj::isLessThanInt( int $t1){
	HX_SOURCE_PUSH("P_obj::isLessThanInt")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",63)
	Array< int > ref = Array_obj< int >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< int >,ref)
	bool run(int value){
{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",65)
			return (value < ref->__get(0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",64)
	return  Dynamic(new _Function_1_1(ref));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(P_obj,isLessThanInt,return )

Dynamic P_obj::isEqualTo( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("P_obj::isEqualTo")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",69)
	Array< Dynamic > equal = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",69)
	Array< Dynamic > ref = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",70)
	if ((equal->__get(0) == null()))
		equal[0] = ::Stax_obj::getEqualFor(ref->__get(0));

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,equal,Array< Dynamic >,ref)
	bool run(Dynamic value){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",73)
			return equal->__get(0)(ref->__get(0),value);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",72)
	return  Dynamic(new _Function_1_1(equal,ref));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(P_obj,isEqualTo,return )

Dynamic P_obj::startsWith( ::String $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("P_obj::startsWith")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",77)
	Array< ::String > s = Array_obj< ::String >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::String >,s)
	bool run(::String value){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",79)
			return ::StringExtensions_obj::startsWith(value,s->__get(0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",78)
	return  Dynamic(new _Function_1_1(s));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(P_obj,startsWith,return )

Dynamic P_obj::endsWith( ::String $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("P_obj::endsWith")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",83)
	Array< ::String > s = Array_obj< ::String >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::String >,s)
	bool run(::String value){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",85)
			return ::StringExtensions_obj::endsWith(value,s->__get(0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",84)
	return  Dynamic(new _Function_1_1(s));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(P_obj,endsWith,return )

Dynamic P_obj::contains( ::String $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("P_obj::contains")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",89)
	Array< ::String > s = Array_obj< ::String >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::String >,s)
	bool run(::String value){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",91)
			return ::StringExtensions_obj::contains(value,s->__get(0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/Predicate.hx",90)
	return  Dynamic(new _Function_1_1(s));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(P_obj,contains,return )


P_obj::P_obj()
{
}

void P_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(P);
	HX_MARK_END_CLASS();
}

Dynamic P_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"isNull") ) { return isNull_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endsWith") ) { return endsWith_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isNotNull") ) { return isNotNull_dyn(); }
		if (HX_FIELD_EQ(inName,"isEqualTo") ) { return isEqualTo_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isLessThan") ) { return isLessThan_dyn(); }
		if (HX_FIELD_EQ(inName,"startsWith") ) { return startsWith_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isGreaterThan") ) { return isGreaterThan_dyn(); }
		if (HX_FIELD_EQ(inName,"isLessThanInt") ) { return isLessThanInt_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isGreaterThanInt") ) { return isGreaterThanInt_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic P_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void P_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("isNull"),
	HX_CSTRING("isNotNull"),
	HX_CSTRING("isGreaterThan"),
	HX_CSTRING("isLessThan"),
	HX_CSTRING("isGreaterThanInt"),
	HX_CSTRING("isLessThanInt"),
	HX_CSTRING("isEqualTo"),
	HX_CSTRING("startsWith"),
	HX_CSTRING("endsWith"),
	HX_CSTRING("contains"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class P_obj::__mClass;

void P_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.P"), hx::TCanCast< P_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void P_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
