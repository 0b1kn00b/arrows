#include <hxcpp.h>

#ifndef INCLUDED_Either
#include <Either.h>
#endif
#ifndef INCLUDED_EitherExtensions
#include <EitherExtensions.h>
#endif
#ifndef INCLUDED_haxe_test_MustMatcherExtensions
#include <haxe/test/MustMatcherExtensions.h>
#endif
namespace haxe{
namespace test{

Void MustMatcherExtensions_obj::__construct()
{
	return null();
}

MustMatcherExtensions_obj::~MustMatcherExtensions_obj() { }

Dynamic MustMatcherExtensions_obj::__CreateEmpty() { return  new MustMatcherExtensions_obj; }
hx::ObjectPtr< MustMatcherExtensions_obj > MustMatcherExtensions_obj::__new()
{  hx::ObjectPtr< MustMatcherExtensions_obj > result = new MustMatcherExtensions_obj();
	result->__construct();
	return result;}

Dynamic MustMatcherExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MustMatcherExtensions_obj > result = new MustMatcherExtensions_obj();
	result->__construct();
	return result;}

Dynamic MustMatcherExtensions_obj::negate( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("MustMatcherExtensions_obj::negate")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatcherExtensions.hx",25)
	Array< Dynamic > c = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Dynamic run(Dynamic result){
{
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &result){
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("assertion") , result->__Field(HX_CSTRING("negation")).Cast< ::String >());
					__result->Add(HX_CSTRING("negation") , result->__Field(HX_CSTRING("assertion")).Cast< ::String >());
					return __result;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatcherExtensions.hx",26)
			return _Function_2_1::Block(result);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatcherExtensions.hx",26)
	Array< Dynamic > inverter = Array_obj< Dynamic >::__new().Add( Dynamic(new _Function_1_1()));

	HX_BEGIN_LOCAL_FUNC2(_Function_1_2,Array< Dynamic >,c,Array< Dynamic >,inverter)
	::Either run(Dynamic value){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatcherExtensions.hx",29)
			return ::EitherExtensions_obj::map(c->__get(0)(value),inverter->__get(0),inverter->__get(0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatcherExtensions.hx",28)
	return  Dynamic(new _Function_1_2(c,inverter));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MustMatcherExtensions_obj,negate,return )

Dynamic MustMatcherExtensions_obj::_or( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("MustMatcherExtensions_obj::or")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatcherExtensions.hx",33)
	Array< Dynamic > c2 = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatcherExtensions.hx",33)
	Array< Dynamic > c1 = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Dynamic run(Dynamic r1,Dynamic r2){
{
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &r1,Dynamic &r2){
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("assertion") , (((((((HX_CSTRING("(") + r1->__Field(HX_CSTRING("assertion")).Cast< ::String >())) + HX_CSTRING(") || ("))) + r2->__Field(HX_CSTRING("assertion")).Cast< ::String >())) + HX_CSTRING(")")));
					__result->Add(HX_CSTRING("negation") , (((((((HX_CSTRING("(") + r1->__Field(HX_CSTRING("negation")).Cast< ::String >())) + HX_CSTRING(") && ("))) + r2->__Field(HX_CSTRING("negation")).Cast< ::String >())) + HX_CSTRING(")")));
					return __result;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatcherExtensions.hx",35)
			return _Function_2_1::Block(r1,r2);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatcherExtensions.hx",34)
	Array< Dynamic > transformer = Array_obj< Dynamic >::__new().Add( Dynamic(new _Function_1_1()));

	HX_BEGIN_LOCAL_FUNC3(_Function_1_2,Array< Dynamic >,c2,Array< Dynamic >,transformer,Array< Dynamic >,c1)
	::Either run(Dynamic value){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatcherExtensions.hx",42)
			return ::EitherExtensions_obj::composeRight(c1->__get(0)(value),c2->__get(0)(value),transformer->__get(0),transformer->__get(0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatcherExtensions.hx",41)
	return  Dynamic(new _Function_1_2(c2,transformer,c1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MustMatcherExtensions_obj,_or,return )

Dynamic MustMatcherExtensions_obj::_and( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("MustMatcherExtensions_obj::and")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatcherExtensions.hx",46)
	Array< Dynamic > c2 = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatcherExtensions.hx",46)
	Array< Dynamic > c1 = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Dynamic run(Dynamic r1,Dynamic r2){
{
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &r1,Dynamic &r2){
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("assertion") , (((((((HX_CSTRING("(") + r1->__Field(HX_CSTRING("assertion")).Cast< ::String >())) + HX_CSTRING(") && ("))) + r2->__Field(HX_CSTRING("assertion")).Cast< ::String >())) + HX_CSTRING(")")));
					__result->Add(HX_CSTRING("negation") , (((((((HX_CSTRING("(") + r1->__Field(HX_CSTRING("negation")).Cast< ::String >())) + HX_CSTRING(") || ("))) + r2->__Field(HX_CSTRING("negation")).Cast< ::String >())) + HX_CSTRING(")")));
					return __result;
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatcherExtensions.hx",48)
			return _Function_2_1::Block(r1,r2);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatcherExtensions.hx",47)
	Array< Dynamic > transformer = Array_obj< Dynamic >::__new().Add( Dynamic(new _Function_1_1()));

	HX_BEGIN_LOCAL_FUNC3(_Function_1_2,Array< Dynamic >,c2,Array< Dynamic >,transformer,Array< Dynamic >,c1)
	::Either run(Dynamic value){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatcherExtensions.hx",55)
			return ::EitherExtensions_obj::composeLeft(c1->__get(0)(value),c2->__get(0)(value),transformer->__get(0),transformer->__get(0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/MustMatcherExtensions.hx",54)
	return  Dynamic(new _Function_1_2(c2,transformer,c1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MustMatcherExtensions_obj,_and,return )


MustMatcherExtensions_obj::MustMatcherExtensions_obj()
{
}

void MustMatcherExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MustMatcherExtensions);
	HX_MARK_END_CLASS();
}

Dynamic MustMatcherExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"or") ) { return _or_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"and") ) { return _and_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"negate") ) { return negate_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic MustMatcherExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void MustMatcherExtensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("negate"),
	HX_CSTRING("or"),
	HX_CSTRING("and"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class MustMatcherExtensions_obj::__mClass;

void MustMatcherExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.MustMatcherExtensions"), hx::TCanCast< MustMatcherExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void MustMatcherExtensions_obj::__boot()
{
}

} // end namespace haxe
} // end namespace test
