#include <hxcpp.h>

#ifndef INCLUDED_Function2Extensions
#include <Function2Extensions.h>
#endif

Void Function2Extensions_obj::__construct()
{
	return null();
}

Function2Extensions_obj::~Function2Extensions_obj() { }

Dynamic Function2Extensions_obj::__CreateEmpty() { return  new Function2Extensions_obj; }
hx::ObjectPtr< Function2Extensions_obj > Function2Extensions_obj::__new()
{  hx::ObjectPtr< Function2Extensions_obj > result = new Function2Extensions_obj();
	result->__construct();
	return result;}

Dynamic Function2Extensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Function2Extensions_obj > result = new Function2Extensions_obj();
	result->__construct();
	return result;}

Dynamic Function2Extensions_obj::swallow( Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function2Extensions_obj::swallow")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",631)
	return ::Function2Extensions_obj::toEffect(::Function2Extensions_obj::swallowWith(f,null()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function2Extensions_obj,swallow,return )

Dynamic Function2Extensions_obj::swallowWith( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function2Extensions_obj::swallowWith")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",633)
	Array< Dynamic > d = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",633)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f,Array< Dynamic >,d)
	Dynamic run(Dynamic p1,Dynamic p2){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",635)
			try{
				HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",636)
				return f->__get(0)(p1,p2);
			}
			catch(Dynamic __e){
				{
					Dynamic e = __e;{
					}
				}
			}
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",639)
			return d->__get(0);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",634)
	return  Dynamic(new _Function_1_1(f,d));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function2Extensions_obj,swallowWith,return )

Dynamic Function2Extensions_obj::thenDo( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function2Extensions_obj::thenDo")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",642)
	Array< Dynamic > f2 = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",642)
	Array< Dynamic > f1 = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f1,Array< Dynamic >,f2)
	Void run(Dynamic p1,Dynamic p2){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",644)
			f1->__get(0)(p1,p2);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",645)
			f2->__get(0)(p1,p2);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",643)
	return  Dynamic(new _Function_1_1(f1,f2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function2Extensions_obj,thenDo,return )

Dynamic Function2Extensions_obj::returning( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function2Extensions_obj::returning")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",648)
	Array< Dynamic > thunk = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",648)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f,Array< Dynamic >,thunk)
	Dynamic run(Dynamic p1,Dynamic p2){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",650)
			f->__get(0)(p1,p2);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",652)
			return thunk->__get(0)();
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",649)
	return  Dynamic(new _Function_1_1(f,thunk));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function2Extensions_obj,returning,return )

Dynamic Function2Extensions_obj::returningC( Dynamic f,Dynamic value){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function2Extensions_obj::returningC")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",656)
	return ::Function2Extensions_obj::returning(f,value->__Field(HX_CSTRING("toThunk"))());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function2Extensions_obj,returningC,return )

Dynamic Function2Extensions_obj::flip( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function2Extensions_obj::flip")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",658)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Dynamic run(Dynamic p2,Dynamic p1){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",660)
			return f->__get(0)(p1,p2);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",659)
	return  Dynamic(new _Function_1_1(f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function2Extensions_obj,flip,return )

Dynamic Function2Extensions_obj::curry( Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function2Extensions_obj::curry")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",663)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t2);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Dynamic run(Dynamic $t1){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",664)
			Array< Dynamic > p1 = Array_obj< Dynamic >::__new().Add($t1);

			HX_BEGIN_LOCAL_FUNC2(_Function_2_1,Array< Dynamic >,f,Array< Dynamic >,p1)
			Dynamic run(Dynamic p2){
{
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",666)
					return f->__get(0)(p1->__get(0),p2);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",665)
			return  Dynamic(new _Function_2_1(f,p1));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",664)
	return  Dynamic(new _Function_1_1(f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function2Extensions_obj,curry,return )

Dynamic Function2Extensions_obj::uncurry( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function2Extensions_obj::uncurry")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",670)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Dynamic run(Dynamic p1,Dynamic p2){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",672)
			return f->__get(0)(p1)(p2);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",671)
	return  Dynamic(new _Function_1_1(f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function2Extensions_obj,uncurry,return )

Dynamic Function2Extensions_obj::lazy( Dynamic $t1,Dynamic $t2,Dynamic $t3){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function2Extensions_obj::lazy")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",675)
	Array< Dynamic > p2 = Array_obj< Dynamic >::__new().Add($t3);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",675)
	Array< Dynamic > p1 = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",675)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",676)
	Array< Dynamic > r = Array_obj< Dynamic >::__new().Add(null());

	HX_BEGIN_LOCAL_FUNC4(_Function_1_1,Array< Dynamic >,p1,Array< Dynamic >,r,Array< Dynamic >,f,Array< Dynamic >,p2)
	Dynamic run(){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( Array< Dynamic > &p1,Array< Dynamic > &r,Array< Dynamic > &f,Array< Dynamic > &p2){
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",679)
					r[0] = f->__get(0)(p1->__get(0),p2->__get(0));
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",679)
					return r->__get(0);
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",679)
			return (  ((r->__get(0) == null())) ? Dynamic(_Function_2_1::Block(p1,r,f,p2)) : Dynamic(r->__get(0)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",678)
	return  Dynamic(new _Function_1_1(p1,r,f,p2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Function2Extensions_obj,lazy,return )

Dynamic Function2Extensions_obj::toEffect( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function2Extensions_obj::toEffect")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",682)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Void run(Dynamic p1,Dynamic p2){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",684)
			f->__get(0)(p1,p2);
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",683)
	return  Dynamic(new _Function_1_1(f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function2Extensions_obj,toEffect,return )


Function2Extensions_obj::Function2Extensions_obj()
{
}

void Function2Extensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Function2Extensions);
	HX_MARK_END_CLASS();
}

Dynamic Function2Extensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flip") ) { return flip_dyn(); }
		if (HX_FIELD_EQ(inName,"lazy") ) { return lazy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"curry") ) { return curry_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"thenDo") ) { return thenDo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swallow") ) { return swallow_dyn(); }
		if (HX_FIELD_EQ(inName,"uncurry") ) { return uncurry_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toEffect") ) { return toEffect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"returning") ) { return returning_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"returningC") ) { return returningC_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"swallowWith") ) { return swallowWith_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Function2Extensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Function2Extensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("swallow"),
	HX_CSTRING("swallowWith"),
	HX_CSTRING("thenDo"),
	HX_CSTRING("returning"),
	HX_CSTRING("returningC"),
	HX_CSTRING("flip"),
	HX_CSTRING("curry"),
	HX_CSTRING("uncurry"),
	HX_CSTRING("lazy"),
	HX_CSTRING("toEffect"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Function2Extensions_obj::__mClass;

void Function2Extensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Function2Extensions"), hx::TCanCast< Function2Extensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Function2Extensions_obj::__boot()
{
}

