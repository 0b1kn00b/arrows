#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_EventArrow
#include <haxe/functional/arrows/combinators/EventArrow.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{

Void EventArrow_obj::__construct(::String $t3)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/EventArrow.hx",32)
	Array< ::String > trigger = Array_obj< ::String >::__new().Add($t3);
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/EventArrow.hx",33)
	::haxe::functional::arrows::combinators::EventArrow self = this;

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::String >,trigger)
	Void run(Dynamic $t1,::haxe::functional::arrows::ArrowInstance $t2){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/EventArrow.hx",35)
			Array< ::haxe::functional::arrows::ArrowInstance > a = Array_obj< ::haxe::functional::arrows::ArrowInstance >::__new().Add($t2);
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/EventArrow.hx",35)
			Array< Dynamic > target = Array_obj< Dynamic >::__new().Add($t1);
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/EventArrow.hx",36)
			Array< Dynamic > cancel = Array_obj< Dynamic >::__new().Add(null());
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/EventArrow.hx",37)
			Array< Dynamic > handler = Array_obj< Dynamic >::__new().Add(null());

			HX_BEGIN_LOCAL_FUNC3(_Function_2_1,Array< Dynamic >,target,Array< ::String >,trigger,Array< Dynamic >,handler)
			Void run(){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/EventArrow.hx",40)
					target[0]->__Field(HX_CSTRING("removeEventListener"))(trigger->__get(0),handler->__get(0));
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/EventArrow.hx",39)
			cancel[0] =  Dynamic(new _Function_2_1(target,trigger,handler));

			HX_BEGIN_LOCAL_FUNC2(_Function_2_2,Array< Dynamic >,cancel,Array< ::haxe::functional::arrows::ArrowInstance >,a)
			Void run(Dynamic value){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/EventArrow.hx",43)
					cancel->__get(0)();
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/EventArrow.hx",44)
					a[0]->advance(cancel->__get(0));
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/EventArrow.hx",45)
					a[0]->cont(value,null(),null(),null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/EventArrow.hx",42)
			handler[0] =  Dynamic(new _Function_2_2(cancel,a));
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/EventArrow.hx",47)
			a[0]->addCanceller(cancel->__get(0));
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/EventArrow.hx",48)
			target[0]->__Field(HX_CSTRING("addEventListener"))(trigger->__get(0),handler->__get(0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/EventArrow.hx",34)
	super::__construct( Dynamic(new _Function_1_1(trigger)));
}
;
	return null();
}

EventArrow_obj::~EventArrow_obj() { }

Dynamic EventArrow_obj::__CreateEmpty() { return  new EventArrow_obj; }
hx::ObjectPtr< EventArrow_obj > EventArrow_obj::__new(::String $t3)
{  hx::ObjectPtr< EventArrow_obj > result = new EventArrow_obj();
	result->__construct($t3);
	return result;}

Dynamic EventArrow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventArrow_obj > result = new EventArrow_obj();
	result->__construct(inArgs[0]);
	return result;}


EventArrow_obj::EventArrow_obj()
{
}

void EventArrow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventArrow);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic EventArrow_obj::__Field(const ::String &inName)
{
	return super::__Field(inName);
}

Dynamic EventArrow_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void EventArrow_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class EventArrow_obj::__mClass;

void EventArrow_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.EventArrow"), hx::TCanCast< EventArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void EventArrow_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
