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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
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
#ifndef INCLUDED_haxe_functional_arrows_combinators_AnimateThunk
#include <haxe/functional/arrows/combinators/AnimateThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ComposeThunk
#include <haxe/functional/arrows/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_OrThunk
#include <haxe/functional/arrows/combinators/OrThunk.h>
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
#ifndef INCLUDED_haxe_functional_arrows_ext_LambdaArrow
#include <haxe/functional/arrows/ext/LambdaArrow.h>
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
#ifndef INCLUDED_test_arrow_ComplexTest
#include <test/arrow/ComplexTest.h>
#endif
namespace test{
namespace arrow{

Void ComplexTest_obj::__construct()
{
{
	HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",21)
	super::__construct();
}
;
	return null();
}

ComplexTest_obj::~ComplexTest_obj() { }

Dynamic ComplexTest_obj::__CreateEmpty() { return  new ComplexTest_obj; }
hx::ObjectPtr< ComplexTest_obj > ComplexTest_obj::__new()
{  hx::ObjectPtr< ComplexTest_obj > result = new ComplexTest_obj();
	result->__construct();
	return result;}

Dynamic ComplexTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ComplexTest_obj > result = new ComplexTest_obj();
	result->__construct();
	return result;}

Dynamic ComplexTest_obj::debug( Dynamic x){
	__SAFE_POINT
	HX_SOURCE_PUSH("ComplexTest_obj::debug")
	HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",24)
	::haxe::Log_obj::trace((HX_CSTRING("result = ") + x),hx::SourceInfo(HX_CSTRING("ComplexTest.hx"),24,HX_CSTRING("test.arrow.ComplexTest"),HX_CSTRING("debug")));
	HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",25)
	return x;
}


HX_DEFINE_DYNAMIC_FUNC1(ComplexTest_obj,debug,return )

Void ComplexTest_obj::testOr( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ComplexTest_obj::testOr")

		HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
		Dynamic run(Dynamic x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",31)
				::haxe::test::Assert_obj::equals(HX_CSTRING("g"),x,null(),null(),hx::SourceInfo(HX_CSTRING("ComplexTest.hx"),31,HX_CSTRING("test.arrow.ComplexTest"),HX_CSTRING("testOr")));
				HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",32)
				return x;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",29)
		Dynamic as = ::haxe::test::Assert_obj::createEvent( Dynamic(new _Function_1_1()),1000);

		HX_BEGIN_LOCAL_FUNC0(_Function_1_2)
		::String run(Dynamic x){
{
				HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",36)
				return HX_CSTRING("f");
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",35)
		Dynamic f =  Dynamic(new _Function_1_2());

		HX_BEGIN_LOCAL_FUNC0(_Function_1_3)
		::String run(Dynamic x){
{
				HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",39)
				return HX_CSTRING("g");
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",38)
		Dynamic g =  Dynamic(new _Function_1_3());
		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",42)
		::haxe::functional::arrows::combinators::ComposeThunk a0 = ::haxe::functional::arrows::Arrow_obj::delayA(500)->then(::haxe::functional::arrows::Function1Arrow_obj::lift(f));
		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",43)
		::haxe::functional::arrows::combinators::ComposeThunk a1 = ::haxe::functional::arrows::Arrow_obj::delayA(400)->then(::haxe::functional::arrows::Function1Arrow_obj::lift(g));
		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",44)
		a0->_or(a1)->then(::haxe::functional::arrows::Function1Arrow_obj::lift(as))->run(2)->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ComplexTest_obj,testOr,(void))

Void ComplexTest_obj::testRepeat( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ComplexTest_obj::testRepeat")
		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",48)
		Array< int > count = Array_obj< int >::__new().Add(0);

		HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
		Void run(Dynamic x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",51)
				::haxe::test::Assert_obj::isTrue(true,null(),hx::SourceInfo(HX_CSTRING("ComplexTest.hx"),51,HX_CSTRING("test.arrow.ComplexTest"),HX_CSTRING("testRepeat")));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",49)
		Dynamic as = ::haxe::test::Assert_obj::createEvent( Dynamic(new _Function_1_1()),4000);

		HX_BEGIN_LOCAL_FUNC1(_Function_1_2,Array< int >,count)
		::haxe::functional::arrows::TaggedValue run(Dynamic x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",55)
				(count[0])++;
				HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",56)
				if ((count->__get(0) < 10)){
					HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",57)
					return ::haxe::functional::arrows::Arrow_obj::doRepeat(null());
				}
				else{
					HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",59)
					return ::haxe::functional::arrows::Arrow_obj::doDone(null());
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",54)
		::haxe::functional::arrows::Function1Arrow_obj::lift( Dynamic(new _Function_1_2(count)))->repeat()->then(::haxe::functional::arrows::Function1Arrow_obj::lift(as))->run(null())->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ComplexTest_obj,testRepeat,(void))

Void ComplexTest_obj::testAnimate( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ComplexTest_obj::testAnimate")
		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",66)
		double t = ::haxe::Timer_obj::stamp();
		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",67)
		Array< double > t1 = Array_obj< double >::__new().Add((t + 3));

		HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< double >,t1)
		Void run(Dynamic x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",71)
				::haxe::test::Assert_obj::isTrue((::haxe::Timer_obj::stamp() > t1->__get(0)),null(),hx::SourceInfo(HX_CSTRING("ComplexTest.hx"),71,HX_CSTRING("test.arrow.ComplexTest"),HX_CSTRING("testAnimate")));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",69)
		Dynamic as = ::haxe::test::Assert_obj::createEvent( Dynamic(new _Function_1_1(t1)),6000);

		HX_BEGIN_LOCAL_FUNC1(_Function_1_2,Array< double >,t1)
		::haxe::functional::arrows::TaggedValue run(Dynamic x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",76)
				if ((::haxe::Timer_obj::stamp() < t1->__get(0))){
					HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",77)
					return ::haxe::functional::arrows::Arrow_obj::doRepeat(x);
				}
				else{
					HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",79)
					return ::haxe::functional::arrows::Arrow_obj::doDone(x);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",75)
		::haxe::functional::arrows::Function1Arrow_obj::lift( Dynamic(new _Function_1_2(t1)))->animate(200)->then(::haxe::functional::arrows::Function1Arrow_obj::lift(as))->run(null())->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ComplexTest_obj,testAnimate,(void))

Void ComplexTest_obj::testIndependentLoop( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ComplexTest_obj::testIndependentLoop")
		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",85)
		Array< int > arr = Array_obj< int >::__new();
		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",86)
		Array< int > arr2 = Array_obj< int >::__new();
		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",87)
		Array< Array< int > > comp = Array_obj< Array< int > >::__new().Add(Array_obj< int >::__new());
		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",88)
		{
			HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",88)
			int _g = 0;
			HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",88)
			while((_g < 5)){
				__SAFE_POINT
				HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",88)
				int i = (_g)++;
				HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",89)
				arr->push(i);
				HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",90)
				arr2->push(i);
			}
		}
		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",92)
		::test::arrow::ComplexTest self = this;

		HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< Array< int > >,comp)
		Void run(Dynamic x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",95)
				comp[0]->push(x);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",93)
		::haxe::functional::arrows::Arrow a = ::haxe::functional::arrows::ext::LambdaArrow_obj::iter(::haxe::functional::arrows::Arrow_obj::returnA(), Dynamic(new _Function_1_1(comp)));
		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",98)
		a->info = HX_CSTRING("show count a");

		HX_BEGIN_LOCAL_FUNC1(_Function_1_2,Array< Array< int > >,comp)
		Void run(Dynamic x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",101)
				comp[0]->push(x);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",99)
		::haxe::functional::arrows::Arrow b = ::haxe::functional::arrows::ext::LambdaArrow_obj::iter(::haxe::functional::arrows::Arrow_obj::returnA(), Dynamic(new _Function_1_2(comp)));

		HX_BEGIN_LOCAL_FUNC1(_Function_1_3,Array< Array< int > >,comp)
		Void run(Dynamic x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",106)
				::haxe::test::Assert_obj::equals(Array_obj< int >::__new().Add(0).Add(0).Add(1).Add(1).Add(2).Add(2).Add(3).Add(3).Add(4).Add(4),comp->__get(0),null(),null(),hx::SourceInfo(HX_CSTRING("ComplexTest.hx"),106,HX_CSTRING("test.arrow.ComplexTest"),HX_CSTRING("testIndependentLoop")));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",104)
		Dynamic as = ::haxe::test::Assert_obj::createEvent( Dynamic(new _Function_1_3(comp)),null());
		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",109)
		b->info = HX_CSTRING("show count b");
		HX_SOURCE_POS("unit/test/arrow/ComplexTest.hx",110)
		a->pair(b)->then(::haxe::functional::arrows::Function1Arrow_obj::tuple(as))->run(::Tuple2_obj::create(arr,arr2))->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ComplexTest_obj,testIndependentLoop,(void))


ComplexTest_obj::ComplexTest_obj()
{
}

void ComplexTest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComplexTest);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic ComplexTest_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"debug") ) { return debug_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"testOr") ) { return testOr_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testRepeat") ) { return testRepeat_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"testAnimate") ) { return testAnimate_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"testIndependentLoop") ) { return testIndependentLoop_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ComplexTest_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ComplexTest_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("debug"),
	HX_CSTRING("testOr"),
	HX_CSTRING("testRepeat"),
	HX_CSTRING("testAnimate"),
	HX_CSTRING("testIndependentLoop"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ComplexTest_obj::__mClass;

void ComplexTest_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("test.arrow.ComplexTest"), hx::TCanCast< ComplexTest_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ComplexTest_obj::__boot()
{
}

} // end namespace test
} // end namespace arrow
