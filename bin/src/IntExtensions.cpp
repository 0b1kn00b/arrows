#include <hxcpp.h>

#ifndef INCLUDED_FloatExtensions
#include <FloatExtensions.h>
#endif
#ifndef INCLUDED_IntExtensions
#include <IntExtensions.h>
#endif
#ifndef INCLUDED_Stax
#include <Stax.h>
#endif
#ifndef INCLUDED_StringExtensions
#include <StringExtensions.h>
#endif
#ifndef INCLUDED_haxe_text_json_JValue
#include <haxe/text/json/JValue.h>
#endif

Void IntExtensions_obj::__construct()
{
	return null();
}

IntExtensions_obj::~IntExtensions_obj() { }

Dynamic IntExtensions_obj::__CreateEmpty() { return  new IntExtensions_obj; }
hx::ObjectPtr< IntExtensions_obj > IntExtensions_obj::__new()
{  hx::ObjectPtr< IntExtensions_obj > result = new IntExtensions_obj();
	result->__construct();
	return result;}

Dynamic IntExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IntExtensions_obj > result = new IntExtensions_obj();
	result->__construct();
	return result;}

int IntExtensions_obj::max( int v1,int v2){
	HX_SOURCE_PUSH("IntExtensions_obj::max")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",123)
	return (  ((v2 > v1)) ? int(v2) : int(v1) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IntExtensions_obj,max,return )

int IntExtensions_obj::min( int v1,int v2){
	HX_SOURCE_PUSH("IntExtensions_obj::min")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",124)
	return (  ((v2 < v1)) ? int(v2) : int(v1) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IntExtensions_obj,min,return )

bool IntExtensions_obj::toBool( int v){
	HX_SOURCE_PUSH("IntExtensions_obj::toBool")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",125)
	return (  ((v == 0)) ? bool(false) : bool(true) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IntExtensions_obj,toBool,return )

double IntExtensions_obj::toFloat( int v){
	HX_SOURCE_PUSH("IntExtensions_obj::toFloat")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",126)
	return v;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IntExtensions_obj,toFloat,return )

Dynamic IntExtensions_obj::to( int $t1,int $t2){
	HX_SOURCE_PUSH("IntExtensions_obj::to")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",128)
	Array< int > end = Array_obj< int >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",128)
	Array< int > start = Array_obj< int >::__new().Add($t1);
	struct _Function_1_1{
		inline static Dynamic Block( Array< int > &start,Array< int > &end){
			hx::Anon __result = hx::Anon_obj::Create();

			HX_BEGIN_LOCAL_FUNC2(_Function_2_1,Array< int >,start,Array< int >,end)
			Dynamic run(){
{
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",131)
					Array< int > cur = Array_obj< int >::__new().Add(start->__get(0));
					struct _Function_3_1{
						inline static Dynamic Block( Array< int > &cur,Array< int > &end){
							hx::Anon __result = hx::Anon_obj::Create();

							HX_BEGIN_LOCAL_FUNC2(_Function_4_1,Array< int >,cur,Array< int >,end)
							bool run(){
{
									HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",134)
									return (cur->__get(0) <= end->__get(0));
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							__result->Add(HX_CSTRING("hasNext") ,  Dynamic(new _Function_4_1(cur,end)));

							HX_BEGIN_LOCAL_FUNC1(_Function_4_2,Array< int >,cur)
							int run(){
{
									HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",135)
									int next = cur->__get(0);
									HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",135)
									++(cur[0]);
									HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",135)
									return next;
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							__result->Add(HX_CSTRING("next") ,  Dynamic(new _Function_4_2(cur)));
							return __result;
						}
					};
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",133)
					return _Function_3_1::Block(cur,end);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0(return)

			__result->Add(HX_CSTRING("iterator") ,  Dynamic(new _Function_2_1(start,end)));
			return __result;
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",129)
	return _Function_1_1::Block(start,end);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IntExtensions_obj,to,return )

Dynamic IntExtensions_obj::until( int start,int end){
	__SAFE_POINT
	HX_SOURCE_PUSH("IntExtensions_obj::until")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",142)
	return ::IntExtensions_obj::to(start,(end - 1));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IntExtensions_obj,until,return )

int IntExtensions_obj::compare( int v1,int v2){
	HX_SOURCE_PUSH("IntExtensions_obj::compare")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",145)
	return (v1 - v2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IntExtensions_obj,compare,return )

bool IntExtensions_obj::equals( int v1,int v2){
	HX_SOURCE_PUSH("IntExtensions_obj::equals")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",148)
	return (v1 == v2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IntExtensions_obj,equals,return )

::String IntExtensions_obj::toString( int v){
	HX_SOURCE_PUSH("IntExtensions_obj::toString")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",151)
	return (HX_CSTRING("") + v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IntExtensions_obj,toString,return )

int IntExtensions_obj::hashCode( int v){
	HX_SOURCE_PUSH("IntExtensions_obj::hashCode")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",154)
	return (v * 196613);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IntExtensions_obj,hashCode,return )

::haxe::text::json::JValue IntExtensions_obj::decompose( int v){
	__SAFE_POINT
	HX_SOURCE_PUSH("IntExtensions_obj::decompose")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",157)
	return ::haxe::text::json::JValue_obj::JNumber(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(IntExtensions_obj,decompose,return )

int IntExtensions_obj::extract( ::Class c,::haxe::text::json::JValue v){
	__SAFE_POINT
	HX_SOURCE_PUSH("IntExtensions_obj::extract")
	struct _Function_1_1{
		inline static int Block( ::haxe::text::json::JValue &v){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",160)
			::haxe::text::json::JValue _switch_1 = (v);
			switch((_switch_1)->GetIndex()){
				case 2: {
					double v1 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",161)
						return ::FloatExtensions_obj::toInt(v1);
					}
				}
				;break;
				case 3: {
					::String v1 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",162)
						return ::StringExtensions_obj::toInt(v1,null());
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",164)
					return ::Stax_obj::error((HX_CSTRING("Expected Int but found: ") + v)).Cast< int >();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",160)
	return _Function_1_1::Block(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(IntExtensions_obj,extract,return )


IntExtensions_obj::IntExtensions_obj()
{
}

void IntExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IntExtensions);
	HX_MARK_END_CLASS();
}

Dynamic IntExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"to") ) { return to_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"max") ) { return max_dyn(); }
		if (HX_FIELD_EQ(inName,"min") ) { return min_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"until") ) { return until_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toBool") ) { return toBool_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toFloat") ) { return toFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		if (HX_FIELD_EQ(inName,"extract") ) { return extract_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic IntExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void IntExtensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("max"),
	HX_CSTRING("min"),
	HX_CSTRING("toBool"),
	HX_CSTRING("toFloat"),
	HX_CSTRING("to"),
	HX_CSTRING("until"),
	HX_CSTRING("compare"),
	HX_CSTRING("equals"),
	HX_CSTRING("toString"),
	HX_CSTRING("hashCode"),
	HX_CSTRING("decompose"),
	HX_CSTRING("extract"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class IntExtensions_obj::__mClass;

void IntExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("IntExtensions"), hx::TCanCast< IntExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void IntExtensions_obj::__boot()
{
}

