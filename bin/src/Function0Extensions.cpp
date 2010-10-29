#include <hxcpp.h>

#ifndef INCLUDED_DynamicExtensions
#include <DynamicExtensions.h>
#endif
#ifndef INCLUDED_Function0Extensions
#include <Function0Extensions.h>
#endif

Void Function0Extensions_obj::__construct()
{
	return null();
}

Function0Extensions_obj::~Function0Extensions_obj() { }

Dynamic Function0Extensions_obj::__CreateEmpty() { return  new Function0Extensions_obj; }
hx::ObjectPtr< Function0Extensions_obj > Function0Extensions_obj::__new()
{  hx::ObjectPtr< Function0Extensions_obj > result = new Function0Extensions_obj();
	result->__construct();
	return result;}

Dynamic Function0Extensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Function0Extensions_obj > result = new Function0Extensions_obj();
	result->__construct();
	return result;}

Dynamic Function0Extensions_obj::swallow( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function0Extensions_obj::swallow")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",526)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Void run(){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",528)
			try{
				HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",529)
				f->__get(0)();
			}
			catch(Dynamic __e){
				{
					Dynamic e = __e;{
					}
				}
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",527)
	return  Dynamic(new _Function_1_1(f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function0Extensions_obj,swallow,return )

Dynamic Function0Extensions_obj::thenDo( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function0Extensions_obj::thenDo")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",535)
	Array< Dynamic > f2 = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",535)
	Array< Dynamic > f1 = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f1,Array< Dynamic >,f2)
	Void run(){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",537)
			f1->__get(0)();
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",538)
			f2->__get(0)();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",536)
	return  Dynamic(new _Function_1_1(f1,f2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function0Extensions_obj,thenDo,return )

Dynamic Function0Extensions_obj::returning( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function0Extensions_obj::returning")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",541)
	Array< Dynamic > thunk = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",541)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f,Array< Dynamic >,thunk)
	Dynamic run(){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",543)
			f->__get(0)();
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",545)
			return thunk->__get(0)();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",542)
	return  Dynamic(new _Function_1_1(f,thunk));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function0Extensions_obj,returning,return )

Dynamic Function0Extensions_obj::returningC( Dynamic f,Dynamic value){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function0Extensions_obj::returningC")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",549)
	return ::Function0Extensions_obj::returning(f,::DynamicExtensions_obj::toThunk(value));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Function0Extensions_obj,returningC,return )

Dynamic Function0Extensions_obj::promote( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function0Extensions_obj::promote")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",551)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Dynamic run(Dynamic a){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",553)
			return f->__get(0)();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",552)
	return  Dynamic(new _Function_1_1(f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function0Extensions_obj,promote,return )

Dynamic Function0Extensions_obj::promoteEffect( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function0Extensions_obj::promoteEffect")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",557)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Void run(Dynamic a){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",559)
			f->__get(0)();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",558)
	return  Dynamic(new _Function_1_1(f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function0Extensions_obj,promoteEffect,return )

Dynamic Function0Extensions_obj::stage( Dynamic f,Dynamic before,Dynamic after){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function0Extensions_obj::stage")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",564)
	Dynamic state = before();
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",566)
	Dynamic result = f();
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",568)
	after(state);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",570)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Function0Extensions_obj,stage,return )

Dynamic Function0Extensions_obj::toEffect( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Function0Extensions_obj::toEffect")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",573)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,f)
	Void run(){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",575)
			f->__get(0)();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",574)
	return  Dynamic(new _Function_1_1(f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Function0Extensions_obj,toEffect,return )


Function0Extensions_obj::Function0Extensions_obj()
{
}

void Function0Extensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Function0Extensions);
	HX_MARK_END_CLASS();
}

Dynamic Function0Extensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stage") ) { return stage_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"thenDo") ) { return thenDo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"swallow") ) { return swallow_dyn(); }
		if (HX_FIELD_EQ(inName,"promote") ) { return promote_dyn(); }
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
	case 13:
		if (HX_FIELD_EQ(inName,"promoteEffect") ) { return promoteEffect_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Function0Extensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Function0Extensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("swallow"),
	HX_CSTRING("thenDo"),
	HX_CSTRING("returning"),
	HX_CSTRING("returningC"),
	HX_CSTRING("promote"),
	HX_CSTRING("promoteEffect"),
	HX_CSTRING("stage"),
	HX_CSTRING("toEffect"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Function0Extensions_obj::__mClass;

void Function0Extensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Function0Extensions"), hx::TCanCast< Function0Extensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Function0Extensions_obj::__boot()
{
}

