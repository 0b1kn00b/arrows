#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_IterArrow
#include <haxe/functional/arrows/ext/lambda/IterArrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_IterThunk
#include <haxe/functional/arrows/ext/lambda/IterThunk.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace ext{
namespace lambda{

Void IterThunk_obj::__construct(Dynamic $t1,Dynamic $t2)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/IterThunk.hx",28)
	Array< Dynamic > iter = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/IterThunk.hx",28)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/IterThunk.hx",29)
	::haxe::functional::arrows::ext::lambda::IterThunk self = this;

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f,Array< Dynamic >,iter)
	Void run(Dynamic x,::haxe::functional::arrows::ArrowInstance a){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/IterThunk.hx",33)
			a->cont(x,f->__get(0),::haxe::functional::arrows::ext::lambda::IterArrow_obj::__new(iter->__get(0)),null());
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/IterThunk.hx",30)
	super::__construct( Dynamic(new _Function_1_1(f,iter)));
}
;
	return null();
}

IterThunk_obj::~IterThunk_obj() { }

Dynamic IterThunk_obj::__CreateEmpty() { return  new IterThunk_obj; }
hx::ObjectPtr< IterThunk_obj > IterThunk_obj::__new(Dynamic $t1,Dynamic $t2)
{  hx::ObjectPtr< IterThunk_obj > result = new IterThunk_obj();
	result->__construct($t1,$t2);
	return result;}

Dynamic IterThunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IterThunk_obj > result = new IterThunk_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


IterThunk_obj::IterThunk_obj()
{
}

void IterThunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IterThunk);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic IterThunk_obj::__Field(const ::String &inName)
{
	return super::__Field(inName);
}

Dynamic IterThunk_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void IterThunk_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class IterThunk_obj::__mClass;

void IterThunk_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.ext.lambda.IterThunk"), hx::TCanCast< IterThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void IterThunk_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace ext
} // end namespace lambda
