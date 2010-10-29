#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Function1Arrow
#include <haxe/functional/arrows/Function1Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_TaggedValue
#include <haxe/functional/arrows/TaggedValue.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ComposeThunk
#include <haxe/functional/arrows/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ProgressArrow
#include <haxe/functional/arrows/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_RepeatThunk
#include <haxe/functional/arrows/combinators/RepeatThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_FilterArrow
#include <haxe/functional/arrows/ext/lambda/FilterArrow.h>
#endif
#ifndef INCLUDED_hsl_haxe_Signaler
#include <hsl/haxe/Signaler.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace ext{
namespace lambda{

Void FilterArrow_obj::__construct(Dynamic $t2,Dynamic __o_$t3,Dynamic pos)
{
bool $t3 = __o_$t3.Default(false);
{
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",32)
	Array< bool > inverse = Array_obj< bool >::__new().Add($t3);
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",32)
	Array< Dynamic > filter = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",33)
	this->f = filter->__get(0);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< bool >,inverse,Array< Dynamic >,filter)
	Void run(Dynamic x,::haxe::functional::arrows::ArrowInstance $t1){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",35)
			Array< ::haxe::functional::arrows::ArrowInstance > a = Array_obj< ::haxe::functional::arrows::ArrowInstance >::__new().Add($t1);
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",36)
			Array< Dynamic > it = Array_obj< Dynamic >::__new().Add(x->__Field(HX_CSTRING("iterator"))());
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",37)
			Array< ::List > out = Array_obj< ::List >::__new().Add(::List_obj::__new());

			HX_BEGIN_LOCAL_FUNC4(_Function_2_1,Array< Dynamic >,it,Array< ::List >,out,Array< bool >,inverse,Array< Dynamic >,filter)
			Dynamic run(Dynamic x1){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",39)
					if (it[0]->__Field(HX_CSTRING("hasNext"))()){
						HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",40)
						Dynamic n = it[0]->__Field(HX_CSTRING("next"))();
						HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",41)
						if (inverse->__get(0)){
							HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",42)
							if (!(filter->__get(0)(n))){
								HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",43)
								out[0]->push(n);
							}
						}
						else{
							HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",46)
							if (filter->__get(0)(n)){
								HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",47)
								out[0]->push(n);
							}
						}
						HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",50)
						return ::haxe::functional::arrows::Arrow_obj::doRepeat(out->__get(0));
					}
					else{
						HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",52)
						return ::haxe::functional::arrows::Arrow_obj::doDone(out->__get(0));
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",38)
			Dynamic f =  Dynamic(new _Function_2_1(it,out,inverse,filter));

			HX_BEGIN_LOCAL_FUNC2(_Function_2_2,Array< ::haxe::functional::arrows::ArrowInstance >,a,Array< ::List >,out)
			Void run(Dynamic x1){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",56)
					a[0]->cont(out->__get(0),null(),null(),null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",55)
			Dynamic f1 =  Dynamic(new _Function_2_2(a,out));
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",58)
			::haxe::functional::arrows::Function1Arrow_obj::tuple(f)->repeat()->then(::haxe::functional::arrows::Function1Arrow_obj::lift(f1))->run(x);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",34)
	super::__construct( Dynamic(new _Function_1_1(inverse,filter)));
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterArrow.hx",61)
	this->info = HX_CSTRING("filter");
}
;
	return null();
}

FilterArrow_obj::~FilterArrow_obj() { }

Dynamic FilterArrow_obj::__CreateEmpty() { return  new FilterArrow_obj; }
hx::ObjectPtr< FilterArrow_obj > FilterArrow_obj::__new(Dynamic $t2,Dynamic __o_$t3,Dynamic pos)
{  hx::ObjectPtr< FilterArrow_obj > result = new FilterArrow_obj();
	result->__construct($t2,__o_$t3,pos);
	return result;}

Dynamic FilterArrow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FilterArrow_obj > result = new FilterArrow_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


FilterArrow_obj::FilterArrow_obj()
{
}

void FilterArrow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FilterArrow);
	HX_MARK_MEMBER_NAME(f,"f");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic FilterArrow_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { return f; }
	}
	return super::__Field(inName);
}

Dynamic FilterArrow_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void FilterArrow_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("f"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class FilterArrow_obj::__mClass;

void FilterArrow_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.ext.lambda.FilterArrow"), hx::TCanCast< FilterArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void FilterArrow_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace ext
} // end namespace lambda
