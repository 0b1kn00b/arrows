#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ProductThunk
#include <haxe/functional/arrows/combinators/ProductThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_SecondThunk
#include <haxe/functional/arrows/combinators/SecondThunk.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{

Void SecondThunk_obj::__construct(::haxe::functional::arrows::Arrow g)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/SecondThunk.hx",28)
	super::__construct(::haxe::functional::arrows::Arrow_obj::returnA(),g);
}
;
	return null();
}

SecondThunk_obj::~SecondThunk_obj() { }

Dynamic SecondThunk_obj::__CreateEmpty() { return  new SecondThunk_obj; }
hx::ObjectPtr< SecondThunk_obj > SecondThunk_obj::__new(::haxe::functional::arrows::Arrow g)
{  hx::ObjectPtr< SecondThunk_obj > result = new SecondThunk_obj();
	result->__construct(g);
	return result;}

Dynamic SecondThunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SecondThunk_obj > result = new SecondThunk_obj();
	result->__construct(inArgs[0]);
	return result;}

::String SecondThunk_obj::getName( ){
	HX_SOURCE_PUSH("SecondThunk_obj::getName")
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/SecondThunk.hx",31)
	return HX_CSTRING("SecondThunk");
}


HX_DEFINE_DYNAMIC_FUNC0(SecondThunk_obj,getName,return )


SecondThunk_obj::SecondThunk_obj()
{
}

void SecondThunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SecondThunk);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic SecondThunk_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic SecondThunk_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void SecondThunk_obj::__GetFields(Array< ::String> &outFields)
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

Class SecondThunk_obj::__mClass;

void SecondThunk_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.SecondThunk"), hx::TCanCast< SecondThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void SecondThunk_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
