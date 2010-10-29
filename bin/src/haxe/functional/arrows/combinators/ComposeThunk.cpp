#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ComposeThunk
#include <haxe/functional/arrows/combinators/ComposeThunk.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{

Void ComposeThunk_obj::__construct(::haxe::functional::arrows::Arrow $t1,::haxe::functional::arrows::Arrow $t2)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ComposeThunk.hx",29)
	Array< ::haxe::functional::arrows::Arrow > g = Array_obj< ::haxe::functional::arrows::Arrow >::__new().Add($t2);
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ComposeThunk.hx",29)
	Array< ::haxe::functional::arrows::Arrow > f = Array_obj< ::haxe::functional::arrows::Arrow >::__new().Add($t1);
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ComposeThunk.hx",33)
	::haxe::functional::arrows::combinators::ComposeThunk self = this;

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< ::haxe::functional::arrows::Arrow >,f,Array< ::haxe::functional::arrows::Arrow >,g)
	Void run(Dynamic x,::haxe::functional::arrows::ArrowInstance a){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ComposeThunk.hx",39)
			a->cont(x,f->__get(0),g->__get(0),null());
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ComposeThunk.hx",34)
	super::__construct( Dynamic(new _Function_1_1(f,g)));
}
;
	return null();
}

ComposeThunk_obj::~ComposeThunk_obj() { }

Dynamic ComposeThunk_obj::__CreateEmpty() { return  new ComposeThunk_obj; }
hx::ObjectPtr< ComposeThunk_obj > ComposeThunk_obj::__new(::haxe::functional::arrows::Arrow $t1,::haxe::functional::arrows::Arrow $t2)
{  hx::ObjectPtr< ComposeThunk_obj > result = new ComposeThunk_obj();
	result->__construct($t1,$t2);
	return result;}

Dynamic ComposeThunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ComposeThunk_obj > result = new ComposeThunk_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String ComposeThunk_obj::getName( ){
	HX_SOURCE_PUSH("ComposeThunk_obj::getName")
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ComposeThunk.hx",44)
	return HX_CSTRING("ComposeThunk");
}


HX_DEFINE_DYNAMIC_FUNC0(ComposeThunk_obj,getName,return )


ComposeThunk_obj::ComposeThunk_obj()
{
}

void ComposeThunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComposeThunk);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic ComposeThunk_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ComposeThunk_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ComposeThunk_obj::__GetFields(Array< ::String> &outFields)
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

Class ComposeThunk_obj::__mClass;

void ComposeThunk_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.ComposeThunk"), hx::TCanCast< ComposeThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ComposeThunk_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
