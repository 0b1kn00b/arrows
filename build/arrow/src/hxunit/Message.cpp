#include <hxObject.h>

#ifndef INCLUDED_hxunit_Message
#include <hxunit/Message.h>
#endif
namespace hxunit{

Message  Message_obj::assert(Dynamic v)
	{ return CreateEnum<Message_obj >(String(L"assert",6),0,DynamicArray(0,1).Add(v)); }

Message  Message_obj::error(Dynamic v)
	{ return CreateEnum<Message_obj >(String(L"error",5),3,DynamicArray(0,1).Add(v)); }

Message  Message_obj::handle(String name,Dynamic value,Dynamic passThrough)
	{ return CreateEnum<Message_obj >(String(L"handle",6),2,DynamicArray(0,3).Add(name).Add(value).Add(passThrough)); }

Message  Message_obj::wait(Dynamic value)
	{ return CreateEnum<Message_obj >(String(L"wait",4),1,DynamicArray(0,1).Add(value)); }

DEFINE_CREATE_ENUM(Message_obj)

int Message_obj::__FindIndex(String inName)
{
	if (inName==String(L"assert",6)) return 0;
	if (inName==String(L"error",5)) return 3;
	if (inName==String(L"handle",6)) return 2;
	if (inName==String(L"wait",4)) return 1;
	return super::__FindIndex(inName);
}

STATIC_DEFINE_DYNAMIC_FUNC1(Message_obj,assert,return)

STATIC_DEFINE_DYNAMIC_FUNC1(Message_obj,error,return)

STATIC_DEFINE_DYNAMIC_FUNC3(Message_obj,handle,return)

STATIC_DEFINE_DYNAMIC_FUNC1(Message_obj,wait,return)

int Message_obj::__FindArgCount(String inName)
{
	if (inName==String(L"assert",6)) return 1;
	if (inName==String(L"error",5)) return 1;
	if (inName==String(L"handle",6)) return 3;
	if (inName==String(L"wait",4)) return 1;
	return super::__FindArgCount(inName);
}

Dynamic Message_obj::__Field(const String &inName)
{
	if (inName==String(L"assert",6)) return assert_dyn();
	if (inName==String(L"error",5)) return error_dyn();
	if (inName==String(L"handle",6)) return handle_dyn();
	if (inName==String(L"wait",4)) return wait_dyn();
	return super::__Field(inName);
}

static wchar_t *sStaticFields[] = {
	L"assert",
	L"error",
	L"handle",
	L"wait",
	0 };

static wchar_t *sMemberFields[] = { 0 };
Class Message_obj::__mClass;

Dynamic __Create_Message_obj() { return new Message_obj; }

void Message_obj::__register()
{

Static(__mClass) = RegisterClass(String(L"hxunit.Message",14), TCanCast<Message_obj >,sStaticFields,sMemberFields,
	&__Create_Message_obj, &__Create,
	&super::__SGetClass(), &CreateMessage_obj);
}

void Message_obj::__boot()
{
}


} // end namespace hxunit
