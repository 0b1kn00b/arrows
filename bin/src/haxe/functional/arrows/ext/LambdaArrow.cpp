#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
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
#ifndef INCLUDED_haxe_functional_arrows_combinators_RepeatThunk
#include <haxe/functional/arrows/combinators/RepeatThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ext_LambdaArrow
#include <haxe/functional/arrows/ext/LambdaArrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_FilterThunk
#include <haxe/functional/arrows/ext/lambda/FilterThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_FoldThunk
#include <haxe/functional/arrows/ext/lambda/FoldThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_IterThunk
#include <haxe/functional/arrows/ext/lambda/IterThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_MapThunk
#include <haxe/functional/arrows/ext/lambda/MapThunk.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace ext{

Void LambdaArrow_obj::__construct()
{
	return null();
}

LambdaArrow_obj::~LambdaArrow_obj() { }

Dynamic LambdaArrow_obj::__CreateEmpty() { return  new LambdaArrow_obj; }
hx::ObjectPtr< LambdaArrow_obj > LambdaArrow_obj::__new()
{  hx::ObjectPtr< LambdaArrow_obj > result = new LambdaArrow_obj();
	result->__construct();
	return result;}

Dynamic LambdaArrow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LambdaArrow_obj > result = new LambdaArrow_obj();
	result->__construct();
	return result;}

Void LambdaArrow_obj::gen( ::haxe::functional::arrows::Arrow self,Dynamic i){
{
		HX_SOURCE_PUSH("LambdaArrow_obj::gen")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LambdaArrow_obj,gen,(void))

::haxe::functional::arrows::Arrow LambdaArrow_obj::iter( ::haxe::functional::arrows::Arrow self,Dynamic f){
	HX_SOURCE_PUSH("LambdaArrow_obj::iter")
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",36)
	return ::haxe::functional::arrows::ext::lambda::IterThunk_obj::__new(self,f);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LambdaArrow_obj,iter,return )

::haxe::functional::arrows::Arrow LambdaArrow_obj::map( ::haxe::functional::arrows::Arrow self,Dynamic f){
	HX_SOURCE_PUSH("LambdaArrow_obj::map")
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",39)
	return ::haxe::functional::arrows::ext::lambda::MapThunk_obj::__new(self,f);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LambdaArrow_obj,map,return )

::haxe::functional::arrows::ext::lambda::FoldThunk LambdaArrow_obj::fold( ::haxe::functional::arrows::Arrow self,Dynamic first,Dynamic f){
	HX_SOURCE_PUSH("LambdaArrow_obj::fold")
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",42)
	return ::haxe::functional::arrows::ext::lambda::FoldThunk_obj::__new(first,self,f);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(LambdaArrow_obj,fold,return )

::haxe::functional::arrows::ext::lambda::FilterThunk LambdaArrow_obj::filter( ::haxe::functional::arrows::Arrow self,Dynamic f,Dynamic inverse){
	HX_SOURCE_PUSH("LambdaArrow_obj::filter")
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",45)
	return ::haxe::functional::arrows::ext::lambda::FilterThunk_obj::__new(self,f,inverse);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(LambdaArrow_obj,filter,return )

::haxe::functional::arrows::ext::lambda::FoldThunk LambdaArrow_obj::set( ::haxe::functional::arrows::Arrow self,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("LambdaArrow_obj::set")
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",47)
	Array< Dynamic > compare = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,compare)
	Void run(::List first,Dynamic x){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",50)
			int count = ::Lambda_obj::count(first);
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",51)
			if ((count == 0)){
				HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",52)
				first->add(x);
			}
			else{
				HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",54)
				bool add = true;
				HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",55)
				for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(first->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
					Dynamic item = __it->next();
					{
						HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",56)
						if ((compare->__get(0) != null())){
						}
						else{
							HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",59)
							if ((x == item)){
								HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",60)
								add = false;
								HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",61)
								break;
							}
						}
					}
;
					__SAFE_POINT
				}
				HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",65)
				if (add){
					HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",66)
					first->add(x);
				}
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",48)
	return ::haxe::functional::arrows::ext::LambdaArrow_obj::fold(self,::List_obj::__new(), Dynamic(new _Function_1_1(compare)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LambdaArrow_obj,set,return )

::haxe::functional::arrows::combinators::ComposeThunk LambdaArrow_obj::doWhile( ::haxe::functional::arrows::Arrow self,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("LambdaArrow_obj::doWhile")
	HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",72)
	Array< Dynamic > proceed = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,proceed)
	Void run(Dynamic x){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",75)
			if (::Reflect_obj::callMethod(null(),proceed->__get(0),Array_obj< Dynamic >::__new())){
				HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",76)
				::haxe::functional::arrows::Arrow_obj::doRepeat(x);
			}
			else{
				HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",78)
				::haxe::functional::arrows::Arrow_obj::doDone(x);
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/ext/LambdaArrow.hx",73)
	return self->repeat()->then(::haxe::functional::arrows::Function1Arrow_obj::lift( Dynamic(new _Function_1_1(proceed))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LambdaArrow_obj,doWhile,return )


LambdaArrow_obj::LambdaArrow_obj()
{
}

void LambdaArrow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LambdaArrow);
	HX_MARK_END_CLASS();
}

Dynamic LambdaArrow_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gen") ) { return gen_dyn(); }
		if (HX_FIELD_EQ(inName,"map") ) { return map_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"iter") ) { return iter_dyn(); }
		if (HX_FIELD_EQ(inName,"fold") ) { return fold_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"doWhile") ) { return doWhile_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic LambdaArrow_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void LambdaArrow_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("gen"),
	HX_CSTRING("iter"),
	HX_CSTRING("map"),
	HX_CSTRING("fold"),
	HX_CSTRING("filter"),
	HX_CSTRING("set"),
	HX_CSTRING("doWhile"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class LambdaArrow_obj::__mClass;

void LambdaArrow_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.ext.LambdaArrow"), hx::TCanCast< LambdaArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void LambdaArrow_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace ext
