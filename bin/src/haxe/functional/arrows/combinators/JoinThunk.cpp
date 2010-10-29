#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ComposeThunk
#include <haxe/functional/arrows/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_FanoutThunk
#include <haxe/functional/arrows/combinators/FanoutThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_JoinThunk
#include <haxe/functional/arrows/combinators/JoinThunk.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{

Void JoinThunk_obj::__construct(::haxe::functional::arrows::Arrow f,::haxe::functional::arrows::Arrow g)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/JoinThunk.hx",29)
	super::__construct(f,::haxe::functional::arrows::Arrow_obj::returnA()->fanout(g));
}
;
	return null();
}

JoinThunk_obj::~JoinThunk_obj() { }

Dynamic JoinThunk_obj::__CreateEmpty() { return  new JoinThunk_obj; }
hx::ObjectPtr< JoinThunk_obj > JoinThunk_obj::__new(::haxe::functional::arrows::Arrow f,::haxe::functional::arrows::Arrow g)
{  hx::ObjectPtr< JoinThunk_obj > result = new JoinThunk_obj();
	result->__construct(f,g);
	return result;}

Dynamic JoinThunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JoinThunk_obj > result = new JoinThunk_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String JoinThunk_obj::getName( ){
	HX_SOURCE_PUSH("JoinThunk_obj::getName")
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/JoinThunk.hx",32)
	return HX_CSTRING("JoinThunk");
}


HX_DEFINE_DYNAMIC_FUNC0(JoinThunk_obj,getName,return )


JoinThunk_obj::JoinThunk_obj()
{
}

void JoinThunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JoinThunk);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic JoinThunk_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic JoinThunk_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void JoinThunk_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("getName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class JoinThunk_obj::__mClass;

void JoinThunk_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.JoinThunk"), hx::TCanCast< JoinThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void JoinThunk_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
