#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_test_Notifier
#include <haxe/test/Notifier.h>
#endif
#ifndef INCLUDED_haxe_test__Dispatcher_EventException
#include <haxe/test/_Dispatcher/EventException.h>
#endif
namespace haxe{
namespace test{

Void Notifier_obj::__construct()
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",75)
	this->handlers = Array_obj< Dynamic >::__new();
}
;
	return null();
}

Notifier_obj::~Notifier_obj() { }

Dynamic Notifier_obj::__CreateEmpty() { return  new Notifier_obj; }
hx::ObjectPtr< Notifier_obj > Notifier_obj::__new()
{  hx::ObjectPtr< Notifier_obj > result = new Notifier_obj();
	result->__construct();
	return result;}

Dynamic Notifier_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Notifier_obj > result = new Notifier_obj();
	result->__construct();
	return result;}

Dynamic Notifier_obj::add( Dynamic h){
	__SAFE_POINT
	HX_SOURCE_PUSH("Notifier_obj::add")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",79)
	this->handlers->push(h);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",80)
	return h;
}


HX_DEFINE_DYNAMIC_FUNC1(Notifier_obj,add,return )

Dynamic Notifier_obj::remove( Dynamic h){
	__SAFE_POINT
	HX_SOURCE_PUSH("Notifier_obj::remove")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",84)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",84)
		int _g1 = 0;
		int _g = this->handlers->length;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",84)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",84)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",85)
			if (::Reflect_obj::compareMethods(this->handlers->__get(i),h))
				return this->handlers->splice(i,1)->__get(0);
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",87)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Notifier_obj,remove,return )

Void Notifier_obj::clear( ){
{
		HX_SOURCE_PUSH("Notifier_obj::clear")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",91)
		this->handlers = Array_obj< Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Notifier_obj,clear,(void))

bool Notifier_obj::dispatch( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Notifier_obj::dispatch")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",95)
	try{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",97)
		Array< Dynamic > list = this->handlers->copy();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",98)
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",98)
			int _g = 0;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",98)
			while((_g < list->length)){
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",98)
				Dynamic l = list->__get(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",98)
				++(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",99)
				l();
			}
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",100)
		return true;
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::haxe::test::_Dispatcher::EventException >() ){
			::haxe::test::_Dispatcher::EventException exc = __e;{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",102)
				return false;
			}
		}
		else throw(__e);
	}
}


HX_DEFINE_DYNAMIC_FUNC0(Notifier_obj,dispatch,return )

bool Notifier_obj::has( ){
	HX_SOURCE_PUSH("Notifier_obj::has")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",107)
	return (this->handlers->length > 0);
}


HX_DEFINE_DYNAMIC_FUNC0(Notifier_obj,has,return )

Void Notifier_obj::stop( ){
{
		HX_SOURCE_PUSH("Notifier_obj::stop")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",111)
		hx::Throw (::haxe::test::_Dispatcher::EventException_obj::StopPropagation);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Notifier_obj,stop,(void))


Notifier_obj::Notifier_obj()
{
}

void Notifier_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Notifier);
	HX_MARK_MEMBER_NAME(handlers,"handlers");
	HX_MARK_END_CLASS();
}

Dynamic Notifier_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		if (HX_FIELD_EQ(inName,"has") ) { return has_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"handlers") ) { return handlers; }
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Notifier_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"handlers") ) { handlers=inValue.Cast< Array< Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Notifier_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("handlers"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("stop"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("handlers"),
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	HX_CSTRING("clear"),
	HX_CSTRING("dispatch"),
	HX_CSTRING("has"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Notifier_obj::__mClass;

void Notifier_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.Notifier"), hx::TCanCast< Notifier_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Notifier_obj::__boot()
{
}

} // end namespace haxe
} // end namespace test
