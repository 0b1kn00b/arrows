#include <hxcpp.h>

#ifndef INCLUDED_Product
#include <Product.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Tuple2
#include <Tuple2.h>
#endif
#ifndef INCLUDED_Tuple3
#include <Tuple3.h>
#endif
#ifndef INCLUDED_Tuple4
#include <Tuple4.h>
#endif
#ifndef INCLUDED_Tuple5
#include <Tuple5.h>
#endif
#ifndef INCLUDED__Prelude_AbstractProduct
#include <_Prelude/AbstractProduct.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_FunctionThunk
#include <haxe/functional/arrows/combinators/FunctionThunk.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{

Void FunctionThunk_obj::__construct(Dynamic $t1)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/FunctionThunk.hx",34)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/FunctionThunk.hx",35)
	::haxe::functional::arrows::combinators::FunctionThunk self = this;

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Void run(Dynamic x,::haxe::functional::arrows::ArrowInstance a){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/FunctionThunk.hx",38)
			if ((bool(::Std_obj::is(x,hx::ClassOf< ::Tuple2 >())) || bool((bool(::Std_obj::is(x,hx::ClassOf< ::Tuple3 >())) || bool((bool(::Std_obj::is(x,hx::ClassOf< ::Tuple4 >())) || bool(::Std_obj::is(x,hx::ClassOf< ::Tuple5 >())))))))){
				HX_SOURCE_POS("src/haxe/functional/arrows/combinators/FunctionThunk.hx",40)
				::Product t = hx::TCast< Product >::cast(x);
				HX_SOURCE_POS("src/haxe/functional/arrows/combinators/FunctionThunk.hx",41)
				Array< Dynamic > ar = Array_obj< Dynamic >::__new();
				HX_SOURCE_POS("src/haxe/functional/arrows/combinators/FunctionThunk.hx",42)
				{
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/FunctionThunk.hx",42)
					int _g1 = 0;
					int _g = t->__Field(HX_CSTRING("getProductArity"))().Cast< int >();
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/FunctionThunk.hx",42)
					while((_g1 < _g)){
						__SAFE_POINT
						HX_SOURCE_POS("src/haxe/functional/arrows/combinators/FunctionThunk.hx",42)
						int i = (_g1)++;
						HX_SOURCE_POS("src/haxe/functional/arrows/combinators/FunctionThunk.hx",43)
						ar->push(t->__Field(HX_CSTRING("productElement"))(i));
					}
				}
				HX_SOURCE_POS("src/haxe/functional/arrows/combinators/FunctionThunk.hx",45)
				a->cont(::Reflect_obj::callMethod(null(),f->__get(0),ar),null(),null(),null());
			}
			else{
				HX_SOURCE_POS("src/haxe/functional/arrows/combinators/FunctionThunk.hx",47)
				Array< Dynamic > arr = Array_obj< Dynamic >::__new().Add(x);
				HX_SOURCE_POS("src/haxe/functional/arrows/combinators/FunctionThunk.hx",48)
				Dynamic out = ::Reflect_obj::callMethod(null(),f->__get(0),arr);
				HX_SOURCE_POS("src/haxe/functional/arrows/combinators/FunctionThunk.hx",49)
				a->cont(out,null(),null(),null());
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/FunctionThunk.hx",36)
	super::__construct( Dynamic(new _Function_1_1(f)));
}
;
	return null();
}

FunctionThunk_obj::~FunctionThunk_obj() { }

Dynamic FunctionThunk_obj::__CreateEmpty() { return  new FunctionThunk_obj; }
hx::ObjectPtr< FunctionThunk_obj > FunctionThunk_obj::__new(Dynamic $t1)
{  hx::ObjectPtr< FunctionThunk_obj > result = new FunctionThunk_obj();
	result->__construct($t1);
	return result;}

Dynamic FunctionThunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FunctionThunk_obj > result = new FunctionThunk_obj();
	result->__construct(inArgs[0]);
	return result;}

::String FunctionThunk_obj::getName( ){
	HX_SOURCE_PUSH("FunctionThunk_obj::getName")
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/FunctionThunk.hx",55)
	return HX_CSTRING("FunctionThunk");
}


HX_DEFINE_DYNAMIC_FUNC0(FunctionThunk_obj,getName,return )


FunctionThunk_obj::FunctionThunk_obj()
{
}

void FunctionThunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FunctionThunk);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic FunctionThunk_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic FunctionThunk_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void FunctionThunk_obj::__GetFields(Array< ::String> &outFields)
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

Class FunctionThunk_obj::__mClass;

void FunctionThunk_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.FunctionThunk"), hx::TCanCast< FunctionThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void FunctionThunk_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
