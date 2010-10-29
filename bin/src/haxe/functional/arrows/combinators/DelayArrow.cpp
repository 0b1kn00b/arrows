#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_DelayArrow
#include <haxe/functional/arrows/combinators/DelayArrow.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{

Void DelayArrow_obj::__construct(int milliseconds)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/DelayArrow.hx",41)
	Array< ::haxe::functional::arrows::combinators::DelayArrow > self = Array_obj< ::haxe::functional::arrows::combinators::DelayArrow >::__new().Add(this);
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/DelayArrow.hx",42)
	this->ms = milliseconds;

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::haxe::functional::arrows::combinators::DelayArrow >,self)
	Void run(Dynamic x,::haxe::functional::arrows::ArrowInstance a){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/DelayArrow.hx",45)
			Array< bool > do_continue = Array_obj< bool >::__new().Add(true);

			HX_BEGIN_LOCAL_FUNC1(_Function_2_1,Array< bool >,do_continue)
			Void run(){
{
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/DelayArrow.hx",48)
					do_continue[0] = false;
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/DelayArrow.hx",46)
			self[0]->cancel =  Dynamic(new _Function_2_1(do_continue));
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/DelayArrow.hx",50)
			a->addCanceller(self[0]->cancel_dyn());
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/DelayArrow.hx",43)
	super::__construct( Dynamic(new _Function_1_1(self)));
}
;
	return null();
}

DelayArrow_obj::~DelayArrow_obj() { }

Dynamic DelayArrow_obj::__CreateEmpty() { return  new DelayArrow_obj; }
hx::ObjectPtr< DelayArrow_obj > DelayArrow_obj::__new(int milliseconds)
{  hx::ObjectPtr< DelayArrow_obj > result = new DelayArrow_obj();
	result->__construct(milliseconds);
	return result;}

Dynamic DelayArrow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DelayArrow_obj > result = new DelayArrow_obj();
	result->__construct(inArgs[0]);
	return result;}


DelayArrow_obj::DelayArrow_obj()
{
}

void DelayArrow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DelayArrow);
	HX_MARK_MEMBER_NAME(ms,"ms");
	HX_MARK_MEMBER_NAME(cancel,"cancel");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic DelayArrow_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ms") ) { return ms; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel; }
	}
	return super::__Field(inName);
}

Dynamic DelayArrow_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ms") ) { ms=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { cancel=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void DelayArrow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ms"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("ms"),
	HX_CSTRING("cancel"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class DelayArrow_obj::__mClass;

void DelayArrow_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.DelayArrow"), hx::TCanCast< DelayArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void DelayArrow_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
