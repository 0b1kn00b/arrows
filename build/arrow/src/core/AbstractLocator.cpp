#include <hxObject.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_core_AbstractLocator
#include <core/AbstractLocator.h>
#endif
#ifndef INCLUDED_core_LifeCycle
#include <core/LifeCycle.h>
#endif
namespace core{

Void AbstractLocator_obj::__construct()
{
{
	this->content = Hash_obj::__new();
}
;
	return null();
}

AbstractLocator_obj::~AbstractLocator_obj() { }

Dynamic AbstractLocator_obj::__CreateEmpty() { return  new AbstractLocator_obj; }
hxObjectPtr<AbstractLocator_obj > AbstractLocator_obj::__new()
{  hxObjectPtr<AbstractLocator_obj > result = new AbstractLocator_obj();
	result->__construct();
	return result;}

Dynamic AbstractLocator_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<AbstractLocator_obj > result = new AbstractLocator_obj();
	result->__construct();
	return result;}

Void AbstractLocator_obj::initialize( ){
{
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(AbstractLocator_obj,initialize,(void))

Void AbstractLocator_obj::release( ){
{
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(AbstractLocator_obj,release,(void))

Dynamic AbstractLocator_obj::locate( String name){
	if (this->isRegistered(name)){
		return this->content->get(name);
	}
	else{
		hxThrow (String(L"item ",5) + name + String(L"not found",9));
	}
}


DEFINE_DYNAMIC_FUNC1(AbstractLocator_obj,locate,return )

bool AbstractLocator_obj::register( String name,Dynamic value){
	if (this->content->exists(name)){
		return false;
	}
	else{
		this->content->set(name,value);
	}
	return true;
}


DEFINE_DYNAMIC_FUNC2(AbstractLocator_obj,register,return )

bool AbstractLocator_obj::isRegistered( String name){
	return this->content->exists(name);
}


DEFINE_DYNAMIC_FUNC1(AbstractLocator_obj,isRegistered,return )

bool AbstractLocator_obj::unregister( String name){
	bool exists = false;
	if (this->content->exists(name)){
		exists = true;
		this->content->remove(name);
	}
	return exists;
}


DEFINE_DYNAMIC_FUNC1(AbstractLocator_obj,unregister,return )


AbstractLocator_obj::AbstractLocator_obj()
{
	InitMember(content);
}

Dynamic AbstractLocator_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 6:
		if (!memcmp(inName.__s,L"locate",sizeof(wchar_t)*6) ) { return locate_dyn(); }
		break;
	case 7:
		if (!memcmp(inName.__s,L"content",sizeof(wchar_t)*7) ) { return content; }
		if (!memcmp(inName.__s,L"release",sizeof(wchar_t)*7) ) { return release_dyn(); }
		break;
	case 8:
		if (!memcmp(inName.__s,L"register",sizeof(wchar_t)*8) ) { return register_dyn(); }
		break;
	case 10:
		if (!memcmp(inName.__s,L"initialize",sizeof(wchar_t)*10) ) { return initialize_dyn(); }
		if (!memcmp(inName.__s,L"unregister",sizeof(wchar_t)*10) ) { return unregister_dyn(); }
		break;
	case 12:
		if (!memcmp(inName.__s,L"isRegistered",sizeof(wchar_t)*12) ) { return isRegistered_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_content = __hxcpp_field_to_id("content");
static int __id_initialize = __hxcpp_field_to_id("initialize");
static int __id_release = __hxcpp_field_to_id("release");
static int __id_locate = __hxcpp_field_to_id("locate");
static int __id_register = __hxcpp_field_to_id("register");
static int __id_isRegistered = __hxcpp_field_to_id("isRegistered");
static int __id_unregister = __hxcpp_field_to_id("unregister");


Dynamic AbstractLocator_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_content) return content;
	if (inFieldID==__id_initialize) return initialize_dyn();
	if (inFieldID==__id_release) return release_dyn();
	if (inFieldID==__id_locate) return locate_dyn();
	if (inFieldID==__id_register) return register_dyn();
	if (inFieldID==__id_isRegistered) return isRegistered_dyn();
	if (inFieldID==__id_unregister) return unregister_dyn();
	return super::__IField(inFieldID);
}

Dynamic AbstractLocator_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"content",sizeof(wchar_t)*7) ) { content=inValue.Cast<Hash >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void AbstractLocator_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"content",7));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"content",
	L"initialize",
	L"release",
	L"locate",
	L"register",
	L"isRegistered",
	L"unregister",
	0 };

Class AbstractLocator_obj::__mClass;

void AbstractLocator_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"core.AbstractLocator",20), TCanCast<AbstractLocator_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void AbstractLocator_obj::__boot()
{
}

} // end namespace core
