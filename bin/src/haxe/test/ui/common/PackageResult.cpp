#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_test_Assertation
#include <haxe/test/Assertation.h>
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
#ifndef INCLUDED_haxe_test_ui_common_ResultStats
#include <haxe/test/ui/common/ResultStats.h>
#endif
namespace haxe{
namespace test{
namespace ui{
namespace common{

Void PackageResult_obj::__construct(::String packageName)
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",33)
	this->packageName = packageName;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",34)
	this->classes = ::Hash_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",35)
	this->packages = ::Hash_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",36)
	this->stats = ::haxe::test::ui::common::ResultStats_obj::__new();
}
;
	return null();
}

PackageResult_obj::~PackageResult_obj() { }

Dynamic PackageResult_obj::__CreateEmpty() { return  new PackageResult_obj; }
hx::ObjectPtr< PackageResult_obj > PackageResult_obj::__new(::String packageName)
{  hx::ObjectPtr< PackageResult_obj > result = new PackageResult_obj();
	result->__construct(packageName);
	return result;}

Dynamic PackageResult_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PackageResult_obj > result = new PackageResult_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PackageResult_obj::addResult( ::haxe::test::TestResult result,bool flattenPackage){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("PackageResult_obj::addResult")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",40)
		::haxe::test::ui::common::PackageResult pack = this->getOrCreatePackage(result->pack,flattenPackage,this);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",41)
		::haxe::test::ui::common::ClassResult cls = this->getOrCreateClass(pack,result->cls,result->setup,result->teardown);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",42)
		::haxe::test::ui::common::FixtureResult fix = this->createFixture(result->method,result->assertations);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",43)
		cls->add(fix);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PackageResult_obj,addResult,(void))

Void PackageResult_obj::addClass( ::haxe::test::ui::common::ClassResult result){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("PackageResult_obj::addClass")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",47)
		this->classes->set(result->className,result);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",48)
		this->stats->wire(result->stats);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PackageResult_obj,addClass,(void))

Void PackageResult_obj::addPackage( ::haxe::test::ui::common::PackageResult result){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("PackageResult_obj::addPackage")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",52)
		this->packages->set(result->packageName,result);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",53)
		this->stats->wire(result->stats);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PackageResult_obj,addPackage,(void))

bool PackageResult_obj::existsPackage( ::String name){
	__SAFE_POINT
	HX_SOURCE_PUSH("PackageResult_obj::existsPackage")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",57)
	return this->packages->exists(name);
}


HX_DEFINE_DYNAMIC_FUNC1(PackageResult_obj,existsPackage,return )

bool PackageResult_obj::existsClass( ::String name){
	__SAFE_POINT
	HX_SOURCE_PUSH("PackageResult_obj::existsClass")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",61)
	return this->classes->exists(name);
}


HX_DEFINE_DYNAMIC_FUNC1(PackageResult_obj,existsClass,return )

::haxe::test::ui::common::PackageResult PackageResult_obj::getPackage( ::String name){
	__SAFE_POINT
	HX_SOURCE_PUSH("PackageResult_obj::getPackage")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",65)
	if ((bool((this->packageName == null())) && bool((name == HX_CSTRING("")))))
		return this;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",66)
	return this->packages->__Field(HX_CSTRING("get"))(name).Cast< ::haxe::test::ui::common::PackageResult >();
}


HX_DEFINE_DYNAMIC_FUNC1(PackageResult_obj,getPackage,return )

::haxe::test::ui::common::ClassResult PackageResult_obj::getClass( ::String name){
	__SAFE_POINT
	HX_SOURCE_PUSH("PackageResult_obj::getClass")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",70)
	return this->classes->__Field(HX_CSTRING("get"))(name).Cast< ::haxe::test::ui::common::ClassResult >();
}


HX_DEFINE_DYNAMIC_FUNC1(PackageResult_obj,getClass,return )

Array< ::String > PackageResult_obj::classNames( Dynamic __o_errorsHavePriority){
bool errorsHavePriority = __o_errorsHavePriority.Default(true);
	HX_SOURCE_PUSH("PackageResult_obj::classNames");
{
		__SAFE_POINT
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",74)
		Array< ::String > names = Array_obj< ::String >::__new();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",75)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->classes->__Field(HX_CSTRING("keys"))());  __it->hasNext(); ){
			::String name = __it->next();
			names->push(name);
			__SAFE_POINT
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",77)
		if (errorsHavePriority){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",78)
			Array< ::haxe::test::ui::common::PackageResult > me = Array_obj< ::haxe::test::ui::common::PackageResult >::__new().Add(this);

			HX_BEGIN_LOCAL_FUNC1(_Function_2_1,Array< ::haxe::test::ui::common::PackageResult >,me)
			int run(::String a,::String b){
{
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",80)
					::haxe::test::ui::common::ResultStats as = me[0]->getClass(a)->stats;
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",81)
					::haxe::test::ui::common::ResultStats bs = me[0]->getClass(b)->stats;
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",82)
					if (as->hasErrors){
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",83)
						return (  ((!(bs->hasErrors))) ? int(-1) : int(((  ((as->errors == bs->errors)) ? int(::Reflect_obj::compare(a,b)) : int(::Reflect_obj::compare(as->errors,bs->errors)) ))) );
					}
					else{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",84)
						if (bs->hasErrors){
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",85)
							return 1;
						}
						else{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",86)
							if (as->hasFailures){
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",87)
								return (  ((!(bs->hasFailures))) ? int(-1) : int(((  ((as->failures == bs->failures)) ? int(::Reflect_obj::compare(a,b)) : int(::Reflect_obj::compare(as->failures,bs->failures)) ))) );
							}
							else{
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",88)
								if (bs->hasFailures){
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",89)
									return 1;
								}
								else{
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",90)
									if (as->hasWarnings){
										HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",91)
										return (  ((!(bs->hasWarnings))) ? int(-1) : int(((  ((as->warnings == bs->warnings)) ? int(::Reflect_obj::compare(a,b)) : int(::Reflect_obj::compare(as->warnings,bs->warnings)) ))) );
									}
									else{
										HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",92)
										if (bs->hasWarnings){
											HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",93)
											return 1;
										}
										else{
											HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",95)
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

			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",79)
			names->sort( Dynamic(new _Function_2_1(me)));
		}
		else{

			HX_BEGIN_LOCAL_FUNC0(_Function_2_1)
			int run(::String a,::String b){
{
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",100)
					return ::Reflect_obj::compare(a,b);
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",99)
			names->sort( Dynamic(new _Function_2_1()));
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",103)
		return names;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(PackageResult_obj,classNames,return )

Array< ::String > PackageResult_obj::packageNames( Dynamic __o_errorsHavePriority){
bool errorsHavePriority = __o_errorsHavePriority.Default(true);
	HX_SOURCE_PUSH("PackageResult_obj::packageNames");
{
		__SAFE_POINT
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",107)
		Array< ::String > names = Array_obj< ::String >::__new();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",108)
		if ((this->packageName == null()))
			names->push(HX_CSTRING(""));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",109)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->packages->__Field(HX_CSTRING("keys"))());  __it->hasNext(); ){
			::String name = __it->next();
			names->push(name);
			__SAFE_POINT
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",111)
		if (errorsHavePriority){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",112)
			Array< ::haxe::test::ui::common::PackageResult > me = Array_obj< ::haxe::test::ui::common::PackageResult >::__new().Add(this);

			HX_BEGIN_LOCAL_FUNC1(_Function_2_1,Array< ::haxe::test::ui::common::PackageResult >,me)
			int run(::String a,::String b){
{
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",114)
					::haxe::test::ui::common::ResultStats as = me[0]->getPackage(a)->stats;
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",115)
					::haxe::test::ui::common::ResultStats bs = me[0]->getPackage(b)->stats;
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",116)
					if (as->hasErrors){
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",117)
						return (  ((!(bs->hasErrors))) ? int(-1) : int(((  ((as->errors == bs->errors)) ? int(::Reflect_obj::compare(a,b)) : int(::Reflect_obj::compare(as->errors,bs->errors)) ))) );
					}
					else{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",118)
						if (bs->hasErrors){
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",119)
							return 1;
						}
						else{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",120)
							if (as->hasFailures){
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",121)
								return (  ((!(bs->hasFailures))) ? int(-1) : int(((  ((as->failures == bs->failures)) ? int(::Reflect_obj::compare(a,b)) : int(::Reflect_obj::compare(as->failures,bs->failures)) ))) );
							}
							else{
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",122)
								if (bs->hasFailures){
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",123)
									return 1;
								}
								else{
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",124)
									if (as->hasWarnings){
										HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",125)
										return (  ((!(bs->hasWarnings))) ? int(-1) : int(((  ((as->warnings == bs->warnings)) ? int(::Reflect_obj::compare(a,b)) : int(::Reflect_obj::compare(as->warnings,bs->warnings)) ))) );
									}
									else{
										HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",126)
										if (bs->hasWarnings){
											HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",127)
											return 1;
										}
										else{
											HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",129)
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

			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",113)
			names->sort( Dynamic(new _Function_2_1(me)));
		}
		else{

			HX_BEGIN_LOCAL_FUNC0(_Function_2_1)
			int run(::String a,::String b){
{
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",134)
					return ::Reflect_obj::compare(a,b);
				}
				return null();
			}
			HX_END_LOCAL_FUNC2(return)

			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",133)
			names->sort( Dynamic(new _Function_2_1()));
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",137)
		return names;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(PackageResult_obj,packageNames,return )

::haxe::test::ui::common::FixtureResult PackageResult_obj::createFixture( ::String method,Dynamic assertations){
	__SAFE_POINT
	HX_SOURCE_PUSH("PackageResult_obj::createFixture")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",141)
	::haxe::test::ui::common::FixtureResult f = ::haxe::test::ui::common::FixtureResult_obj::__new(method);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",142)
	for(::cpp::FastIterator_obj< ::haxe::test::Assertation > *__it = ::cpp::CreateFastIterator< ::haxe::test::Assertation >(assertations->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		::haxe::test::Assertation assertation = __it->next();
		f->add(assertation);
		__SAFE_POINT
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",144)
	return f;
}


HX_DEFINE_DYNAMIC_FUNC2(PackageResult_obj,createFixture,return )

::haxe::test::ui::common::ClassResult PackageResult_obj::getOrCreateClass( ::haxe::test::ui::common::PackageResult pack,::String cls,::String setup,::String teardown){
	__SAFE_POINT
	HX_SOURCE_PUSH("PackageResult_obj::getOrCreateClass")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",148)
	if (pack->existsClass(cls))
		return pack->getClass(cls);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",149)
	::haxe::test::ui::common::ClassResult c = ::haxe::test::ui::common::ClassResult_obj::__new(cls,setup,teardown);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",150)
	pack->addClass(c);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",151)
	return c;
}


HX_DEFINE_DYNAMIC_FUNC4(PackageResult_obj,getOrCreateClass,return )

::haxe::test::ui::common::PackageResult PackageResult_obj::getOrCreatePackage( ::String pack,bool flat,::haxe::test::ui::common::PackageResult ref){
	__SAFE_POINT
	HX_SOURCE_PUSH("PackageResult_obj::getOrCreatePackage")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",155)
	if ((bool((pack == null())) || bool((pack == HX_CSTRING("")))))
		return ref;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",156)
	if (flat){
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",157)
		if (ref->existsPackage(pack))
			return ref->getPackage(pack);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",159)
		::haxe::test::ui::common::PackageResult p = ::haxe::test::ui::common::PackageResult_obj::__new(pack);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",160)
		ref->addPackage(p);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",161)
		return p;
	}
	else{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",163)
		Array< ::String > parts = pack.split(HX_CSTRING("."));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",164)
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",164)
			int _g = 0;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",164)
			while((_g < parts->length)){
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",164)
				::String part = parts->__get(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",164)
				++(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",165)
				ref = this->getOrCreatePackage(part,true,ref);
			}
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/common/PackageResult.hx",167)
		return ref;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(PackageResult_obj,getOrCreatePackage,return )


PackageResult_obj::PackageResult_obj()
{
}

void PackageResult_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PackageResult);
	HX_MARK_MEMBER_NAME(packageName,"packageName");
	HX_MARK_MEMBER_NAME(classes,"classes");
	HX_MARK_MEMBER_NAME(packages,"packages");
	HX_MARK_MEMBER_NAME(stats,"stats");
	HX_MARK_END_CLASS();
}

Dynamic PackageResult_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stats") ) { return stats; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"classes") ) { return classes; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"packages") ) { return packages; }
		if (HX_FIELD_EQ(inName,"addClass") ) { return addClass_dyn(); }
		if (HX_FIELD_EQ(inName,"getClass") ) { return getClass_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"addResult") ) { return addResult_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addPackage") ) { return addPackage_dyn(); }
		if (HX_FIELD_EQ(inName,"getPackage") ) { return getPackage_dyn(); }
		if (HX_FIELD_EQ(inName,"classNames") ) { return classNames_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"packageName") ) { return packageName; }
		if (HX_FIELD_EQ(inName,"existsClass") ) { return existsClass_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"packageNames") ) { return packageNames_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"existsPackage") ) { return existsPackage_dyn(); }
		if (HX_FIELD_EQ(inName,"createFixture") ) { return createFixture_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getOrCreateClass") ) { return getOrCreateClass_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getOrCreatePackage") ) { return getOrCreatePackage_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic PackageResult_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast< ::haxe::test::ui::common::ResultStats >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"classes") ) { classes=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"packages") ) { packages=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"packageName") ) { packageName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void PackageResult_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("packageName"));
	outFields->push(HX_CSTRING("classes"));
	outFields->push(HX_CSTRING("packages"));
	outFields->push(HX_CSTRING("stats"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("packageName"),
	HX_CSTRING("classes"),
	HX_CSTRING("packages"),
	HX_CSTRING("stats"),
	HX_CSTRING("addResult"),
	HX_CSTRING("addClass"),
	HX_CSTRING("addPackage"),
	HX_CSTRING("existsPackage"),
	HX_CSTRING("existsClass"),
	HX_CSTRING("getPackage"),
	HX_CSTRING("getClass"),
	HX_CSTRING("classNames"),
	HX_CSTRING("packageNames"),
	HX_CSTRING("createFixture"),
	HX_CSTRING("getOrCreateClass"),
	HX_CSTRING("getOrCreatePackage"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class PackageResult_obj::__mClass;

void PackageResult_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.ui.common.PackageResult"), hx::TCanCast< PackageResult_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void PackageResult_obj::__boot()
{
}

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace common
