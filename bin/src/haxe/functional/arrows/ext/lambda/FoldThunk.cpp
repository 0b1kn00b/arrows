#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_FoldArrow
#include <haxe/functional/arrows/ext/lambda/FoldArrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_FoldThunk
#include <haxe/functional/arrows/ext/lambda/FoldThunk.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace ext{
namespace lambda{

Void FoldThunk_obj::__construct(Dynamic $t1,Dynamic $t2,Dynamic $t3)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FoldThunk.hx",27)
	Array< Dynamic > fold = Array_obj< Dynamic >::__new().Add($t3);
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FoldThunk.hx",27)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FoldThunk.hx",27)
	Array< Dynamic > first = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC3(_Function_1_1,Array< Dynamic >,fold,Array< Dynamic >,f,Array< Dynamic >,first)
	Void run(Dynamic x,::haxe::functional::arrows::ArrowInstance a){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FoldThunk.hx",30)
			a->cont(x,f->__get(0),::haxe::functional::arrows::ext::lambda::FoldArrow_obj::__new(fold->__get(0),first->__get(0)),null());
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FoldThunk.hx",28)
	super::__construct( Dynamic(new _Function_1_1(fold,f,first)));
}
;
	return null();
}

FoldThunk_obj::~FoldThunk_obj() { }

Dynamic FoldThunk_obj::__CreateEmpty() { return  new FoldThunk_obj; }
hx::ObjectPtr< FoldThunk_obj > FoldThunk_obj::__new(Dynamic $t1,Dynamic $t2,Dynamic $t3)
{  hx::ObjectPtr< FoldThunk_obj > result = new FoldThunk_obj();
	result->__construct($t1,$t2,$t3);
	return result;}

Dynamic FoldThunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FoldThunk_obj > result = new FoldThunk_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


FoldThunk_obj::FoldThunk_obj()
{
}

void FoldThunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FoldThunk);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic FoldThunk_obj::__Field(const ::String &inName)
{
	return super::__Field(inName);
}

Dynamic FoldThunk_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void FoldThunk_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class FoldThunk_obj::__mClass;

void FoldThunk_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.ext.lambda.FoldThunk"), hx::TCanCast< FoldThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void FoldThunk_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace ext
} // end namespace lambda
