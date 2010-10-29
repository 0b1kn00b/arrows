#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_ClassResult
#include <haxe/test/ui/common/ClassResult.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_FixtureResult
#include <haxe/test/ui/common/FixtureResult.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_ResultStats
#include <haxe/test/ui/common/ResultStats.h>
#endif
namespace haxe{
namespace test{
namespace ui{
namespace common{

Void ClassResult_obj::__construct(::String className,::String setupName,::String teardownName)
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",35)
	this->fixtures = ::Hash_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",36)
	this->className = className;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",37)
	this->setupName = setupName;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",38)
	this->hasSetup = (setupName != null());
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",39)
	this->teardownName = teardownName;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",40)
	this->hasTeardown = (teardownName != null());
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",42)
	this->methods = 0;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",43)
	this->stats = ::haxe::test::ui::common::ResultStats_obj::__new();
}
;
	return null();
}

ClassResult_obj::~ClassResult_obj() { }

Dynamic ClassResult_obj::__CreateEmpty() { return  new ClassResult_obj; }
hx::ObjectPtr< ClassResult_obj > ClassResult_obj::__new(::String className,::String setupName,::String teardownName)
{  hx::ObjectPtr< ClassResult_obj > result = new ClassResult_obj();
	result->__construct(className,setupName,teardownName);
	return result;}

Dynamic ClassResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ClassResult_obj > result = new ClassResult_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void ClassResult_obj::add( ::haxe::test::ui::common::FixtureResult result){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ClassResult_obj::add")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",47)
		if (this->fixtures->exists(result->methodName))
			hx::Throw (HX_CSTRING("invalid duplicated fixture result"));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",49)
		this->stats->wire(result->stats);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",51)
		(this->methods)++;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",52)
		this->fixtures->set(result->methodName,result);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ClassResult_obj,add,(void))

::haxe::test::ui::common::FixtureResult ClassResult_obj::get( ::String method){
	__SAFE_POINT
	HX_SOURCE_PUSH("ClassResult_obj::get")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",56)
	return this->fixtures->__Field(HX_CSTRING("get"))(method).Cast< ::haxe::test::ui::common::FixtureResult >();
}


HX_DEFINE_DYNAMIC_FUNC1(ClassResult_obj,get,return )

bool ClassResult_obj::exists( ::String method){
	__SAFE_POINT
	HX_SOURCE_PUSH("ClassResult_obj::exists")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",60)
	return this->fixtures->exists(method);
}


HX_DEFINE_DYNAMIC_FUNC1(ClassResult_obj,exists,return )

Array< ::String > ClassResult_obj::methodNames( Dynamic __o_errorsHavePriority){
bool errorsHavePriority = __o_errorsHavePriority.Default(true);
	HX_SOURCE_PUSH("ClassResult_obj::methodNames");
{
		__SAFE_POINT
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",64)
		Array< ::String > names = Array_obj< ::String >::__new();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",65)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->fixtures->__Field(HX_CSTRING("keys"))());  __it->hasNext(); ){
			::String name = __it->next();
			names->push(name);
			__SAFE_POINT
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",67)
		if (errorsHavePriority){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",68)
			Array< ::haxe::test::ui::common::ClassResult > me = Array_obj< ::haxe::test::ui::common::ClassResult >::__new().Add(this);

			HX_BEGIN_LOCAL_FUNC1(_Function_2_1,Array< ::haxe::test::ui::common::ClassResult >,me)
			int run(::String a,::String b){
{
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",70)
					::haxe::test::ui::common::ResultStats as = me[0]->get(a)->stats;
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",71)
					::haxe::test::ui::common::ResultStats bs = me[0]->get(b)->stats;
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",72)
					if (as->hasErrors){
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",73)
						return (  ((!(bs->hasErrors))) ? int(-1) : int(((  ((as->errors == bs->errors)) ? int(::Reflect_obj::compare(a,b)) : int(::Reflect_obj::compare(as->errors,bs->errors)) ))) );
					}
					else{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",74)
						if (bs->hasErrors){
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",75)
							return 1;
						}
						else{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",76)
							if (as->hasFailures){
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",77)
								return (  ((!(bs->hasFailures))) ? int(-1) : int(((  ((as->failures == bs->failures)) ? int(::Reflect_obj::compare(a,b)) : int(::Reflect_obj::compare(as->failures,bs->failures)) ))) );
							}
							else{
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",78)
								if (bs->hasFailures){
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",79)
									return 1;
								}
								else{
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",80)
									if (as->hasWarnings){
										HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",81)
										return (  ((!(bs->hasWarnings))) ? int(-1) : int(((  ((as->warnings == bs->warnings)) ? int(::Reflect_obj::compare(a,b)) : int(::Reflect_obj::compare(as->warnings,bs->warnings)) ))) );
									}
									else{
										HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",82)
										if (bs->hasWarnings){
											HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",83)
											return 1;
										}
										else{
											HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",85)
											return ::Reflect_obj::compare(a,b);
										}
									}
								}
							}
						}
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",69)
			names->sort( Dynamic(new _Function_2_1(me)));
		}
		else{

			HX_BEGIN_LOCAL_FUNC0(_Function_2_1)
			int run(::String a,::String b){
{
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",90)
					return ::Reflect_obj::compare(a,b);
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",89)
			names->sort( Dynamic(new _Function_2_1()));
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/ClassResult.hx",93)
		return names;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(ClassResult_obj,methodNames,return )


ClassResult_obj::ClassResult_obj()
{
}

void ClassResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClassResult);
	HX_MARK_MEMBER_NAME(fixtures,"fixtures");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(setupName,"setupName");
	HX_MARK_MEMBER_NAME(teardownName,"teardownName");
	HX_MARK_MEMBER_NAME(hasSetup,"hasSetup");
	HX_MARK_MEMBER_NAME(hasTeardown,"hasTeardown");
	HX_MARK_MEMBER_NAME(methods,"methods");
	HX_MARK_MEMBER_NAME(stats,"stats");
	HX_MARK_END_CLASS();
}

Dynamic ClassResult_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stats") ) { return stats; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"methods") ) { return methods; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fixtures") ) { return fixtures; }
		if (HX_FIELD_EQ(inName,"hasSetup") ) { return hasSetup; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		if (HX_FIELD_EQ(inName,"setupName") ) { return setupName; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasTeardown") ) { return hasTeardown; }
		if (HX_FIELD_EQ(inName,"methodNames") ) { return methodNames_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"teardownName") ) { return teardownName; }
	}
	return super::__Field(inName);
}

Dynamic ClassResult_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast< ::haxe::test::ui::common::ResultStats >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"methods") ) { methods=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fixtures") ) { fixtures=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasSetup") ) { hasSetup=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"setupName") ) { setupName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasTeardown") ) { hasTeardown=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"teardownName") ) { teardownName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void ClassResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("fixtures"));
	outFields->push(HX_CSTRING("className"));
	outFields->push(HX_CSTRING("setupName"));
	outFields->push(HX_CSTRING("teardownName"));
	outFields->push(HX_CSTRING("hasSetup"));
	outFields->push(HX_CSTRING("hasTeardown"));
	outFields->push(HX_CSTRING("methods"));
	outFields->push(HX_CSTRING("stats"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("fixtures"),
	HX_CSTRING("className"),
	HX_CSTRING("setupName"),
	HX_CSTRING("teardownName"),
	HX_CSTRING("hasSetup"),
	HX_CSTRING("hasTeardown"),
	HX_CSTRING("methods"),
	HX_CSTRING("stats"),
	HX_CSTRING("add"),
	HX_CSTRING("get"),
	HX_CSTRING("exists"),
	HX_CSTRING("methodNames"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ClassResult_obj::__mClass;

void ClassResult_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.ui.common.ClassResult"), hx::TCanCast< ClassResult_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ClassResult_obj::__boot()
{
}

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace common
