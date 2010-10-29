#include <hxcpp.h>

#ifndef INCLUDED_Product
#include <Product.h>
#endif
#ifndef INCLUDED_Tuple2
#include <Tuple2.h>
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
#ifndef INCLUDED_haxe_functional_arrows_Function1Arrow
#include <haxe/functional/arrows/Function1Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ComposeThunk
#include <haxe/functional/arrows/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ProductThunk
#include <haxe/functional/arrows/combinators/ProductThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ProgressArrow
#include <haxe/functional/arrows/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_hsl_haxe_Signaler
#include <hsl/haxe/Signaler.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{

Void ProductThunk_obj::__construct(::haxe::functional::arrows::Arrow $t2,::haxe::functional::arrows::Arrow $t3)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",34)
	Array< ::haxe::functional::arrows::Arrow > g = Array_obj< ::haxe::functional::arrows::Arrow >::__new().Add($t3);
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",34)
	Array< ::haxe::functional::arrows::Arrow > f = Array_obj< ::haxe::functional::arrows::Arrow >::__new().Add($t2);
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",36)
	::haxe::functional::arrows::combinators::ProductThunk self = this;

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< ::haxe::functional::arrows::Arrow >,f,Array< ::haxe::functional::arrows::Arrow >,g)
	Void run(::Product x,::haxe::functional::arrows::ArrowInstance $t1){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",38)
			Array< ::haxe::functional::arrows::ArrowInstance > a = Array_obj< ::haxe::functional::arrows::ArrowInstance >::__new().Add($t1);
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",39)
			Array< ::haxe::functional::arrows::combinators::ProgressArrow > first = Array_obj< ::haxe::functional::arrows::combinators::ProgressArrow >::__new().Add(null());
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",40)
			Array< ::haxe::functional::arrows::combinators::ProgressArrow > second = Array_obj< ::haxe::functional::arrows::combinators::ProgressArrow >::__new().Add(null());

			HX_BEGIN_LOCAL_FUNC2(_Function_2_1,Array< ::haxe::functional::arrows::combinators::ProgressArrow >,first,Array< ::haxe::functional::arrows::combinators::ProgressArrow >,second)
			Void run(){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",43)
					first[0]->cancel();
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",44)
					second[0]->cancel();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",42)
			Array< Dynamic > cancel = Array_obj< Dynamic >::__new().Add( Dynamic(new _Function_2_1(first,second)));
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",46)
			a[0]->addCanceller(cancel->__get(0));
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",48)
			Array< Dynamic > y1 = Array_obj< Dynamic >::__new().Add(null());
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",49)
			Array< Dynamic > y2 = Array_obj< Dynamic >::__new().Add(null());
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",50)
			Array< int > count = Array_obj< int >::__new().Add(2);

			HX_BEGIN_LOCAL_FUNC5(_Function_2_2,Array< Dynamic >,cancel,Array< Dynamic >,y1,Array< int >,count,Array< ::haxe::functional::arrows::ArrowInstance >,a,Array< Dynamic >,y2)
			Void run(){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",52)
					if ((--(count[0]) == 0)){
						HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",53)
						a[0]->advance(cancel->__get(0));
						HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",54)
						a[0]->cont(::Tuple2_obj::create(y1->__get(0),y2->__get(0)),null(),null(),null());
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",51)
			Array< Dynamic > barrier = Array_obj< Dynamic >::__new().Add( Dynamic(new _Function_2_2(cancel,y1,count,a,y2)));

			HX_BEGIN_LOCAL_FUNC0(_Function_2_3)
			Dynamic run(Dynamic x1){
{
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",59)
					return x1;
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",57)
			::haxe::functional::arrows::Arrow debug = ::haxe::functional::arrows::Function1Arrow_obj::tuple( Dynamic(new _Function_2_3()));

			HX_BEGIN_LOCAL_FUNC2(_Function_2_4,Array< Dynamic >,y1,Array< Dynamic >,barrier)
			Dynamic run(Dynamic y){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",63)
					y1[0] = y;
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",64)
					barrier->__get(0)();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",61)
			::haxe::functional::arrows::Arrow f1 = ::haxe::functional::arrows::Function1Arrow_obj::tuple( Dynamic(new _Function_2_4(y1,barrier)));

			HX_BEGIN_LOCAL_FUNC2(_Function_2_5,Array< Dynamic >,y2,Array< Dynamic >,barrier)
			Dynamic run(Dynamic y){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",69)
					y2[0] = y;
					HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",70)
					barrier->__get(0)();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",67)
			::haxe::functional::arrows::Arrow g1 = ::haxe::functional::arrows::Function1Arrow_obj::tuple( Dynamic(new _Function_2_5(y2,barrier)));
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",73)
			first[0] = f[0]->then(f1)->run(x->__Field(HX_CSTRING("productElement"))(0));
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",74)
			second[0] = g[0]->then(g1)->run(x->__Field(HX_CSTRING("productElement"))(1));
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",37)
	super::__construct( Dynamic(new _Function_1_1(f,g)));
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",77)
	this->info = (((((((HX_CSTRING("executing ") + f[0]->info)) + HX_CSTRING(" and "))) + g[0]->info)) + HX_CSTRING(" simultaneously"));
}
;
	return null();
}

ProductThunk_obj::~ProductThunk_obj() { }

Dynamic ProductThunk_obj::__CreateEmpty() { return  new ProductThunk_obj; }
hx::ObjectPtr< ProductThunk_obj > ProductThunk_obj::__new(::haxe::functional::arrows::Arrow $t2,::haxe::functional::arrows::Arrow $t3)
{  hx::ObjectPtr< ProductThunk_obj > result = new ProductThunk_obj();
	result->__construct($t2,$t3);
	return result;}

Dynamic ProductThunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProductThunk_obj > result = new ProductThunk_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String ProductThunk_obj::getName( ){
	HX_SOURCE_PUSH("ProductThunk_obj::getName")
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProductThunk.hx",80)
	return HX_CSTRING("ProductThunk");
}


HX_DEFINE_DYNAMIC_FUNC0(ProductThunk_obj,getName,return )


ProductThunk_obj::ProductThunk_obj()
{
}

void ProductThunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProductThunk);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic ProductThunk_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ProductThunk_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ProductThunk_obj::__GetFields(Array< ::String> &outFields)
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

Class ProductThunk_obj::__mClass;

void ProductThunk_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.ProductThunk"), hx::TCanCast< ProductThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ProductThunk_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
