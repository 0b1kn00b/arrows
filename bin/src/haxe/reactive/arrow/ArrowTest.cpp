#include <hxcpp.h>

#ifndef INCLUDED_Product
#include <Product.h>
#endif
#ifndef INCLUDED_Tuple2
#include <Tuple2.h>
#endif
#ifndef INCLUDED__Prelude_AbstractProduct
#include <_Prelude/AbstractProduct.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Function1Arrow
#include <haxe/functional/arrows/Function1Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_TaggedValue
#include <haxe/functional/arrows/TaggedValue.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_BindThunk
#include <haxe/functional/arrows/combinators/BindThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ComposeThunk
#include <haxe/functional/arrows/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_FanoutThunk
#include <haxe/functional/arrows/combinators/FanoutThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_FirstThunk
#include <haxe/functional/arrows/combinators/FirstThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_JoinThunk
#include <haxe/functional/arrows/combinators/JoinThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ProductThunk
#include <haxe/functional/arrows/combinators/ProductThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ProgressArrow
#include <haxe/functional/arrows/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_RepeatThunk
#include <haxe/functional/arrows/combinators/RepeatThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_SecondThunk
#include <haxe/functional/arrows/combinators/SecondThunk.h>
#endif
#ifndef INCLUDED_haxe_reactive_arrow_ArrowTest
#include <haxe/reactive/arrow/ArrowTest.h>
#endif
#ifndef INCLUDED_haxe_test_Assert
#include <haxe/test/Assert.h>
#endif
#ifndef INCLUDED_haxe_test_TestCase
#include <haxe/test/TestCase.h>
#endif
#ifndef INCLUDED_hsl_haxe_Signaler
#include <hsl/haxe/Signaler.h>
#endif
namespace haxe{
namespace reactive{
namespace arrow{

Void ArrowTest_obj::__construct()
{
{
	HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",25)
	super::__construct();
}
;
	return null();
}

ArrowTest_obj::~ArrowTest_obj() { }

Dynamic ArrowTest_obj::__CreateEmpty() { return  new ArrowTest_obj; }
hx::ObjectPtr< ArrowTest_obj > ArrowTest_obj::__new()
{  hx::ObjectPtr< ArrowTest_obj > result = new ArrowTest_obj();
	result->__construct();
	return result;}

Dynamic ArrowTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrowTest_obj > result = new ArrowTest_obj();
	result->__construct();
	return result;}

Void ArrowTest_obj::testSimpleArrow( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ArrowTest_obj::testSimpleArrow")

		HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
		Void run(int x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",30)
				::haxe::test::Assert_obj::equals(x,162,null(),null(),hx::SourceInfo(HX_CSTRING("ArrowTest.hx"),30,HX_CSTRING("haxe.reactive.arrow.ArrowTest"),HX_CSTRING("testSimpleArrow")));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",28)
		::haxe::functional::arrows::Arrow f3 = ::haxe::functional::arrows::Function1Arrow_obj::tuple(( Dynamic(new _Function_1_1())));
		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",33)
		::haxe::functional::arrows::Function1Arrow_obj::then(this->__Field(HX_CSTRING("f0")),this->__Field(HX_CSTRING("f1")))->then(f3)->then(::haxe::functional::arrows::Function1Arrow_obj::lift(this->__Field(HX_CSTRING("debug"))))->run(80)->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testSimpleArrow,(void))

Void ArrowTest_obj::testPair( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ArrowTest_obj::testPair")

		HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
		Void run(::Tuple2 x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",39)
				::haxe::test::Assert_obj::equals(x->__Field(HX_CSTRING("productElement"))(0),11,null(),null(),hx::SourceInfo(HX_CSTRING("ArrowTest.hx"),39,HX_CSTRING("haxe.reactive.arrow.ArrowTest"),HX_CSTRING("testPair")));
				HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",40)
				::haxe::test::Assert_obj::equals(x->__Field(HX_CSTRING("productElement"))(1),20,null(),null(),hx::SourceInfo(HX_CSTRING("ArrowTest.hx"),40,HX_CSTRING("haxe.reactive.arrow.ArrowTest"),HX_CSTRING("testPair")));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",37)
		::haxe::functional::arrows::Arrow as = ::haxe::functional::arrows::Function1Arrow_obj::tuple( Dynamic(new _Function_1_1()));
		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",42)
		::haxe::functional::arrows::Arrow a = ::haxe::functional::arrows::Function1Arrow_obj::tuple(this->__Field(HX_CSTRING("f0")))->pair(::haxe::functional::arrows::Function1Arrow_obj::tuple(this->__Field(HX_CSTRING("f1"))))->then(as)->run(::Tuple2_obj::create(10,10))->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testPair,(void))

Void ArrowTest_obj::testFirst( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ArrowTest_obj::testFirst")

		HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
		Void run(::Tuple2 x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",47)
				::haxe::test::Assert_obj::equals(x->__Field(HX_CSTRING("productElement"))(0),11,null(),null(),hx::SourceInfo(HX_CSTRING("ArrowTest.hx"),47,HX_CSTRING("haxe.reactive.arrow.ArrowTest"),HX_CSTRING("testFirst")));
				HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",48)
				::haxe::test::Assert_obj::equals(x->__Field(HX_CSTRING("productElement"))(1),10,null(),null(),hx::SourceInfo(HX_CSTRING("ArrowTest.hx"),48,HX_CSTRING("haxe.reactive.arrow.ArrowTest"),HX_CSTRING("testFirst")));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",45)
		Dynamic as = ::haxe::test::Assert_obj::createEvent( Dynamic(new _Function_1_1()),null());
		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",51)
		::haxe::functional::arrows::Function1Arrow_obj::lift(this->__Field(HX_CSTRING("f0")))->first()->then(::haxe::functional::arrows::Function1Arrow_obj::tuple(as))->run(::Tuple2_obj::create(10,10))->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testFirst,(void))

Void ArrowTest_obj::testSecond( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ArrowTest_obj::testSecond")

		HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
		Void run(::Tuple2 x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",57)
				::haxe::test::Assert_obj::equals(x->__Field(HX_CSTRING("productElement"))(0),10,null(),null(),hx::SourceInfo(HX_CSTRING("ArrowTest.hx"),57,HX_CSTRING("haxe.reactive.arrow.ArrowTest"),HX_CSTRING("testSecond")));
				HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",58)
				::haxe::test::Assert_obj::equals(x->__Field(HX_CSTRING("productElement"))(1),11,null(),null(),hx::SourceInfo(HX_CSTRING("ArrowTest.hx"),58,HX_CSTRING("haxe.reactive.arrow.ArrowTest"),HX_CSTRING("testSecond")));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",55)
		Dynamic as = ::haxe::test::Assert_obj::createEvent( Dynamic(new _Function_1_1()),null());
		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",61)
		::haxe::functional::arrows::Function1Arrow_obj::lift(this->__Field(HX_CSTRING("f0")))->second()->dump(::haxe::functional::arrows::Function1Arrow_obj::tuple(as))->run(::Tuple2_obj::create(10,10))->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testSecond,(void))

Void ArrowTest_obj::testFanout( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ArrowTest_obj::testFanout")

		HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
		Void run(::Tuple2 x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",66)
				::haxe::test::Assert_obj::equals(11,x->__Field(HX_CSTRING("productElement"))(0),null(),null(),hx::SourceInfo(HX_CSTRING("ArrowTest.hx"),66,HX_CSTRING("haxe.reactive.arrow.ArrowTest"),HX_CSTRING("testFanout")));
				HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",67)
				::haxe::test::Assert_obj::equals(20,x->__Field(HX_CSTRING("productElement"))(1),null(),null(),hx::SourceInfo(HX_CSTRING("ArrowTest.hx"),67,HX_CSTRING("haxe.reactive.arrow.ArrowTest"),HX_CSTRING("testFanout")));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",64)
		Dynamic as = ::haxe::test::Assert_obj::createEvent( Dynamic(new _Function_1_1()),null());
		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",70)
		::haxe::functional::arrows::Function1Arrow_obj::lift(this->__Field(HX_CSTRING("f0")))->fanout(::haxe::functional::arrows::Function1Arrow_obj::lift(this->__Field(HX_CSTRING("f1"))))->dump(::haxe::functional::arrows::Function1Arrow_obj::tuple(as))->run(10)->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testFanout,(void))

Void ArrowTest_obj::testTie( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ArrowTest_obj::testTie")

		HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
		Void run(::Tuple2 x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",75)
				::haxe::test::Assert_obj::equals(10,x->__Field(HX_CSTRING("productElement"))(0),null(),null(),hx::SourceInfo(HX_CSTRING("ArrowTest.hx"),75,HX_CSTRING("haxe.reactive.arrow.ArrowTest"),HX_CSTRING("testTie")));
				HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",76)
				::haxe::test::Assert_obj::equals(11,x->__Field(HX_CSTRING("productElement"))(1),null(),null(),hx::SourceInfo(HX_CSTRING("ArrowTest.hx"),76,HX_CSTRING("haxe.reactive.arrow.ArrowTest"),HX_CSTRING("testTie")));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",73)
		Dynamic as = ::haxe::test::Assert_obj::createEvent( Dynamic(new _Function_1_1()),null());
		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",79)
		::haxe::functional::arrows::Function1Arrow_obj::lift(this->__Field(HX_CSTRING("f0")))->tie(::haxe::functional::arrows::Function1Arrow_obj::tuple(as))->run(10)->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testTie,(void))

Void ArrowTest_obj::testJoin( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ArrowTest_obj::testJoin")

		HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
		Void run(::Tuple2 x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",85)
				::haxe::test::Assert_obj::equals(x->__Field(HX_CSTRING("productElement"))(0),11,null(),null(),hx::SourceInfo(HX_CSTRING("ArrowTest.hx"),85,HX_CSTRING("haxe.reactive.arrow.ArrowTest"),HX_CSTRING("testJoin")));
				HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",86)
				::haxe::test::Assert_obj::equals(x->__Field(HX_CSTRING("productElement"))(1),22,null(),null(),hx::SourceInfo(HX_CSTRING("ArrowTest.hx"),86,HX_CSTRING("haxe.reactive.arrow.ArrowTest"),HX_CSTRING("testJoin")));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",83)
		Dynamic as = ::haxe::test::Assert_obj::createEvent( Dynamic(new _Function_1_1()),null());
		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",89)
		::haxe::functional::arrows::Function1Arrow_obj::lift(this->__Field(HX_CSTRING("f0")))->join(::haxe::functional::arrows::Function1Arrow_obj::tuple(this->__Field(HX_CSTRING("f1"))))->dump(::haxe::functional::arrows::Function1Arrow_obj::tuple(as))->run(10)->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testJoin,(void))

Void ArrowTest_obj::testRepeat( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ArrowTest_obj::testRepeat")
		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",92)
		Array< int > num = Array_obj< int >::__new().Add(10);

		HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< int >,num)
		Void run(Dynamic x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",95)
				::haxe::test::Assert_obj::equals(num->__get(0),x,null(),null(),hx::SourceInfo(HX_CSTRING("ArrowTest.hx"),95,HX_CSTRING("haxe.reactive.arrow.ArrowTest"),HX_CSTRING("testRepeat")));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",93)
		Dynamic as = ::haxe::test::Assert_obj::createEvent( Dynamic(new _Function_1_1(num)),90000);

		HX_BEGIN_LOCAL_FUNC1(_Function_1_2,Array< int >,num)
		Dynamic run(Dynamic x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",99)
				int out = (x + 1);
				HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",100)
				if ((out < num->__get(0))){
					HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",101)
					return ::haxe::functional::arrows::Arrow_obj::doRepeat(out);
				}
				else{
					HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",103)
					return ::haxe::functional::arrows::Arrow_obj::doDone(out);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",98)
		Dynamic g0 =  Dynamic(new _Function_1_2(num));
		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",106)
		::haxe::functional::arrows::Function1Arrow_obj::lift(g0)->repeat()->dump(::haxe::functional::arrows::Function1Arrow_obj::lift(as))->run(0)->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testRepeat,(void))

Void ArrowTest_obj::testDelay( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ArrowTest_obj::testDelay")

		HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
		Void run(Dynamic x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",111)
				::haxe::test::Assert_obj::isTrue(true,null(),hx::SourceInfo(HX_CSTRING("ArrowTest.hx"),111,HX_CSTRING("haxe.reactive.arrow.ArrowTest"),HX_CSTRING("testDelay")));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",109)
		Dynamic as = ::haxe::test::Assert_obj::createEvent( Dynamic(new _Function_1_1()),3000);
		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",114)
		::haxe::functional::arrows::Arrow_obj::delayA(2000)->then(::haxe::functional::arrows::Function1Arrow_obj::lift(as))->run(null())->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testDelay,(void))

Void ArrowTest_obj::testReturnA( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ArrowTest_obj::testReturnA")
		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",117)
		::haxe::reactive::arrow::ArrowTest self = this;

		HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
		Void run(::String x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",120)
				::haxe::test::Assert_obj::equals(HX_CSTRING("test"),x,null(),null(),hx::SourceInfo(HX_CSTRING("ArrowTest.hx"),120,HX_CSTRING("haxe.reactive.arrow.ArrowTest"),HX_CSTRING("testReturnA")));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",118)
		Dynamic as = ::haxe::test::Assert_obj::createEvent( Dynamic(new _Function_1_1()),null());
		HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",123)
		::haxe::functional::arrows::Arrow_obj::returnA()->then(::haxe::functional::arrows::Function1Arrow_obj::lift(as))->run(HX_CSTRING("test"))->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ArrowTest_obj,testReturnA,(void))

Dynamic ArrowTest_obj::f0( double x){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrowTest_obj::f0")
	HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",127)
	double out = (x + 1);
	HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",128)
	this->__Field(HX_CSTRING("debug"))(out);
	HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",129)
	return out;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrowTest_obj,f0,return )

Dynamic ArrowTest_obj::f1( double x){
	__SAFE_POINT
	HX_SOURCE_PUSH("ArrowTest_obj::f1")
	HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",133)
	double out = (x * 2);
	HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",134)
	this->__Field(HX_CSTRING("debug"))(out);
	HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",135)
	return out;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrowTest_obj,f1,return )

Dynamic ArrowTest_obj::debug( Dynamic x){
	HX_SOURCE_PUSH("ArrowTest_obj::debug")
	HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",139)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrowTest_obj,debug,return )

Dynamic ArrowTest_obj::g( Dynamic x){
	HX_SOURCE_PUSH("ArrowTest_obj::g")
	HX_SOURCE_POS("unit/haxe/reactive/arrow/ArrowTest.hx",142)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ArrowTest_obj,g,return )


ArrowTest_obj::ArrowTest_obj()
{
}

void ArrowTest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrowTest);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic ArrowTest_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"g") ) { return g_dyn(); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"f0") ) { return f0_dyn(); }
		if (HX_FIELD_EQ(inName,"f1") ) { return f1_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { return debug_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"testTie") ) { return testTie_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"testPair") ) { return testPair_dyn(); }
		if (HX_FIELD_EQ(inName,"testJoin") ) { return testJoin_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"testFirst") ) { return testFirst_dyn(); }
		if (HX_FIELD_EQ(inName,"testDelay") ) { return testDelay_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testSecond") ) { return testSecond_dyn(); }
		if (HX_FIELD_EQ(inName,"testFanout") ) { return testFanout_dyn(); }
		if (HX_FIELD_EQ(inName,"testRepeat") ) { return testRepeat_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"testReturnA") ) { return testReturnA_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"testSimpleArrow") ) { return testSimpleArrow_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ArrowTest_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ArrowTest_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("testSimpleArrow"),
	HX_CSTRING("testPair"),
	HX_CSTRING("testFirst"),
	HX_CSTRING("testSecond"),
	HX_CSTRING("testFanout"),
	HX_CSTRING("testTie"),
	HX_CSTRING("testJoin"),
	HX_CSTRING("testRepeat"),
	HX_CSTRING("testDelay"),
	HX_CSTRING("testReturnA"),
	HX_CSTRING("f0"),
	HX_CSTRING("f1"),
	HX_CSTRING("debug"),
	HX_CSTRING("g"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ArrowTest_obj::__mClass;

void ArrowTest_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.reactive.arrow.ArrowTest"), hx::TCanCast< ArrowTest_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ArrowTest_obj::__boot()
{
}

} // end namespace haxe
} // end namespace reactive
} // end namespace arrow
