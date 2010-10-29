#include <hxcpp.h>

#ifndef INCLUDED_Function4Extensions
#include <Function4Extensions.h>
#endif

Void Function4Extensions_obj::__construct()
{
	return null();
}

Function4Extensions_obj::~Function4Extensions_obj() { }

Dynamic Function4Extensions_obj::__CreateEmpty() { return  new Function4Extensions_obj; }
hx::ObjectPtr< Function4Extensions_obj > Function4Extensions_obj::__new()
{  hx::ObjectPtr< Function4Extensions_obj > result = new Function4Extensions_obj();
	result->__construct();
	return result;}

Dynamic Function4Extensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Function4Extensions_obj > result = new Function4Extensions_obj();
	result->__construct();
	return result;}

Dynamic Function4Extensions_obj::swallow( Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function4Extensions_obj::swallow")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",746)
	return ::Function4Extensions_obj::toEffect(::Function4Extensions_obj::swallowWith(f,null()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function4Extensions_obj,swallow,return )

Dynamic Function4Extensions_obj::swallowWith( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function4Extensions_obj::swallowWith")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",748)
	Array< Dynamic > def = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",748)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f,Array< Dynamic >,def)
	Dynamic run(Dynamic a,Dynamic b,Dynamic c,Dynamic d){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",750)
			try{
				HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",751)
				return f->__get(0)(a,b,c,d);
			}
			catch(Dynamic __e){
				{
					Dynamic e = __e;{
					}
				}
			}
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",754)
			return def->__get(0);
		}
		return null();
	}
	HX_END_LOCAL_FUNC4(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",749)
	return  Dynamic(new _Function_1_1(f,def));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function4Extensions_obj,swallowWith,return )

Dynamic Function4Extensions_obj::thenDo( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function4Extensions_obj::thenDo")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",757)
	Array< Dynamic > f2 = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",757)
	Array< Dynamic > f1 = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f1,Array< Dynamic >,f2)
	Void run(Dynamic p1,Dynamic p2,Dynamic p3,Dynamic p4){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",759)
			f1->__get(0)(p1,p2,p3,p4);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",760)
			f2->__get(0)(p1,p2,p3,p4);
		}
		return null();
	}
	HX_END_LOCAL_FUNC4((void))

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",758)
	return  Dynamic(new _Function_1_1(f1,f2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function4Extensions_obj,thenDo,return )

Dynamic Function4Extensions_obj::returning( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function4Extensions_obj::returning")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",763)
	Array< Dynamic > thunk = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",763)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f,Array< Dynamic >,thunk)
	Dynamic run(Dynamic p1,Dynamic p2,Dynamic p3,Dynamic p4){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",765)
			f->__get(0)(p1,p2,p3,p4);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",767)
			return thunk->__get(0)();
		}
		return null();
	}
	HX_END_LOCAL_FUNC4(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",764)
	return  Dynamic(new _Function_1_1(f,thunk));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function4Extensions_obj,returning,return )

Dynamic Function4Extensions_obj::returningC( Dynamic f,Dynamic value){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function4Extensions_obj::returningC")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",771)
	return ::Function4Extensions_obj::returning(f,value->__Field(HX_CSTRING("toThunk"))());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function4Extensions_obj,returningC,return )

Dynamic Function4Extensions_obj::curry( Dynamic $t4){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function4Extensions_obj::curry")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",773)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t4);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Dynamic run(Dynamic $t3){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",774)
			Array< Dynamic > p1 = Array_obj< Dynamic >::__new().Add($t3);

			HX_BEGIN_LOCAL_FUNC2(_Function_2_1,Array< Dynamic >,f,Array< Dynamic >,p1)
			Dynamic run(Dynamic $t2){
{
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",775)
					Array< Dynamic > p2 = Array_obj< Dynamic >::__new().Add($t2);

					HX_BEGIN_LOCAL_FUNC3(_Function_3_1,Array< Dynamic >,p1,Array< Dynamic >,f,Array< Dynamic >,p2)
					Dynamic run(Dynamic $t1){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",776)
							Array< Dynamic > p3 = Array_obj< Dynamic >::__new().Add($t1);

							HX_BEGIN_LOCAL_FUNC4(_Function_4_1,Array< Dynamic >,p1,Array< Dynamic >,p3,Array< Dynamic >,f,Array< Dynamic >,p2)
							Dynamic run(Dynamic p4){
{
									__SAFE_POINT
									HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",778)
									return f->__get(0)(p1->__get(0),p2->__get(0),p3->__get(0),p4);
								}
								return null();
							}
							HX_END_LOCAL_FUNC1(return)

							HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",777)
							return  Dynamic(new _Function_4_1(p1,p3,f,p2));
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",776)
					return  Dynamic(new _Function_3_1(p1,f,p2));
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",775)
			return  Dynamic(new _Function_2_1(f,p1));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",774)
	return  Dynamic(new _Function_1_1(f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function4Extensions_obj,curry,return )

Dynamic Function4Extensions_obj::uncurry( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function4Extensions_obj::uncurry")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",784)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Dynamic run(Dynamic p1,Dynamic p2,Dynamic p3,Dynamic p4){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",786)
			return f->__get(0)(p1)(p2)(p3)(p4);
		}
		return null();
	}
	HX_END_LOCAL_FUNC4(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",785)
	return  Dynamic(new _Function_1_1(f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function4Extensions_obj,uncurry,return )

Dynamic Function4Extensions_obj::lazy( Dynamic $t1,Dynamic $t2,Dynamic $t3,Dynamic $t4,Dynamic $t5){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function4Extensions_obj::lazy")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",789)
	Array< Dynamic > p4 = Array_obj< Dynamic >::__new().Add($t5);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",789)
	Array< Dynamic > p3 = Array_obj< Dynamic >::__new().Add($t4);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",789)
	Array< Dynamic > p2 = Array_obj< Dynamic >::__new().Add($t3);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",789)
	Array< Dynamic > p1 = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",789)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",790)
	Array< Dynamic > r = Array_obj< Dynamic >::__new().Add(null());

	HX_BEGIN_LOCAL_FUNC6(_Function_1_1,Array< Dynamic >,p1,Array< Dynamic >,p4,Array< Dynamic >,p3,Array< Dynamic >,r,Array< Dynamic >,f,Array< Dynamic >,p2)
	Dynamic run(){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( Array< Dynamic > &p1,Array< Dynamic > &p4,Array< Dynamic > &p3,Array< Dynamic > &r,Array< Dynamic > &f,Array< Dynamic > &p2){
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",793)
					r[0] = f->__get(0)(p1->__get(0),p2->__get(0),p3->__get(0),p4->__get(0));
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",793)
					return r->__get(0);
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",793)
			return (  ((r->__get(0) == null())) ? Dynamic(_Function_2_1::Block(p1,p4,p3,r,f,p2)) : Dynamic(r->__get(0)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",792)
	return  Dynamic(new _Function_1_1(p1,p4,p3,r,f,p2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Function4Extensions_obj,lazy,return )

Dynamic Function4Extensions_obj::toEffect( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function4Extensions_obj::toEffect")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",796)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Void run(Dynamic p1,Dynamic p2,Dynamic p3,Dynamic p4){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",798)
			f->__get(0)(p1,p2,p3,p4);
		}
		return null();
	}
	HX_END_LOCAL_FUNC4((void))

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",797)
	return  Dynamic(new _Function_1_1(f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function4Extensions_obj,toEffect,return )


Function4Extensions_obj::Function4Extensions_obj()
{
}

void Function4Extensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Function4Extensions);
	HX_MARK_END_CLASS();
}

Dynamic Function4Extensions_obj::__Field(const ::String &inName)
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

Dynamic Function4Extensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Function4Extensions_obj::__GetFields(Array< ::String> &outFields)
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

Class Function4Extensions_obj::__mClass;

void Function4Extensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Function4Extensions"), hx::TCanCast< Function4Extensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Function4Extensions_obj::__boot()
{
}

