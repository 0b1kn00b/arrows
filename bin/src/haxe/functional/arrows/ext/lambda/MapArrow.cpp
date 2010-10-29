#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_haxe_functional_arrows_TaggedValue
#include <haxe/functional/arrows/TaggedValue.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ComposeThunk
#include <haxe/functional/arrows/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ProgressArrow
#include <haxe/functional/arrows/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_RepeatThunk
#include <haxe/functional/arrows/combinators/RepeatThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_MapArrow
#include <haxe/functional/arrows/ext/lambda/MapArrow.h>
#endif
#ifndef INCLUDED_hsl_haxe_Signaler
#include <hsl/haxe/Signaler.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace ext{
namespace lambda{

Void MapArrow_obj::__construct(Dynamic $t2)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapArrow.hx",30)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t2);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Dynamic run(Dynamic x,::haxe::functional::arrows::ArrowInstance $t1){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapArrow.hx",32)
			Array< ::haxe::functional::arrows::ArrowInstance > a = Array_obj< ::haxe::functional::arrows::ArrowInstance >::__new().Add($t1);
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapArrow.hx",33)
			if (!(::Reflect_obj::isFunction(x->__Field(HX_CSTRING("iterator"))))){
				HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapArrow.hx",34)
				hx::Throw ((((HX_CSTRING(" arg ") + x)) + HX_CSTRING("is not Iterable")));
			}
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapArrow.hx",36)
			Array< ::List > out = Array_obj< ::List >::__new().Add(::List_obj::__new());
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapArrow.hx",37)
			Array< Dynamic > it = Array_obj< Dynamic >::__new().Add(x->__Field(HX_CSTRING("iterator"))());

			HX_BEGIN_LOCAL_FUNC3(_Function_2_1,Array< Dynamic >,it,Array< ::List >,out,Array< Dynamic >,f)
			::haxe::functional::arrows::TaggedValue run(Dynamic x1){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapArrow.hx",39)
					if (it[0]->__Field(HX_CSTRING("hasNext"))()){
						HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapArrow.hx",40)
						Dynamic n = it[0]->__Field(HX_CSTRING("next"))();
						HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapArrow.hx",41)
						out[0]->add(::Reflect_obj::callMethod(null(),f->__get(0),Array_obj< Dynamic >::__new().Add(n)));
						HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapArrow.hx",44)
						return ::haxe::functional::arrows::Arrow_obj::doRepeat(null());
					}
					else{
						HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapArrow.hx",46)
						return ::haxe::functional::arrows::Arrow_obj::doDone(null());
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapArrow.hx",38)
			Dynamic f0 =  Dynamic(new _Function_2_1(it,out,f));

			HX_BEGIN_LOCAL_FUNC2(_Function_2_2,Array< ::haxe::functional::arrows::ArrowInstance >,a,Array< ::List >,out)
			Void run(Dynamic x1){
{
					__SAFE_POINT
					HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapArrow.hx",50)
					a[0]->cont(out->__get(0),null(),null(),null());
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapArrow.hx",49)
			Dynamic f1 =  Dynamic(new _Function_2_2(a,out));
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapArrow.hx",52)
			::haxe::functional::arrows::Function1Arrow_obj::tuple(f0)->repeat()->then(::haxe::functional::arrows::Function1Arrow_obj::lift(f1))->run(x);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("src/haxe/functional/arrows/ext/lambda/MapArrow.hx",31)
	super::__construct( Dynamic(new _Function_1_1(f)));
}
;
	return null();
}

MapArrow_obj::~MapArrow_obj() { }

Dynamic MapArrow_obj::__CreateEmpty() { return  new MapArrow_obj; }
hx::ObjectPtr< MapArrow_obj > MapArrow_obj::__new(Dynamic $t2)
{  hx::ObjectPtr< MapArrow_obj > result = new MapArrow_obj();
	result->__construct($t2);
	return result;}

Dynamic MapArrow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapArrow_obj > result = new MapArrow_obj();
	result->__construct(inArgs[0]);
	return result;}


MapArrow_obj::MapArrow_obj()
{
}

void MapArrow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapArrow);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic MapArrow_obj::__Field(const ::String &inName)
{
	return super::__Field(inName);
}

Dynamic MapArrow_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void MapArrow_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class MapArrow_obj::__mClass;

void MapArrow_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.ext.lambda.MapArrow"), hx::TCanCast< MapArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void MapArrow_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace ext
} // end namespace lambda
