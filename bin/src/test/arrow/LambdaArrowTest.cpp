#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Function1Arrow
#include <haxe/functional/arrows/Function1Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ComposeThunk
#include <haxe/functional/arrows/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ProgressArrow
#include <haxe/functional/arrows/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ext_LambdaArrow
#include <haxe/functional/arrows/ext/LambdaArrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ext_lambda_FilterThunk
#include <haxe/functional/arrows/ext/lambda/FilterThunk.h>
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
#ifndef INCLUDED_test_arrow_LambdaArrowTest
#include <test/arrow/LambdaArrowTest.h>
#endif
namespace test{
namespace arrow{

Void LambdaArrowTest_obj::__construct()
{
{
	HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",17)
	super::__construct();
}
;
	return null();
}

LambdaArrowTest_obj::~LambdaArrowTest_obj() { }

Dynamic LambdaArrowTest_obj::__CreateEmpty() { return  new LambdaArrowTest_obj; }
hx::ObjectPtr< LambdaArrowTest_obj > LambdaArrowTest_obj::__new()
{  hx::ObjectPtr< LambdaArrowTest_obj > result = new LambdaArrowTest_obj();
	result->__construct();
	return result;}

Dynamic LambdaArrowTest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LambdaArrowTest_obj > result = new LambdaArrowTest_obj();
	result->__construct();
	return result;}

Void LambdaArrowTest_obj::testMap( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("LambdaArrowTest_obj::testMap")
		HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",20)
		::test::arrow::LambdaArrowTest self = this;
		HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",21)
		int count = 0;

		HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
		Void run(Dynamic x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",24)
				Array< int > a = Array_obj< int >::__new().Add(1).Add(2).Add(3);
				HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",25)
				Array< int > b = ::Lambda_obj::array(x);
				HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",26)
				{
					HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",26)
					int _g1 = 0;
					int _g = a->length;
					HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",26)
					while((_g1 < _g)){
						__SAFE_POINT
						HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",26)
						int i = (_g1)++;
						HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",27)
						::haxe::test::Assert_obj::equals(a->__get(i),b->__get(i),null(),null(),hx::SourceInfo(HX_CSTRING("LambdaArrowTest.hx"),27,HX_CSTRING("test.arrow.LambdaArrowTest"),HX_CSTRING("testMap")));
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",22)
		Dynamic as = ::haxe::test::Assert_obj::createEvent( Dynamic(new _Function_1_1()),null());

		HX_BEGIN_LOCAL_FUNC0(_Function_1_2)
		int run(Dynamic x){
{
				struct _Function_2_1{
					inline static int Block( Dynamic &x){
						HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",35)
						Dynamic _switch_1 = (x);
						if (  ( _switch_1==HX_CSTRING("a"))){
							HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",36)
							return 1;
						}
						else if (  ( _switch_1==HX_CSTRING("b"))){
							HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",37)
							return 2;
						}
						else if (  ( _switch_1==HX_CSTRING("c"))){
							HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",38)
							return 3;
						}
						else  {
							HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",35)
							return null();
						}
;
;
					}
				};
				HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",35)
				return _Function_2_1::Block(x);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",33)
		::haxe::functional::arrows::Arrow a = ::haxe::functional::arrows::ext::LambdaArrow_obj::map(::haxe::functional::arrows::Arrow_obj::returnA(), Dynamic(new _Function_1_2()));
		HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",42)
		a->then(::haxe::functional::arrows::Function1Arrow_obj::lift(as))->run(Array_obj< ::String >::__new().Add(HX_CSTRING("a")).Add(HX_CSTRING("b")).Add(HX_CSTRING("c")))->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LambdaArrowTest_obj,testMap,(void))

Void LambdaArrowTest_obj::testIter( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("LambdaArrowTest_obj::testIter")
		HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",45)
		::test::arrow::LambdaArrowTest self = this;
		HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",46)
		Array< int > a = Array_obj< int >::__new().Add(0);
		HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",47)
		Array< int > arr = Array_obj< int >::__new().Add(1).Add(2).Add(3);

		HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< int >,a)
		Void run(Dynamic x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",51)
				::haxe::test::Assert_obj::equals(6,a->__get(0),null(),null(),hx::SourceInfo(HX_CSTRING("LambdaArrowTest.hx"),51,HX_CSTRING("test.arrow.LambdaArrowTest"),HX_CSTRING("testIter")));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",49)
		Dynamic as = ::haxe::test::Assert_obj::createEvent( Dynamic(new _Function_1_1(a)),null());

		HX_BEGIN_LOCAL_FUNC1(_Function_1_2,Array< int >,a)
		Void run(int x){
{
				HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",56)
				hx::AddEq(a[0],x);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",54)
		::haxe::functional::arrows::ext::LambdaArrow_obj::iter(::haxe::functional::arrows::Arrow_obj::returnA(), Dynamic(new _Function_1_2(a)))->then(::haxe::functional::arrows::Function1Arrow_obj::lift(as))->run(arr)->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LambdaArrowTest_obj,testIter,(void))

Void LambdaArrowTest_obj::testFilter( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("LambdaArrowTest_obj::testFilter")
		HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",61)
		Array< ::test::arrow::LambdaArrowTest > self = Array_obj< ::test::arrow::LambdaArrowTest >::__new().Add(this);

		HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::test::arrow::LambdaArrowTest >,self)
		Void run(Dynamic x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",64)
				self[0]->assertTrue((::Lambda_obj::count(x) == 1),null(),hx::SourceInfo(HX_CSTRING("LambdaArrowTest.hx"),64,HX_CSTRING("test.arrow.LambdaArrowTest"),HX_CSTRING("testFilter")));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",62)
		Dynamic as = ::haxe::test::Assert_obj::createEvent( Dynamic(new _Function_1_1(self)),null());

		HX_BEGIN_LOCAL_FUNC0(_Function_1_2)
		bool run(int x){
{
				HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",69)
				return (x == 1);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",67)
		::haxe::functional::arrows::ext::LambdaArrow_obj::filter(::haxe::functional::arrows::Arrow_obj::returnA(), Dynamic(new _Function_1_2()),null())->then(::haxe::functional::arrows::Function1Arrow_obj::lift(as))->run(Array_obj< int >::__new().Add(1).Add(2).Add(3))->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LambdaArrowTest_obj,testFilter,(void))

Void LambdaArrowTest_obj::testLong( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("LambdaArrowTest_obj::testLong")
		HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",74)
		Array< ::test::arrow::LambdaArrowTest > self = Array_obj< ::test::arrow::LambdaArrowTest >::__new().Add(this);

		HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::test::arrow::LambdaArrowTest >,self)
		Void run(Dynamic x){
{
				__SAFE_POINT
				HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",77)
				self[0]->assertTrue(true,null(),hx::SourceInfo(HX_CSTRING("LambdaArrowTest.hx"),77,HX_CSTRING("test.arrow.LambdaArrowTest"),HX_CSTRING("testLong")));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",75)
		Dynamic as = ::haxe::test::Assert_obj::createEvent( Dynamic(new _Function_1_1(self)),60000);
		HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",80)
		::List list = ::List_obj::__new();
		HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",82)
		{
			HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",82)
			int _g = 0;
			HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",82)
			while((_g < 10000)){
				__SAFE_POINT
				HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",82)
				int i = (_g)++;
				HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",83)
				list->add(::Math_obj::random());
			}
		}

		HX_BEGIN_LOCAL_FUNC0(_Function_1_2)
		double run(double x){
{
				HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",87)
				double a = (x + (double(1) / double(2)));
				HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",88)
				double b = (87984 + 134123412233);
				HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",89)
				double c = (a + b);
				HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",90)
				return c;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_SOURCE_POS("unit/test/arrow/LambdaArrowTest.hx",85)
		::haxe::functional::arrows::ext::LambdaArrow_obj::map(::haxe::functional::arrows::Arrow_obj::returnA(), Dynamic(new _Function_1_2()))->then(::haxe::functional::arrows::Function1Arrow_obj::lift(as))->run(list)->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LambdaArrowTest_obj,testLong,(void))


LambdaArrowTest_obj::LambdaArrowTest_obj()
{
}

void LambdaArrowTest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LambdaArrowTest);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic LambdaArrowTest_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"testMap") ) { return testMap_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"testIter") ) { return testIter_dyn(); }
		if (HX_FIELD_EQ(inName,"testLong") ) { return testLong_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testFilter") ) { return testFilter_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic LambdaArrowTest_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void LambdaArrowTest_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("testMap"),
	HX_CSTRING("testIter"),
	HX_CSTRING("testFilter"),
	HX_CSTRING("testLong"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class LambdaArrowTest_obj::__mClass;

void LambdaArrowTest_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("test.arrow.LambdaArrowTest"), hx::TCanCast< LambdaArrowTest_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void LambdaArrowTest_obj::__boot()
{
}

} // end namespace test
} // end namespace arrow
