#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_Predicate1Extensions
#include <haxe/functional/Predicate1Extensions.h>
#endif
namespace haxe{
namespace functional{

Void Predicate1Extensions_obj::__construct()
{
	return null();
}

Predicate1Extensions_obj::~Predicate1Extensions_obj() { }

Dynamic Predicate1Extensions_obj::__CreateEmpty() { return  new Predicate1Extensions_obj; }
hx::ObjectPtr< Predicate1Extensions_obj > Predicate1Extensions_obj::__new()
{  hx::ObjectPtr< Predicate1Extensions_obj > result = new Predicate1Extensions_obj();
	result->__construct();
	return result;}

Dynamic Predicate1Extensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Predicate1Extensions_obj > result = new Predicate1Extensions_obj();
	result->__construct();
	return result;}

Dynamic Predicate1Extensions_obj::_and( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Predicate1Extensions_obj::and")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",26)
	Array< Dynamic > p2 = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",26)
	Array< Dynamic > p1 = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,p1,Array< Dynamic >,p2)
	bool run(Dynamic value){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",28)
			return (bool(p1->__get(0)(value)) && bool(p2->__get(0)(value)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",27)
	return  Dynamic(new _Function_1_1(p1,p2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Predicate1Extensions_obj,_and,return )

Dynamic Predicate1Extensions_obj::andAll( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Predicate1Extensions_obj::andAll")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",32)
	Array< Dynamic > ps = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",32)
	Array< Dynamic > p1 = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,p1,Array< Dynamic >,ps)
	bool run(Dynamic value){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",34)
			bool result = p1->__get(0)(value);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",36)
			for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(ps[0]->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
				Dynamic p = __it->next();
				{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",37)
					if (!(result))
						break;
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",39)
					result = (bool(result) && bool(p(value)));
				}
;
				__SAFE_POINT
			}
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",42)
			return result;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",33)
	return  Dynamic(new _Function_1_1(p1,ps));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Predicate1Extensions_obj,andAll,return )

Dynamic Predicate1Extensions_obj::_or( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Predicate1Extensions_obj::or")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",46)
	Array< Dynamic > p2 = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",46)
	Array< Dynamic > p1 = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,p1,Array< Dynamic >,p2)
	bool run(Dynamic value){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",48)
			return (bool(p1->__get(0)(value)) || bool(p2->__get(0)(value)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",47)
	return  Dynamic(new _Function_1_1(p1,p2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Predicate1Extensions_obj,_or,return )

Dynamic Predicate1Extensions_obj::orAny( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Predicate1Extensions_obj::orAny")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",52)
	Array< Dynamic > ps = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",52)
	Array< Dynamic > p1 = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,p1,Array< Dynamic >,ps)
	bool run(Dynamic value){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",54)
			bool result = p1->__get(0)(value);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",56)
			for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(ps[0]->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
				Dynamic p = __it->next();
				{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",57)
					if (result)
						break;
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",59)
					result = (bool(result) || bool(p(value)));
				}
;
				__SAFE_POINT
			}
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",62)
			return result;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",53)
	return  Dynamic(new _Function_1_1(p1,ps));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Predicate1Extensions_obj,orAny,return )

Dynamic Predicate1Extensions_obj::negate( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Predicate1Extensions_obj::negate")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",66)
	Array< Dynamic > p = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,p)
	bool run(Dynamic value){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",68)
			return !(p->__get(0)(value));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/functional/PredicateExtensions.hx",67)
	return  Dynamic(new _Function_1_1(p));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Predicate1Extensions_obj,negate,return )


Predicate1Extensions_obj::Predicate1Extensions_obj()
{
}

void Predicate1Extensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Predicate1Extensions);
	HX_MARK_END_CLASS();
}

Dynamic Predicate1Extensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"or") ) { return _or_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"and") ) { return _and_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"orAny") ) { return orAny_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"andAll") ) { return andAll_dyn(); }
		if (HX_FIELD_EQ(inName,"negate") ) { return negate_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Predicate1Extensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Predicate1Extensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("and"),
	HX_CSTRING("andAll"),
	HX_CSTRING("or"),
	HX_CSTRING("orAny"),
	HX_CSTRING("negate"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Predicate1Extensions_obj::__mClass;

void Predicate1Extensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.Predicate1Extensions"), hx::TCanCast< Predicate1Extensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Predicate1Extensions_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
