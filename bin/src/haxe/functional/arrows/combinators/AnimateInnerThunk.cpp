#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_TaggedValue
#include <haxe/functional/arrows/TaggedValue.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_AnimateInnerThunk
#include <haxe/functional/arrows/combinators/AnimateInnerThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_Loop
#include <haxe/functional/arrows/combinators/Loop.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{

Void AnimateInnerThunk_obj::__construct(::haxe::functional::arrows::Arrow $t3,int $t4)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",49)
	Array< int > ms = Array_obj< int >::__new().Add($t4);
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",49)
	Array< ::haxe::functional::arrows::Arrow > f = Array_obj< ::haxe::functional::arrows::Arrow >::__new().Add($t3);
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",50)
	Array< ::haxe::functional::arrows::combinators::AnimateInnerThunk > self = Array_obj< ::haxe::functional::arrows::combinators::AnimateInnerThunk >::__new().Add(this);

	HX_BEGIN_LOCAL_FUNC3(_Function_1_1,Array< int >,ms,Array< ::haxe::functional::arrows::Arrow >,f,Array< ::haxe::functional::arrows::combinators::AnimateInnerThunk >,self)
	Void run(::haxe::functional::arrows::TaggedValue $t1,::haxe::functional::arrows::ArrowInstance $t2){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",52)
			Array< ::haxe::functional::arrows::ArrowInstance > a = Array_obj< ::haxe::functional::arrows::ArrowInstance >::__new().Add($t2);
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",52)
			Array< ::haxe::functional::arrows::TaggedValue > x = Array_obj< ::haxe::functional::arrows::TaggedValue >::__new().Add($t1);
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",53)
			Array< Dynamic > cancel = Array_obj< Dynamic >::__new().Add(null());
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",54)
			Array< Dynamic > call = Array_obj< Dynamic >::__new().Add(null());
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",55)
			if ((x[0]->__Field(HX_CSTRING("tag")) == ::haxe::functional::arrows::combinators::Loop_obj::repeat)){

				HX_BEGIN_LOCAL_FUNC5(_Function_3_1,Array< Dynamic >,cancel,Array< ::haxe::functional::arrows::ArrowInstance >,a,Array< ::haxe::functional::arrows::TaggedValue >,x,Array< ::haxe::functional::arrows::Arrow >,f,Array< ::haxe::functional::arrows::combinators::AnimateInnerThunk >,self)
				Void run(){
{
						__SAFE_POINT
						HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",58)
						a[0]->advance(cancel->__get(0));
						HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",59)
						a[0]->cont(x[0]->__Field(HX_CSTRING("value")),f->__get(0),self->__get(0),null());
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",56)
				call[0] =  Dynamic(new _Function_3_1(cancel,a,x,f,self));

				HX_BEGIN_LOCAL_FUNC1(_Function_3_2,Array< Dynamic >,call)
				Void run(){
{

						HX_BEGIN_LOCAL_FUNC0(_Function_4_1)
						Void run(){
{
							}
							return null();
						}
						HX_END_LOCAL_FUNC0((void))

						HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",63)
						call[0] =  Dynamic(new _Function_4_1());
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",61)
				cancel[0] =  Dynamic(new _Function_3_2(call));
				HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",68)
				::haxe::Timer_obj::delay(call->__get(0),::Math_obj::round(ms->__get(0)));
			}
			else{
				HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",70)
				if ((x[0]->__Field(HX_CSTRING("tag")) == ::haxe::functional::arrows::combinators::Loop_obj::done)){

					HX_BEGIN_LOCAL_FUNC0(_Function_4_1)
					Void run(){
{
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",71)
					call[0] =  Dynamic(new _Function_4_1());
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",72)
					a[0]->advance(cancel->__get(0));
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",73)
					a[0]->cont(x[0]->__Field(HX_CSTRING("value")),null(),null(),null());
				}
				else{
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",74)
					hx::Throw (HX_CSTRING("repeat or done"));
				}
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",51)
	super::__construct( Dynamic(new _Function_1_1(ms,f,self)));
}
;
	return null();
}

AnimateInnerThunk_obj::~AnimateInnerThunk_obj() { }

Dynamic AnimateInnerThunk_obj::__CreateEmpty() { return  new AnimateInnerThunk_obj; }
hx::ObjectPtr< AnimateInnerThunk_obj > AnimateInnerThunk_obj::__new(::haxe::functional::arrows::Arrow $t3,int $t4)
{  hx::ObjectPtr< AnimateInnerThunk_obj > result = new AnimateInnerThunk_obj();
	result->__construct($t3,$t4);
	return result;}

Dynamic AnimateInnerThunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimateInnerThunk_obj > result = new AnimateInnerThunk_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


AnimateInnerThunk_obj::AnimateInnerThunk_obj()
{
}

void AnimateInnerThunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimateInnerThunk);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic AnimateInnerThunk_obj::__Field(const ::String &inName)
{
	return super::__Field(inName);
}

Dynamic AnimateInnerThunk_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void AnimateInnerThunk_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class AnimateInnerThunk_obj::__mClass;

void AnimateInnerThunk_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.AnimateInnerThunk"), hx::TCanCast< AnimateInnerThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void AnimateInnerThunk_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
