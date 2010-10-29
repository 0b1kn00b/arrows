#include <hxcpp.h>

#ifndef INCLUDED_DynamicExtensions
#include <DynamicExtensions.h>
#endif
#ifndef INCLUDED_Either
#include <Either.h>
#endif
#ifndef INCLUDED_EitherExtensions
#include <EitherExtensions.h>
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
#ifndef INCLUDED_Stax
#include <Stax.h>
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

Void OptionExtensions_obj::__construct()
{
	return null();
}

OptionExtensions_obj::~OptionExtensions_obj() { }

Dynamic OptionExtensions_obj::__CreateEmpty() { return  new OptionExtensions_obj; }
hx::ObjectPtr< OptionExtensions_obj > OptionExtensions_obj::__new()
{  hx::ObjectPtr< OptionExtensions_obj > result = new OptionExtensions_obj();
	result->__construct();
	return result;}

Dynamic OptionExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OptionExtensions_obj > result = new OptionExtensions_obj();
	result->__construct();
	return result;}

::Option OptionExtensions_obj::toOption( Dynamic t){
	__SAFE_POINT
	HX_SOURCE_PUSH("OptionExtensions_obj::toOption")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",865)
	return (  ((t == null())) ? ::Option(::Option_obj::None) : ::Option(::Option_obj::Some(t)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OptionExtensions_obj,toOption,return )

Array< Dynamic > OptionExtensions_obj::toArray( ::Option o){
	HX_SOURCE_PUSH("OptionExtensions_obj::toArray")
	struct _Function_1_1{
		inline static Array< Dynamic > Block( ::Option &o){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",869)
			::Option _switch_1 = (o);
			switch((_switch_1)->GetIndex()){
				case 0: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",870)
					return Array_obj< Dynamic >::__new();
				}
				;break;
				case 1: {
					Dynamic v = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",871)
						return Array_obj< Dynamic >::__new().Add(v);
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",869)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",869)
	return _Function_1_1::Block(o);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OptionExtensions_obj,toArray,return )

::Option OptionExtensions_obj::map( ::Option o,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("OptionExtensions_obj::map")
	struct _Function_1_1{
		inline static ::Option Block( ::Option &o,Dynamic &f){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",876)
			::Option _switch_2 = (o);
			switch((_switch_2)->GetIndex()){
				case 0: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",877)
					return ::Option_obj::None;
				}
				;break;
				case 1: {
					Dynamic v = _switch_2->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",878)
						return ::Option_obj::Some(f(v));
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",876)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",876)
	return _Function_1_1::Block(o,f);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionExtensions_obj,map,return )

::Option OptionExtensions_obj::then( ::Option o1,::Option o2){
	HX_SOURCE_PUSH("OptionExtensions_obj::then")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",882)
	return o2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionExtensions_obj,then,return )

Void OptionExtensions_obj::foreach( ::Option o,Dynamic f){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("OptionExtensions_obj::foreach")
		struct _Function_1_1{
			inline static Void Block( ::Option &o,Dynamic &f){
				{
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",885)
					::Option _switch_3 = (o);
					switch((_switch_3)->GetIndex()){
						case 0: {
							HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",886)
							Dynamic();
						}
						;break;
						case 1: {
							Dynamic v = _switch_3->__Param(0);
{
								HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",887)
								f(v);
							}
						}
						;break;
						default: {
							HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",885)
							Dynamic();
						}
					}
				}
				return null();
			}
		};
		HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",885)
		return _Function_1_1::Block(o,f);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionExtensions_obj,foreach,(void))

::Option OptionExtensions_obj::filter( ::Option o,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("OptionExtensions_obj::filter")
	struct _Function_1_1{
		inline static ::Option Block( ::Option &o,Dynamic &f){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",892)
			::Option _switch_4 = (o);
			switch((_switch_4)->GetIndex()){
				case 0: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",893)
					return ::Option_obj::None;
				}
				;break;
				case 1: {
					Dynamic v = _switch_4->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",894)
						return (  (f(v)) ? ::Option(::Option_obj::Some(v)) : ::Option(::Option_obj::None) );
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",892)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",892)
	return _Function_1_1::Block(o,f);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionExtensions_obj,filter,return )

::Option OptionExtensions_obj::flatMap( ::Option o,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("OptionExtensions_obj::flatMap")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",899)
	return ::OptionExtensions_obj::flatten(::OptionExtensions_obj::map(o,f));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionExtensions_obj,flatMap,return )

::Option OptionExtensions_obj::flatten( ::Option o1){
	HX_SOURCE_PUSH("OptionExtensions_obj::flatten")
	struct _Function_1_1{
		inline static ::Option Block( ::Option &o1){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",903)
			::Option _switch_5 = (o1);
			switch((_switch_5)->GetIndex()){
				case 0: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",904)
					return ::Option_obj::None;
				}
				;break;
				case 1: {
					::Option o2 = _switch_5->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",905)
						return o2;
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",903)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",903)
	return _Function_1_1::Block(o1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OptionExtensions_obj,flatten,return )

::Option OptionExtensions_obj::zip( ::Option o1,::Option o2){
	__SAFE_POINT
	HX_SOURCE_PUSH("OptionExtensions_obj::zip")
	struct _Function_1_1{
		inline static ::Option Block( ::Option &o1,::Option &o2){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",910)
			::Option _switch_6 = (o1);
			switch((_switch_6)->GetIndex()){
				case 0: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",911)
					return ::Option_obj::None;
				}
				;break;
				case 1: {
					Dynamic v1 = _switch_6->__Param(0);
{
						struct _Function_3_1{
							inline static ::Option Block( ::Option &o2,Dynamic &v1){
								HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",912)
								::Option _switch_7 = (o2);
								switch((_switch_7)->GetIndex()){
									case 0: {
										HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",913)
										return ::Option_obj::None;
									}
									;break;
									case 1: {
										Dynamic v2 = _switch_7->__Param(0);
{
											HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",914)
											return ::Option_obj::Some(::DynamicExtensions_obj::entuple(v1,v2));
										}
									}
									;break;
									default: {
										HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",912)
										return null();
									}
								}
							}
						};
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",912)
						return _Function_3_1::Block(o2,v1);
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",910)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",910)
	return _Function_1_1::Block(o1,o2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionExtensions_obj,zip,return )

Dynamic OptionExtensions_obj::get( ::Option o){
	__SAFE_POINT
	HX_SOURCE_PUSH("OptionExtensions_obj::get")
	struct _Function_1_1{
		inline static Dynamic Block( ::Option &o){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",920)
			::Option _switch_8 = (o);
			switch((_switch_8)->GetIndex()){
				case 0: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",921)
					return ::Stax_obj::error(HX_CSTRING("Error: Option is empty"));
				}
				;break;
				case 1: {
					Dynamic v = _switch_8->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",922)
						return v;
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",920)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",920)
	return _Function_1_1::Block(o);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OptionExtensions_obj,get,return )

::Option OptionExtensions_obj::orElse( ::Option o1,Dynamic thunk){
	__SAFE_POINT
	HX_SOURCE_PUSH("OptionExtensions_obj::orElse")
	struct _Function_1_1{
		inline static ::Option Block( ::Option &o1,Dynamic &thunk){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",927)
			::Option _switch_9 = (o1);
			switch((_switch_9)->GetIndex()){
				case 0: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",928)
					return thunk();
				}
				;break;
				case 1: {
					Dynamic v = _switch_9->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",930)
						return o1;
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",927)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",927)
	return _Function_1_1::Block(o1,thunk);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionExtensions_obj,orElse,return )

::Option OptionExtensions_obj::orElseC( ::Option o1,::Option o2){
	__SAFE_POINT
	HX_SOURCE_PUSH("OptionExtensions_obj::orElseC")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",935)
	return ::OptionExtensions_obj::orElse(o1,::DynamicExtensions_obj::toThunk(o2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionExtensions_obj,orElseC,return )

::Either OptionExtensions_obj::orEither( ::Option o1,Dynamic thunk){
	__SAFE_POINT
	HX_SOURCE_PUSH("OptionExtensions_obj::orEither")
	struct _Function_1_1{
		inline static ::Either Block( ::Option &o1,Dynamic &thunk){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",939)
			::Option _switch_10 = (o1);
			switch((_switch_10)->GetIndex()){
				case 0: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",940)
					return ::EitherExtensions_obj::toRight(thunk());
				}
				;break;
				case 1: {
					Dynamic v = _switch_10->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",942)
						return ::EitherExtensions_obj::toLeft(v);
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",939)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",939)
	return _Function_1_1::Block(o1,thunk);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionExtensions_obj,orEither,return )

::Either OptionExtensions_obj::orEitherC( ::Option o1,Dynamic c){
	__SAFE_POINT
	HX_SOURCE_PUSH("OptionExtensions_obj::orEitherC")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",947)
	return ::OptionExtensions_obj::orEither(o1,::DynamicExtensions_obj::toThunk(c));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionExtensions_obj,orEitherC,return )

Dynamic OptionExtensions_obj::getOrElse( ::Option o,Dynamic thunk){
	__SAFE_POINT
	HX_SOURCE_PUSH("OptionExtensions_obj::getOrElse")
	struct _Function_1_1{
		inline static Dynamic Block( ::Option &o,Dynamic &thunk){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",951)
			::Option _switch_11 = (o);
			switch((_switch_11)->GetIndex()){
				case 0: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",952)
					return thunk();
				}
				;break;
				case 1: {
					Dynamic v = _switch_11->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",953)
						return v;
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",951)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",951)
	return _Function_1_1::Block(o,thunk);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionExtensions_obj,getOrElse,return )

Dynamic OptionExtensions_obj::getOrElseC( ::Option o,Dynamic c){
	__SAFE_POINT
	HX_SOURCE_PUSH("OptionExtensions_obj::getOrElseC")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",958)
	return ::OptionExtensions_obj::getOrElse(o,::DynamicExtensions_obj::toThunk(c));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(OptionExtensions_obj,getOrElseC,return )

bool OptionExtensions_obj::isEmpty( ::Option o){
	HX_SOURCE_PUSH("OptionExtensions_obj::isEmpty")
	struct _Function_1_1{
		inline static bool Block( ::Option &o){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",962)
			::Option _switch_12 = (o);
			switch((_switch_12)->GetIndex()){
				case 0: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",963)
					return true;
				}
				;break;
				case 1: {
					Dynamic v = _switch_12->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",964)
						return false;
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",962)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",962)
	return _Function_1_1::Block(o);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OptionExtensions_obj,isEmpty,return )

::haxe::text::json::JValue OptionExtensions_obj::decompose( ::Option v){
	__SAFE_POINT
	HX_SOURCE_PUSH("OptionExtensions_obj::decompose")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	::haxe::text::json::JValue run(Dynamic v1){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",968)
			return ::haxe::data::transcode::TranscodeJValue_obj::getDecomposerFor(::Type_obj::_typeof(v1))(v1);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",968)
	return ::OptionExtensions_obj::getOrElse(::OptionExtensions_obj::map(v, Dynamic(new _Function_1_1())),::DynamicExtensions_obj::toThunk(::haxe::text::json::JValue_obj::JNull)).Cast< ::haxe::text::json::JValue >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(OptionExtensions_obj,decompose,return )

::Option OptionExtensions_obj::extract( ::Enum c,::haxe::text::json::JValue v,Dynamic e){
	__SAFE_POINT
	HX_SOURCE_PUSH("OptionExtensions_obj::extract")
	struct _Function_1_1{
		inline static ::Option Block( ::haxe::text::json::JValue &v,Dynamic &e){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",971)
			::haxe::text::json::JValue _switch_13 = (v);
			switch((_switch_13)->GetIndex()){
				case 0: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",972)
					return ::Option_obj::None;
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",974)
					return ::Option_obj::Some(e(v));
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",971)
	return _Function_1_1::Block(v,e);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(OptionExtensions_obj,extract,return )


OptionExtensions_obj::OptionExtensions_obj()
{
}

void OptionExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionExtensions);
	HX_MARK_END_CLASS();
}

Dynamic OptionExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map_dyn(); }
		if (HX_FIELD_EQ(inName,"zip") ) { return zip_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"then") ) { return then_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		if (HX_FIELD_EQ(inName,"orElse") ) { return orElse_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		if (HX_FIELD_EQ(inName,"foreach") ) { return foreach_dyn(); }
		if (HX_FIELD_EQ(inName,"flatMap") ) { return flatMap_dyn(); }
		if (HX_FIELD_EQ(inName,"flatten") ) { return flatten_dyn(); }
		if (HX_FIELD_EQ(inName,"orElseC") ) { return orElseC_dyn(); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"extract") ) { return extract_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toOption") ) { return toOption_dyn(); }
		if (HX_FIELD_EQ(inName,"orEither") ) { return orEither_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"orEitherC") ) { return orEitherC_dyn(); }
		if (HX_FIELD_EQ(inName,"getOrElse") ) { return getOrElse_dyn(); }
		if (HX_FIELD_EQ(inName,"decompose") ) { return decompose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getOrElseC") ) { return getOrElseC_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic OptionExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void OptionExtensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("toOption"),
	HX_CSTRING("toArray"),
	HX_CSTRING("map"),
	HX_CSTRING("then"),
	HX_CSTRING("foreach"),
	HX_CSTRING("filter"),
	HX_CSTRING("flatMap"),
	HX_CSTRING("flatten"),
	HX_CSTRING("zip"),
	HX_CSTRING("get"),
	HX_CSTRING("orElse"),
	HX_CSTRING("orElseC"),
	HX_CSTRING("orEither"),
	HX_CSTRING("orEitherC"),
	HX_CSTRING("getOrElse"),
	HX_CSTRING("getOrElseC"),
	HX_CSTRING("isEmpty"),
	HX_CSTRING("decompose"),
	HX_CSTRING("extract"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class OptionExtensions_obj::__mClass;

void OptionExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("OptionExtensions"), hx::TCanCast< OptionExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void OptionExtensions_obj::__boot()
{
}

