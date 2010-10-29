#include <hxcpp.h>

#ifndef INCLUDED_ArrayExtensions
#include <ArrayExtensions.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Function2Extensions
#include <Function2Extensions.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_OptionExtensions
#include <OptionExtensions.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringExtensions
#include <StringExtensions.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_functional_Predicate1Extensions
#include <haxe/functional/Predicate1Extensions.h>
#endif
#ifndef INCLUDED_haxe_test_Dispatcher
#include <haxe/test/Dispatcher.h>
#endif
#ifndef INCLUDED_haxe_test_Runner
#include <haxe/test/Runner.h>
#endif
#ifndef INCLUDED_haxe_test_TestFixture
#include <haxe/test/TestFixture.h>
#endif
#ifndef INCLUDED_haxe_test_TestHandler
#include <haxe/test/TestHandler.h>
#endif
#ifndef INCLUDED_haxe_test_TestResult
#include <haxe/test/TestResult.h>
#endif
namespace haxe{
namespace test{

Void Runner_obj::__construct()
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",56)
	this->fixtures = Array_obj< ::haxe::test::TestFixture >::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",57)
	this->onProgress = ::haxe::test::Dispatcher_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",58)
	this->onStart = ::haxe::test::Dispatcher_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",59)
	this->onComplete = ::haxe::test::Dispatcher_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",60)
	this->length = 0;
}
;
	return null();
}

Runner_obj::~Runner_obj() { }

Dynamic Runner_obj::__CreateEmpty() { return  new Runner_obj; }
hx::ObjectPtr< Runner_obj > Runner_obj::__new()
{  hx::ObjectPtr< Runner_obj > result = new Runner_obj();
	result->__construct();
	return result;}

Dynamic Runner_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Runner_obj > result = new Runner_obj();
	result->__construct();
	return result;}

::haxe::test::Runner Runner_obj::addAll( Dynamic tests,Dynamic __o_prefix,::EReg pattern){
::String prefix = __o_prefix.Default(HX_CSTRING("test"));
	HX_SOURCE_PUSH("Runner_obj::addAll");
{
		__SAFE_POINT
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",64)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tests->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
			Dynamic test = __it->next();
			{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",65)
				this->add(test,prefix,pattern);
			}
;
			__SAFE_POINT
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",68)
		return this;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Runner_obj,addAll,return )

::haxe::test::Runner Runner_obj::add( Dynamic $t5,Dynamic __o_$t6,::EReg $t7){
::String $t6 = __o_$t6.Default(HX_CSTRING("test"));
	HX_SOURCE_PUSH("Runner_obj::add");
{
		__SAFE_POINT
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",78)
		Array< ::EReg > pattern = Array_obj< ::EReg >::__new().Add($t7);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",78)
		Array< ::String > prefix = Array_obj< ::String >::__new().Add($t6);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",78)
		Array< Dynamic > test = Array_obj< Dynamic >::__new().Add($t5);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",79)
		if (!(::Reflect_obj::isObject(test->__get(0))))
			hx::Throw (HX_CSTRING("can't add a null object as a test case"));

		HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::EReg >,pattern)
		::Option run(::String $t1){
{
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",81)
				Array< ::String > field = Array_obj< ::String >::__new().Add($t1);

				HX_BEGIN_LOCAL_FUNC1(_Function_2_1,Array< ::String >,field)
				bool run(::EReg p){
					__SAFE_POINT;
					return p->match(field->__get(0));
					return null();
				}
				HX_END_LOCAL_FUNC1(return)

				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",81)
				return ::OptionExtensions_obj::map(::OptionExtensions_obj::toOption(pattern->__get(0)), Dynamic(new _Function_2_1(field)));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",81)
		Array< Dynamic > patternMatches = Array_obj< Dynamic >::__new().Add( Dynamic(new _Function_1_1(pattern)));

		HX_BEGIN_LOCAL_FUNC1(_Function_1_2,Array< ::String >,prefix)
		::Option run(::String $t2){
{
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",82)
				Array< ::String > field = Array_obj< ::String >::__new().Add($t2);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",82)
				return ::Option_obj::Some(::StringExtensions_obj::startsWith(field->__get(0),prefix->__get(0)));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",82)
		Array< Dynamic > prefixMatches = Array_obj< Dynamic >::__new().Add( Dynamic(new _Function_1_2(prefix)));

		HX_BEGIN_LOCAL_FUNC2(_Function_1_3,Array< Dynamic >,patternMatches,Array< Dynamic >,prefixMatches)
		bool run(::String $t3){
{
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",84)
				Array< ::String > field = Array_obj< ::String >::__new().Add($t3);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",84)
				return ::OptionExtensions_obj::getOrElseC(::OptionExtensions_obj::orElseC(patternMatches->__get(0)(field->__get(0)),prefixMatches->__get(0)(field->__get(0))),false).Cast< bool >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",84)
		Dynamic fieldIsTest =  Dynamic(new _Function_1_3(patternMatches,prefixMatches));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",85)
		Dynamic fieldIsMethod = ::Function2Extensions_obj::curry(this->isMethod_dyn())(test->__get(0));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",87)
		Array< ::String > testMethods = ::ArrayExtensions_obj::filter(::Type_obj::getInstanceFields(::Type_obj::getClass(test->__get(0))),::haxe::functional::Predicate1Extensions_obj::_and(fieldIsTest,fieldIsMethod));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",89)
		Array< Dynamic > getMethodByName = Array_obj< Dynamic >::__new().Add(this->__Field(HX_CSTRING("addBeforeAll"))(test->__get(0),this->__Field(HX_CSTRING("addAfterAll"))(test->__get(0),Array_obj< int >::__new().Add(testMethods->length),::Function2Extensions_obj::curry(::haxe::test::Runner_obj::findMethodByName_dyn())(test->__get(0)))));

		HX_BEGIN_LOCAL_FUNC2(_Function_1_4,Array< Dynamic >,test,Array< Dynamic >,getMethodByName)
		::haxe::test::TestFixture run(::String $t4){
{
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",91)
				Array< ::String > field = Array_obj< ::String >::__new().Add($t4);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",92)
				return ::haxe::test::TestFixture_obj::__new(test->__get(0),field->__get(0),getMethodByName->__get(0)(field->__get(0)),HX_CSTRING("before"),HX_CSTRING("after"));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",91)
		Array< ::haxe::test::TestFixture > methodFixtures = ::ArrayExtensions_obj::map(testMethods, Dynamic(new _Function_1_4(test,getMethodByName)));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",95)
		this->addFixtures(methodFixtures);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",97)
		return this;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Runner_obj,add,return )

::haxe::test::Runner Runner_obj::addFixture( ::haxe::test::TestFixture fixture){
	__SAFE_POINT
	HX_SOURCE_PUSH("Runner_obj::addFixture")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",101)
	this->fixtures->push(fixture);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",102)
	(this->length)++;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",104)
	return this;
}


HX_DEFINE_DYNAMIC_FUNC1(Runner_obj,addFixture,return )

::haxe::test::Runner Runner_obj::addFixtures( Dynamic fixtures){
	__SAFE_POINT
	HX_SOURCE_PUSH("Runner_obj::addFixtures")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",108)
	for(::cpp::FastIterator_obj< ::haxe::test::TestFixture > *__it = ::cpp::CreateFastIterator< ::haxe::test::TestFixture >(fixtures->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		::haxe::test::TestFixture fixture = __it->next();
		this->addFixture(fixture);
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",110)
	return this;
}


HX_DEFINE_DYNAMIC_FUNC1(Runner_obj,addFixtures,return )

::haxe::test::TestFixture Runner_obj::getFixture( int index){
	HX_SOURCE_PUSH("Runner_obj::getFixture")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",114)
	return this->fixtures->__get(index);
}


HX_DEFINE_DYNAMIC_FUNC1(Runner_obj,getFixture,return )

bool Runner_obj::isMethod( Dynamic test,::String name){
	__SAFE_POINT
	HX_SOURCE_PUSH("Runner_obj::isMethod")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",118)
	try{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",119)
		return ::Reflect_obj::isFunction(::Reflect_obj::field(test,name));
	}
	catch(Dynamic __e){
		{
			Dynamic e = __e;{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",121)
				return false;
			}
		}
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Runner_obj,isMethod,return )

::haxe::test::Runner Runner_obj::run( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Runner_obj::run")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",127)
	this->pos = 0;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",128)
	this->onStart->dispatch(this);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",129)
	this->runNext();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",131)
	return this;
}


HX_DEFINE_DYNAMIC_FUNC0(Runner_obj,run,return )

Void Runner_obj::runNext( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Runner_obj::runNext")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",135)
		if ((this->fixtures->length > this->pos)){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",136)
			this->runFixture(this->fixtures->__get((this->pos)++));
		}
		else{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",138)
			this->onComplete->dispatch(this);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Runner_obj,runNext,(void))

Void Runner_obj::runFixture( ::haxe::test::TestFixture fixture){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Runner_obj::runFixture")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",142)
		::haxe::test::TestHandler handler = ::haxe::test::TestHandler_obj::__new(fixture);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",143)
		handler->onComplete->__Field(HX_CSTRING("add"))(this->testComplete_dyn());
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",144)
		handler->execute();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Runner_obj,runFixture,(void))

Void Runner_obj::testComplete( ::haxe::test::TestHandler h){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Runner_obj::testComplete")
		struct _Function_1_1{
			inline static Dynamic Block( ::haxe::test::TestHandler &h,::haxe::test::Runner_obj *__this){
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("result") , ::haxe::test::TestResult_obj::ofHandler(h));
				__result->Add(HX_CSTRING("done") , __this->pos);
				__result->Add(HX_CSTRING("totals") , __this->length);
				return __result;
			}
		};
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",148)
		this->onProgress->dispatch(_Function_1_1::Block(h,this));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",149)
		this->runNext();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Runner_obj,testComplete,(void))

Dynamic Runner_obj::addBeforeAll( Dynamic test,Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Runner_obj::addBeforeAll")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",152)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",153)
	if ((::Reflect_obj::field(test,HX_CSTRING("beforeAll")) != null())){
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",154)
		Array< Dynamic > beforeAll = Array_obj< Dynamic >::__new().Add(::haxe::test::Runner_obj::findMethodByName(test,HX_CSTRING("beforeAll")));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",155)
		Array< int > totalTests = Array_obj< int >::__new().Add(0);

		HX_BEGIN_LOCAL_FUNC2(_Function_2_1,Array< int >,totalTests,Array< Dynamic >,beforeAll)
		Void run(){
{
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",158)
				++(totalTests[0]);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",160)
				if ((totalTests->__get(0) == 1)){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",161)
					beforeAll->__get(0)();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",157)
		Array< Dynamic > runBeforeAll = Array_obj< Dynamic >::__new().Add( Dynamic(new _Function_2_1(totalTests,beforeAll)));

		HX_BEGIN_LOCAL_FUNC2(_Function_2_2,Array< Dynamic >,f,Array< Dynamic >,runBeforeAll)
		Dynamic run(::String name){
{
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",166)
				Array< Dynamic > method = Array_obj< Dynamic >::__new().Add(f->__get(0)(name));

				HX_BEGIN_LOCAL_FUNC2(_Function_3_1,Array< Dynamic >,runBeforeAll,Array< Dynamic >,method)
				Void run(){
{
						__SAFE_POINT
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",169)
						runBeforeAll->__get(0)();
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",171)
						method->__get(0)();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",168)
				return  Dynamic(new _Function_3_1(runBeforeAll,method));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",165)
		return  Dynamic(new _Function_2_2(f,runBeforeAll));
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",176)
	return f->__get(0);
}


HX_DEFINE_DYNAMIC_FUNC2(Runner_obj,addBeforeAll,return )

Dynamic Runner_obj::addAfterAll( Dynamic test,Array< int > $t1,Dynamic $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Runner_obj::addAfterAll")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",179)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",179)
	Array< Array< int > > totalTestsHolder = Array_obj< Array< int > >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",180)
	if ((::Reflect_obj::field(test,HX_CSTRING("afterAll")) != null())){
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",181)
		Array< Dynamic > afterAll = Array_obj< Dynamic >::__new().Add(::haxe::test::Runner_obj::findMethodByName(test,HX_CSTRING("afterAll")));

		HX_BEGIN_LOCAL_FUNC2(_Function_2_1,Array< Array< int > >,totalTestsHolder,Array< Dynamic >,afterAll)
		Void run(){
{
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",184)
				--(totalTestsHolder->__get(0)[0]);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",186)
				if ((totalTestsHolder->__get(0)->__get(0) == 0)){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",187)
					afterAll->__get(0)();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",183)
		Array< Dynamic > runAfterAll = Array_obj< Dynamic >::__new().Add( Dynamic(new _Function_2_1(totalTestsHolder,afterAll)));

		HX_BEGIN_LOCAL_FUNC2(_Function_2_2,Array< Dynamic >,f,Array< Dynamic >,runAfterAll)
		Dynamic run(::String name){
{
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",192)
				Array< Dynamic > method = Array_obj< Dynamic >::__new().Add(f->__get(0)(name));

				HX_BEGIN_LOCAL_FUNC2(_Function_3_1,Array< Dynamic >,method,Array< Dynamic >,runAfterAll)
				Void run(){
{
						__SAFE_POINT
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",195)
						try{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",196)
							method->__get(0)();
						}
						catch(Dynamic __e){
							{
								Dynamic e = __e;{
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",199)
									runAfterAll->__get(0)();
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",201)
									hx::Throw (e);
								}
							}
						}
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",204)
						runAfterAll->__get(0)();
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",194)
				return  Dynamic(new _Function_3_1(method,runAfterAll));
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",191)
		return  Dynamic(new _Function_2_2(f,runAfterAll));
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",209)
	return f->__get(0);
}


HX_DEFINE_DYNAMIC_FUNC3(Runner_obj,addAfterAll,return )

Dynamic Runner_obj::findMethodByName( Dynamic $t1,::String $t2){
	__SAFE_POINT
	HX_SOURCE_PUSH("Runner_obj::findMethodByName")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",212)
	Array< ::String > name = Array_obj< ::String >::__new().Add($t2);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",212)
	Array< Dynamic > test = Array_obj< Dynamic >::__new().Add($t1);

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,test,Array< ::String >,name)
	Void run(){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",214)
			Dynamic method = ::Reflect_obj::field(test->__get(0),name->__get(0));
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",215)
			if ((method != null())){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",216)
				::Reflect_obj::callMethod(test->__get(0),method,Array_obj< Dynamic >::__new());
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Runner.hx",213)
	return  Dynamic(new _Function_1_1(test,name));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Runner_obj,findMethodByName,return )


Runner_obj::Runner_obj()
{
}

void Runner_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Runner);
	HX_MARK_MEMBER_NAME(fixtures,"fixtures");
	HX_MARK_MEMBER_NAME(onProgress,"onProgress");
	HX_MARK_MEMBER_NAME(onStart,"onStart");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_END_CLASS();
}

Dynamic Runner_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"pos") ) { return pos; }
		if (HX_FIELD_EQ(inName,"run") ) { return run_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		if (HX_FIELD_EQ(inName,"addAll") ) { return addAll_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { return onStart; }
		if (HX_FIELD_EQ(inName,"runNext") ) { return runNext_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fixtures") ) { return fixtures; }
		if (HX_FIELD_EQ(inName,"isMethod") ) { return isMethod_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onProgress") ) { return onProgress; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"addFixture") ) { return addFixture_dyn(); }
		if (HX_FIELD_EQ(inName,"getFixture") ) { return getFixture_dyn(); }
		if (HX_FIELD_EQ(inName,"runFixture") ) { return runFixture_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addFixtures") ) { return addFixtures_dyn(); }
		if (HX_FIELD_EQ(inName,"addAfterAll") ) { return addAfterAll_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"testComplete") ) { return testComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"addBeforeAll") ) { return addBeforeAll_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"findMethodByName") ) { return findMethodByName_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Runner_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { onStart=inValue.Cast< ::haxe::test::Dispatcher >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fixtures") ) { fixtures=inValue.Cast< Array< ::haxe::test::TestFixture > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onProgress") ) { onProgress=inValue.Cast< ::haxe::test::Dispatcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< ::haxe::test::Dispatcher >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Runner_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fixtures"));
	outFields->push(HX_CSTRING("onProgress"));
	outFields->push(HX_CSTRING("onStart"));
	outFields->push(HX_CSTRING("onComplete"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("pos"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("findMethodByName"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("fixtures"),
	HX_CSTRING("onProgress"),
	HX_CSTRING("onStart"),
	HX_CSTRING("onComplete"),
	HX_CSTRING("length"),
	HX_CSTRING("addAll"),
	HX_CSTRING("add"),
	HX_CSTRING("addFixture"),
	HX_CSTRING("addFixtures"),
	HX_CSTRING("getFixture"),
	HX_CSTRING("isMethod"),
	HX_CSTRING("pos"),
	HX_CSTRING("run"),
	HX_CSTRING("runNext"),
	HX_CSTRING("runFixture"),
	HX_CSTRING("testComplete"),
	HX_CSTRING("addBeforeAll"),
	HX_CSTRING("addAfterAll"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Runner_obj::__mClass;

void Runner_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.Runner"), hx::TCanCast< Runner_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Runner_obj::__boot()
{
}

} // end namespace haxe
} // end namespace test
