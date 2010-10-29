#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_SignalArrow
#include <haxe/functional/arrows/combinators/SignalArrow.h>
#endif
#ifndef INCLUDED_hsl_haxe_Bond
#include <hsl/haxe/Bond.h>
#endif
#ifndef INCLUDED_hsl_haxe_Signaler
#include <hsl/haxe/Signaler.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{

Void SignalArrow_obj::__construct()
{
{

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Void run(::hsl::haxe::Signaler $t1,::haxe::functional::arrows::ArrowInstance $t2){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/SignalArrow.hx",20)
			Array< ::haxe::functional::arrows::ArrowInstance > a = Array_obj< ::haxe::functional::arrows::ArrowInstance >::__new().Add($t2);
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/SignalArrow.hx",20)
			Array< ::hsl::haxe::Signaler > x = Array_obj< ::hsl::haxe::Signaler >::__new().Add($t1);
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/SignalArrow.hx",21)
			Array< Dynamic > handler = Array_obj< Dynamic >::__new().Add(null());
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/SignalArrow.hx",22)
			Array< Dynamic > cancel = Array_obj< Dynamic >::__new().Add(null());

			HX_BEGIN_LOCAL_FUNC2(_Function_2_1,Array< ::hsl::haxe::Signaler >,x,Array< Dynamic >,handler)
			Void run(){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/SignalArrow.hx",25)
					x[0]->unbind(handler->__get(0));
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/SignalArrow.hx",24)
			cancel[0] =  Dynamic(new _Function_2_1(x,handler));

			HX_BEGIN_LOCAL_FUNC2(_Function_2_2,Array< Dynamic >,cancel,Array< ::haxe::functional::arrows::ArrowInstance >,a)
			Void run(Dynamic v){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/SignalArrow.hx",28)
					cancel->__get(0)();
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/SignalArrow.hx",29)
					a[0]->advance(cancel->__get(0));
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/SignalArrow.hx",30)
					a[0]->cont(v,null(),null(),null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/SignalArrow.hx",27)
			handler[0] =  Dynamic(new _Function_2_2(cancel,a));
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/SignalArrow.hx",32)
			a[0]->addCanceller(cancel->__get(0));
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/SignalArrow.hx",33)
			x[0]->bind(handler->__get(0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/SignalArrow.hx",19)
	super::__construct( Dynamic(new _Function_1_1()));
}
;
	return null();
}

SignalArrow_obj::~SignalArrow_obj() { }

Dynamic SignalArrow_obj::__CreateEmpty() { return  new SignalArrow_obj; }
hx::ObjectPtr< SignalArrow_obj > SignalArrow_obj::__new()
{  hx::ObjectPtr< SignalArrow_obj > result = new SignalArrow_obj();
	result->__construct();
	return result;}

Dynamic SignalArrow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SignalArrow_obj > result = new SignalArrow_obj();
	result->__construct();
	return result;}


SignalArrow_obj::SignalArrow_obj()
{
}

void SignalArrow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SignalArrow);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic SignalArrow_obj::__Field(const ::String &inName)
{
	return super::__Field(inName);
}

Dynamic SignalArrow_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void SignalArrow_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class SignalArrow_obj::__mClass;

void SignalArrow_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.SignalArrow"), hx::TCanCast< SignalArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void SignalArrow_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
