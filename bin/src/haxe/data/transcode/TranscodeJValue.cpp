#include <hxcpp.h>

#ifndef INCLUDED_ArrayExtensions
#include <ArrayExtensions.h>
#endif
#ifndef INCLUDED_BoolExtensions
#include <BoolExtensions.h>
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DateExtensions
#include <DateExtensions.h>
#endif
#ifndef INCLUDED_FloatExtensions
#include <FloatExtensions.h>
#endif
#ifndef INCLUDED_IntExtensions
#include <IntExtensions.h>
#endif
#ifndef INCLUDED_JValueExtensions
#include <JValueExtensions.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_OptionExtensions
#include <OptionExtensions.h>
#endif
#ifndef INCLUDED_Product
#include <Product.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_haxe_data_transcode_TranscodeJValue
#include <haxe/data/transcode/TranscodeJValue.h>
#endif
#ifndef INCLUDED_haxe_text_json_JValue
#include <haxe/text/json/JValue.h>
#endif
namespace haxe{
namespace data{
namespace transcode{

Void TranscodeJValue_obj::__construct()
{
	return null();
}

TranscodeJValue_obj::~TranscodeJValue_obj() { }

Dynamic TranscodeJValue_obj::__CreateEmpty() { return  new TranscodeJValue_obj; }
hx::ObjectPtr< TranscodeJValue_obj > TranscodeJValue_obj::__new()
{  hx::ObjectPtr< TranscodeJValue_obj > result = new TranscodeJValue_obj();
	result->__construct();
	return result;}

Dynamic TranscodeJValue_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TranscodeJValue_obj > result = new TranscodeJValue_obj();
	result->__construct();
	return result;}

Dynamic TranscodeJValue_obj::_createDecomposeImpl( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("TranscodeJValue_obj::_createDecomposeImpl")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",80)
	Array< Dynamic > impl = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,impl)
	::haxe::text::json::JValue run(Dynamic v){
		__SAFE_POINT;
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",80)
			if ((null() == v)){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",80)
				return ::haxe::text::json::JValue_obj::JNull;
			}
			else{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",80)
				return impl->__get(0)(v);
			}
		}
;
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",80)
	return  Dynamic(new _Function_1_1(impl));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TranscodeJValue_obj,_createDecomposeImpl,return )

Dynamic TranscodeJValue_obj::getDecomposerFor( ::ValueType v){
	__SAFE_POINT
	HX_SOURCE_PUSH("TranscodeJValue_obj::getDecomposerFor")
	struct _Function_1_1{
		inline static Dynamic Block( ::ValueType &v){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",83)
			::ValueType _switch_1 = (v);
			switch((_switch_1)->GetIndex()){
				case 3: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",85)
					return ::haxe::data::transcode::TranscodeJValue_obj::_createDecomposeImpl(::BoolExtensions_obj::decompose_dyn());
				}
				;break;
				case 1: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",87)
					return ::haxe::data::transcode::TranscodeJValue_obj::_createDecomposeImpl(::IntExtensions_obj::decompose_dyn());
				}
				;break;
				case 2: {
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",89)
					return ::haxe::data::transcode::TranscodeJValue_obj::_createDecomposeImpl(::FloatExtensions_obj::decompose_dyn());
				}
				;break;
				case 8: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					::haxe::text::json::JValue run(::String v1){
						__SAFE_POINT;
						return ::Stax_obj::error((HX_CSTRING("Can't decompose TUnknown: ") + v1)).Cast< ::haxe::text::json::JValue >();
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",91)
					return ::haxe::data::transcode::TranscodeJValue_obj::_createDecomposeImpl( Dynamic(new _Function_3_1()));
				}
				;break;
				case 4: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					::haxe::text::json::JValue run(::String v1){
						__SAFE_POINT;
						return ::Stax_obj::error((HX_CSTRING("Can't decompose TObject: ") + v1)).Cast< ::haxe::text::json::JValue >();
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",93)
					return ::haxe::data::transcode::TranscodeJValue_obj::_createDecomposeImpl( Dynamic(new _Function_3_1()));
				}
				;break;
				case 6: {
					::Class c = _switch_1->__Param(0);
{
						struct _Function_3_1{
							inline static Dynamic Block( ::Class &c){
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",95)
								::String _switch_2 = (::Type_obj::getClassName(c));
								if (  ( _switch_2==HX_CSTRING("String"))){
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",97)
									return ::haxe::data::transcode::TranscodeJValue_obj::_createDecomposeImpl(::StringExtensions_obj::decompose_dyn());
								}
								else if (  ( _switch_2==HX_CSTRING("Date"))){
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",99)
									return ::haxe::data::transcode::TranscodeJValue_obj::_createDecomposeImpl(::DateExtensions_obj::decompose_dyn());
								}
								else if (  ( _switch_2==HX_CSTRING("Array"))){
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",101)
									return ::haxe::data::transcode::TranscodeJValue_obj::_createDecomposeImpl(::ArrayExtensions_obj::decompose_dyn());
								}
								else  {

									HX_BEGIN_LOCAL_FUNC0(_Function_5_1)
									::haxe::text::json::JValue run(::String v1){
{
											__SAFE_POINT
											HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",104)
											return (  (::Type_obj::getInstanceFields(::Type_obj::getClass(v1))->remove(HX_CSTRING("decompose"))) ? ::haxe::text::json::JValue(::Reflect_obj::callMethod(v1,::Reflect_obj::field(v1,HX_CSTRING("decompose")),Array_obj< Dynamic >::__new())) : ::haxe::text::json::JValue(::Stax_obj::error((HX_CSTRING("Decompose function cannot be created. 'decompose' method is missing. Object: ") + v1)).Cast< ::haxe::text::json::JValue >()) );
										}
										return null();
									}
									HX_END_LOCAL_FUNC1(return)

									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",103)
									return ::haxe::data::transcode::TranscodeJValue_obj::_createDecomposeImpl( Dynamic(new _Function_5_1()));
								}
;
;
							}
						};
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",95)
						return _Function_3_1::Block(c);
					}
				}
				;break;
				case 7: {
					::Enum $t1 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",110)
						Array< ::Enum > e = Array_obj< ::Enum >::__new().Add($t1);
						struct _Function_3_1{
							inline static Dynamic Block( Array< ::Enum > &e){
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",111)
								::String _switch_3 = (::Type_obj::getEnumName(e->__get(0)));
								if (  ( _switch_3==HX_CSTRING("Option"))){
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",112)
									return ::haxe::data::transcode::TranscodeJValue_obj::_createDecomposeImpl(::OptionExtensions_obj::decompose_dyn());
								}
								else if (  ( _switch_3==HX_CSTRING("haxe.text.json.JValue"))){
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",113)
									return ::haxe::data::transcode::TranscodeJValue_obj::_createDecomposeImpl(::JValueExtensions_obj::decompose_dyn());
								}
								else  {

									HX_BEGIN_LOCAL_FUNC1(_Function_5_1,Array< ::Enum >,e)
									::haxe::text::json::JValue run(Dynamic v1){
{
											__SAFE_POINT
											HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",115)
											::haxe::text::json::JValue name = ::StringExtensions_obj::decompose(::Type_obj::getEnumName(e->__get(0)));
											HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",116)
											::haxe::text::json::JValue constructor = ::StringExtensions_obj::decompose(::Type_obj::enumConstructor(v1));

											HX_BEGIN_LOCAL_FUNC0(_Function_6_1)
											::haxe::text::json::JValue run(Dynamic v2){
{
													__SAFE_POINT
													HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",117)
													return ::haxe::data::transcode::TranscodeJValue_obj::getDecomposerFor(::Type_obj::_typeof(v2))(v2);
												}
												return null();
											}
											HX_END_LOCAL_FUNC1(return)

											HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",117)
											::haxe::text::json::JValue parameters = ::haxe::text::json::JValue_obj::JArray(::ArrayExtensions_obj::map(::Type_obj::enumParameters(v1), Dynamic(new _Function_6_1())));
											HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",118)
											return ::haxe::text::json::JValue_obj::JArray(Array_obj< ::haxe::text::json::JValue >::__new().Add(name).Add(constructor).Add(parameters));
										}
										return null();
									}
									HX_END_LOCAL_FUNC1(return)

									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",114)
									return ::haxe::data::transcode::TranscodeJValue_obj::_createDecomposeImpl( Dynamic(new _Function_5_1(e)));
								}
;
;
							}
						};
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",111)
						return _Function_3_1::Block(e);
					}
				}
				;break;
				case 5: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					::haxe::text::json::JValue run(Dynamic v1){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",122)
							::Stax_obj::error(HX_CSTRING("Can't decompose function."));
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",122)
							return ::haxe::text::json::JValue_obj::JNull;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",122)
					return ::haxe::data::transcode::TranscodeJValue_obj::_createDecomposeImpl( Dynamic(new _Function_3_1()));
				}
				;break;
				case 0: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					::haxe::text::json::JValue run(Dynamic v1){
						return ::haxe::text::json::JValue_obj::JNull;
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",124)
					return  Dynamic(new _Function_3_1());
				}
				;break;
				default: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					::haxe::text::json::JValue run(Dynamic v1){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",126)
							::Stax_obj::error(HX_CSTRING("Can't decompose unknown type."));
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",126)
							return ::haxe::text::json::JValue_obj::JNull;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",126)
					return ::haxe::data::transcode::TranscodeJValue_obj::_createDecomposeImpl( Dynamic(new _Function_3_1()));
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",83)
	return _Function_1_1::Block(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TranscodeJValue_obj,getDecomposerFor,return )

Dynamic TranscodeJValue_obj::_createExtractorImpl( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("TranscodeJValue_obj::_createExtractorImpl")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",130)
	Array< Dynamic > impl = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,impl)
	Dynamic run(::haxe::text::json::JValue v){
		__SAFE_POINT;
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",130)
			if ((null() == v)){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",130)
				return null();
			}
			else{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",130)
				return impl->__get(0)(v);
			}
		}
;
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",130)
	return  Dynamic(new _Function_1_1(impl));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TranscodeJValue_obj,_createExtractorImpl,return )

Dynamic TranscodeJValue_obj::getExtractorFor( ::ValueType $t2,Array< Dynamic > $t3){
	__SAFE_POINT
	HX_SOURCE_PUSH("TranscodeJValue_obj::getExtractorFor")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",132)
	Array< Array< Dynamic > > extractorArgs = Array_obj< Array< Dynamic > >::__new().Add($t3);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",132)
	Array< ::ValueType > valueType = Array_obj< ::ValueType >::__new().Add($t2);
	struct _Function_1_1{
		inline static Dynamic Block( Array< ::ValueType > &valueType,Array< Array< Dynamic > > &extractorArgs){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",133)
			::ValueType _switch_4 = (valueType->__get(0));
			switch((_switch_4)->GetIndex()){
				case 3: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					bool run(::haxe::text::json::JValue v){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",135)
							return ::BoolExtensions_obj::extract(hx::ClassOf< ::Bool >(),v);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",135)
					return ::haxe::data::transcode::TranscodeJValue_obj::_createExtractorImpl( Dynamic(new _Function_3_1()));
				}
				;break;
				case 1: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					int run(::haxe::text::json::JValue v){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",137)
							return ::IntExtensions_obj::extract(hx::ClassOf< ::Int >(),v);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",137)
					return ::haxe::data::transcode::TranscodeJValue_obj::_createExtractorImpl( Dynamic(new _Function_3_1()));
				}
				;break;
				case 2: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					double run(::haxe::text::json::JValue v){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",139)
							return ::FloatExtensions_obj::extract(hx::ClassOf< ::Float >(),v);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",139)
					return ::haxe::data::transcode::TranscodeJValue_obj::_createExtractorImpl( Dynamic(new _Function_3_1()));
				}
				;break;
				case 8: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					Dynamic run(::haxe::text::json::JValue v){
						__SAFE_POINT;
						return ::Stax_obj::error((HX_CSTRING("Can't extract TUnknown: ") + v));
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",141)
					return ::haxe::data::transcode::TranscodeJValue_obj::_createExtractorImpl( Dynamic(new _Function_3_1()));
				}
				;break;
				case 4: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					Dynamic run(::haxe::text::json::JValue v){
						__SAFE_POINT;
						return ::Stax_obj::error((HX_CSTRING("Can't extract TObject: ") + v));
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",143)
					return ::haxe::data::transcode::TranscodeJValue_obj::_createExtractorImpl( Dynamic(new _Function_3_1()));
				}
				;break;
				case 6: {
					::Class $t1 = _switch_4->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",144)
						Array< ::Class > c = Array_obj< ::Class >::__new().Add($t1);
						struct _Function_3_1{
							inline static Dynamic Block( Array< Array< Dynamic > > &extractorArgs,Array< ::Class > &c,Array< ::ValueType > &valueType){
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",145)
								::String _switch_5 = (::Type_obj::getClassName(c->__get(0)));
								if (  ( _switch_5==HX_CSTRING("String"))){

									HX_BEGIN_LOCAL_FUNC0(_Function_5_1)
									::String run(::haxe::text::json::JValue v){
{
											__SAFE_POINT
											HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",147)
											return ::StringExtensions_obj::extract(hx::ClassOf< ::String >(),v);
										}
										return null();
									}
									HX_END_LOCAL_FUNC1(return)

									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",147)
									return ::haxe::data::transcode::TranscodeJValue_obj::_createExtractorImpl( Dynamic(new _Function_5_1()));
								}
								else if (  ( _switch_5==HX_CSTRING("Date"))){

									HX_BEGIN_LOCAL_FUNC0(_Function_5_1)
									::Date run(::haxe::text::json::JValue v){
{
											__SAFE_POINT
											HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",149)
											return ::DateExtensions_obj::extract(hx::ClassOf< ::Date >(),v);
										}
										return null();
									}
									HX_END_LOCAL_FUNC1(return)

									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",149)
									return ::haxe::data::transcode::TranscodeJValue_obj::_createExtractorImpl( Dynamic(new _Function_5_1()));
								}
								else if (  ( _switch_5==HX_CSTRING("Array"))){

									HX_BEGIN_LOCAL_FUNC1(_Function_5_1,Array< Array< Dynamic > >,extractorArgs)
									Array< Dynamic > run(::haxe::text::json::JValue v){
{
											__SAFE_POINT
											HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",151)
											return ::ArrayExtensions_obj::extract(hx::ClassOf< Array<int> >(),v,extractorArgs->__get(0)->__get(0));
										}
										return null();
									}
									HX_END_LOCAL_FUNC1(return)

									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",151)
									return ::haxe::data::transcode::TranscodeJValue_obj::_createExtractorImpl( Dynamic(new _Function_5_1(extractorArgs)));
								}
								else  {

									HX_BEGIN_LOCAL_FUNC3(_Function_5_1,Array< Array< Dynamic > >,extractorArgs,Array< ::Class >,c,Array< ::ValueType >,valueType)
									Dynamic run(::haxe::text::json::JValue v){
{
											__SAFE_POINT
											struct _Function_6_1{
												inline static Dynamic Block( ::haxe::text::json::JValue &v,Array< Array< Dynamic > > &extractorArgs,Array< ::Class > &c){
													HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",155)
													Array< Dynamic > args = Array_obj< Dynamic >::__new().Add(v);
													HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",156)
													if ((extractorArgs->__get(0) != null())){
														HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",157)
														{
															HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",157)
															int _g = 0;
															HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",157)
															while((_g < extractorArgs[0]->length)){
																__SAFE_POINT
																HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",157)
																Dynamic e = extractorArgs->__get(0)->__get(_g);
																HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",157)
																++(_g);
																HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",158)
																args->push(e);
															}
														}
													}
													HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",161)
													return ::Reflect_obj::callMethod(c->__get(0),::Reflect_obj::field(c->__get(0),HX_CSTRING("extract")),args);
												}
											};
											HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",154)
											return (  (::Type_obj::getClassFields(c->__get(0))->remove(HX_CSTRING("extract"))) ? Dynamic(_Function_6_1::Block(v,extractorArgs,c)) : Dynamic(::Stax_obj::error((HX_CSTRING("Extract function cannot be created. 'extract' method is missing. Type: ") + valueType->__get(0)))) );
										}
										return null();
									}
									HX_END_LOCAL_FUNC1(return)

									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",153)
									return ::haxe::data::transcode::TranscodeJValue_obj::_createExtractorImpl( Dynamic(new _Function_5_1(extractorArgs,c,valueType)));
								}
;
;
							}
						};
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",145)
						return _Function_3_1::Block(extractorArgs,c,valueType);
					}
				}
				;break;
				case 7: {
					::Enum e = _switch_4->__Param(0);
{
						struct _Function_3_1{
							inline static Dynamic Block( ::Enum &e,Array< Array< Dynamic > > &extractorArgs){
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",168)
								::String _switch_6 = (::Type_obj::getEnumName(e));
								if (  ( _switch_6==HX_CSTRING("Option"))){

									HX_BEGIN_LOCAL_FUNC1(_Function_5_1,Array< Array< Dynamic > >,extractorArgs)
									::Option run(::haxe::text::json::JValue v){
{
											__SAFE_POINT
											HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",169)
											return ::OptionExtensions_obj::extract(hx::ClassOf< ::Option >(),v,extractorArgs->__get(0)->__get(0));
										}
										return null();
									}
									HX_END_LOCAL_FUNC1(return)

									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",169)
									return ::haxe::data::transcode::TranscodeJValue_obj::_createExtractorImpl( Dynamic(new _Function_5_1(extractorArgs)));
								}
								else if (  ( _switch_6==HX_CSTRING("haxe.text.json.JValue"))){

									HX_BEGIN_LOCAL_FUNC0(_Function_5_1)
									::haxe::text::json::JValue run(::haxe::text::json::JValue v){
{
											__SAFE_POINT
											HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",170)
											return ::JValueExtensions_obj::extract(hx::ClassOf< ::haxe::text::json::JValue >(),v);
										}
										return null();
									}
									HX_END_LOCAL_FUNC1(return)

									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",170)
									return ::haxe::data::transcode::TranscodeJValue_obj::_createExtractorImpl( Dynamic(new _Function_5_1()));
								}
								else  {

									HX_BEGIN_LOCAL_FUNC1(_Function_5_1,Array< Array< Dynamic > >,extractorArgs)
									Dynamic run(::haxe::text::json::JValue v){
{
											__SAFE_POINT
											HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",172)
											::haxe::text::json::JValue _switch_7 = (v);
											switch((_switch_7)->GetIndex()){
												case 4: {
													Array< ::haxe::text::json::JValue > arr = _switch_7->__Param(0);
{
														HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",173)
														{
															HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",174)
															::String name = ::StringExtensions_obj::extract(hx::ClassOf< ::String >(),arr->__get(0));
															HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",175)
															::String constructor = ::StringExtensions_obj::extract(hx::ClassOf< ::String >(),arr->__get(1));
															struct _Function_8_1{
																inline static Array< Dynamic > Block( Array< ::haxe::text::json::JValue > &arr,Array< Array< Dynamic > > &extractorArgs,::haxe::text::json::JValue &v){
																	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",176)
																	::haxe::text::json::JValue _switch_8 = (arr->__get(2));
																	switch((_switch_8)->GetIndex()){
																		case 4: {
																			Array< ::haxe::text::json::JValue > a = _switch_8->__Param(0);
{
																				HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",178)
																				if ((extractorArgs->__get(0) == null()))
																					extractorArgs[0] = Array_obj< Dynamic >::__new();

																				HX_BEGIN_LOCAL_FUNC0(_Function_10_1)
																				Dynamic run(::Tuple2 t){
{
																						__SAFE_POINT
																						HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",180)
																						return t->__Field(HX_CSTRING("_2"))(t->__Field(HX_CSTRING("_1")).Cast< ::haxe::text::json::JValue >());
																					}
																					return null();
																				}
																				HX_END_LOCAL_FUNC1(return)

																				HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",180)
																				return ::ArrayExtensions_obj::map(::ArrayExtensions_obj::zip(a,extractorArgs->__get(0)), Dynamic(new _Function_10_1()));
																			}
																		}
																		;break;
																		default: {
																			HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",181)
																			return ::Stax_obj::error((HX_CSTRING("Expected JArray but was: ") + v)).Cast< Array< Dynamic > >();
																		}
																	}
																}
															};
															HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",176)
															Array< Dynamic > parameters = _Function_8_1::Block(arr,extractorArgs,v);
															HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",183)
															return ::Type_obj::createEnum(::Type_obj::resolveEnum(name),constructor,parameters);
														}
													}
												}
												;break;
												default: {
													HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",185)
													::Stax_obj::error((HX_CSTRING("Expected JArray but was: ") + v));
													HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",185)
													return null();
												}
											}
										}
										return null();
									}
									HX_END_LOCAL_FUNC1(return)

									HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",171)
									return ::haxe::data::transcode::TranscodeJValue_obj::_createExtractorImpl( Dynamic(new _Function_5_1(extractorArgs)));
								}
;
;
							}
						};
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",168)
						return _Function_3_1::Block(e,extractorArgs);
					}
				}
				;break;
				case 5: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					::haxe::text::json::JValue run(::haxe::text::json::JValue v){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",190)
							::Stax_obj::error(HX_CSTRING("Can't extract function."));
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",190)
							return ::haxe::text::json::JValue_obj::JNull;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",190)
					return ::haxe::data::transcode::TranscodeJValue_obj::_createExtractorImpl( Dynamic(new _Function_3_1()));
				}
				;break;
				case 0: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					Dynamic run(::haxe::text::json::JValue v){
						return null();
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",192)
					return  Dynamic(new _Function_3_1());
				}
				;break;
				default: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					::haxe::text::json::JValue run(::haxe::text::json::JValue v){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",194)
							::Stax_obj::error(HX_CSTRING("Can't extract unknown type."));
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",194)
							return ::haxe::text::json::JValue_obj::JNull;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",194)
					return ::haxe::data::transcode::TranscodeJValue_obj::_createExtractorImpl( Dynamic(new _Function_3_1()));
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/data/transcode/TranscodeJValueExtensions.hx",133)
	return _Function_1_1::Block(valueType,extractorArgs);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TranscodeJValue_obj,getExtractorFor,return )


TranscodeJValue_obj::TranscodeJValue_obj()
{
}

void TranscodeJValue_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TranscodeJValue);
	HX_MARK_END_CLASS();
}

Dynamic TranscodeJValue_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"getExtractorFor") ) { return getExtractorFor_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getDecomposerFor") ) { return getDecomposerFor_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_createDecomposeImpl") ) { return _createDecomposeImpl_dyn(); }
		if (HX_FIELD_EQ(inName,"_createExtractorImpl") ) { return _createExtractorImpl_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic TranscodeJValue_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void TranscodeJValue_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_createDecomposeImpl"),
	HX_CSTRING("getDecomposerFor"),
	HX_CSTRING("_createExtractorImpl"),
	HX_CSTRING("getExtractorFor"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class TranscodeJValue_obj::__mClass;

void TranscodeJValue_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.data.transcode.TranscodeJValue"), hx::TCanCast< TranscodeJValue_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void TranscodeJValue_obj::__boot()
{
}

} // end namespace haxe
} // end namespace data
} // end namespace transcode
