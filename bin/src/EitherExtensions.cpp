#include <hxcpp.h>

#ifndef INCLUDED_Either
#include <Either.h>
#endif
#ifndef INCLUDED_EitherExtensions
#include <EitherExtensions.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif

Void EitherExtensions_obj::__construct()
{
	return null();
}

EitherExtensions_obj::~EitherExtensions_obj() { }

Dynamic EitherExtensions_obj::__CreateEmpty() { return  new EitherExtensions_obj; }
hx::ObjectPtr< EitherExtensions_obj > EitherExtensions_obj::__new()
{  hx::ObjectPtr< EitherExtensions_obj > result = new EitherExtensions_obj();
	result->__construct();
	return result;}

Dynamic EitherExtensions_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EitherExtensions_obj > result = new EitherExtensions_obj();
	result->__construct();
	return result;}

::Either EitherExtensions_obj::toLeft( Dynamic v){
	__SAFE_POINT
	HX_SOURCE_PUSH("EitherExtensions_obj::toLeft")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",981)
	return ::Either_obj::Left(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EitherExtensions_obj,toLeft,return )

::Either EitherExtensions_obj::toRight( Dynamic v){
	__SAFE_POINT
	HX_SOURCE_PUSH("EitherExtensions_obj::toRight")
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",985)
	return ::Either_obj::Right(v);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EitherExtensions_obj,toRight,return )

::Either EitherExtensions_obj::flip( ::Either e){
	__SAFE_POINT
	HX_SOURCE_PUSH("EitherExtensions_obj::flip")
	struct _Function_1_1{
		inline static ::Either Block( ::Either &e){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",989)
			::Either _switch_1 = (e);
			switch((_switch_1)->GetIndex()){
				case 0: {
					Dynamic v = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",990)
						return ::Either_obj::Right(v);
					}
				}
				;break;
				case 1: {
					Dynamic v = _switch_1->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",991)
						return ::Either_obj::Left(v);
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",989)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",989)
	return _Function_1_1::Block(e);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EitherExtensions_obj,flip,return )

::Option EitherExtensions_obj::left( ::Either e){
	__SAFE_POINT
	HX_SOURCE_PUSH("EitherExtensions_obj::left")
	struct _Function_1_1{
		inline static ::Option Block( ::Either &e){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",996)
			::Either _switch_2 = (e);
			switch((_switch_2)->GetIndex()){
				case 0: {
					Dynamic v = _switch_2->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",997)
						return ::Option_obj::Some(v);
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",999)
					return ::Option_obj::None;
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",996)
	return _Function_1_1::Block(e);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EitherExtensions_obj,left,return )

bool EitherExtensions_obj::isLeft( ::Either e){
	HX_SOURCE_PUSH("EitherExtensions_obj::isLeft")
	struct _Function_1_1{
		inline static bool Block( ::Either &e){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1004)
			::Either _switch_3 = (e);
			switch((_switch_3)->GetIndex()){
				case 0: {
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1005)
						return true;
					}
				}
				;break;
				case 1: {
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1006)
						return false;
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1004)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1004)
	return _Function_1_1::Block(e);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EitherExtensions_obj,isLeft,return )

bool EitherExtensions_obj::isRight( ::Either e){
	HX_SOURCE_PUSH("EitherExtensions_obj::isRight")
	struct _Function_1_1{
		inline static bool Block( ::Either &e){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1011)
			::Either _switch_4 = (e);
			switch((_switch_4)->GetIndex()){
				case 0: {
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1012)
						return false;
					}
				}
				;break;
				case 1: {
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1013)
						return true;
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1011)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1011)
	return _Function_1_1::Block(e);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EitherExtensions_obj,isRight,return )

::Option EitherExtensions_obj::right( ::Either e){
	__SAFE_POINT
	HX_SOURCE_PUSH("EitherExtensions_obj::right")
	struct _Function_1_1{
		inline static ::Option Block( ::Either &e){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1018)
			::Either _switch_5 = (e);
			switch((_switch_5)->GetIndex()){
				case 1: {
					Dynamic v = _switch_5->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1019)
						return ::Option_obj::Some(v);
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1021)
					return ::Option_obj::None;
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1018)
	return _Function_1_1::Block(e);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EitherExtensions_obj,right,return )

Dynamic EitherExtensions_obj::get( ::Either e){
	HX_SOURCE_PUSH("EitherExtensions_obj::get")
	struct _Function_1_1{
		inline static Dynamic Block( ::Either &e){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1026)
			::Either _switch_6 = (e);
			switch((_switch_6)->GetIndex()){
				case 0: {
					Dynamic v = _switch_6->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1027)
						return v;
					}
				}
				;break;
				case 1: {
					Dynamic v = _switch_6->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1028)
						return v;
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1026)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1026)
	return _Function_1_1::Block(e);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EitherExtensions_obj,get,return )

::Either EitherExtensions_obj::mapLeft( ::Either e,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("EitherExtensions_obj::mapLeft")
	struct _Function_1_1{
		inline static ::Either Block( ::Either &e,Dynamic &f){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1033)
			::Either _switch_7 = (e);
			switch((_switch_7)->GetIndex()){
				case 0: {
					Dynamic v = _switch_7->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1034)
						return ::Either_obj::Left(f(v));
					}
				}
				;break;
				case 1: {
					Dynamic v = _switch_7->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1035)
						return ::Either_obj::Right(v);
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1033)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1033)
	return _Function_1_1::Block(e,f);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EitherExtensions_obj,mapLeft,return )

::Either EitherExtensions_obj::map( ::Either e,Dynamic f1,Dynamic f2){
	__SAFE_POINT
	HX_SOURCE_PUSH("EitherExtensions_obj::map")
	struct _Function_1_1{
		inline static ::Either Block( ::Either &e,Dynamic &f2,Dynamic &f1){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1040)
			::Either _switch_8 = (e);
			switch((_switch_8)->GetIndex()){
				case 0: {
					Dynamic v = _switch_8->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1041)
						return ::Either_obj::Left(f1(v));
					}
				}
				;break;
				case 1: {
					Dynamic v = _switch_8->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1042)
						return ::Either_obj::Right(f2(v));
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1040)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1040)
	return _Function_1_1::Block(e,f2,f1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(EitherExtensions_obj,map,return )

::Either EitherExtensions_obj::mapRight( ::Either e,Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("EitherExtensions_obj::mapRight")
	struct _Function_1_1{
		inline static ::Either Block( ::Either &e,Dynamic &f){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1047)
			::Either _switch_9 = (e);
			switch((_switch_9)->GetIndex()){
				case 0: {
					Dynamic v = _switch_9->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1048)
						return ::Either_obj::Left(v);
					}
				}
				;break;
				case 1: {
					Dynamic v = _switch_9->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1049)
						return ::Either_obj::Right(f(v));
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1047)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1047)
	return _Function_1_1::Block(e,f);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EitherExtensions_obj,mapRight,return )

::Either EitherExtensions_obj::flatMap( ::Either e,Dynamic f1,Dynamic f2){
	__SAFE_POINT
	HX_SOURCE_PUSH("EitherExtensions_obj::flatMap")
	struct _Function_1_1{
		inline static ::Either Block( ::Either &e,Dynamic &f2,Dynamic &f1){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1054)
			::Either _switch_10 = (e);
			switch((_switch_10)->GetIndex()){
				case 0: {
					Dynamic v = _switch_10->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1055)
						return f1(v);
					}
				}
				;break;
				case 1: {
					Dynamic v = _switch_10->__Param(0);
{
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1056)
						return f2(v);
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1054)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1054)
	return _Function_1_1::Block(e,f2,f1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(EitherExtensions_obj,flatMap,return )

::Either EitherExtensions_obj::composeLeft( ::Either e1,::Either e2,Dynamic ac,Dynamic bc){
	__SAFE_POINT
	HX_SOURCE_PUSH("EitherExtensions_obj::composeLeft")
	struct _Function_1_1{
		inline static ::Either Block( Dynamic &bc,::Either &e2,Dynamic &ac,::Either &e1){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1064)
			::Either _switch_11 = (e1);
			switch((_switch_11)->GetIndex()){
				case 0: {
					Dynamic v1 = _switch_11->__Param(0);
{
						struct _Function_3_1{
							inline static ::Either Block( Dynamic &v1,::Either &e2,Dynamic &ac){
								HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1065)
								::Either _switch_12 = (e2);
								switch((_switch_12)->GetIndex()){
									case 0: {
										Dynamic v2 = _switch_12->__Param(0);
{
											HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1066)
											return ::Either_obj::Left(ac(v1,v2));
										}
									}
									;break;
									case 1: {
										Dynamic v2 = _switch_12->__Param(0);
{
											HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1067)
											return ::Either_obj::Left(v1);
										}
									}
									;break;
									default: {
										HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1065)
										return null();
									}
								}
							}
						};
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1065)
						return _Function_3_1::Block(v1,e2,ac);
					}
				}
				;break;
				case 1: {
					Dynamic v1 = _switch_11->__Param(0);
{
						struct _Function_3_1{
							inline static ::Either Block( Dynamic &bc,Dynamic &v1,::Either &e2){
								HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1069)
								::Either _switch_13 = (e2);
								switch((_switch_13)->GetIndex()){
									case 0: {
										Dynamic v2 = _switch_13->__Param(0);
{
											HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1070)
											return ::Either_obj::Left(v2);
										}
									}
									;break;
									case 1: {
										Dynamic v2 = _switch_13->__Param(0);
{
											HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1071)
											return ::Either_obj::Right(bc(v1,v2));
										}
									}
									;break;
									default: {
										HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1069)
										return null();
									}
								}
							}
						};
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1069)
						return _Function_3_1::Block(bc,v1,e2);
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1064)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1064)
	return _Function_1_1::Block(bc,e2,ac,e1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(EitherExtensions_obj,composeLeft,return )

::Either EitherExtensions_obj::composeRight( ::Either e1,::Either e2,Dynamic ac,Dynamic bc){
	__SAFE_POINT
	HX_SOURCE_PUSH("EitherExtensions_obj::composeRight")
	struct _Function_1_1{
		inline static ::Either Block( Dynamic &bc,::Either &e2,Dynamic &ac,::Either &e1){
			HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1080)
			::Either _switch_14 = (e1);
			switch((_switch_14)->GetIndex()){
				case 0: {
					Dynamic v1 = _switch_14->__Param(0);
{
						struct _Function_3_1{
							inline static ::Either Block( Dynamic &v1,::Either &e2,Dynamic &ac){
								HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1081)
								::Either _switch_15 = (e2);
								switch((_switch_15)->GetIndex()){
									case 0: {
										Dynamic v2 = _switch_15->__Param(0);
{
											HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1082)
											return ::Either_obj::Left(ac(v1,v2));
										}
									}
									;break;
									case 1: {
										Dynamic v2 = _switch_15->__Param(0);
{
											HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1083)
											return ::Either_obj::Right(v2);
										}
									}
									;break;
									default: {
										HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1081)
										return null();
									}
								}
							}
						};
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1081)
						return _Function_3_1::Block(v1,e2,ac);
					}
				}
				;break;
				case 1: {
					Dynamic v1 = _switch_14->__Param(0);
{
						struct _Function_3_1{
							inline static ::Either Block( Dynamic &v1,Dynamic &bc,::Either &e2){
								HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1085)
								::Either _switch_16 = (e2);
								switch((_switch_16)->GetIndex()){
									case 0: {
										Dynamic v2 = _switch_16->__Param(0);
{
											HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1086)
											return ::Either_obj::Right(v1);
										}
									}
									;break;
									case 1: {
										Dynamic v2 = _switch_16->__Param(0);
{
											HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1087)
											return ::Either_obj::Right(bc(v1,v2));
										}
									}
									;break;
									default: {
										HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1085)
										return null();
									}
								}
							}
						};
						HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1085)
						return _Function_3_1::Block(v1,bc,e2);
					}
				}
				;break;
				default: {
					HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1080)
					return null();
				}
			}
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/PreludeExtensions.hx",1080)
	return _Function_1_1::Block(bc,e2,ac,e1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(EitherExtensions_obj,composeRight,return )


EitherExtensions_obj::EitherExtensions_obj()
{
}

void EitherExtensions_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EitherExtensions);
	HX_MARK_END_CLASS();
}

Dynamic EitherExtensions_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"map") ) { return map_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"flip") ) { return flip_dyn(); }
		if (HX_FIELD_EQ(inName,"left") ) { return left_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return right_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toLeft") ) { return toLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"isLeft") ) { return isLeft_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toRight") ) { return toRight_dyn(); }
		if (HX_FIELD_EQ(inName,"isRight") ) { return isRight_dyn(); }
		if (HX_FIELD_EQ(inName,"mapLeft") ) { return mapLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"flatMap") ) { return flatMap_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapRight") ) { return mapRight_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"composeLeft") ) { return composeLeft_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"composeRight") ) { return composeRight_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic EitherExtensions_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void EitherExtensions_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("toLeft"),
	HX_CSTRING("toRight"),
	HX_CSTRING("flip"),
	HX_CSTRING("left"),
	HX_CSTRING("isLeft"),
	HX_CSTRING("isRight"),
	HX_CSTRING("right"),
	HX_CSTRING("get"),
	HX_CSTRING("mapLeft"),
	HX_CSTRING("map"),
	HX_CSTRING("mapRight"),
	HX_CSTRING("flatMap"),
	HX_CSTRING("composeLeft"),
	HX_CSTRING("composeRight"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class EitherExtensions_obj::__mClass;

void EitherExtensions_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("EitherExtensions"), hx::TCanCast< EitherExtensions_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void EitherExtensions_obj::__boot()
{
}

