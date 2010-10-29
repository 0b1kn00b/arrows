#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_functional_arrows_combinators_AnimateThunk
#include <haxe/functional/arrows/combinators/AnimateThunk.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{

Void AnimateThunk_obj::__construct(Dynamic $t1,int $t2)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",37)
	Array< int > ms = Array_obj< int >::__new().Add($t2);
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",37)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f,Array< int >,ms)
	Void run(Dynamic x,::haxe::functional::arrows::ArrowInstance a){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",40)
			a->cont(::haxe::functional::arrows::Arrow_obj::doRepeat(x),::haxe::functional::arrows::combinators::AnimateInnerThunk_obj::__new(f->__get(0),ms->__get(0)),null(),null());
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",38)
	super::__construct( Dynamic(new _Function_1_1(f,ms)));
}
;
	return null();
}

AnimateThunk_obj::~AnimateThunk_obj() { }

Dynamic AnimateThunk_obj::__CreateEmpty() { return  new AnimateThunk_obj; }
hx::ObjectPtr< AnimateThunk_obj > AnimateThunk_obj::__new(Dynamic $t1,int $t2)
{  hx::ObjectPtr< AnimateThunk_obj > result = new AnimateThunk_obj();
	result->__construct($t1,$t2);
	return result;}

Dynamic AnimateThunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimateThunk_obj > result = new AnimateThunk_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String AnimateThunk_obj::getName( ){
	HX_SOURCE_PUSH("AnimateThunk_obj::getName")
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/AnimateThunk.hx",45)
	return HX_CSTRING("AnimateThunk");
}


HX_DEFINE_DYNAMIC_FUNC0(AnimateThunk_obj,getName,return )


AnimateThunk_obj::AnimateThunk_obj()
{
}

void AnimateThunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimateThunk);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic AnimateThunk_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic AnimateThunk_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void AnimateThunk_obj::__GetFields(Array< ::String> &outFields)
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

Class AnimateThunk_obj::__mClass;

void AnimateThunk_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.AnimateThunk"), hx::TCanCast< AnimateThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void AnimateThunk_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
