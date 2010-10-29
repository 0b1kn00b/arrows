#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_FirstThunk
#include <haxe/functional/arrows/combinators/FirstThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ProductThunk
#include <haxe/functional/arrows/combinators/ProductThunk.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{

Void FirstThunk_obj::__construct(::haxe::functional::arrows::Arrow f)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/FirstThunk.hx",28)
	super::__construct(f,::haxe::functional::arrows::Arrow_obj::returnA());
}
;
	return null();
}

FirstThunk_obj::~FirstThunk_obj() { }

Dynamic FirstThunk_obj::__CreateEmpty() { return  new FirstThunk_obj; }
hx::ObjectPtr< FirstThunk_obj > FirstThunk_obj::__new(::haxe::functional::arrows::Arrow f)
{  hx::ObjectPtr< FirstThunk_obj > result = new FirstThunk_obj();
	result->__construct(f);
	return result;}

Dynamic FirstThunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FirstThunk_obj > result = new FirstThunk_obj();
	result->__construct(inArgs[0]);
	return result;}

::String FirstThunk_obj::getName( ){
	HX_SOURCE_PUSH("FirstThunk_obj::getName")
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/FirstThunk.hx",31)
	return HX_CSTRING("FirstThunk");
}


HX_DEFINE_DYNAMIC_FUNC0(FirstThunk_obj,getName,return )


FirstThunk_obj::FirstThunk_obj()
{
}

void FirstThunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FirstThunk);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic FirstThunk_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic FirstThunk_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void FirstThunk_obj::__GetFields(Array< ::String> &outFields)
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

Class FirstThunk_obj::__mClass;

void FirstThunk_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.FirstThunk"), hx::TCanCast< FirstThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void FirstThunk_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
