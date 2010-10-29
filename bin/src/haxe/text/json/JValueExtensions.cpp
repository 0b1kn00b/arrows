#include <hxcpp.h>

#ifndef INCLUDED_ArrayExtensions
#include <ArrayExtensions.h>
#endif
#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_Product
#include <Product.h>
#endif
#ifndef INCLUDED_Stax
#include <Stax.h>
#endif
#ifndef INCLUDED_Tuple2
#include <Tuple2.h>
#endif
#ifndef INCLUDED__Prelude_AbstractProduct
#include <_Prelude/AbstractProduct.h>
#endif
#ifndef INCLUDED_haxe_text_json_JValue
#include <haxe/text/json/JValue.h>
#endif
#ifndef INCLUDED_haxe_text_json_JValueExtensions
#include <haxe/text/json/JValueExtensions.h>
#endif
namespace haxe{
namespace text{
namespace json{

Void JValueExtensions_obj::__construct()
{
	return null();
}

JValueExtensions_obj::~JValueExtensions_obj() { }

Dynamic JValueExtensions_obj::__CreateEmpty() { return  new JValueExtensions_obj; }
hx::ObjectPtr< JValueExtensions_obj > JValueExtensions_obj::__new()
{  hx::ObjectPtr< JValueExtensions_obj > result = new JValueExtensions_obj();
	result->__construct();
	return result;}

Dynamic JValueExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< JValueExtensions_obj > result = new JValueExtensions_obj();
	result->__construct();
	return result;}

Dynamic JValueExtensions_obj::fold( ::haxe::text::json::JValue v,Dynamic initial,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("JValueExtensions_obj::fold")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",26)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",27)
	Array< Dynamic > cur = Array_obj< Dynamic >::__new().Add(initial);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,cur,Array< Dynamic >,f)
	::haxe::text::json::JValue run(::haxe::text::json::JValue j){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",29)
			cur[0] = f->__get(0)(cur->__get(0),j);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",29)
			return j;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",29)
	::haxe::text::json::JValueExtensions_obj::map(v, Dynamic(new _Function_1_1(cur,f)));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",31)
	return cur->__get(0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JValueExtensions_obj,fold,return )

::haxe::text::json::JValue JValueExtensions_obj::path( ::haxe::text::json::JValue v,::String s){
	__SAFE_POINT
	HX_SOURCE_PUSH("JValueExtensions_obj::path")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",35)
	Array< ::String > ss = s.split(HX_CSTRING("/"));
	::haxe::text::json::JValue c = v;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",36)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(ss->iterator());  __it->hasNext(); ){
		::String x = __it->next();
		if ((x.length > 0))
			c = ::haxe::text::json::JValueExtensions_obj::get(c,x);
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",37)
	return c;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JValueExtensions_obj,path,return )

::haxe::text::json::JValue JValueExtensions_obj::map( ::haxe::text::json::JValue v,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("JValueExtensions_obj::map")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",40)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",41)
	::haxe::text::json::JValue _switch_1 = (v);
	switch((_switch_1)->GetIndex()){
		case 4: {
			Array< ::haxe::text::json::JValue > xs = _switch_1->__Param(0);
{

				HX_BEGIN_LOCAL_FUNC1(_Function_2_1,Array< Dynamic >,f)
				::haxe::text::json::JValue run(::haxe::text::json::JValue x){
{
						__SAFE_POINT
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",42)
						return ::haxe::text::json::JValueExtensions_obj::map(x,f->__get(0));
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",42)
				return f->__get(0)(::haxe::text::json::JValue_obj::JArray(::ArrayExtensions_obj::map(xs, Dynamic(new _Function_2_1(f)))));
			}
		}
		;break;
		case 6: {
			::haxe::text::json::JValue v1 = _switch_1->__Param(1);
			::String k = _switch_1->__Param(0);
{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",43)
				return f->__get(0)(::haxe::text::json::JValue_obj::JField(k,::haxe::text::json::JValueExtensions_obj::map(v1,f->__get(0))));
			}
		}
		;break;
		case 5: {
			Array< ::haxe::text::json::JValue > fs = _switch_1->__Param(0);
{

				HX_BEGIN_LOCAL_FUNC1(_Function_2_1,Array< Dynamic >,f)
				::haxe::text::json::JValue run(::haxe::text::json::JValue field){
{
						__SAFE_POINT
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",44)
						return ::haxe::text::json::JValueExtensions_obj::map(field,f->__get(0));
					}
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",44)
				return f->__get(0)(::haxe::text::json::JValue_obj::JObject(::ArrayExtensions_obj::map(fs, Dynamic(new _Function_2_1(f)))));
			}
		}
		;break;
		default: {
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",46)
			return f->__get(0)(v);
		}
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JValueExtensions_obj,map,return )

::Option JValueExtensions_obj::getOption( ::haxe::text::json::JValue v,::String k){
	__SAFE_POINT
	HX_SOURCE_PUSH("JValueExtensions_obj::getOption")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",51)
	::haxe::text::json::JValue _switch_2 = (v);
	switch((_switch_2)->GetIndex()){
		case 5: {
			Array< ::haxe::text::json::JValue > xs = _switch_2->__Param(0);
{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",53)
				::Hash hash = ::haxe::text::json::JValueExtensions_obj::extractHash(v);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",55)
				return (  (hash->exists(k)) ? ::Option(::Option_obj::Some(hash->__Field(HX_CSTRING("get"))(k).Cast< ::haxe::text::json::JValue >())) : ::Option(::Option_obj::None) );
			}
		}
		;break;
		default: {
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",58)
			return ::Option_obj::None;
		}
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JValueExtensions_obj,getOption,return )

::haxe::text::json::JValue JValueExtensions_obj::get( ::haxe::text::json::JValue v,::String k){
	__SAFE_POINT
	HX_SOURCE_PUSH("JValueExtensions_obj::get")
	struct _Function_1_1{
		inline static ::haxe::text::json::JValue Block( ::haxe::text::json::JValue &v,::String &k){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",62)
			::Option _switch_3 = (::haxe::text::json::JValueExtensions_obj::getOption(v,k));
			switch((_switch_3)->GetIndex()){
				case 1: {
					::haxe::text::json::JValue v1 = _switch_3->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",63)
						return v1;
					}
				}
				;break;
				case 0: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",64)
					return ::Stax_obj::error((((((HX_CSTRING("Expected to find field ") + k)) + HX_CSTRING(" in "))) + v)).Cast< ::haxe::text::json::JValue >();
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",62)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",62)
	return _Function_1_1::Block(v,k);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(JValueExtensions_obj,get,return )

::haxe::text::json::JValue JValueExtensions_obj::getOrElse( ::haxe::text::json::JValue v,::String k,Dynamic def){
	__SAFE_POINT
	HX_SOURCE_PUSH("JValueExtensions_obj::getOrElse")
	struct _Function_1_1{
		inline static ::haxe::text::json::JValue Block( ::String &k,::haxe::text::json::JValue &v,Dynamic &def){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",68)
			::Option _switch_4 = (::haxe::text::json::JValueExtensions_obj::getOption(v,k));
			switch((_switch_4)->GetIndex()){
				case 1: {
					::haxe::text::json::JValue v1 = _switch_4->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",69)
						return v1;
					}
				}
				;break;
				case 0: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",70)
					return def();
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",68)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",68)
	return _Function_1_1::Block(k,v,def);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JValueExtensions_obj,getOrElse,return )

::String JValueExtensions_obj::extractString( ::haxe::text::json::JValue v){
	__SAFE_POINT
	HX_SOURCE_PUSH("JValueExtensions_obj::extractString")
	struct _Function_1_1{
		inline static ::String Block( ::haxe::text::json::JValue &v){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",74)
			::haxe::text::json::JValue _switch_5 = (v);
			switch((_switch_5)->GetIndex()){
				case 3: {
					::String s = _switch_5->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",75)
						return s;
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",77)
					return ::Stax_obj::error((HX_CSTRING("Expected JString but found: ") + v)).Cast< ::String >();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",74)
	return _Function_1_1::Block(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JValueExtensions_obj,extractString,return )

double JValueExtensions_obj::extractNumber( ::haxe::text::json::JValue v){
	__SAFE_POINT
	HX_SOURCE_PUSH("JValueExtensions_obj::extractNumber")
	struct _Function_1_1{
		inline static double Block( ::haxe::text::json::JValue &v){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",81)
			::haxe::text::json::JValue _switch_6 = (v);
			switch((_switch_6)->GetIndex()){
				case 2: {
					double n = _switch_6->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",82)
						return n;
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",84)
					return ::Stax_obj::error((HX_CSTRING("Expected JNumber but found: ") + v)).Cast< double >();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",81)
	return _Function_1_1::Block(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JValueExtensions_obj,extractNumber,return )

bool JValueExtensions_obj::extractBool( ::haxe::text::json::JValue v){
	__SAFE_POINT
	HX_SOURCE_PUSH("JValueExtensions_obj::extractBool")
	struct _Function_1_1{
		inline static bool Block( ::haxe::text::json::JValue &v){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",88)
			::haxe::text::json::JValue _switch_7 = (v);
			switch((_switch_7)->GetIndex()){
				case 1: {
					bool b = _switch_7->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",89)
						return b;
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",91)
					return ::Stax_obj::error((HX_CSTRING("Expected JBool but found: ") + v)).Cast< bool >();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",88)
	return _Function_1_1::Block(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JValueExtensions_obj,extractBool,return )

::String JValueExtensions_obj::extractKey( ::haxe::text::json::JValue v){
	__SAFE_POINT
	HX_SOURCE_PUSH("JValueExtensions_obj::extractKey")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",95)
	return ::haxe::text::json::JValueExtensions_obj::extractField(v)->__Field(HX_CSTRING("_1")).Cast< ::String >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JValueExtensions_obj,extractKey,return )

::haxe::text::json::JValue JValueExtensions_obj::extractValue( ::haxe::text::json::JValue v){
	__SAFE_POINT
	HX_SOURCE_PUSH("JValueExtensions_obj::extractValue")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",98)
	return ::haxe::text::json::JValueExtensions_obj::extractField(v)->__Field(HX_CSTRING("_2")).Cast< ::haxe::text::json::JValue >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JValueExtensions_obj,extractValue,return )

::Tuple2 JValueExtensions_obj::extractField( ::haxe::text::json::JValue v){
	__SAFE_POINT
	HX_SOURCE_PUSH("JValueExtensions_obj::extractField")
	struct _Function_1_1{
		inline static ::Tuple2 Block( ::haxe::text::json::JValue &v){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",101)
			::haxe::text::json::JValue _switch_8 = (v);
			switch((_switch_8)->GetIndex()){
				case 6: {
					::haxe::text::json::JValue v1 = _switch_8->__Param(1);
					::String k = _switch_8->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",102)
						return ::Tuple2_obj::create(k,v1);
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",104)
					return ::Stax_obj::error((HX_CSTRING("Expected JField but found: ") + v)).Cast< ::Tuple2 >();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",101)
	return _Function_1_1::Block(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JValueExtensions_obj,extractField,return )

::Hash JValueExtensions_obj::extractHash( ::haxe::text::json::JValue v){
	__SAFE_POINT
	HX_SOURCE_PUSH("JValueExtensions_obj::extractHash")
	struct _Function_1_1{
		inline static ::Hash Block( ::haxe::text::json::JValue &v){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",108)
			::haxe::text::json::JValue _switch_9 = (v);
			switch((_switch_9)->GetIndex()){
				case 5: {
					Array< ::haxe::text::json::JValue > xs = _switch_9->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",110)
						::Hash hash = ::Hash_obj::__new();
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",112)
						{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",112)
							int _g = 0;
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",112)
							while((_g < xs->length)){
								__SAFE_POINT
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",112)
								::haxe::text::json::JValue x = xs->__get(_g);
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",112)
								++(_g);
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",113)
								::Tuple2 field = ::haxe::text::json::JValueExtensions_obj::extractField(x);
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",115)
								hash->set(field->__Field(HX_CSTRING("_1")).Cast< ::String >(),field->__Field(HX_CSTRING("_2")).Cast< ::haxe::text::json::JValue >());
							}
						}
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",118)
						return hash;
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",120)
					return ::Stax_obj::error((HX_CSTRING("Expected JObject but found: ") + v)).Cast< ::Hash >();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",108)
	return _Function_1_1::Block(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JValueExtensions_obj,extractHash,return )

Array< ::Tuple2 > JValueExtensions_obj::extractFields( ::haxe::text::json::JValue v){
	__SAFE_POINT
	HX_SOURCE_PUSH("JValueExtensions_obj::extractFields")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Array< ::Tuple2 > run(::haxe::text::json::JValue j){
{
			__SAFE_POINT
			struct _Function_2_1{
				inline static Array< ::Tuple2 > Block( ::haxe::text::json::JValue &j){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",125)
					::haxe::text::json::JValue _switch_10 = (j);
					switch((_switch_10)->GetIndex()){
						case 6: {
							::haxe::text::json::JValue v1 = _switch_10->__Param(1);
							::String k = _switch_10->__Param(0);
{
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",126)
								return Array_obj< ::Tuple2 >::__new().Add(::Tuple2_obj::create(k,v1));
							}
						}
						;break;
						default: {
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",128)
							return Array_obj< ::Tuple2 >::__new();
						}
					}
				}
			};
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",125)
			return _Function_2_1::Block(j);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",124)
	return ::ArrayExtensions_obj::flatMap(::haxe::text::json::JValueExtensions_obj::extractArray(v), Dynamic(new _Function_1_1()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JValueExtensions_obj,extractFields,return )

Array< ::haxe::text::json::JValue > JValueExtensions_obj::extractArray( ::haxe::text::json::JValue v){
	__SAFE_POINT
	HX_SOURCE_PUSH("JValueExtensions_obj::extractArray")
	struct _Function_1_1{
		inline static Array< ::haxe::text::json::JValue > Block( ::haxe::text::json::JValue &v){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",133)
			::haxe::text::json::JValue _switch_11 = (v);
			switch((_switch_11)->GetIndex()){
				case 4: {
					Array< ::haxe::text::json::JValue > xs = _switch_11->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",134)
						return xs;
					}
				}
				;break;
				case 5: {
					Array< ::haxe::text::json::JValue > xs = _switch_11->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",136)
						return xs;
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",138)
					return ::Stax_obj::error((HX_CSTRING("Expected JArray or JObject but found: ") + v)).Cast< Array< ::haxe::text::json::JValue > >();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/text/json/JValueExtensions.hx",133)
	return _Function_1_1::Block(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(JValueExtensions_obj,extractArray,return )


JValueExtensions_obj::JValueExtensions_obj()
{
}

void JValueExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JValueExtensions);
	HX_MARK_END_CLASS();
}

Dynamic JValueExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"fold") ) { return fold_dyn(); }
		if (HX_FIELD_EQ(inName,"path") ) { return path_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getOption") ) { return getOption_dyn(); }
		if (HX_FIELD_EQ(inName,"getOrElse") ) { return getOrElse_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"extractKey") ) { return extractKey_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"extractBool") ) { return extractBool_dyn(); }
		if (HX_FIELD_EQ(inName,"extractHash") ) { return extractHash_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"extractValue") ) { return extractValue_dyn(); }
		if (HX_FIELD_EQ(inName,"extractField") ) { return extractField_dyn(); }
		if (HX_FIELD_EQ(inName,"extractArray") ) { return extractArray_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"extractString") ) { return extractString_dyn(); }
		if (HX_FIELD_EQ(inName,"extractNumber") ) { return extractNumber_dyn(); }
		if (HX_FIELD_EQ(inName,"extractFields") ) { return extractFields_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic JValueExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void JValueExtensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fold"),
	HX_CSTRING("path"),
	HX_CSTRING("map"),
	HX_CSTRING("getOption"),
	HX_CSTRING("get"),
	HX_CSTRING("getOrElse"),
	HX_CSTRING("extractString"),
	HX_CSTRING("extractNumber"),
	HX_CSTRING("extractBool"),
	HX_CSTRING("extractKey"),
	HX_CSTRING("extractValue"),
	HX_CSTRING("extractField"),
	HX_CSTRING("extractHash"),
	HX_CSTRING("extractFields"),
	HX_CSTRING("extractArray"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class JValueExtensions_obj::__mClass;

void JValueExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.text.json.JValueExtensions"), hx::TCanCast< JValueExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void JValueExtensions_obj::__boot()
{
}

} // end namespace haxe
} // end namespace text
} // end namespace json
