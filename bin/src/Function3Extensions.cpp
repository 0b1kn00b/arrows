#include <hxcpp.h>

#ifndef INCLUDED_Function3Extensions
#include <Function3Extensions.h>
#endif

Void Function3Extensions_obj::__construct()
{
	return null();
}

Function3Extensions_obj::~Function3Extensions_obj() { }

Dynamic Function3Extensions_obj::__CreateEmpty() { return  new Function3Extensions_obj; }
hx::ObjectPtr< Function3Extensions_obj > Function3Extensions_obj::__new()
{  hx::ObjectPtr< Function3Extensions_obj > result = new Function3Extensions_obj();
	result->__construct();
	return result;}

Dynamic Function3Extensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Function3Extensions_obj > result = new Function3Extensions_obj();
	result->__construct();
	return result;}

Dynamic Function3Extensions_obj::swallow( Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function3Extensions_obj::swallow")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",690)
	return ::Function3Extensions_obj::toEffect(::Function3Extensions_obj::swallowWith(f,null()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function3Extensions_obj,swallow,return )

Dynamic Function3Extensions_obj::swallowWith( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function3Extensions_obj::swallowWith")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",692)
	Array< Dynamic > d = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",692)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f,Array< Dynamic >,d)
	Dynamic run(Dynamic a,Dynamic b,Dynamic c){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",694)
			try{
				HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",695)
				return f->__get(0)(a,b,c);
			}
			catch(Dynamic __e){
				{
					Dynamic e = __e;{
					}
				}
			}
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",698)
			return d->__get(0);
		}
		return null();
	}
	HX_END_LOCAL_FUNC3(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",693)
	return  Dynamic(new _Function_1_1(f,d));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function3Extensions_obj,swallowWith,return )

Dynamic Function3Extensions_obj::thenDo( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function3Extensions_obj::thenDo")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",701)
	Array< Dynamic > f2 = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",701)
	Array< Dynamic > f1 = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f1,Array< Dynamic >,f2)
	Void run(Dynamic p1,Dynamic p2,Dynamic p3){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",703)
			f1->__get(0)(p1,p2,p3);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",704)
			f2->__get(0)(p1,p2,p3);
		}
		return null();
	}
	HX_END_LOCAL_FUNC3((void))

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",702)
	return  Dynamic(new _Function_1_1(f1,f2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function3Extensions_obj,thenDo,return )

Dynamic Function3Extensions_obj::returning( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function3Extensions_obj::returning")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",707)
	Array< Dynamic > thunk = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",707)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f,Array< Dynamic >,thunk)
	Dynamic run(Dynamic p1,Dynamic p2,Dynamic p3){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",709)
			f->__get(0)(p1,p2,p3);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",711)
			return thunk->__get(0)();
		}
		return null();
	}
	HX_END_LOCAL_FUNC3(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",708)
	return  Dynamic(new _Function_1_1(f,thunk));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function3Extensions_obj,returning,return )

Dynamic Function3Extensions_obj::returningC( Dynamic f,Dynamic value){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function3Extensions_obj::returningC")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",715)
	return ::Function3Extensions_obj::returning(f,value->__Field(HX_CSTRING("toThunk"))());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function3Extensions_obj,returningC,return )

Dynamic Function3Extensions_obj::curry( Dynamic $t3){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function3Extensions_obj::curry")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",717)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t3);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Dynamic run(Dynamic $t2){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",718)
			Array< Dynamic > p1 = Array_obj< Dynamic >::__new().Add($t2);

			HX_BEGIN_LOCAL_FUNC2(_Function_2_1,Array< Dynamic >,f,Array< Dynamic >,p1)
			Dynamic run(Dynamic $t1){
{
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",719)
					Array< Dynamic > p2 = Array_obj< Dynamic >::__new().Add($t1);

					HX_BEGIN_LOCAL_FUNC3(_Function_3_1,Array< Dynamic >,p1,Array< Dynamic >,f,Array< Dynamic >,p2)
					Dynamic run(Dynamic p3){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",721)
							return f->__get(0)(p1->__get(0),p2->__get(0),p3);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",720)
					return  Dynamic(new _Function_3_1(p1,f,p2));
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",719)
			return  Dynamic(new _Function_2_1(f,p1));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",718)
	return  Dynamic(new _Function_1_1(f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function3Extensions_obj,curry,return )

Dynamic Function3Extensions_obj::uncurry( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function3Extensions_obj::uncurry")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",726)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Dynamic run(Dynamic p1,Dynamic p2,Dynamic p3){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",728)
			return f->__get(0)(p1)(p2)(p3);
		}
		return null();
	}
	HX_END_LOCAL_FUNC3(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",727)
	return  Dynamic(new _Function_1_1(f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function3Extensions_obj,uncurry,return )

Dynamic Function3Extensions_obj::lazy( Dynamic $t1,Dynamic $t2,Dynamic $t3,Dynamic $t4){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function3Extensions_obj::lazy")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",731)
	Array< Dynamic > p3 = Array_obj< Dynamic >::__new().Add($t4);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",731)
	Array< Dynamic > p2 = Array_obj< Dynamic >::__new().Add($t3);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",731)
	Array< Dynamic > p1 = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",731)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",732)
	Array< Dynamic > r = Array_obj< Dynamic >::__new().Add(null());

	HX_BEGIN_LOCAL_FUNC5(_Function_1_1,Array< Dynamic >,p1,Array< Dynamic >,p3,Array< Dynamic >,r,Array< Dynamic >,f,Array< Dynamic >,p2)
	Dynamic run(){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( Array< Dynamic > &p1,Array< Dynamic > &p3,Array< Dynamic > &r,Array< Dynamic > &f,Array< Dynamic > &p2){
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",735)
					r[0] = f->__get(0)(p1->__get(0),p2->__get(0),p3->__get(0));
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",735)
					return r->__get(0);
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",735)
			return (  ((r->__get(0) == null())) ? Dynamic(_Function_2_1::Block(p1,p3,r,f,p2)) : Dynamic(r->__get(0)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",734)
	return  Dynamic(new _Function_1_1(p1,p3,r,f,p2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Function3Extensions_obj,lazy,return )

Dynamic Function3Extensions_obj::toEffect( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function3Extensions_obj::toEffect")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",738)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Void run(Dynamic p1,Dynamic p2,Dynamic p3){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",740)
			f->__get(0)(p1,p2,p3);
		}
		return null();
	}
	HX_END_LOCAL_FUNC3((void))

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",739)
	return  Dynamic(new _Function_1_1(f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function3Extensions_obj,toEffect,return )


Function3Extensions_obj::Function3Extensions_obj()
{
}

void Function3Extensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Function3Extensions);
	HX_MARK_END_CLASS();
}

Dynamic Function3Extensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
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

Dynamic Function3Extensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Function3Extensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("swallow"),
	HX_CSTRING("swallowWith"),
	HX_CSTRING("thenDo"),
	HX_CSTRING("returning"),
	HX_CSTRING("returningC"),
	HX_CSTRING("curry"),
	HX_CSTRING("uncurry"),
	HX_CSTRING("lazy"),
	HX_CSTRING("toEffect"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Function3Extensions_obj::__mClass;

void Function3Extensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Function3Extensions"), hx::TCanCast< Function3Extensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Function3Extensions_obj::__boot()
{
}

