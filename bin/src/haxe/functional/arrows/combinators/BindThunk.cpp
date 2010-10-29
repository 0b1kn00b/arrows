#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_BindThunk
#include <haxe/functional/arrows/combinators/BindThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ComposeThunk
#include <haxe/functional/arrows/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_FanoutThunk
#include <haxe/functional/arrows/combinators/FanoutThunk.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{

Void BindThunk_obj::__construct(::haxe::functional::arrows::Arrow f,::haxe::functional::arrows::Arrow g)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/BindThunk.hx",27)
	super::__construct(::haxe::functional::arrows::Arrow_obj::returnA()->fanout(f),g);
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/BindThunk.hx",28)
	this->info = (((((HX_CSTRING("binding ") + f->info)) + HX_CSTRING(" and "))) + g->info);
}
;
	return null();
}

BindThunk_obj::~BindThunk_obj() { }

Dynamic BindThunk_obj::__CreateEmpty() { return  new BindThunk_obj; }
hx::ObjectPtr< BindThunk_obj > BindThunk_obj::__new(::haxe::functional::arrows::Arrow f,::haxe::functional::arrows::Arrow g)
{  hx::ObjectPtr< BindThunk_obj > result = new BindThunk_obj();
	result->__construct(f,g);
	return result;}

Dynamic BindThunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BindThunk_obj > result = new BindThunk_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String BindThunk_obj::getName( ){
	HX_SOURCE_PUSH("BindThunk_obj::getName")
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/BindThunk.hx",31)
	return HX_CSTRING("BindThunk");
}


HX_DEFINE_DYNAMIC_FUNC0(BindThunk_obj,getName,return )


BindThunk_obj::BindThunk_obj()
{
}

void BindThunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BindThunk);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic BindThunk_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic BindThunk_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void BindThunk_obj::__GetFields(Array< ::String> &outFields)
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

Class BindThunk_obj::__mClass;

void BindThunk_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.BindThunk"), hx::TCanCast< BindThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void BindThunk_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
