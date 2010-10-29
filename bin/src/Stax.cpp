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
#ifndef INCLUDED_IterableExtensions
#include <IterableExtensions.h>
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
#ifndef INCLUDED_Tuple3
#include <Tuple3.h>
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
#ifndef INCLUDED_haxe_rtti_Meta
#include <haxe/rtti/Meta.h>
#endif

Void Stax_obj::__construct()
{
	return null();
}

Stax_obj::~Stax_obj() { }

Dynamic Stax_obj::__CreateEmpty() { return  new Stax_obj; }
hx::ObjectPtr< Stax_obj > Stax_obj::__new()
{  hx::ObjectPtr< Stax_obj > result = new Stax_obj();
	result->__construct();
	return result;}

Dynamic Stax_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stax_obj > result = new Stax_obj();
	result->__construct();
	return result;}

Dynamic Stax_obj::_createOrderImpl( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stax_obj::_createOrderImpl")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",623)
	Array< Dynamic > impl = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,impl)
	int run(Dynamic a,Dynamic b){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",625)
			return (  ((bool((a == b)) || bool(((bool((a == null())) && bool((b == null()))))))) ? int(0) : int((  ((a == null())) ? int(-1) : int((  ((b == null())) ? int(1) : int(impl->__get(0)(a,b)) )) )) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",624)
	return  Dynamic(new _Function_1_1(impl));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stax_obj,_createOrderImpl,return )

Dynamic Stax_obj::getOrderFor( Dynamic t){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stax_obj::getOrderFor")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",635)
	return ::Stax_obj::getOrderForType(::Type_obj::_typeof(t));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stax_obj,getOrderFor,return )

Dynamic Stax_obj::getOrderForType( ::ValueType v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stax_obj::getOrderForType")
	struct _Function_1_1{
		inline static Dynamic Block( ::ValueType &v){
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",638)
			::ValueType _switch_1 = (v);
			switch((_switch_1)->GetIndex()){
				case 3: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",640)
					return ::Stax_obj::_createOrderImpl(::BoolExtensions_obj::compare_dyn());
				}
				;break;
				case 1: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",642)
					return ::Stax_obj::_createOrderImpl(::IntExtensions_obj::compare_dyn());
				}
				;break;
				case 2: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",644)
					return ::Stax_obj::_createOrderImpl(::FloatExtensions_obj::compare_dyn());
				}
				;break;
				case 8: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					int run(Dynamic $t1,Dynamic $t2){
{
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",646)
							Array< Dynamic > b = Array_obj< Dynamic >::__new().Add($t2);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",646)
							Array< Dynamic > a = Array_obj< Dynamic >::__new().Add($t1);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",646)
							return (  (((a->__get(0) == b->__get(0)))) ? int(0) : int(((  (((a->__get(0)) > (b->__get(0)))) ? int(1) : int(-1) ))) );
						}
						return null();
					}
					HX_END_LOCAL_FUNC2(return)

					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",646)
					return  Dynamic(new _Function_3_1());
				}
				;break;
				case 4: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					int run(Dynamic $t3,Dynamic $t4){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",648)
							Array< Dynamic > b = Array_obj< Dynamic >::__new().Add($t4);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",648)
							Array< Dynamic > a = Array_obj< Dynamic >::__new().Add($t3);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",649)
							{
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",649)
								int _g = 0;
								Array< ::String > _g1 = ::Reflect_obj::fields(a->__get(0));
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",649)
								while((_g < _g1->length)){
									__SAFE_POINT
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",649)
									::String key = _g1->__get(_g);
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",649)
									++(_g);
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",650)
									Dynamic va = ::Reflect_obj::field(a->__get(0),key);
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",651)
									int v1 = ::Stax_obj::getOrderFor(va)(va,::Reflect_obj::field(b->__get(0),key));
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",652)
									if ((0 != v1))
										return v1;
								}
							}
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",655)
							return 0;
						}
						return null();
					}
					HX_END_LOCAL_FUNC2(return)

					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",648)
					return ::Stax_obj::_createOrderImpl( Dynamic(new _Function_3_1()));
				}
				;break;
				case 6: {
					::Class $t11 = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",657)
						Array< ::Class > c = Array_obj< ::Class >::__new().Add($t11);
						struct _Function_3_1{
							inline static Dynamic Block( Array< ::Class > &c){
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",658)
								::String _switch_2 = (::Type_obj::getClassName(c->__get(0)));
								if (  ( _switch_2==HX_CSTRING("String"))){
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",660)
									return ::Stax_obj::_createOrderImpl(::StringExtensions_obj::compare_dyn());
								}
								else if (  ( _switch_2==HX_CSTRING("Date"))){
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",662)
									return ::Stax_obj::_createOrderImpl(::DateExtensions_obj::compare_dyn());
								}
								else if (  ( _switch_2==HX_CSTRING("Array"))){
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",664)
									return ::Stax_obj::_createOrderImpl(::ArrayExtensions_obj::compare_dyn());
								}
								else  {
									struct _Function_5_1{
										inline static Dynamic Block( Array< ::Class > &c){
											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",667)
											Array< int > i = Array_obj< int >::__new().Add(0);

											HX_BEGIN_LOCAL_FUNC2(_Function_6_1,Array< ::Class >,c,Array< int >,i)
											::Tuple3 run(::String v1){
{
													__SAFE_POINT
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",669)
													Dynamic fieldMeta = ::Stax_obj::_getMetaDataField(c->__get(0),v1);
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",670)
													int weight = (  ((bool((fieldMeta != null())) && bool(::Reflect_obj::hasField(fieldMeta,HX_CSTRING("order"))))) ? int(::Reflect_obj::field(fieldMeta,HX_CSTRING("order"))) : int(1) );
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",674)
													return ::Tuple3_obj::create(v1,weight,(  ((bool((fieldMeta != null())) && bool(::Reflect_obj::hasField(fieldMeta,HX_CSTRING("index"))))) ? int(::Reflect_obj::field(fieldMeta,HX_CSTRING("index"))) : int((i[0])++) ));
												}
												return null();
											}
											HX_END_LOCAL_FUNC1(return)


											HX_BEGIN_LOCAL_FUNC0(_Function_6_2)
											bool run(::Tuple3 v1){
{
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",675)
													return (v1->__Field(HX_CSTRING("_2")).Cast< int >() != 0);
												}
												return null();
											}
											HX_END_LOCAL_FUNC1(return)


											HX_BEGIN_LOCAL_FUNC0(_Function_6_3)
											int run(::Tuple3 $t7,::Tuple3 $t8){
{
													__SAFE_POINT
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",675)
													Array< ::Tuple3 > b = Array_obj< ::Tuple3 >::__new().Add($t8);
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",675)
													Array< ::Tuple3 > a = Array_obj< ::Tuple3 >::__new().Add($t7);
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",676)
													int c1 = (a[0]->__Field(HX_CSTRING("_3")).Cast< int >() - b[0]->__Field(HX_CSTRING("_3")).Cast< int >());
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",677)
													if ((c1 != 0))
														return c1;
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",679)
													return ::StringExtensions_obj::compare(a[0]->__Field(HX_CSTRING("_1")).Cast< ::String >(),b[0]->__Field(HX_CSTRING("_1")).Cast< ::String >());
												}
												return null();
											}
											HX_END_LOCAL_FUNC2(return)

											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",668)
											Array< Array< ::Tuple3 > > fields = Array_obj< Array< ::Tuple3 > >::__new().Add(::ArrayExtensions_obj::sortWith(::ArrayExtensions_obj::filter(::ArrayExtensions_obj::map(::Type_obj::getInstanceFields(c->__get(0)), Dynamic(new _Function_6_1(c,i))), Dynamic(new _Function_6_2())), Dynamic(new _Function_6_3())));

											HX_BEGIN_LOCAL_FUNC1(_Function_6_4,Array< Array< ::Tuple3 > >,fields)
											int run(Dynamic $t9,Dynamic $t10){
{
													__SAFE_POINT
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",681)
													Array< Dynamic > b = Array_obj< Dynamic >::__new().Add($t10);
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",681)
													Array< Dynamic > a = Array_obj< Dynamic >::__new().Add($t9);

													HX_BEGIN_LOCAL_FUNC1(_Function_7_1,Array< Dynamic >,a)
													bool run(::Tuple3 v1){
														__SAFE_POINT;
														return !(::Reflect_obj::isFunction(::Reflect_obj::field(a->__get(0),v1->__Field(HX_CSTRING("_1")).Cast< ::String >())));
														return null();
													}
													HX_END_LOCAL_FUNC1(return)


													HX_BEGIN_LOCAL_FUNC2(_Function_7_2,Array< Dynamic >,a,Array< Dynamic >,b)
													::Tuple3 run(::Tuple3 v1){
{
															__SAFE_POINT
															HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",682)
															return ::Tuple3_obj::create(::Reflect_obj::field(a->__get(0),v1->__Field(HX_CSTRING("_1")).Cast< ::String >()),::Reflect_obj::field(b->__get(0),v1->__Field(HX_CSTRING("_1")).Cast< ::String >()),v1->__Field(HX_CSTRING("_2")).Cast< int >());
														}
														return null();
													}
													HX_END_LOCAL_FUNC1(return)

													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",682)
													Array< ::Tuple3 > values = ::ArrayExtensions_obj::map(::ArrayExtensions_obj::filter(fields->__get(0), Dynamic(new _Function_7_1(a))), Dynamic(new _Function_7_2(a,b)));
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",683)
													{
														HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",683)
														int _g = 0;
														HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",683)
														while((_g < values->length)){
															__SAFE_POINT
															HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",683)
															::Tuple3 value = values->__get(_g);
															HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",683)
															++(_g);
															HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",684)
															int c1 = (::Stax_obj::getOrderFor(value->__Field(HX_CSTRING("_1")))(value->__Field(HX_CSTRING("_1")),value->__Field(HX_CSTRING("_2"))) * value->__Field(HX_CSTRING("_3")).Cast< int >());
															HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",685)
															if ((c1 != 0))
																return c1;
														}
													}
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",688)
													return 0;
												}
												return null();
											}
											HX_END_LOCAL_FUNC2(return)

											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",681)
											return ::Stax_obj::_createOrderImpl( Dynamic(new _Function_6_4(fields)));
										}
									};
									struct _Function_5_2{
										inline static Dynamic Block( ){

											HX_BEGIN_LOCAL_FUNC0(_Function_6_1)
											int run(Dynamic $t5,Dynamic $t6){
{
													__SAFE_POINT
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",691)
													Array< Dynamic > b = Array_obj< Dynamic >::__new().Add($t6);
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",691)
													Array< Dynamic > a = Array_obj< Dynamic >::__new().Add($t5);
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",691)
													return (a->__get(0))->__Field(HX_CSTRING("compare"))(b->__get(0)).Cast< int >();
												}
												return null();
											}
											HX_END_LOCAL_FUNC2(return)

											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",691)
											return ::Stax_obj::_createOrderImpl( Dynamic(new _Function_6_1()));
										}
									};
									struct _Function_5_3{
										inline static Dynamic Block( Array< ::Class > &c){
											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",693)
											return ::Stax_obj::error((((HX_CSTRING("class ") + ::Type_obj::getClassName(c->__get(0)))) + HX_CSTRING(" is not comparable")));
										}
									};
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",666)
									return (  (::Stax_obj::_hasMetaDataClass(c->__get(0))) ? Dynamic(_Function_5_1::Block(c)) : Dynamic((  (::Type_obj::getInstanceFields(c->__get(0))->remove(HX_CSTRING("compare"))) ? Dynamic(_Function_5_2::Block()) : Dynamic(_Function_5_3::Block(c)) )) );
								}
;
;
							}
						};
						HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",658)
						return _Function_3_1::Block(c);
					}
				}
				;break;
				case 7: {
					::Enum e = _switch_1->__Param(0);
{

						HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
						int run(Dynamic $t12,Dynamic $t13){
{
								__SAFE_POINT
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",697)
								Array< Dynamic > b = Array_obj< Dynamic >::__new().Add($t13);
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",697)
								Array< Dynamic > a = Array_obj< Dynamic >::__new().Add($t12);
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",698)
								int v1 = (a[0]->__Index() - b[0]->__Index());
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",699)
								if ((0 != v1))
									return v1;
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",701)
								Array< Dynamic > pa = ::Type_obj::enumParameters(a->__get(0));
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",702)
								Array< Dynamic > pb = ::Type_obj::enumParameters(b->__get(0));
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",703)
								{
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",703)
									int _g1 = 0;
									int _g = pa->length;
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",703)
									while((_g1 < _g)){
										__SAFE_POINT
										HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",703)
										Array< int > i = Array_obj< int >::__new().Add((_g1)++);
										HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",704)
										int v2 = ::Stax_obj::getOrderFor(pa->__get(i->__get(0)))(pa->__get(i->__get(0)),pb->__get(i->__get(0)));
										HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",705)
										if ((v2 != 0))
											return v2;
									}
								}
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",708)
								return 0;
							}
							return null();
						}
						HX_END_LOCAL_FUNC2(return)

						HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",697)
						return ::Stax_obj::_createOrderImpl( Dynamic(new _Function_3_1()));
					}
				}
				;break;
				case 0: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					int run(Dynamic $t14,Dynamic $t15){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",711)
							Array< Dynamic > b = Array_obj< Dynamic >::__new().Add($t15);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",711)
							Array< Dynamic > a = Array_obj< Dynamic >::__new().Add($t14);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",711)
							return ::Stax_obj::error(HX_CSTRING("at least one of the arguments should be null")).Cast< int >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC2(return)

					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",711)
					return ::Stax_obj::_createOrderImpl( Dynamic(new _Function_3_1()));
				}
				;break;
				case 5: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",713)
					return ::Stax_obj::error(HX_CSTRING("unable to compare on a function"));
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",638)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",638)
	return _Function_1_1::Block(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stax_obj,getOrderForType,return )

bool Stax_obj::_hasMetaDataClass( ::Class c){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stax_obj::_hasMetaDataClass")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",717)
	Dynamic m = ::haxe::rtti::Meta_obj::getType(c);
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",718)
	return (bool((null() != m)) && bool(::Reflect_obj::hasField(m,HX_CSTRING("DataClass"))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stax_obj,_hasMetaDataClass,return )

Dynamic Stax_obj::_getMetaDataField( ::Class c,::String f){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stax_obj::_getMetaDataField")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",721)
	Dynamic m = ::haxe::rtti::Meta_obj::getFields(c);
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",722)
	if ((bool((null() == m)) || bool(!(::Reflect_obj::hasField(m,f)))))
		return null();
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",724)
	Dynamic fm = ::Reflect_obj::field(m,f);
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",725)
	if (!(::Reflect_obj::hasField(fm,HX_CSTRING("DataField"))))
		return null();
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",727)
	return ::Reflect_obj::field(fm,HX_CSTRING("DataField"))->__Field(HX_CSTRING("copy"))()->__Field(HX_CSTRING("pop"))();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Stax_obj,_getMetaDataField,return )

Array< ::String > Stax_obj::_fieldsWithMeta( ::Class $t1,::String $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stax_obj::_fieldsWithMeta")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",729)
	Array< ::String > name = Array_obj< ::String >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",729)
	Array< ::Class > c = Array_obj< ::Class >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",730)
	Array< int > i = Array_obj< int >::__new().Add(0);

	HX_BEGIN_LOCAL_FUNC3(_Function_1_1,Array< ::Class >,c,Array< ::String >,name,Array< int >,i)
	::Tuple3 run(::String v){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",732)
			Dynamic fieldMeta = ::Stax_obj::_getMetaDataField(c->__get(0),v);
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",733)
			bool inc = ((bool((fieldMeta == null())) || bool((bool(!(::Reflect_obj::hasField(fieldMeta,name->__get(0)))) || bool(::Reflect_obj::field(fieldMeta,name->__get(0)))))));
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",734)
			return ::Tuple3_obj::create(v,inc,(  ((bool((fieldMeta != null())) && bool(::Reflect_obj::hasField(fieldMeta,HX_CSTRING("index"))))) ? int(::Reflect_obj::field(fieldMeta,HX_CSTRING("index"))) : int((i[0])++) ));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)


	HX_BEGIN_LOCAL_FUNC0(_Function_1_2)
	bool run(::Tuple3 v){
{
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",736)
			return v->__Field(HX_CSTRING("_2")).Cast< bool >();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)


	HX_BEGIN_LOCAL_FUNC0(_Function_1_3)
	int run(::Tuple3 a,::Tuple3 b){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",738)
			int c1 = (a->__Field(HX_CSTRING("_3")).Cast< int >() - b->__Field(HX_CSTRING("_3")).Cast< int >());
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",739)
			if ((c1 != 0))
				return c1;
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",741)
			return ::StringExtensions_obj::compare(a->__Field(HX_CSTRING("_1")).Cast< ::String >(),b->__Field(HX_CSTRING("_1")).Cast< ::String >());
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)


	HX_BEGIN_LOCAL_FUNC0(_Function_1_4)
	::String run(::Tuple3 v){
{
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",743)
			return v->__Field(HX_CSTRING("_1")).Cast< ::String >();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",731)
	return ::ArrayExtensions_obj::map(::ArrayExtensions_obj::sortWith(::ArrayExtensions_obj::filter(::ArrayExtensions_obj::map(::Type_obj::getInstanceFields(c->__get(0)), Dynamic(new _Function_1_1(c,name,i))), Dynamic(new _Function_1_2())), Dynamic(new _Function_1_3())), Dynamic(new _Function_1_4()));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Stax_obj,_fieldsWithMeta,return )

Dynamic Stax_obj::_createEqualImpl( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stax_obj::_createEqualImpl")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",746)
	Array< Dynamic > impl = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,impl)
	bool run(Dynamic a,Dynamic b){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",748)
			return (  ((bool((a == b)) || bool(((bool((a == null())) && bool((b == null()))))))) ? bool(true) : bool((  ((bool((a == null())) || bool((b == null())))) ? bool(false) : bool(impl->__get(0)(a,b)) )) );
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",747)
	return  Dynamic(new _Function_1_1(impl));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stax_obj,_createEqualImpl,return )

Dynamic Stax_obj::getEqualFor( Dynamic t){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stax_obj::getEqualFor")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",757)
	return ::Stax_obj::getEqualForType(::Type_obj::_typeof(t));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stax_obj,getEqualFor,return )

Dynamic Stax_obj::getEqualForType( ::ValueType v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stax_obj::getEqualForType")
	struct _Function_1_1{
		inline static Dynamic Block( ::ValueType &v){
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",760)
			::ValueType _switch_3 = (v);
			switch((_switch_3)->GetIndex()){
				case 3: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",762)
					return ::Stax_obj::_createEqualImpl(::BoolExtensions_obj::equals_dyn());
				}
				;break;
				case 1: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",764)
					return ::Stax_obj::_createEqualImpl(::IntExtensions_obj::equals_dyn());
				}
				;break;
				case 2: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",766)
					return ::Stax_obj::_createEqualImpl(::FloatExtensions_obj::equals_dyn());
				}
				;break;
				case 8: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					bool run(Dynamic $t1,Dynamic $t2){
{
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",768)
							Array< Dynamic > b = Array_obj< Dynamic >::__new().Add($t2);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",768)
							Array< Dynamic > a = Array_obj< Dynamic >::__new().Add($t1);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",768)
							return (a->__get(0) == b->__get(0));
						}
						return null();
					}
					HX_END_LOCAL_FUNC2(return)

					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",768)
					return  Dynamic(new _Function_3_1());
				}
				;break;
				case 4: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					bool run(Dynamic $t3,Dynamic $t4){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",770)
							Array< Dynamic > b = Array_obj< Dynamic >::__new().Add($t4);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",770)
							Array< Dynamic > a = Array_obj< Dynamic >::__new().Add($t3);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",771)
							{
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",771)
								int _g = 0;
								Array< ::String > _g1 = ::Reflect_obj::fields(a->__get(0));
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",771)
								while((_g < _g1->length)){
									__SAFE_POINT
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",771)
									::String key = _g1->__get(_g);
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",771)
									++(_g);
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",772)
									Dynamic va = ::Reflect_obj::field(a->__get(0),key);
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",773)
									if (!(::Stax_obj::getEqualFor(va)(va,::Reflect_obj::field(b->__get(0),key))))
										return false;
								}
							}
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",776)
							return true;
						}
						return null();
					}
					HX_END_LOCAL_FUNC2(return)

					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",770)
					return ::Stax_obj::_createEqualImpl( Dynamic(new _Function_3_1()));
				}
				;break;
				case 6: {
					::Class c = _switch_3->__Param(0);
{
						struct _Function_3_1{
							inline static Dynamic Block( ::Class &c){
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",779)
								::String _switch_4 = (::Type_obj::getClassName(c));
								if (  ( _switch_4==HX_CSTRING("String"))){
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",781)
									return ::Stax_obj::_createEqualImpl(::StringExtensions_obj::equals_dyn());
								}
								else if (  ( _switch_4==HX_CSTRING("Date"))){
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",783)
									return ::Stax_obj::_createEqualImpl(::DateExtensions_obj::equals_dyn());
								}
								else if (  ( _switch_4==HX_CSTRING("Array"))){
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",785)
									return ::Stax_obj::_createEqualImpl(::ArrayExtensions_obj::equals_dyn());
								}
								else  {
									struct _Function_5_1{
										inline static Dynamic Block( ::Class &c){
											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",788)
											Array< Array< ::String > > fields = Array_obj< Array< ::String > >::__new().Add(::Stax_obj::_fieldsWithMeta(c,HX_CSTRING("equalHash")));

											HX_BEGIN_LOCAL_FUNC1(_Function_6_1,Array< Array< ::String > >,fields)
											bool run(Dynamic $t7,Dynamic $t8){
{
													__SAFE_POINT
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",789)
													Array< Dynamic > b = Array_obj< Dynamic >::__new().Add($t8);
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",789)
													Array< Dynamic > a = Array_obj< Dynamic >::__new().Add($t7);

													HX_BEGIN_LOCAL_FUNC2(_Function_7_1,Array< Dynamic >,a,Array< Dynamic >,b)
													::Tuple2 run(::String v1){
{
															__SAFE_POINT
															HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",790)
															return ::Tuple2_obj::create(::Reflect_obj::field(a->__get(0),v1),::Reflect_obj::field(b->__get(0),v1));
														}
														return null();
													}
													HX_END_LOCAL_FUNC1(return)

													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",790)
													Array< ::Tuple2 > values = ::ArrayExtensions_obj::map(fields->__get(0), Dynamic(new _Function_7_1(a,b)));
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",791)
													{
														HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",791)
														int _g = 0;
														HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",791)
														while((_g < values->length)){
															__SAFE_POINT
															HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",791)
															::Tuple2 value = values->__get(_g);
															HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",791)
															++(_g);
															HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",792)
															if (::Reflect_obj::isFunction(value->__Field(HX_CSTRING("_1"))))
																continue;
															HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",794)
															if (!(::Stax_obj::getEqualFor(value->__Field(HX_CSTRING("_1")))(value->__Field(HX_CSTRING("_1")),value->__Field(HX_CSTRING("_2")))))
																return false;
														}
													}
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",797)
													return true;
												}
												return null();
											}
											HX_END_LOCAL_FUNC2(return)

											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",789)
											return ::Stax_obj::_createEqualImpl( Dynamic(new _Function_6_1(fields)));
										}
									};
									struct _Function_5_2{
										inline static Dynamic Block( ){

											HX_BEGIN_LOCAL_FUNC0(_Function_6_1)
											bool run(Dynamic $t5,Dynamic $t6){
{
													__SAFE_POINT
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",800)
													Array< Dynamic > b = Array_obj< Dynamic >::__new().Add($t6);
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",800)
													Array< Dynamic > a = Array_obj< Dynamic >::__new().Add($t5);
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",800)
													return (a->__get(0))->__Field(HX_CSTRING("equals"))(b->__get(0)).Cast< bool >();
												}
												return null();
											}
											HX_END_LOCAL_FUNC2(return)

											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",800)
											return ::Stax_obj::_createEqualImpl( Dynamic(new _Function_6_1()));
										}
									};
									struct _Function_5_3{
										inline static Dynamic Block( ::Class &c){
											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",802)
											return ::Stax_obj::error((((HX_CSTRING("class ") + ::Type_obj::getClassName(c))) + HX_CSTRING(" has not equals method")));
										}
									};
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",787)
									return (  (::Stax_obj::_hasMetaDataClass(c)) ? Dynamic(_Function_5_1::Block(c)) : Dynamic((  (::Type_obj::getInstanceFields(c)->remove(HX_CSTRING("equals"))) ? Dynamic(_Function_5_2::Block()) : Dynamic(_Function_5_3::Block(c)) )) );
								}
;
;
							}
						};
						HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",779)
						return _Function_3_1::Block(c);
					}
				}
				;break;
				case 7: {
					::Enum e = _switch_3->__Param(0);
{

						HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
						bool run(Dynamic $t9,Dynamic $t10){
{
								__SAFE_POINT
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",806)
								Array< Dynamic > b = Array_obj< Dynamic >::__new().Add($t10);
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",806)
								Array< Dynamic > a = Array_obj< Dynamic >::__new().Add($t9);
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",807)
								if ((0 != (a[0]->__Index() - b[0]->__Index())))
									return false;
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",809)
								Array< Dynamic > pa = ::Type_obj::enumParameters(a->__get(0));
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",810)
								Array< Dynamic > pb = ::Type_obj::enumParameters(b->__get(0));
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",811)
								{
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",811)
									int _g1 = 0;
									int _g = pa->length;
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",811)
									while((_g1 < _g)){
										__SAFE_POINT
										HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",811)
										int i = (_g1)++;
										HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",812)
										if (!(::Stax_obj::getEqualFor(pa->__get(i))(pa->__get(i),pb->__get(i))))
											return false;
									}
								}
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",815)
								return true;
							}
							return null();
						}
						HX_END_LOCAL_FUNC2(return)

						HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",806)
						return ::Stax_obj::_createEqualImpl( Dynamic(new _Function_3_1()));
					}
				}
				;break;
				case 0: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					bool run(Dynamic $t11,Dynamic $t12){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",818)
							Array< Dynamic > b = Array_obj< Dynamic >::__new().Add($t12);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",818)
							Array< Dynamic > a = Array_obj< Dynamic >::__new().Add($t11);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",818)
							return ::Stax_obj::error(HX_CSTRING("at least one of the arguments should be null")).Cast< bool >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC2(return)

					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",818)
					return ::Stax_obj::_createEqualImpl( Dynamic(new _Function_3_1()));
				}
				;break;
				case 5: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",820)
					return ::Stax_obj::_createEqualImpl(::Reflect_obj::compareMethods_dyn());
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",760)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",760)
	return _Function_1_1::Block(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stax_obj,getEqualForType,return )

Dynamic Stax_obj::_createShowImpl( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stax_obj::_createShowImpl")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",824)
	Array< Dynamic > impl = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,impl)
	::String run(Dynamic v){
		__SAFE_POINT;
		return (  ((null() == v)) ? ::String(HX_CSTRING("null")) : ::String(impl->__get(0)(v)) );
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",825)
	return  Dynamic(new _Function_1_1(impl));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stax_obj,_createShowImpl,return )

Dynamic Stax_obj::getShowFor( Dynamic t){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stax_obj::getShowFor")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",832)
	return ::Stax_obj::getShowForType(::Type_obj::_typeof(t));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stax_obj,getShowFor,return )

Dynamic Stax_obj::getShowForType( ::ValueType v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stax_obj::getShowForType")
	struct _Function_1_1{
		inline static Dynamic Block( ::ValueType &v){
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",840)
			::ValueType _switch_5 = (v);
			switch((_switch_5)->GetIndex()){
				case 3: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",842)
					return ::Stax_obj::_createShowImpl(::BoolExtensions_obj::toString_dyn());
				}
				;break;
				case 1: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",844)
					return ::Stax_obj::_createShowImpl(::IntExtensions_obj::toString_dyn());
				}
				;break;
				case 2: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",846)
					return ::Stax_obj::_createShowImpl(::FloatExtensions_obj::toString_dyn());
				}
				;break;
				case 8: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					::String run(Dynamic $t1){
{
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",848)
							Array< Dynamic > v1 = Array_obj< Dynamic >::__new().Add($t1);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",848)
							return HX_CSTRING("<unknown>");
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",848)
					return ::Stax_obj::_createShowImpl( Dynamic(new _Function_3_1()));
				}
				;break;
				case 4: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					::String run(Dynamic $t2){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",850)
							Array< Dynamic > v1 = Array_obj< Dynamic >::__new().Add($t2);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",852)
							Array< ::String > buf = Array_obj< ::String >::__new();
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",853)
							{
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",853)
								int _g = 0;
								Array< ::String > _g1 = ::Reflect_obj::fields(v1->__get(0));
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",853)
								while((_g < _g1->length)){
									__SAFE_POINT
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",853)
									::String k = _g1->__get(_g);
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",853)
									++(_g);
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",854)
									Dynamic i = ::Reflect_obj::field(v1->__get(0),k);
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",855)
									buf->push((((k + HX_CSTRING(":"))) + ::Stax_obj::getShowFor(i)(i)));
								}
							}
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",857)
							return (((HX_CSTRING("{") + buf->join(HX_CSTRING(",")))) + HX_CSTRING("}"));
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",850)
					return ::Stax_obj::_createShowImpl( Dynamic(new _Function_3_1()));
				}
				;break;
				case 6: {
					::Class $t6 = _switch_5->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",859)
						Array< ::Class > c = Array_obj< ::Class >::__new().Add($t6);
						struct _Function_3_1{
							inline static Dynamic Block( Array< ::Class > &c){
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",860)
								::String _switch_6 = (::Type_obj::getClassName(c->__get(0)));
								if (  ( _switch_6==HX_CSTRING("String"))){
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",862)
									return ::Stax_obj::_createShowImpl(::StringExtensions_obj::toString_dyn());
								}
								else if (  ( _switch_6==HX_CSTRING("Array"))){
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",864)
									return ::Stax_obj::_createShowImpl(::ArrayExtensions_obj::toString_dyn());
								}
								else  {

									HX_BEGIN_LOCAL_FUNC0(_Function_5_1)
									::String run(Dynamic $t4){
{
											__SAFE_POINT
											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",873)
											Array< Dynamic > v1 = Array_obj< Dynamic >::__new().Add($t4);
											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",873)
											return ::Reflect_obj::callMethod(v1->__get(0),::Reflect_obj::field(v1->__get(0),HX_CSTRING("toString")),Array_obj< Dynamic >::__new());
										}
										return null();
									}
									HX_END_LOCAL_FUNC1(return)


									HX_BEGIN_LOCAL_FUNC0(_Function_5_2)
									::String run(Dynamic $t3){
{
											__SAFE_POINT
											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",875)
											Array< Dynamic > v1 = Array_obj< Dynamic >::__new().Add($t3);
											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",875)
											return ::Type_obj::getClassName(::Type_obj::getClass(v1->__get(0)));
										}
										return null();
									}
									HX_END_LOCAL_FUNC1(return)

									struct _Function_5_3{
										inline static Dynamic Block( Array< ::Class > &c){
											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",867)
											Array< Array< ::String > > fields = Array_obj< Array< ::String > >::__new().Add(::Stax_obj::_fieldsWithMeta(c->__get(0),HX_CSTRING("show")));

											HX_BEGIN_LOCAL_FUNC2(_Function_6_1,Array< Array< ::String > >,fields,Array< ::Class >,c)
											::String run(Dynamic $t5){
{
													__SAFE_POINT
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",868)
													Array< Dynamic > v1 = Array_obj< Dynamic >::__new().Add($t5);

													HX_BEGIN_LOCAL_FUNC1(_Function_7_1,Array< Dynamic >,v1)
													Dynamic run(::String f){
{
															__SAFE_POINT
															HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",869)
															return ::Reflect_obj::field(v1->__get(0),f);
														}
														return null();
													}
													HX_END_LOCAL_FUNC1(return)


													HX_BEGIN_LOCAL_FUNC0(_Function_7_2)
													bool run(Dynamic v2){
														__SAFE_POINT;
														return !(::Reflect_obj::isFunction(v2));
														return null();
													}
													HX_END_LOCAL_FUNC1(return)


													HX_BEGIN_LOCAL_FUNC0(_Function_7_3)
													::String run(Dynamic v2){
{
															__SAFE_POINT
															HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",869)
															return ::Stax_obj::getShowFor(v2)(v2);
														}
														return null();
													}
													HX_END_LOCAL_FUNC1(return)

													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",869)
													Array< ::String > values = ::ArrayExtensions_obj::map(::ArrayExtensions_obj::filter(::ArrayExtensions_obj::map(fields->__get(0), Dynamic(new _Function_7_1(v1))), Dynamic(new _Function_7_2())), Dynamic(new _Function_7_3()));
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",870)
													return ::IterableExtensions_obj::mkString(values,null(),(::Type_obj::getClassName(c->__get(0)) + HX_CSTRING("(")),HX_CSTRING(")"),HX_CSTRING(", "));
												}
												return null();
											}
											HX_END_LOCAL_FUNC1(return)

											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",868)
											return ::Stax_obj::_createShowImpl( Dynamic(new _Function_6_1(fields,c)));
										}
									};
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",866)
									return (  (::Stax_obj::_hasMetaDataClass(c->__get(0))) ? Dynamic(_Function_5_1::Block(c)) : Dynamic((  (::Type_obj::getInstanceFields(c->__get(0))->remove(HX_CSTRING("toString"))) ? Dynamic(::Stax_obj::_createShowImpl( Dynamic(new _Function_5_2()))) : Dynamic(::Stax_obj::_createShowImpl(function _Function_5_3 not found.)) )) );
								}
;
;
							}
						};
						HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",860)
						return _Function_3_1::Block(c);
					}
				}
				;break;
				case 7: {
					::Enum e = _switch_5->__Param(0);
{

						HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
						::String run(Dynamic $t7){
{
								__SAFE_POINT
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",878)
								Array< Dynamic > v1 = Array_obj< Dynamic >::__new().Add($t7);
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",879)
								::String buf = ::Type_obj::enumConstructor(v1->__get(0));
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",880)
								Array< Dynamic > params = ::Type_obj::enumParameters(v1->__get(0));
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",881)
								if ((params->length == 0)){
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",882)
									return buf;
								}
								else{
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",884)
									hx::AddEq(buf,HX_CSTRING("("));
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",885)
									{
										HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",885)
										int _g = 0;
										HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",885)
										while((_g < params->length)){
											__SAFE_POINT
											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",885)
											Dynamic p = params->__get(_g);
											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",885)
											++(_g);
											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",886)
											hx::AddEq(buf,::Stax_obj::getShowFor(p)(p));
										}
									}
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",887)
									return (buf + HX_CSTRING(")"));
								}
							}
							return null();
						}
						HX_END_LOCAL_FUNC1(return)

						HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",878)
						return ::Stax_obj::_createShowImpl( Dynamic(new _Function_3_1()));
					}
				}
				;break;
				case 0: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					::String run(Dynamic $t8){
{
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",891)
							Array< Dynamic > v1 = Array_obj< Dynamic >::__new().Add($t8);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",891)
							return HX_CSTRING("null");
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",891)
					return  Dynamic(new _Function_3_1());
				}
				;break;
				case 5: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					::String run(Dynamic $t9){
{
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",893)
							Array< Dynamic > v1 = Array_obj< Dynamic >::__new().Add($t9);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",893)
							return HX_CSTRING("<function>");
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",893)
					return ::Stax_obj::_createShowImpl( Dynamic(new _Function_3_1()));
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",840)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",840)
	return _Function_1_1::Block(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stax_obj,getShowForType,return )

Dynamic Stax_obj::_createHashImpl( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stax_obj::_createHashImpl")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",897)
	Array< Dynamic > impl = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Dynamic >,impl)
	int run(Dynamic v){
		__SAFE_POINT;
		{
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",897)
			if ((null() == v)){
				HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",897)
				return 0;
			}
			else{
				HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",897)
				return impl->__get(0)(v);
			}
		}
;
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",897)
	return  Dynamic(new _Function_1_1(impl));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stax_obj,_createHashImpl,return )

Dynamic Stax_obj::getHashFor( Dynamic t){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stax_obj::getHashFor")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",903)
	return ::Stax_obj::getHashForType(::Type_obj::_typeof(t));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stax_obj,getHashFor,return )

Dynamic Stax_obj::getHashForType( ::ValueType v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stax_obj::getHashForType")
	struct _Function_1_1{
		inline static Dynamic Block( ::ValueType &v){
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",906)
			::ValueType _switch_7 = (v);
			switch((_switch_7)->GetIndex()){
				case 3: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",908)
					return ::Stax_obj::_createHashImpl(::BoolExtensions_obj::hashCode_dyn());
				}
				;break;
				case 1: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",910)
					return ::Stax_obj::_createHashImpl(::IntExtensions_obj::hashCode_dyn());
				}
				;break;
				case 2: {
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",912)
					return ::Stax_obj::_createHashImpl(::FloatExtensions_obj::hashCode_dyn());
				}
				;break;
				case 8: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					int run(Dynamic $t1){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",914)
							Array< Dynamic > v1 = Array_obj< Dynamic >::__new().Add($t1);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",914)
							return ::Stax_obj::error((HX_CSTRING("can't retrieve hascode for TUnknown: ") + v1->__get(0))).Cast< int >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",914)
					return ::Stax_obj::_createHashImpl( Dynamic(new _Function_3_1()));
				}
				;break;
				case 4: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					int run(Dynamic $t2){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",916)
							Array< Dynamic > v1 = Array_obj< Dynamic >::__new().Add($t2);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",917)
							::String s = ::Stax_obj::getShowFor(v1->__get(0))(v1->__get(0));
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",918)
							return ::Stax_obj::getHashFor(s)(s);
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",916)
					return ::Stax_obj::_createHashImpl( Dynamic(new _Function_3_1()));
				}
				;break;
				case 6: {
					::Class $t5 = _switch_7->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",920)
						Array< ::Class > c = Array_obj< ::Class >::__new().Add($t5);
						struct _Function_3_1{
							inline static Dynamic Block( Array< ::Class > &c){
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",921)
								::String _switch_8 = (::Type_obj::getClassName(c->__get(0)));
								if (  ( _switch_8==HX_CSTRING("String"))){
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",923)
									return ::Stax_obj::_createHashImpl(::StringExtensions_obj::hashCode_dyn());
								}
								else if (  ( _switch_8==HX_CSTRING("Date"))){
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",925)
									return ::Stax_obj::_createHashImpl(::DateExtensions_obj::hashCode_dyn());
								}
								else if (  ( _switch_8==HX_CSTRING("Array"))){
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",927)
									return ::Stax_obj::_createHashImpl(::ArrayExtensions_obj::hashCode_dyn());
								}
								else  {
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",929)
									Array< ::String > fields = ::Type_obj::getInstanceFields(c->__get(0));
									struct _Function_5_1{
										inline static Dynamic Block( Array< ::Class > &c){
											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",931)
											Array< Array< ::String > > fields1 = Array_obj< Array< ::String > >::__new().Add(::Stax_obj::_fieldsWithMeta(c->__get(0),HX_CSTRING("equalHash")));

											HX_BEGIN_LOCAL_FUNC2(_Function_6_1,Array< ::Class >,c,Array< Array< ::String > >,fields1)
											int run(Dynamic $t4){
{
													__SAFE_POINT
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",932)
													Array< Dynamic > v1 = Array_obj< Dynamic >::__new().Add($t4);
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",933)
													::String className = ::Type_obj::getClassName(c->__get(0));

													HX_BEGIN_LOCAL_FUNC1(_Function_7_1,Array< Dynamic >,v1)
													Dynamic run(::String f){
{
															__SAFE_POINT
															HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",934)
															return ::Reflect_obj::field(v1->__get(0),f);
														}
														return null();
													}
													HX_END_LOCAL_FUNC1(return)


													HX_BEGIN_LOCAL_FUNC0(_Function_7_2)
													bool run(Dynamic v2){
														__SAFE_POINT;
														return !(::Reflect_obj::isFunction(v2));
														return null();
													}
													HX_END_LOCAL_FUNC1(return)

													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",934)
													Array< Dynamic > values = ::ArrayExtensions_obj::filter(::ArrayExtensions_obj::map(fields1->__get(0), Dynamic(new _Function_7_1(v1))), Dynamic(new _Function_7_2()));

													HX_BEGIN_LOCAL_FUNC0(_Function_7_3)
													int run(int v2,Dynamic e){
{
															__SAFE_POINT
															HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",935)
															return (v2 + ((333667 * ((::Stax_obj::getHashFor(e)(e) + 197192)))));
														}
														return null();
													}
													HX_END_LOCAL_FUNC2(return)

													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",935)
													return ::ArrayExtensions_obj::foldl(values,(9901 * ::StringExtensions_obj::hashCode(className)), Dynamic(new _Function_7_3())).Cast< int >();
												}
												return null();
											}
											HX_END_LOCAL_FUNC1(return)

											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",932)
											return ::Stax_obj::_createHashImpl( Dynamic(new _Function_6_1(c,fields1)));
										}
									};
									struct _Function_5_2{
										inline static Dynamic Block( ){

											HX_BEGIN_LOCAL_FUNC0(_Function_6_1)
											int run(Dynamic $t3){
{
													__SAFE_POINT
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",938)
													Array< Dynamic > v1 = Array_obj< Dynamic >::__new().Add($t3);
													HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",938)
													return ::Reflect_obj::callMethod(v1->__get(0),::Reflect_obj::field(v1->__get(0),HX_CSTRING("hashCode")),Array_obj< Dynamic >::__new());
												}
												return null();
											}
											HX_END_LOCAL_FUNC1(return)

											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",938)
											return ::Stax_obj::_createHashImpl( Dynamic(new _Function_6_1()));
										}
									};
									struct _Function_5_3{
										inline static Dynamic Block( ){
											HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",940)
											return ::Stax_obj::error(HX_CSTRING("class does not have a hashCode method"));
										}
									};
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",930)
									return (  (::Stax_obj::_hasMetaDataClass(c->__get(0))) ? Dynamic(_Function_5_1::Block(c)) : Dynamic((  (::Type_obj::getInstanceFields(c->__get(0))->remove(HX_CSTRING("hashCode"))) ? Dynamic(_Function_5_2::Block()) : Dynamic(_Function_5_3::Block()) )) );
								}
;
;
							}
						};
						HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",921)
						return _Function_3_1::Block(c);
					}
				}
				;break;
				case 7: {
					::Enum e = _switch_7->__Param(0);
{

						HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
						int run(Dynamic $t6){
{
								__SAFE_POINT
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",944)
								Array< Dynamic > v1 = Array_obj< Dynamic >::__new().Add($t6);
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",945)
								int hash = (::StringExtensions_obj::hashCode(::Type_obj::enumConstructor(v1->__get(0))) * 6151);
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",946)
								{
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",946)
									int _g = 0;
									Array< Dynamic > _g1 = ::Type_obj::enumParameters(v1->__get(0));
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",946)
									while((_g < _g1->length)){
										__SAFE_POINT
										HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",946)
										Dynamic i = _g1->__get(_g);
										HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",946)
										++(_g);
										HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",947)
										hx::AddEq(hash,(::Stax_obj::getHashFor(i)(i) * 6151));
									}
								}
								HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",948)
								return hash;
							}
							return null();
						}
						HX_END_LOCAL_FUNC1(return)

						HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",944)
						return ::Stax_obj::_createHashImpl( Dynamic(new _Function_3_1()));
					}
				}
				;break;
				case 5: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					int run(Dynamic $t7){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",951)
							Array< Dynamic > v1 = Array_obj< Dynamic >::__new().Add($t7);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",951)
							return ::Stax_obj::error(HX_CSTRING("function can't provide a hash code")).Cast< int >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",951)
					return ::Stax_obj::_createHashImpl( Dynamic(new _Function_3_1()));
				}
				;break;
				case 0: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					int run(Dynamic $t8){
{
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",953)
							Array< Dynamic > v1 = Array_obj< Dynamic >::__new().Add($t8);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",953)
							return 0;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",953)
					return  Dynamic(new _Function_3_1());
				}
				;break;
				default: {

					HX_BEGIN_LOCAL_FUNC0(_Function_3_1)
					int run(Dynamic $t9){
{
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",955)
							Array< Dynamic > v1 = Array_obj< Dynamic >::__new().Add($t9);
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",955)
							return -1;
						}
						return null();
					}
					HX_END_LOCAL_FUNC1(return)

					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",955)
					return  Dynamic(new _Function_3_1());
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",906)
	return _Function_1_1::Block(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stax_obj,getHashForType,return )

Dynamic Stax_obj::noop1( ){
	HX_SOURCE_PUSH("Stax_obj::noop1")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Void run(Dynamic a){
{
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",960)
	return  Dynamic(new _Function_1_1());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Stax_obj,noop1,return )

Dynamic Stax_obj::noop2( ){
	HX_SOURCE_PUSH("Stax_obj::noop2")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Void run(Dynamic a,Dynamic b){
{
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",963)
	return  Dynamic(new _Function_1_1());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Stax_obj,noop2,return )

Dynamic Stax_obj::noop3( ){
	HX_SOURCE_PUSH("Stax_obj::noop3")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Void run(Dynamic a,Dynamic b,Dynamic c){
{
		}
		return null();
	}
	HX_END_LOCAL_FUNC3((void))

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",966)
	return  Dynamic(new _Function_1_1());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Stax_obj,noop3,return )

Dynamic Stax_obj::noop4( ){
	HX_SOURCE_PUSH("Stax_obj::noop4")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Void run(Dynamic a,Dynamic b,Dynamic c,Dynamic d){
{
		}
		return null();
	}
	HX_END_LOCAL_FUNC4((void))

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",969)
	return  Dynamic(new _Function_1_1());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Stax_obj,noop4,return )

Dynamic Stax_obj::noop5( ){
	HX_SOURCE_PUSH("Stax_obj::noop5")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Void run(Dynamic a,Dynamic b,Dynamic c,Dynamic d,Dynamic e){
{
		}
		return null();
	}
	HX_END_LOCAL_FUNC5((void))

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",972)
	return  Dynamic(new _Function_1_1());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Stax_obj,noop5,return )

Dynamic Stax_obj::identity( ){
	HX_SOURCE_PUSH("Stax_obj::identity")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Dynamic run(Dynamic a){
{
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",976)
			return a;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",976)
	return  Dynamic(new _Function_1_1());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Stax_obj,identity,return )

Dynamic Stax_obj::unfold( Dynamic $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Stax_obj::unfold")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",979)
	Array< Dynamic > unfolder = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",979)
	Array< Dynamic > initial = Array_obj< Dynamic >::__new().Add($t1);
	struct _Function_1_1{
		inline static Dynamic Block( Array< Dynamic > &initial,Array< Dynamic > &unfolder){
			hx::Anon __result = hx::Anon_obj::Create();

			HX_BEGIN_LOCAL_FUNC2(_Function_2_1,Array< Dynamic >,initial,Array< Dynamic >,unfolder)
			Dynamic run(){
{
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",982)
					Array< ::Option > _next = Array_obj< ::Option >::__new().Add(::Option_obj::None);
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",983)
					Array< Dynamic > _progress = Array_obj< Dynamic >::__new().Add(initial->__get(0));

					HX_BEGIN_LOCAL_FUNC3(_Function_3_1,Array< Dynamic >,unfolder,Array< ::Option >,_next,Array< Dynamic >,_progress)
					Void run(){
{
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",986)
							::Option _switch_9 = (unfolder->__get(0)(_progress->__get(0)));
							switch((_switch_9)->GetIndex()){
								case 0: {
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",988)
									_progress[0] = null();
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",989)
									_next[0] = ::Option_obj::None;
								}
								;break;
								case 1: {
									::Tuple2 tuple = _switch_9->__Param(0);
{
										HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",992)
										_progress[0] = tuple->__Field(HX_CSTRING("_1"));
										HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",993)
										_next[0] = ::Option_obj::Some(tuple->__Field(HX_CSTRING("_2")));
									}
								}
								;break;
							}
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",985)
					Array< Dynamic > precomputeNext = Array_obj< Dynamic >::__new().Add( Dynamic(new _Function_3_1(unfolder,_next,_progress)));
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",997)
					precomputeNext->__get(0)();
					struct _Function_3_2{
						inline static Dynamic Block( Array< ::Option > &_next,Array< Dynamic > &precomputeNext){
							hx::Anon __result = hx::Anon_obj::Create();

							HX_BEGIN_LOCAL_FUNC1(_Function_4_1,Array< ::Option >,_next)
							bool run(){
{
									__SAFE_POINT
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",1001)
									return !(::OptionExtensions_obj::isEmpty(_next->__get(0)));
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							__result->Add(HX_CSTRING("hasNext") ,  Dynamic(new _Function_4_1(_next)));

							HX_BEGIN_LOCAL_FUNC2(_Function_4_2,Array< ::Option >,_next,Array< Dynamic >,precomputeNext)
							Dynamic run(){
{
									__SAFE_POINT
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",1005)
									Dynamic n = ::OptionExtensions_obj::get(_next->__get(0));
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",1007)
									precomputeNext->__get(0)();
									HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",1009)
									return n;
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							__result->Add(HX_CSTRING("next") ,  Dynamic(new _Function_4_2(_next,precomputeNext)));
							return __result;
						}
					};
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",999)
					return _Function_3_2::Block(_next,precomputeNext);
				}
				return null();
			}
			HX_END_LOCAL_FUNC0(return)

			__result->Add(HX_CSTRING("iterator") ,  Dynamic(new _Function_2_1(initial,unfolder)));
			return __result;
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",980)
	return _Function_1_1::Block(initial,unfolder);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Stax_obj,unfold,return )

Dynamic Stax_obj::error( ::String msg){
	HX_SOURCE_PUSH("Stax_obj::error")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",1016)
	hx::Throw (msg);
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",1016)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stax_obj,error,return )


Stax_obj::Stax_obj()
{
}

void Stax_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stax);
	HX_MARK_END_CLASS();
}

Dynamic Stax_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"noop1") ) { return noop1_dyn(); }
		if (HX_FIELD_EQ(inName,"noop2") ) { return noop2_dyn(); }
		if (HX_FIELD_EQ(inName,"noop3") ) { return noop3_dyn(); }
		if (HX_FIELD_EQ(inName,"noop4") ) { return noop4_dyn(); }
		if (HX_FIELD_EQ(inName,"noop5") ) { return noop5_dyn(); }
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unfold") ) { return unfold_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getShowFor") ) { return getShowFor_dyn(); }
		if (HX_FIELD_EQ(inName,"getHashFor") ) { return getHashFor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getOrderFor") ) { return getOrderFor_dyn(); }
		if (HX_FIELD_EQ(inName,"getEqualFor") ) { return getEqualFor_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getShowForType") ) { return getShowForType_dyn(); }
		if (HX_FIELD_EQ(inName,"getHashForType") ) { return getHashForType_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getOrderForType") ) { return getOrderForType_dyn(); }
		if (HX_FIELD_EQ(inName,"_fieldsWithMeta") ) { return _fieldsWithMeta_dyn(); }
		if (HX_FIELD_EQ(inName,"getEqualForType") ) { return getEqualForType_dyn(); }
		if (HX_FIELD_EQ(inName,"_createShowImpl") ) { return _createShowImpl_dyn(); }
		if (HX_FIELD_EQ(inName,"_createHashImpl") ) { return _createHashImpl_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_createOrderImpl") ) { return _createOrderImpl_dyn(); }
		if (HX_FIELD_EQ(inName,"_createEqualImpl") ) { return _createEqualImpl_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_hasMetaDataClass") ) { return _hasMetaDataClass_dyn(); }
		if (HX_FIELD_EQ(inName,"_getMetaDataField") ) { return _getMetaDataField_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Stax_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Stax_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_createOrderImpl"),
	HX_CSTRING("getOrderFor"),
	HX_CSTRING("getOrderForType"),
	HX_CSTRING("_hasMetaDataClass"),
	HX_CSTRING("_getMetaDataField"),
	HX_CSTRING("_fieldsWithMeta"),
	HX_CSTRING("_createEqualImpl"),
	HX_CSTRING("getEqualFor"),
	HX_CSTRING("getEqualForType"),
	HX_CSTRING("_createShowImpl"),
	HX_CSTRING("getShowFor"),
	HX_CSTRING("getShowForType"),
	HX_CSTRING("_createHashImpl"),
	HX_CSTRING("getHashFor"),
	HX_CSTRING("getHashForType"),
	HX_CSTRING("noop1"),
	HX_CSTRING("noop2"),
	HX_CSTRING("noop3"),
	HX_CSTRING("noop4"),
	HX_CSTRING("noop5"),
	HX_CSTRING("identity"),
	HX_CSTRING("unfold"),
	HX_CSTRING("error"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Stax_obj::__mClass;

void Stax_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Stax"), hx::TCanCast< Stax_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Stax_obj::__boot()
{
}

