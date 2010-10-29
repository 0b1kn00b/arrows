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
#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_IterArrow
#include <haxe/functional/arrows/ext/lambda/IterArrow.h>
#endif
#ifndef INCLUDED_hsl_haxe_Signaler
#include <hsl/haxe/Signaler.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace ext{
namespace lambda{

Void IterArrow_obj::__construct(Dynamic $t2)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/IterArrow.hx",31)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/IterArrow.hx",32)
	::haxe::functional::arrows::ext::lambda::IterArrow self = this;

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Void run(Dynamic x,::haxe::functional::arrows::ArrowInstance $t1){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/IterArrow.hx",34)
			Array< ::haxe::functional::arrows::ArrowInstance > a = Array_obj< ::haxe::functional::arrows::ArrowInstance >::__new().Add($t1);
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/IterArrow.hx",35)
			Array< Dynamic > it = Array_obj< Dynamic >::__new().Add(x->__Field(HX_CSTRING("iterator"))());

			HX_BEGIN_LOCAL_FUNC1(_Function_2_1,Array< ::haxe::functional::arrows::ArrowInstance >,a)
			Void run(Dynamic x1){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/IterArrow.hx",38)
					a[0]->cont(x1,null(),null(),null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/IterArrow.hx",37)
			Dynamic f0 =  Dynamic(new _Function_2_1(a));

			HX_BEGIN_LOCAL_FUNC2(_Function_2_2,Array< Dynamic >,it,Array< Dynamic >,f)
			Dynamic run(Dynamic x1){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/IterArrow.hx",42)
					if (it[0]->__Field(HX_CSTRING("hasNext"))()){
						HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/IterArrow.hx",43)
						f->__get(0)(it[0]->__Field(HX_CSTRING("next"))());
						HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/IterArrow.hx",44)
						return ::haxe::functional::arrows::Arrow_obj::doRepeat(x1);
					}
					else{
						HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/IterArrow.hx",46)
						return ::haxe::functional::arrows::Arrow_obj::doDone(x1);
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/IterArrow.hx",41)
			Dynamic f1 =  Dynamic(new _Function_2_2(it,f));
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/IterArrow.hx",49)
			::haxe::functional::arrows::Function1Arrow_obj::tuple(f1)->repeat()->then(::haxe::functional::arrows::Function1Arrow_obj::lift(f0))->run(x);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/IterArrow.hx",33)
	super::__construct( Dynamic(new _Function_1_1(f)));
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/IterArrow.hx",52)
	this->info = HX_CSTRING("iter");
}
;
	return null();
}

IterArrow_obj::~IterArrow_obj() { }

Dynamic IterArrow_obj::__CreateEmpty() { return  new IterArrow_obj; }
hx::ObjectPtr< IterArrow_obj > IterArrow_obj::__new(Dynamic $t2)
{  hx::ObjectPtr< IterArrow_obj > result = new IterArrow_obj();
	result->__construct($t2);
	return result;}

Dynamic IterArrow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IterArrow_obj > result = new IterArrow_obj();
	result->__construct(inArgs[0]);
	return result;}


IterArrow_obj::IterArrow_obj()
{
}

void IterArrow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IterArrow);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic IterArrow_obj::__Field(const ::String &inName)
{
	return super::__Field(inName);
}

Dynamic IterArrow_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void IterArrow_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class IterArrow_obj::__mClass;

void IterArrow_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.ext.lambda.IterArrow"), hx::TCanCast< IterArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void IterArrow_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace ext
} // end namespace lambda
