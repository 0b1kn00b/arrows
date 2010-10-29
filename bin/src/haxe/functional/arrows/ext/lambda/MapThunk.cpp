#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_MapArrow
#include <haxe/functional/arrows/ext/lambda/MapArrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_MapThunk
#include <haxe/functional/arrows/ext/lambda/MapThunk.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace ext{
namespace lambda{

Void MapThunk_obj::__construct(::haxe::functional::arrows::Arrow $t1,Dynamic $t2)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapThunk.hx",28)
	Array< Dynamic > g = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapThunk.hx",28)
	Array< ::haxe::functional::arrows::Arrow > f = Array_obj< ::haxe::functional::arrows::Arrow >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< ::haxe::functional::arrows::Arrow >,f,Array< Dynamic >,g)
	Void run(Dynamic x,::haxe::functional::arrows::ArrowInstance a){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapThunk.hx",32)
			a->cont(x,f->__get(0),::haxe::functional::arrows::ext::lambda::MapArrow_obj::__new(g->__get(0)),null());
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapThunk.hx",29)
	super::__construct( Dynamic(new _Function_1_1(f,g)));
}
;
	return null();
}

MapThunk_obj::~MapThunk_obj() { }

Dynamic MapThunk_obj::__CreateEmpty() { return  new MapThunk_obj; }
hx::ObjectPtr< MapThunk_obj > MapThunk_obj::__new(::haxe::functional::arrows::Arrow $t1,Dynamic $t2)
{  hx::ObjectPtr< MapThunk_obj > result = new MapThunk_obj();
	result->__construct($t1,$t2);
	return result;}

Dynamic MapThunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapThunk_obj > result = new MapThunk_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String MapThunk_obj::getName( ){
	HX_SOURCE_PUSH("MapThunk_obj::getName")
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapThunk.hx",37)
	return HX_CSTRING("MapThunk");
}


HX_DEFINE_DYNAMIC_FUNC0(MapThunk_obj,getName,return )


MapThunk_obj::MapThunk_obj()
{
}

void MapThunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapThunk);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic MapThunk_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic MapThunk_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void MapThunk_obj::__GetFields(Array< ::String> &outFields)
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

Class MapThunk_obj::__mClass;

void MapThunk_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.ext.lambda.MapThunk"), hx::TCanCast< MapThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void MapThunk_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace ext
} // end namespace lambda
