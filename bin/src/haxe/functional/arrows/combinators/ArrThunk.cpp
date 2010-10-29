#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ArrThunk
#include <haxe/functional/arrows/combinators/ArrThunk.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{

Void ArrThunk_obj::__construct(Dynamic $t1)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ArrThunk.hx",30)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ArrThunk.hx",31)
	::haxe::functional::arrows::combinators::ArrThunk self = this;

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Void run(Dynamic x,::haxe::functional::arrows::ArrowInstance a){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ArrThunk.hx",38)
			Array< Dynamic > arr = Array_obj< Dynamic >::__new();
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ArrThunk.hx",39)
			arr->push(x);
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ArrThunk.hx",40)
			Dynamic out = ::Reflect_obj::callMethod(null(),f->__get(0),arr);
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ArrThunk.hx",41)
			a->cont(out,null(),null(),null());
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ArrThunk.hx",32)
	super::__construct( Dynamic(new _Function_1_1(f)));
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ArrThunk.hx",44)
	this->info = (HX_CSTRING("flatten inputs for ") + ((  ((f->__get(0) == null())) ? ::String(null()) : ::String(HX_CSTRING("function")) )));
}
;
	return null();
}

ArrThunk_obj::~ArrThunk_obj() { }

Dynamic ArrThunk_obj::__CreateEmpty() { return  new ArrThunk_obj; }
hx::ObjectPtr< ArrThunk_obj > ArrThunk_obj::__new(Dynamic $t1)
{  hx::ObjectPtr< ArrThunk_obj > result = new ArrThunk_obj();
	result->__construct($t1);
	return result;}

Dynamic ArrThunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrThunk_obj > result = new ArrThunk_obj();
	result->__construct(inArgs[0]);
	return result;}

::String ArrThunk_obj::getName( ){
	HX_SOURCE_PUSH("ArrThunk_obj::getName")
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ArrThunk.hx",47)
	return HX_CSTRING("ArrThunk");
}


HX_DEFINE_DYNAMIC_FUNC0(ArrThunk_obj,getName,return )


ArrThunk_obj::ArrThunk_obj()
{
}

void ArrThunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrThunk);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic ArrThunk_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ArrThunk_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ArrThunk_obj::__GetFields(Array< ::String> &outFields)
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

Class ArrThunk_obj::__mClass;

void ArrThunk_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.ArrThunk"), hx::TCanCast< ArrThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ArrThunk_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
