#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_FactoryExtension
#include <haxe/functional/arrows/FactoryExtension.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Function1Arrow
#include <haxe/functional/arrows/Function1Arrow.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{

Void FactoryExtension_obj::__construct()
{
	return null();
}

FactoryExtension_obj::~FactoryExtension_obj() { }

Dynamic FactoryExtension_obj::__CreateEmpty() { return  new FactoryExtension_obj; }
hx::ObjectPtr< FactoryExtension_obj > FactoryExtension_obj::__new()
{  hx::ObjectPtr< FactoryExtension_obj > result = new FactoryExtension_obj();
	result->__construct();
	return result;}

Dynamic FactoryExtension_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FactoryExtension_obj > result = new FactoryExtension_obj();
	result->__construct();
	return result;}

::haxe::functional::arrows::Arrow FactoryExtension_obj::lift( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("FactoryExtension_obj::lift")
	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",319)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Dynamic run(Dynamic x){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",321)
			return f->__get(0)();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("src/haxe/functional/arrows/Arrow.hx",320)
	return ::haxe::functional::arrows::Function1Arrow_obj::lift( Dynamic(new _Function_1_1(f)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FactoryExtension_obj,lift,return )


FactoryExtension_obj::FactoryExtension_obj()
{
}

void FactoryExtension_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FactoryExtension);
	HX_MARK_END_CLASS();
}

Dynamic FactoryExtension_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lift") ) { return lift_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic FactoryExtension_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void FactoryExtension_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lift"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class FactoryExtension_obj::__mClass;

void FactoryExtension_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.FactoryExtension"), hx::TCanCast< FactoryExtension_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void FactoryExtension_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
