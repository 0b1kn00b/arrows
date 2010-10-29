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
#ifndef INCLUDED_haxe_functional_arrows_combinators_ComposeThunk
#include <haxe/functional/arrows/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_OrThunk
#include <haxe/functional/arrows/combinators/OrThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ProgressArrow
#include <haxe/functional/arrows/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_SignalArrow
#include <haxe/functional/arrows/combinators/SignalArrow.h>
#endif
#ifndef INCLUDED_hsl_haxe_Signaler
#include <hsl/haxe/Signaler.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{

Void OrThunk_obj::__construct(::haxe::functional::arrows::Arrow $t2,::haxe::functional::arrows::Arrow $t3)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",42)
	Array< ::haxe::functional::arrows::Arrow > g = Array_obj< ::haxe::functional::arrows::Arrow >::__new().Add($t3);
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",42)
	Array< ::haxe::functional::arrows::Arrow > f = Array_obj< ::haxe::functional::arrows::Arrow >::__new().Add($t2);
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",43)
	::haxe::functional::arrows::combinators::OrThunk self = this;

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< ::haxe::functional::arrows::Arrow >,f,Array< ::haxe::functional::arrows::Arrow >,g)
	Void run(Dynamic x,::haxe::functional::arrows::ArrowInstance $t1){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",45)
			Array< ::haxe::functional::arrows::ArrowInstance > a = Array_obj< ::haxe::functional::arrows::ArrowInstance >::__new().Add($t1);
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",46)
			Array< ::haxe::functional::arrows::combinators::ProgressArrow > a0 = Array_obj< ::haxe::functional::arrows::combinators::ProgressArrow >::__new().Add(null());
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",47)
			Array< ::haxe::functional::arrows::combinators::ProgressArrow > a1 = Array_obj< ::haxe::functional::arrows::combinators::ProgressArrow >::__new().Add(null());
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",48)
			Dynamic b0 = null();
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",49)
			Array< Dynamic > b1 = Array_obj< Dynamic >::__new().Add(null());

			HX_BEGIN_LOCAL_FUNC2(_Function_2_1,Array< ::haxe::functional::arrows::combinators::ProgressArrow >,a0,Array< ::haxe::functional::arrows::combinators::ProgressArrow >,a1)
			Void run(){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",52)
					a0[0]->cancel();
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",53)
					a1[0]->cancel();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",51)
			Array< Dynamic > cancel = Array_obj< Dynamic >::__new().Add( Dynamic(new _Function_2_1(a0,a1)));
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",55)
			a[0]->addCanceller(cancel->__get(0));

			HX_BEGIN_LOCAL_FUNC4(_Function_2_2,Array< ::haxe::functional::arrows::combinators::ProgressArrow >,a1,Array< Dynamic >,cancel,Array< ::haxe::functional::arrows::ArrowInstance >,a,Array< Dynamic >,b1)
			Dynamic run(Dynamic y){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",59)
					if ((a1[0]->cancel_dyn() != null())){
						HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",59)
						a1[0]->cancel();
					}
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",60)
					if ((bool((b1->__get(0) != null())) && bool((b1[0]->__Field(HX_CSTRING("cancel")) != null())))){
						HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",60)
						b1[0]->__Field(HX_CSTRING("cancel"))();
					}
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",62)
					a[0]->advance(cancel->__get(0));
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",63)
					a[0]->cont(y,null(),null(),null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",57)
			a0[0] = f[0]->then(::haxe::functional::arrows::Function1Arrow_obj::tuple( Dynamic(new _Function_2_2(a1,cancel,a,b1))))->run(x);

			HX_BEGIN_LOCAL_FUNC2(_Function_2_3,Array< ::haxe::functional::arrows::combinators::ProgressArrow >,a1,Array< Dynamic >,b1)
			Void run(Dynamic x1){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",68)
					if ((a1[0]->cancel_dyn() != null())){
						HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",68)
						a1[0]->cancel();
					}
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",69)
					if ((bool((b1->__get(0) != null())) && bool((b1[0]->__Field(HX_CSTRING("cancel")) != null())))){
						HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",69)
						b1[0]->__Field(HX_CSTRING("cancel"))();
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",66)
			Array< ::haxe::functional::arrows::combinators::ProgressArrow > b01 = Array_obj< ::haxe::functional::arrows::combinators::ProgressArrow >::__new().Add(a0[0]->signalA()->then(::haxe::functional::arrows::Function1Arrow_obj::lift( Dynamic(new _Function_2_3(a1,b1))))->run(a[0]->progress));

			HX_BEGIN_LOCAL_FUNC4(_Function_2_4,Array< Dynamic >,cancel,Array< ::haxe::functional::arrows::combinators::ProgressArrow >,a0,Array< ::haxe::functional::arrows::ArrowInstance >,a,Array< ::haxe::functional::arrows::combinators::ProgressArrow >,b01)
			Void run(Dynamic y){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",75)
					if ((a0[0]->cancel_dyn() != null())){
						HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",75)
						a0[0]->cancel();
					}
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",76)
					if ((bool((b01->__get(0) != null())) && bool((b01[0]->cancel_dyn() != null())))){
						HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",76)
						b01[0]->cancel();
					}
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",78)
					a[0]->advance(cancel->__get(0));
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",79)
					a[0]->cont(y,null(),null(),null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",73)
			a1[0] = g[0]->then(::haxe::functional::arrows::Function1Arrow_obj::tuple( Dynamic(new _Function_2_4(cancel,a0,a,b01))))->run(x);

			HX_BEGIN_LOCAL_FUNC2(_Function_2_5,Array< ::haxe::functional::arrows::combinators::ProgressArrow >,a0,Array< ::haxe::functional::arrows::combinators::ProgressArrow >,b01)
			Void run(Dynamic x1){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",85)
					if ((a0[0]->cancel_dyn() != null())){
						HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",85)
						a0[0]->cancel();
					}
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",86)
					if ((bool((b01->__get(0) != null())) && bool((b01[0]->cancel_dyn() != null())))){
						HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",86)
						b01[0]->cancel();
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",83)
			::haxe::functional::arrows::combinators::ProgressArrow b11 = a1[0]->signalA()->then(::haxe::functional::arrows::Function1Arrow_obj::lift( Dynamic(new _Function_2_5(a0,b01))))->run(a[0]->progress);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/OrThunk.hx",44)
	super::__construct( Dynamic(new _Function_1_1(f,g)));
}
;
	return null();
}

OrThunk_obj::~OrThunk_obj() { }

Dynamic OrThunk_obj::__CreateEmpty() { return  new OrThunk_obj; }
hx::ObjectPtr< OrThunk_obj > OrThunk_obj::__new(::haxe::functional::arrows::Arrow $t2,::haxe::functional::arrows::Arrow $t3)
{  hx::ObjectPtr< OrThunk_obj > result = new OrThunk_obj();
	result->__construct($t2,$t3);
	return result;}

Dynamic OrThunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OrThunk_obj > result = new OrThunk_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


OrThunk_obj::OrThunk_obj()
{
}

void OrThunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OrThunk);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic OrThunk_obj::__Field(const ::String &inName)
{
	return super::__Field(inName);
}

Dynamic OrThunk_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void OrThunk_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class OrThunk_obj::__mClass;

void OrThunk_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.OrThunk"), hx::TCanCast< OrThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void OrThunk_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
