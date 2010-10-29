#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_FoldArrow
#include <haxe/functional/arrows/ext/lambda/FoldArrow.h>
#endif
#ifndef INCLUDED_hsl_haxe_Signaler
#include <hsl/haxe/Signaler.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace ext{
namespace lambda{

Void FoldArrow_obj::__construct(Dynamic $t2,Dynamic $t3)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FoldArrow.hx",30)
	Array< Dynamic > first = Array_obj< Dynamic >::__new().Add($t3);
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FoldArrow.hx",30)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t2);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f,Array< Dynamic >,first)
	Void run(Dynamic x,::haxe::functional::arrows::ArrowInstance $t1){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FoldArrow.hx",32)
			Array< ::haxe::functional::arrows::ArrowInstance > a = Array_obj< ::haxe::functional::arrows::ArrowInstance >::__new().Add($t1);
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FoldArrow.hx",33)
			Array< Dynamic > it = Array_obj< Dynamic >::__new().Add(x->__Field(HX_CSTRING("iterator"))());

			HX_BEGIN_LOCAL_FUNC2(_Function_2_1,Array< Dynamic >,it,Array< Dynamic >,f)
			::haxe::functional::arrows::TaggedValue run(Dynamic first1){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FoldArrow.hx",35)
					if (it[0]->__Field(HX_CSTRING("hasNext"))()){
						HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FoldArrow.hx",36)
						Dynamic n = it[0]->__Field(HX_CSTRING("next"))();
						HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FoldArrow.hx",37)
						first1 = f->__get(0)(n,first1);
						HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FoldArrow.hx",38)
						return ::haxe::functional::arrows::Arrow_obj::doRepeat(first1);
					}
					else{
						HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FoldArrow.hx",40)
						return ::haxe::functional::arrows::Arrow_obj::doDone(first1);
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FoldArrow.hx",34)
			Dynamic f0 =  Dynamic(new _Function_2_1(it,f));

			HX_BEGIN_LOCAL_FUNC1(_Function_2_2,Array< ::haxe::functional::arrows::ArrowInstance >,a)
			Void run(Dynamic x1){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FoldArrow.hx",44)
					a[0]->cont(x1,null(),null(),null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FoldArrow.hx",43)
			Dynamic f1 =  Dynamic(new _Function_2_2(a));
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FoldArrow.hx",46)
			::haxe::functional::arrows::Function1Arrow_obj::lift(f0)->repeat()->then(::haxe::functional::arrows::Function1Arrow_obj::lift(f1))->run(first->__get(0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/FoldArrow.hx",31)
	super::__construct( Dynamic(new _Function_1_1(f,first)));
}
;
	return null();
}

FoldArrow_obj::~FoldArrow_obj() { }

Dynamic FoldArrow_obj::__CreateEmpty() { return  new FoldArrow_obj; }
hx::ObjectPtr< FoldArrow_obj > FoldArrow_obj::__new(Dynamic $t2,Dynamic $t3)
{  hx::ObjectPtr< FoldArrow_obj > result = new FoldArrow_obj();
	result->__construct($t2,$t3);
	return result;}

Dynamic FoldArrow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FoldArrow_obj > result = new FoldArrow_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


FoldArrow_obj::FoldArrow_obj()
{
}

void FoldArrow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FoldArrow);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic FoldArrow_obj::__Field(const ::String &inName)
{
	return super::__Field(inName);
}

Dynamic FoldArrow_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void FoldArrow_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class FoldArrow_obj::__mClass;

void FoldArrow_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.ext.lambda.FoldArrow"), hx::TCanCast< FoldArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void FoldArrow_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace ext
} // end namespace lambda
