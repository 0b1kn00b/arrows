#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_pattern_Observer
#include <haxe/functional/arrows/pattern/Observer.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_pattern_Subject
#include <haxe/functional/arrows/pattern/Subject.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_Buffer
#include <haxe/functional/arrows/schedule/Buffer.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_call_ArrowCall
#include <haxe/functional/arrows/schedule/call/ArrowCall.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_call_ArrowCallObject
#include <haxe/functional/arrows/schedule/call/ArrowCallObject.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_schedule_call_Call
#include <haxe/functional/arrows/schedule/call/Call.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{

Void Buffer_obj::__construct()
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",36)
	this->list = ::List_obj::__new();
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",37)
	this->observers = Array_obj< ::haxe::functional::arrows::pattern::Observer >::__new();
}
;
	return null();
}

Buffer_obj::~Buffer_obj() { }

Dynamic Buffer_obj::__CreateEmpty() { return  new Buffer_obj; }
hx::ObjectPtr< Buffer_obj > Buffer_obj::__new()
{  hx::ObjectPtr< Buffer_obj > result = new Buffer_obj();
	result->__construct();
	return result;}

Dynamic Buffer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Buffer_obj > result = new Buffer_obj();
	result->__construct();
	return result;}

hx::Object *Buffer_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::haxe::functional::arrows::pattern::Subject_obj)) return operator ::haxe::functional::arrows::pattern::Subject_obj *();
	return super::__ToInterface(inType);
}

int Buffer_obj::getLength( ){
	HX_SOURCE_PUSH("Buffer_obj::getLength")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",41)
	return this->list->length;
}


HX_DEFINE_DYNAMIC_FUNC0(Buffer_obj,getLength,return )

Void Buffer_obj::enqueue( ::haxe::functional::arrows::schedule::call::Call item){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Buffer_obj::enqueue")
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",45)
		this->list->add(item);
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",46)
		this->notify();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Buffer_obj,enqueue,(void))

::haxe::functional::arrows::schedule::call::Call Buffer_obj::dequeue( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Buffer_obj::dequeue")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",49)
	return this->list->__Field(HX_CSTRING("pop"))().Cast< ::haxe::functional::arrows::schedule::call::Call >();
}


HX_DEFINE_DYNAMIC_FUNC0(Buffer_obj,dequeue,return )

bool Buffer_obj::remove( ::String v){
	__SAFE_POINT
	HX_SOURCE_PUSH("Buffer_obj::remove")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",52)
	bool found = false;
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",53)
	::haxe::functional::arrows::schedule::call::ArrowCall call;
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",54)
	for(::cpp::FastIterator_obj< ::haxe::functional::arrows::schedule::call::Call > *__it = ::cpp::CreateFastIterator< ::haxe::functional::arrows::schedule::call::Call >(this->list->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
		::haxe::functional::arrows::schedule::call::Call item = __it->next();
		{
			HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",55)
			call = hx::TCast< haxe::functional::arrows::schedule::call::ArrowCall >::cast(item);
			HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",56)
			if ((call->__Field(HX_CSTRING("data")).Cast< ::haxe::functional::arrows::schedule::call::ArrowCallObject >()->instance->uuid == v)){
				HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",58)
				this->list->remove(call);
				HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",59)
				found = true;
			}
		}
;
		__SAFE_POINT
	}
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",62)
	return found;
}


HX_DEFINE_DYNAMIC_FUNC1(Buffer_obj,remove,return )

Void Buffer_obj::cancel( ::String id){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Buffer_obj::cancel")
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",65)
		for(::cpp::FastIterator_obj< ::haxe::functional::arrows::schedule::call::Call > *__it = ::cpp::CreateFastIterator< ::haxe::functional::arrows::schedule::call::Call >(this->list->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
			::haxe::functional::arrows::schedule::call::Call item = __it->next();
			{
				HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",66)
				if ((item->uuid == id)){
					HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",67)
					this->list->remove(item);
				}
			}
;
			__SAFE_POINT
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Buffer_obj,cancel,(void))

::String Buffer_obj::toString( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Buffer_obj::toString")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",72)
	::String str = HX_CSTRING("[ Buffer ( ");
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",73)
	Dynamic itr = this->list->__Field(HX_CSTRING("iterator"))();
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",74)
	while(itr->__Field(HX_CSTRING("hasNext"))().Cast< bool >()){
		__SAFE_POINT
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",75)
		hx::AddEq(str,(::Std_obj::string(itr->__Field(HX_CSTRING("next"))()) + HX_CSTRING(", ")));
	}
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",77)
	hx::AddEq(str,HX_CSTRING(" )"));
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",78)
	return str;
}


HX_DEFINE_DYNAMIC_FUNC0(Buffer_obj,toString,return )

bool Buffer_obj::attach( ::haxe::functional::arrows::pattern::Observer observer){
	__SAFE_POINT
	HX_SOURCE_PUSH("Buffer_obj::attach")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",84)
	if (::Lambda_obj::has(this->observers,observer,null())){
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",85)
		return false;
	}
	else{
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",88)
		observer->__FieldRef(HX_CSTRING("subject")) = this;
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",89)
		this->observers->push(observer);
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",90)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Buffer_obj,attach,return )

bool Buffer_obj::detach( ::haxe::functional::arrows::pattern::Observer observer){
	__SAFE_POINT
	HX_SOURCE_PUSH("Buffer_obj::detach")
	HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",94)
	return this->observers->remove(observer);
}


HX_DEFINE_DYNAMIC_FUNC1(Buffer_obj,detach,return )

Void Buffer_obj::notify( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("Buffer_obj::notify")
		HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",97)
		{
			HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",97)
			int _g = 0;
			Array< ::haxe::functional::arrows::pattern::Observer > _g1 = this->observers;
			HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",97)
			while((_g < _g1->length)){
				__SAFE_POINT
				HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",97)
				::haxe::functional::arrows::pattern::Observer item = _g1->__get(_g);
				HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",97)
				++(_g);
				HX_SOURCE_POS("src/haxe/functional/arrows/schedule/Buffer.hx",98)
				item->update();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Buffer_obj,notify,(void))


Buffer_obj::Buffer_obj()
{
}

void Buffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Buffer);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(observers,"observers");
	HX_MARK_END_CLASS();
}

Dynamic Buffer_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return getLength(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"attach") ) { return attach_dyn(); }
		if (HX_FIELD_EQ(inName,"detach") ) { return detach_dyn(); }
		if (HX_FIELD_EQ(inName,"notify") ) { return notify_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enqueue") ) { return enqueue_dyn(); }
		if (HX_FIELD_EQ(inName,"dequeue") ) { return dequeue_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"observers") ) { return observers; }
	}
	return super::__Field(inName);
}

Dynamic Buffer_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::List >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"observers") ) { observers=inValue.Cast< Array< ::haxe::functional::arrows::pattern::Observer > >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Buffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("list"));
	outFields->push(HX_CSTRING("observers"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("length"),
	HX_CSTRING("getLength"),
	HX_CSTRING("enqueue"),
	HX_CSTRING("dequeue"),
	HX_CSTRING("remove"),
	HX_CSTRING("cancel"),
	HX_CSTRING("toString"),
	HX_CSTRING("list"),
	HX_CSTRING("attach"),
	HX_CSTRING("detach"),
	HX_CSTRING("notify"),
	HX_CSTRING("observers"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Buffer_obj::__mClass;

void Buffer_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.schedule.Buffer"), hx::TCanCast< Buffer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Buffer_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
