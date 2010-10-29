#include <hxcpp.h>

#ifndef INCLUDED_DynamicExtensions
#include <DynamicExtensions.h>
#endif
#ifndef INCLUDED_Function1Extensions
#include <Function1Extensions.h>
#endif

Void Function1Extensions_obj::__construct()
{
	return null();
}

Function1Extensions_obj::~Function1Extensions_obj() { }

Dynamic Function1Extensions_obj::__CreateEmpty() { return  new Function1Extensions_obj; }
hx::ObjectPtr< Function1Extensions_obj > Function1Extensions_obj::__new()
{  hx::ObjectPtr< Function1Extensions_obj > result = new Function1Extensions_obj();
	result->__construct();
	return result;}

Dynamic Function1Extensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Function1Extensions_obj > result = new Function1Extensions_obj();
	result->__construct();
	return result;}

Dynamic Function1Extensions_obj::swallow( Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function1Extensions_obj::swallow")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",581)
	return ::Function1Extensions_obj::toEffect(::Function1Extensions_obj::swallowWith(f,null()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function1Extensions_obj,swallow,return )

Dynamic Function1Extensions_obj::swallowWith( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function1Extensions_obj::swallowWith")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",583)
	Array< Dynamic > d = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",583)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f,Array< Dynamic >,d)
	Dynamic run(Dynamic a){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",585)
			try{
				HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",586)
				return f->__get(0)(a);
			}
			catch(Dynamic __e){
				{
					Dynamic e = __e;{
					}
				}
			}
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",589)
			return d->__get(0);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",584)
	return  Dynamic(new _Function_1_1(f,d));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function1Extensions_obj,swallowWith,return )

Dynamic Function1Extensions_obj::thenDo( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function1Extensions_obj::thenDo")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",592)
	Array< Dynamic > f2 = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",592)
	Array< Dynamic > f1 = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f1,Array< Dynamic >,f2)
	Void run(Dynamic p1){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",594)
			f1->__get(0)(p1);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",595)
			f2->__get(0)(p1);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",593)
	return  Dynamic(new _Function_1_1(f1,f2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function1Extensions_obj,thenDo,return )

Dynamic Function1Extensions_obj::returning( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function1Extensions_obj::returning")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",598)
	Array< Dynamic > thunk = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",598)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f,Array< Dynamic >,thunk)
	Dynamic run(Dynamic p1){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",600)
			f->__get(0)(p1);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",602)
			return thunk->__get(0)();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",599)
	return  Dynamic(new _Function_1_1(f,thunk));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function1Extensions_obj,returning,return )

Dynamic Function1Extensions_obj::returningC( Dynamic f,Dynamic value){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function1Extensions_obj::returningC")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",606)
	return ::Function1Extensions_obj::returning(f,::DynamicExtensions_obj::toThunk(value));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function1Extensions_obj,returningC,return )

Dynamic Function1Extensions_obj::compose( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function1Extensions_obj::compose")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",608)
	Array< Dynamic > f2 = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",608)
	Array< Dynamic > f1 = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f1,Array< Dynamic >,f2)
	Dynamic run(Dynamic u){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",610)
			return f1->__get(0)(f2->__get(0)(u));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",609)
	return  Dynamic(new _Function_1_1(f1,f2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function1Extensions_obj,compose,return )

Dynamic Function1Extensions_obj::andThen( Dynamic f1,Dynamic f2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function1Extensions_obj::andThen")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",614)
	return ::Function1Extensions_obj::compose(f2,f1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function1Extensions_obj,andThen,return )

Dynamic Function1Extensions_obj::lazy( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function1Extensions_obj::lazy")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",616)
	Array< Dynamic > p1 = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",616)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",617)
	Array< Dynamic > r = Array_obj< Dynamic >::__new().Add(null());

	HX_BEGIN_LOCAL_FUNC3(_Function_1_1,Array< Dynamic >,p1,Array< Dynamic >,r,Array< Dynamic >,f)
	Dynamic run(){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( Array< Dynamic > &p1,Array< Dynamic > &r,Array< Dynamic > &f){
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",620)
					r[0] = f->__get(0)(p1->__get(0));
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",620)
					return r->__get(0);
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",620)
			return (  ((r->__get(0) == null())) ? Dynamic(_Function_2_1::Block(p1,r,f)) : Dynamic(r->__get(0)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",619)
	return  Dynamic(new _Function_1_1(p1,r,f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function1Extensions_obj,lazy,return )

Dynamic Function1Extensions_obj::toEffect( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function1Extensions_obj::toEffect")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",623)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Void run(Dynamic p1){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",625)
			f->__get(0)(p1);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",624)
	return  Dynamic(new _Function_1_1(f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function1Extensions_obj,toEffect,return )


Function1Extensions_obj::Function1Extensions_obj()
{
}

void Function1Extensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Function1Extensions);
	HX_MARK_END_CLASS();
}

Dynamic Function1Extensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"lazy") ) { return lazy_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"thenDo") ) { return thenDo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swallow") ) { return swallow_dyn(); }
		if (HX_FIELD_EQ(inName,"compose") ) { return compose_dyn(); }
		if (HX_FIELD_EQ(inName,"andThen") ) { return andThen_dyn(); }
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

Dynamic Function1Extensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Function1Extensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("swallow"),
	HX_CSTRING("swallowWith"),
	HX_CSTRING("thenDo"),
	HX_CSTRING("returning"),
	HX_CSTRING("returningC"),
	HX_CSTRING("compose"),
	HX_CSTRING("andThen"),
	HX_CSTRING("lazy"),
	HX_CSTRING("toEffect"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Function1Extensions_obj::__mClass;

void Function1Extensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Function1Extensions"), hx::TCanCast< Function1Extensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Function1Extensions_obj::__boot()
{
}

