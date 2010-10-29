#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_test_Dispatcher
#include <haxe/test/Dispatcher.h>
#endif
#ifndef INCLUDED_haxe_test_TestFixture
#include <haxe/test/TestFixture.h>
#endif
namespace haxe{
namespace test{

Void TestFixture_obj::__construct(Dynamic target,::String methodName,Dynamic method,::String setup,::String teardown)
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestFixture.hx",33)
	this->__FieldRef(HX_CSTRING("target")) = target;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestFixture.hx",34)
	this->methodName = methodName;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestFixture.hx",35)
	this->method = method;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestFixture.hx",36)
	this->setup = setup;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestFixture.hx",37)
	this->teardown = teardown;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestFixture.hx",39)
	this->onTested = ::haxe::test::Dispatcher_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestFixture.hx",40)
	this->onTimeout = ::haxe::test::Dispatcher_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestFixture.hx",41)
	this->onComplete = ::haxe::test::Dispatcher_obj::__new();
}
;
	return null();
}

TestFixture_obj::~TestFixture_obj() { }

Dynamic TestFixture_obj::__CreateEmpty() { return  new TestFixture_obj; }
hx::ObjectPtr< TestFixture_obj > TestFixture_obj::__new(Dynamic target,::String methodName,Dynamic method,::String setup,::String teardown)
{  hx::ObjectPtr< TestFixture_obj > result = new TestFixture_obj();
	result->__construct(target,methodName,method,setup,teardown);
	return result;}

Dynamic TestFixture_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TestFixture_obj > result = new TestFixture_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return result;}

Void TestFixture_obj::checkMethod( ::String name,::String arg){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("TestFixture_obj::checkMethod")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestFixture.hx",45)
		Dynamic field = ::Reflect_obj::field(this->__Field(HX_CSTRING("target")),name);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestFixture.hx",46)
		if ((field == null()))
			hx::Throw ((((((arg + HX_CSTRING(" function "))) + name)) + HX_CSTRING(" is not a field of target")));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/TestFixture.hx",47)
		if (!(::Reflect_obj::isFunction(field)))
			hx::Throw ((((((arg + HX_CSTRING(" function "))) + name)) + HX_CSTRING(" is not a function")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TestFixture_obj,checkMethod,(void))


TestFixture_obj::TestFixture_obj()
{
}

void TestFixture_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TestFixture);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(methodName,"methodName");
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(setup,"setup");
	HX_MARK_MEMBER_NAME(teardown,"teardown");
	HX_MARK_MEMBER_NAME(onTested,"onTested");
	HX_MARK_MEMBER_NAME(onTimeout,"onTimeout");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_END_CLASS();
}

Dynamic TestFixture_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"setup") ) { return setup; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"teardown") ) { return teardown; }
		if (HX_FIELD_EQ(inName,"onTested") ) { return onTested; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onTimeout") ) { return onTimeout; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"methodName") ) { return methodName; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"checkMethod") ) { return checkMethod_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic TestFixture_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"setup") ) { setup=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"teardown") ) { teardown=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onTested") ) { onTested=inValue.Cast< ::haxe::test::Dispatcher >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onTimeout") ) { onTimeout=inValue.Cast< ::haxe::test::Dispatcher >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"methodName") ) { methodName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< ::haxe::test::Dispatcher >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void TestFixture_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("methodName"));
	outFields->push(HX_CSTRING("setup"));
	outFields->push(HX_CSTRING("teardown"));
	outFields->push(HX_CSTRING("onTested"));
	outFields->push(HX_CSTRING("onTimeout"));
	outFields->push(HX_CSTRING("onComplete"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("target"),
	HX_CSTRING("methodName"),
	HX_CSTRING("method"),
	HX_CSTRING("setup"),
	HX_CSTRING("teardown"),
	HX_CSTRING("onTested"),
	HX_CSTRING("onTimeout"),
	HX_CSTRING("onComplete"),
	HX_CSTRING("checkMethod"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class TestFixture_obj::__mClass;

void TestFixture_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.TestFixture"), hx::TCanCast< TestFixture_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void TestFixture_obj::__boot()
{
}

} // end namespace haxe
} // end namespace test
