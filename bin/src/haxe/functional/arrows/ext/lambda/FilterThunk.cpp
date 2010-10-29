#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_FilterArrow
#include <haxe/functional/arrows/ext/lambda/FilterArrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_FilterThunk
#include <haxe/functional/arrows/ext/lambda/FilterThunk.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace ext{
namespace lambda{

Void FilterThunk_obj::__construct(Dynamic $t1,Dynamic $t2,Dynamic $t3)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterThunk.hx",28)
	Array< Dynamic > inverse = Array_obj< Dynamic >::__new().Add($t3);
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterThunk.hx",28)
	Array< Dynamic > filter = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterThunk.hx",28)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC3(_Function_1_1,Array< Dynamic >,filter,Array< Dynamic >,inverse,Array< Dynamic >,f)
	Void run(Dynamic x,::haxe::functional::arrows::ArrowInstance a){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterThunk.hx",32)
			a->cont(x,f->__get(0),::haxe::functional::arrows::ext::lambda::FilterArrow_obj::__new(filter->__get(0),inverse->__get(0),hx::SourceInfo(HX_CSTRING("FilterThunk.hx"),32,HX_CSTRING("haxe.functional.arrows.ext.lambda.FilterThunk"),HX_CSTRING("new"))),null());
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FilterThunk.hx",29)
	super::__construct( Dynamic(new _Function_1_1(filter,inverse,f)));
}
;
	return null();
}

FilterThunk_obj::~FilterThunk_obj() { }

Dynamic FilterThunk_obj::__CreateEmpty() { return  new FilterThunk_obj; }
hx::ObjectPtr< FilterThunk_obj > FilterThunk_obj::__new(Dynamic $t1,Dynamic $t2,Dynamic $t3)
{  hx::ObjectPtr< FilterThunk_obj > result = new FilterThunk_obj();
	result->__construct($t1,$t2,$t3);
	return result;}

Dynamic FilterThunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FilterThunk_obj > result = new FilterThunk_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


FilterThunk_obj::FilterThunk_obj()
{
}

void FilterThunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FilterThunk);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic FilterThunk_obj::__Field(const ::String &inName)
{
	return super::__Field(inName);
}

Dynamic FilterThunk_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void FilterThunk_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class FilterThunk_obj::__mClass;

void FilterThunk_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.ext.lambda.FilterThunk"), hx::TCanCast< FilterThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void FilterThunk_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace ext
} // end namespace lambda
