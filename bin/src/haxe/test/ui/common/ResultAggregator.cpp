#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_test_Assertation
#include <haxe/test/Assertation.h>
#endif
#ifndef INCLUDED_haxe_test_Dispatcher
#include <haxe/test/Dispatcher.h>
#endif
#ifndef INCLUDED_haxe_test_Notifier
#include <haxe/test/Notifier.h>
#endif
#ifndef INCLUDED_haxe_test_Runner
#include <haxe/test/Runner.h>
#endif
#ifndef INCLUDED_haxe_test_TestResult
#include <haxe/test/TestResult.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_ClassResult
#include <haxe/test/ui/common/ClassResult.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_FixtureResult
#include <haxe/test/ui/common/FixtureResult.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_PackageResult
#include <haxe/test/ui/common/PackageResult.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_ResultAggregator
#include <haxe/test/ui/common/ResultAggregator.h>
#endif
namespace haxe{
namespace test{
namespace ui{
namespace common{

Void ResultAggregator_obj::__construct(::haxe::test::Runner runner,Dynamic __o_flattenPackage)
{
bool flattenPackage = __o_flattenPackage.Default(false);
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",36)
	if ((runner == null()))
		hx::Throw (HX_CSTRING("runner argument is null"));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",37)
	this->flattenPackage = flattenPackage;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",38)
	this->runner = runner;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",39)
	runner->onStart->__Field(HX_CSTRING("add"))(this->start_dyn());
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",40)
	runner->onProgress->__Field(HX_CSTRING("add"))(this->progress_dyn());
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",41)
	runner->onComplete->__Field(HX_CSTRING("add"))(this->complete_dyn());
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",43)
	this->onStart = ::haxe::test::Notifier_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",44)
	this->onComplete = ::haxe::test::Dispatcher_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",45)
	this->onProgress = ::haxe::test::Dispatcher_obj::__new();
}
;
	return null();
}

ResultAggregator_obj::~ResultAggregator_obj() { }

Dynamic ResultAggregator_obj::__CreateEmpty() { return  new ResultAggregator_obj; }
hx::ObjectPtr< ResultAggregator_obj > ResultAggregator_obj::__new(::haxe::test::Runner runner,Dynamic __o_flattenPackage)
{  hx::ObjectPtr< ResultAggregator_obj > result = new ResultAggregator_obj();
	result->__construct(runner,__o_flattenPackage);
	return result;}

Dynamic ResultAggregator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ResultAggregator_obj > result = new ResultAggregator_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void ResultAggregator_obj::start( ::haxe::test::Runner runner){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ResultAggregator_obj::start")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",49)
		this->root = ::haxe::test::ui::common::PackageResult_obj::__new(null());
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",50)
		this->onStart->dispatch();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResultAggregator_obj,start,(void))

::haxe::test::ui::common::PackageResult ResultAggregator_obj::getOrCreatePackage( ::String pack,bool flat,::haxe::test::ui::common::PackageResult ref){
	__SAFE_POINT
	HX_SOURCE_PUSH("ResultAggregator_obj::getOrCreatePackage")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",54)
	if ((ref == null()))
		ref = this->root;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",55)
	if ((bool((pack == null())) || bool((pack == HX_CSTRING("")))))
		return ref;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",56)
	if (flat){
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",57)
		if (ref->existsPackage(pack))
			return ref->getPackage(pack);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",59)
		::haxe::test::ui::common::PackageResult p = ::haxe::test::ui::common::PackageResult_obj::__new(pack);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",60)
		ref->addPackage(p);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",61)
		return p;
	}
	else{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",63)
		Array< ::String > parts = pack.split(HX_CSTRING("."));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",64)
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",64)
			int _g = 0;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",64)
			while((_g < parts->length)){
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",64)
				::String part = parts->__get(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",64)
				++(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",65)
				ref = this->getOrCreatePackage(part,true,ref);
			}
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",67)
		return ref;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(ResultAggregator_obj,getOrCreatePackage,return )

::haxe::test::ui::common::ClassResult ResultAggregator_obj::getOrCreateClass( ::haxe::test::ui::common::PackageResult pack,::String cls,::String setup,::String teardown){
	__SAFE_POINT
	HX_SOURCE_PUSH("ResultAggregator_obj::getOrCreateClass")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",72)
	if (pack->existsClass(cls))
		return pack->getClass(cls);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",73)
	::haxe::test::ui::common::ClassResult c = ::haxe::test::ui::common::ClassResult_obj::__new(cls,setup,teardown);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",74)
	pack->addClass(c);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",75)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC4(ResultAggregator_obj,getOrCreateClass,return )

::haxe::test::ui::common::FixtureResult ResultAggregator_obj::createFixture( ::haxe::test::TestResult result){
	__SAFE_POINT
	HX_SOURCE_PUSH("ResultAggregator_obj::createFixture")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",79)
	::haxe::test::ui::common::FixtureResult f = ::haxe::test::ui::common::FixtureResult_obj::__new(result->method);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",80)
	for(::cpp::FastIterator_obj< ::haxe::test::Assertation > *__it = ::cpp::CreateFastIterator< ::haxe::test::Assertation >(result->assertations->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		::haxe::test::Assertation assertation = __it->next();
		f->add(assertation);
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",82)
	return f;
}


HX_DEFINE_DYNAMIC_FUNC1(ResultAggregator_obj,createFixture,return )

Void ResultAggregator_obj::progress( Dynamic e){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ResultAggregator_obj::progress")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",86)
		this->root->addResult(e->__Field(HX_CSTRING("result")).Cast< ::haxe::test::TestResult >(),this->flattenPackage);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",87)
		this->onProgress->dispatch(e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResultAggregator_obj,progress,(void))

Void ResultAggregator_obj::complete( ::haxe::test::Runner runner){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ResultAggregator_obj::complete")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ResultAggregator.hx",91)
		this->onComplete->dispatch(this->root);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResultAggregator_obj,complete,(void))


ResultAggregator_obj::ResultAggregator_obj()
{
}

void ResultAggregator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ResultAggregator);
	HX_MARK_MEMBER_NAME(runner,"runner");
	HX_MARK_MEMBER_NAME(flattenPackage,"flattenPackage");
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(onStart,"onStart");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(onProgress,"onProgress");
	HX_MARK_END_CLASS();
}

Dynamic ResultAggregator_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"runner") ) { return runner; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { return onStart; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return progress_dyn(); }
		if (HX_FIELD_EQ(inName,"complete") ) { return complete_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return onProgress; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createFixture") ) { return createFixture_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flattenPackage") ) { return flattenPackage; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getOrCreateClass") ) { return getOrCreateClass_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getOrCreatePackage") ) { return getOrCreatePackage_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ResultAggregator_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::haxe::test::ui::common::PackageResult >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"runner") ) { runner=inValue.Cast< ::haxe::test::Runner >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onStart") ) { onStart=inValue.Cast< ::haxe::test::Notifier >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< ::haxe::test::Dispatcher >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onProgress") ) { onProgress=inValue.Cast< ::haxe::test::Dispatcher >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"flattenPackage") ) { flattenPackage=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void ResultAggregator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("runner"));
	outFields->push(HX_CSTRING("flattenPackage"));
	outFields->push(HX_CSTRING("root"));
	outFields->push(HX_CSTRING("onStart"));
	outFields->push(HX_CSTRING("onComplete"));
	outFields->push(HX_CSTRING("onProgress"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("runner"),
	HX_CSTRING("flattenPackage"),
	HX_CSTRING("root"),
	HX_CSTRING("onStart"),
	HX_CSTRING("onComplete"),
	HX_CSTRING("onProgress"),
	HX_CSTRING("start"),
	HX_CSTRING("getOrCreatePackage"),
	HX_CSTRING("getOrCreateClass"),
	HX_CSTRING("createFixture"),
	HX_CSTRING("progress"),
	HX_CSTRING("complete"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ResultAggregator_obj::__mClass;

void ResultAggregator_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.ui.common.ResultAggregator"), hx::TCanCast< ResultAggregator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ResultAggregator_obj::__boot()
{
}

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace common
