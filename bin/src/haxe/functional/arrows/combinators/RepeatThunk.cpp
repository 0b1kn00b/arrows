#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_InnerRepeatThunk
#include <haxe/functional/arrows/combinators/InnerRepeatThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_RepeatThunk
#include <haxe/functional/arrows/combinators/RepeatThunk.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{

Void RepeatThunk_obj::__construct(::haxe::functional::arrows::Arrow $t1)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/RepeatThunk.hx",27)
	Array< ::haxe::functional::arrows::Arrow > f = Array_obj< ::haxe::functional::arrows::Arrow >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::haxe::functional::arrows::Arrow >,f)
	Void run(Dynamic x,::haxe::functional::arrows::ArrowInstance a){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/RepeatThunk.hx",30)
			a->cont(x,f->__get(0),::haxe::functional::arrows::combinators::InnerRepeatThunk_obj::__new(f->__get(0),a),null());
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/RepeatThunk.hx",28)
	super::__construct( Dynamic(new _Function_1_1(f)));
}
;
	return null();
}

RepeatThunk_obj::~RepeatThunk_obj() { }

Dynamic RepeatThunk_obj::__CreateEmpty() { return  new RepeatThunk_obj; }
hx::ObjectPtr< RepeatThunk_obj > RepeatThunk_obj::__new(::haxe::functional::arrows::Arrow $t1)
{  hx::ObjectPtr< RepeatThunk_obj > result = new RepeatThunk_obj();
	result->__construct($t1);
	return result;}

Dynamic RepeatThunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RepeatThunk_obj > result = new RepeatThunk_obj();
	result->__construct(inArgs[0]);
	return result;}


RepeatThunk_obj::RepeatThunk_obj()
{
}

void RepeatThunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RepeatThunk);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic RepeatThunk_obj::__Field(const ::String &inName)
{
	return super::__Field(inName);
}

Dynamic RepeatThunk_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void RepeatThunk_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class RepeatThunk_obj::__mClass;

void RepeatThunk_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.RepeatThunk"), hx::TCanCast< RepeatThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void RepeatThunk_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
