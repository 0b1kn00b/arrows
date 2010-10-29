#include <hxcpp.h>

#ifndef INCLUDED_ArrayExtensions
#include <ArrayExtensions.h>
#endif
#ifndef INCLUDED_IterableExtensions
#include <IterableExtensions.h>
#endif
#ifndef INCLUDED_Product
#include <Product.h>
#endif
#ifndef INCLUDED_Stax
#include <Stax.h>
#endif
#ifndef INCLUDED_StringExtensions
#include <StringExtensions.h>
#endif
#ifndef INCLUDED_Tuple2
#include <Tuple2.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED__Prelude_AbstractProduct
#include <_Prelude/AbstractProduct.h>
#endif
#ifndef INCLUDED_haxe_data_collections_Collection
#include <haxe/data/collections/Collection.h>
#endif
#ifndef INCLUDED_haxe_data_collections_Map
#include <haxe/data/collections/Map.h>
#endif
#ifndef INCLUDED_haxe_data_transcode_MapExtensions
#include <haxe/data/transcode/MapExtensions.h>
#endif
#ifndef INCLUDED_haxe_data_transcode_TranscodeJValue
#include <haxe/data/transcode/TranscodeJValue.h>
#endif
#ifndef INCLUDED_haxe_functional_Foldable
#include <haxe/functional/Foldable.h>
#endif
#ifndef INCLUDED_haxe_functional_PartialFunction1
#include <haxe/functional/PartialFunction1.h>
#endif
#ifndef INCLUDED_haxe_text_json_JValue
#include <haxe/text/json/JValue.h>
#endif
namespace haxe{
namespace data{
namespace transcode{

Void MapExtensions_obj::__construct()
{
	return null();
}

MapExtensions_obj::~MapExtensions_obj() { }

Dynamic MapExtensions_obj::__CreateEmpty() { return  new MapExtensions_obj; }
hx::ObjectPtr< MapExtensions_obj > MapExtensions_obj::__new()
{  hx::ObjectPtr< MapExtensions_obj > result = new MapExtensions_obj();
	result->__construct();
	return result;}

Dynamic MapExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapExtensions_obj > result = new MapExtensions_obj();
	result->__construct();
	return result;}

::haxe::text::json::JValue MapExtensions_obj::stringKeyDecompose( ::haxe::data::collections::Map v){
	__SAFE_POINT
	HX_SOURCE_PUSH("MapExtensions_obj::stringKeyDecompose")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",49)
	Dynamic it = v->__Field(HX_CSTRING("iterator"))();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",50)
	if (it->__Field(HX_CSTRING("hasNext"))().Cast< bool >()){
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",51)
		Array< Dynamic > dv = Array_obj< Dynamic >::__new().Add(::haxe::data::transcode::TranscodeJValue_obj::getDecomposerFor(::Type_obj::_typeof(it->__Field(HX_CSTRING("next"))().Cast< ::Tuple2 >()->__Field(HX_CSTRING("_2")))));

		HX_BEGIN_LOCAL_FUNC1(_Function_2_1,Array< Dynamic >,dv)
		::haxe::text::json::JValue run(::Tuple2 t){
{
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",52)
				return ::haxe::text::json::JValue_obj::JField(t->__Field(HX_CSTRING("_1")).Cast< ::String >(),dv->__get(0)(t->__Field(HX_CSTRING("_2"))));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",52)
		return ::haxe::text::json::JValue_obj::JObject(::ArrayExtensions_obj::map(::IterableExtensions_obj::toArray(v), Dynamic(new _Function_2_1(dv))));
	}
	else{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",55)
		return ::haxe::text::json::JValue_obj::JObject(Array_obj< ::haxe::text::json::JValue >::__new());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MapExtensions_obj,stringKeyDecompose,return )

::haxe::data::collections::Map MapExtensions_obj::stringKeyExtract( ::haxe::text::json::JValue v,Dynamic $t4,Dynamic $t5,Dynamic $t6,Dynamic $t7,Dynamic $t8){
	__SAFE_POINT
	HX_SOURCE_PUSH("MapExtensions_obj::stringKeyExtract")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",59)
	Array< Dynamic > vshow = Array_obj< Dynamic >::__new().Add($t8);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",59)
	Array< Dynamic > vhash = Array_obj< Dynamic >::__new().Add($t7);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",59)
	Array< Dynamic > vequal = Array_obj< Dynamic >::__new().Add($t6);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",59)
	Array< Dynamic > vorder = Array_obj< Dynamic >::__new().Add($t5);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",59)
	Array< Dynamic > ve = Array_obj< Dynamic >::__new().Add($t4);

	HX_BEGIN_LOCAL_FUNC5(_Function_1_1,Array< Dynamic >,vorder,Array< Dynamic >,vhash,Array< Dynamic >,vequal,Array< Dynamic >,vshow,Array< Dynamic >,ve)
	::haxe::data::collections::Map run(Array< ::haxe::text::json::JValue > $t1){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",60)
			Array< Array< ::haxe::text::json::JValue > > v1 = Array_obj< Array< ::haxe::text::json::JValue > >::__new().Add($t1);

			HX_BEGIN_LOCAL_FUNC2(_Function_2_1,Array< Dynamic >,ve,Array< Array< ::haxe::text::json::JValue > >,v1)
			::Tuple2 run(::haxe::text::json::JValue j){
{
					__SAFE_POINT
					struct _Function_3_1{
						inline static ::Tuple2 Block( Array< Array< ::haxe::text::json::JValue > > &v1,::haxe::text::json::JValue &j,Array< Dynamic > &ve){
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",62)
							::haxe::text::json::JValue _switch_1 = (j);
							switch((_switch_1)->GetIndex()){
								case 6: {
									::haxe::text::json::JValue v2 = _switch_1->__Param(1);
									::String k = _switch_1->__Param(0);
{
										HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",63)
										return ::Tuple2_obj::create(k,ve->__get(0)(v2));
									}
								}
								;break;
								default: {
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",65)
									return ::Stax_obj::error((HX_CSTRING("Expected field but was: ") + v1->__get(0))).Cast< ::Tuple2 >();
								}
							}
						}
					};
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",62)
					return _Function_3_1::Block(v1,j,ve);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1(return)

			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",61)
			return ::haxe::data::collections::Map_obj::create(::StringExtensions_obj::compare_dyn(),::StringExtensions_obj::equals_dyn(),::StringExtensions_obj::hashCode_dyn(),::StringExtensions_obj::toString_dyn(),vorder->__get(0),vequal->__get(0),vhash->__get(0),vshow->__get(0))->addAll(::ArrayExtensions_obj::map(v1->__get(0), Dynamic(new _Function_2_1(ve,v1))));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",60)
	Dynamic extract0 =  Dynamic(new _Function_1_1(vorder,vhash,vequal,vshow,ve));
	struct _Function_1_2{
		inline static ::haxe::data::collections::Map Block( ::haxe::text::json::JValue &v,Dynamic &extract0){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",70)
			::haxe::text::json::JValue _switch_2 = (v);
			switch((_switch_2)->GetIndex()){
				case 5: {
					Array< ::haxe::text::json::JValue > $t2 = _switch_2->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",71)
						Array< Array< ::haxe::text::json::JValue > > v1 = Array_obj< Array< ::haxe::text::json::JValue > >::__new().Add($t2);
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",71)
						return extract0(v1->__get(0));
					}
				}
				;break;
				case 4: {
					Array< ::haxe::text::json::JValue > $t3 = _switch_2->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",72)
						Array< Array< ::haxe::text::json::JValue > > v1 = Array_obj< Array< ::haxe::text::json::JValue > >::__new().Add($t3);
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",72)
						return extract0(v1->__get(0));
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",74)
					return ::Stax_obj::error((HX_CSTRING("Expected either Array or Object but was: ") + v)).Cast< ::haxe::data::collections::Map >();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",70)
	return _Function_1_2::Block(v,extract0);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(MapExtensions_obj,stringKeyExtract,return )


MapExtensions_obj::MapExtensions_obj()
{
}

void MapExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapExtensions);
	HX_MARK_END_CLASS();
}

Dynamic MapExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"stringKeyExtract") ) { return stringKeyExtract_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"stringKeyDecompose") ) { return stringKeyDecompose_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic MapExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void MapExtensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("stringKeyDecompose"),
	HX_CSTRING("stringKeyExtract"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class MapExtensions_obj::__mClass;

void MapExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.data.transcode.MapExtensions"), hx::TCanCast< MapExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void MapExtensions_obj::__boot()
{
}

} // end namespace haxe
} // end namespace data
} // end namespace transcode
