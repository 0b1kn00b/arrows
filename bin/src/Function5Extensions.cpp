#include <hxcpp.h>

#ifndef INCLUDED_Function5Extensions
#include <Function5Extensions.h>
#endif

Void Function5Extensions_obj::__construct()
{
	return null();
}

Function5Extensions_obj::~Function5Extensions_obj() { }

Dynamic Function5Extensions_obj::__CreateEmpty() { return  new Function5Extensions_obj; }
hx::ObjectPtr< Function5Extensions_obj > Function5Extensions_obj::__new()
{  hx::ObjectPtr< Function5Extensions_obj > result = new Function5Extensions_obj();
	result->__construct();
	return result;}

Dynamic Function5Extensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Function5Extensions_obj > result = new Function5Extensions_obj();
	result->__construct();
	return result;}

Dynamic Function5Extensions_obj::swallow( Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function5Extensions_obj::swallow")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",804)
	return ::Function5Extensions_obj::toEffect(::Function5Extensions_obj::swallowWith(f,null()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function5Extensions_obj,swallow,return )

Dynamic Function5Extensions_obj::swallowWith( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function5Extensions_obj::swallowWith")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",806)
	Array< Dynamic > def = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",806)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f,Array< Dynamic >,def)
	Dynamic run(Dynamic a,Dynamic b,Dynamic c,Dynamic d,Dynamic e){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",808)
			try{
				HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",809)
				return f->__get(0)(a,b,c,d,e);
			}
			catch(Dynamic __e){
				{
					Dynamic e1 = __e;{
					}
				}
			}
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",812)
			return def->__get(0);
		}
		return null();
	}
	HX_END_LOCAL_FUNC5(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",807)
	return  Dynamic(new _Function_1_1(f,def));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function5Extensions_obj,swallowWith,return )

Dynamic Function5Extensions_obj::thenDo( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function5Extensions_obj::thenDo")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",815)
	Array< Dynamic > f2 = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",815)
	Array< Dynamic > f1 = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f1,Array< Dynamic >,f2)
	Void run(Dynamic p1,Dynamic p2,Dynamic p3,Dynamic p4,Dynamic p5){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",817)
			f1->__get(0)(p1,p2,p3,p4,p5);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",818)
			f2->__get(0)(p1,p2,p3,p4,p5);
		}
		return null();
	}
	HX_END_LOCAL_FUNC5((void))

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",816)
	return  Dynamic(new _Function_1_1(f1,f2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function5Extensions_obj,thenDo,return )

Dynamic Function5Extensions_obj::returning( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function5Extensions_obj::returning")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",821)
	Array< Dynamic > thunk = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",821)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f,Array< Dynamic >,thunk)
	Dynamic run(Dynamic p1,Dynamic p2,Dynamic p3,Dynamic p4,Dynamic p5){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",823)
			f->__get(0)(p1,p2,p3,p4,p5);
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",825)
			return thunk->__get(0)();
		}
		return null();
	}
	HX_END_LOCAL_FUNC5(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",822)
	return  Dynamic(new _Function_1_1(f,thunk));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function5Extensions_obj,returning,return )

Dynamic Function5Extensions_obj::returningC( Dynamic f,Dynamic value){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function5Extensions_obj::returningC")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",829)
	return ::Function5Extensions_obj::returning(f,value->__Field(HX_CSTRING("toThunk"))());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function5Extensions_obj,returningC,return )

Dynamic Function5Extensions_obj::curry( Dynamic $t5){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function5Extensions_obj::curry")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",831)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t5);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Dynamic run(Dynamic $t4){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",832)
			Array< Dynamic > p1 = Array_obj< Dynamic >::__new().Add($t4);

			HX_BEGIN_LOCAL_FUNC2(_Function_2_1,Array< Dynamic >,f,Array< Dynamic >,p1)
			Dynamic run(Dynamic $t3){
{
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",833)
					Array< Dynamic > p2 = Array_obj< Dynamic >::__new().Add($t3);

					HX_BEGIN_LOCAL_FUNC3(_Function_3_1,Array< Dynamic >,p1,Array< Dynamic >,f,Array< Dynamic >,p2)
					Dynamic run(Dynamic $t2){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",834)
							Array< Dynamic > p3 = Array_obj< Dynamic >::__new().Add($t2);

							HX_BEGIN_LOCAL_FUNC4(_Function_4_1,Array< Dynamic >,p1,Array< Dynamic >,p3,Array< Dynamic >,f,Array< Dynamic >,p2)
							Dynamic run(Dynamic $t1){
{
									__SAFE_POINT
									HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",835)
									Array< Dynamic > p4 = Array_obj< Dynamic >::__new().Add($t1);

									HX_BEGIN_LOCAL_FUNC5(_Function_5_1,Array< Dynamic >,p1,Array< Dynamic >,p4,Array< Dynamic >,p3,Array< Dynamic >,f,Array< Dynamic >,p2)
									Dynamic run(Dynamic p5){
{
											__SAFE_POINT
											HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",837)
											return f->__get(0)(p1->__get(0),p2->__get(0),p3->__get(0),p4->__get(0),p5);
										}
										return null();
									}
									HX_END_LOCAL_FUNC1(return)

									HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",836)
									return  Dynamic(new _Function_5_1(p1,p4,p3,f,p2));
								}
								return null();
							}
							HX_END_LOCAL_FUNC1(return)

							HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",835)
							return  Dynamic(new _Function_4_1(p1,p3,f,p2));
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",834)
					return  Dynamic(new _Function_3_1(p1,f,p2));
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",833)
			return  Dynamic(new _Function_2_1(f,p1));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",832)
	return  Dynamic(new _Function_1_1(f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function5Extensions_obj,curry,return )

Dynamic Function5Extensions_obj::uncurry( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function5Extensions_obj::uncurry")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",844)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Dynamic run(Dynamic p1,Dynamic p2,Dynamic p3,Dynamic p4,Dynamic p5){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",846)
			return f->__get(0)(p1)(p2)(p3)(p4)(p5);
		}
		return null();
	}
	HX_END_LOCAL_FUNC5(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",845)
	return  Dynamic(new _Function_1_1(f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function5Extensions_obj,uncurry,return )

Dynamic Function5Extensions_obj::lazy( Dynamic $t1,Dynamic $t2,Dynamic $t3,Dynamic $t4,Dynamic $t5,Dynamic $t6){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function5Extensions_obj::lazy")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",849)
	Array< Dynamic > p5 = Array_obj< Dynamic >::__new().Add($t6);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",849)
	Array< Dynamic > p4 = Array_obj< Dynamic >::__new().Add($t5);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",849)
	Array< Dynamic > p3 = Array_obj< Dynamic >::__new().Add($t4);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",849)
	Array< Dynamic > p2 = Array_obj< Dynamic >::__new().Add($t3);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",849)
	Array< Dynamic > p1 = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",849)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",850)
	Array< Dynamic > r = Array_obj< Dynamic >::__new().Add(null());

	HX_BEGIN_LOCAL_FUNC7(_Function_1_1,Array< Dynamic >,f,Array< Dynamic >,p5,Array< Dynamic >,p4,Array< Dynamic >,r,Array< Dynamic >,p3,Array< Dynamic >,p2,Array< Dynamic >,p1)
	Dynamic run(){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Dynamic Block( Array< Dynamic > &f,Array< Dynamic > &p5,Array< Dynamic > &p4,Array< Dynamic > &r,Array< Dynamic > &p3,Array< Dynamic > &p2,Array< Dynamic > &p1){
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",853)
					r[0] = f->__get(0)(p1->__get(0),p2->__get(0),p3->__get(0),p4->__get(0),p5->__get(0));
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",853)
					return r->__get(0);
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",853)
			return (  ((r->__get(0) == null())) ? Dynamic(_Function_2_1::Block(f,p5,p4,r,p3,p2,p1)) : Dynamic(r->__get(0)) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",852)
	return  Dynamic(new _Function_1_1(f,p5,p4,r,p3,p2,p1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Function5Extensions_obj,lazy,return )

Dynamic Function5Extensions_obj::toEffect( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function5Extensions_obj::toEffect")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",856)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Void run(Dynamic p1,Dynamic p2,Dynamic p3,Dynamic p4,Dynamic p5){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",858)
			f->__get(0)(p1,p2,p3,p4,p5);
		}
		return null();
	}
	HX_END_LOCAL_FUNC5((void))

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",857)
	return  Dynamic(new _Function_1_1(f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function5Extensions_obj,toEffect,return )


Function5Extensions_obj::Function5Extensions_obj()
{
}

void Function5Extensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Function5Extensions);
	HX_MARK_END_CLASS();
}

Dynamic Function5Extensions_obj::__Field(const ::String &inName)
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

Dynamic Function5Extensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Function5Extensions_obj::__GetFields(Array< ::String> &outFields)
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

Class Function5Extensions_obj::__mClass;

void Function5Extensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Function5Extensions"), hx::TCanCast< Function5Extensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Function5Extensions_obj::__boot()
{
}

