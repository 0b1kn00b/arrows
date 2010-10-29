#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_PollThunk
#include <haxe/functional/arrows/combinators/PollThunk.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{

Void PollThunk_obj::__construct(Dynamic $t1)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/PollThunk.hx",27)
	Array< Dynamic > predicate = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,predicate)
	Void run(Dynamic x,::haxe::functional::arrows::ArrowInstance a){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/PollThunk.hx",30)
			a->cont(x,null(),null(),predicate->__get(0));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/PollThunk.hx",28)
	super::__construct( Dynamic(new _Function_1_1(predicate)));
}
;
	return null();
}

PollThunk_obj::~PollThunk_obj() { }

Dynamic PollThunk_obj::__CreateEmpty() { return  new PollThunk_obj; }
hx::ObjectPtr< PollThunk_obj > PollThunk_obj::__new(Dynamic $t1)
{  hx::ObjectPtr< PollThunk_obj > result = new PollThunk_obj();
	result->__construct($t1);
	return result;}

Dynamic PollThunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PollThunk_obj > result = new PollThunk_obj();
	result->__construct(inArgs[0]);
	return result;}


PollThunk_obj::PollThunk_obj()
{
}

void PollThunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PollThunk);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic PollThunk_obj::__Field(const ::String &inName)
{
	return super::__Field(inName);
}

Dynamic PollThunk_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void PollThunk_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class PollThunk_obj::__mClass;

void PollThunk_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.PollThunk"), hx::TCanCast< PollThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void PollThunk_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
