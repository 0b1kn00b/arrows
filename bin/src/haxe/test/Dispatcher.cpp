#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_test_Dispatcher
#include <haxe/test/Dispatcher.h>
#endif
#ifndef INCLUDED_haxe_test__Dispatcher_EventException
#include <haxe/test/_Dispatcher/EventException.h>
#endif
namespace haxe{
namespace test{

Void Dispatcher_obj::__construct()
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",30)
	this->handlers = Array_obj< Dynamic >::__new();
}
;
	return null();
}

Dispatcher_obj::~Dispatcher_obj() { }

Dynamic Dispatcher_obj::__CreateEmpty() { return  new Dispatcher_obj; }
hx::ObjectPtr< Dispatcher_obj > Dispatcher_obj::__new()
{  hx::ObjectPtr< Dispatcher_obj > result = new Dispatcher_obj();
	result->__construct();
	return result;}

Dynamic Dispatcher_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Dispatcher_obj > result = new Dispatcher_obj();
	result->__construct();
	return result;}

Dynamic Dispatcher_obj::add( Dynamic h){
	__SAFE_POINT
	HX_SOURCE_PUSH("Dispatcher_obj::add")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",34)
	this->handlers->push(h);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",35)
	return h;
}


HX_DEFINE_DYNAMIC_FUNC1(Dispatcher_obj,add,return )

Dynamic Dispatcher_obj::remove( Dynamic h){
	__SAFE_POINT
	HX_SOURCE_PUSH("Dispatcher_obj::remove")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",39)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",39)
		int _g1 = 0;
		int _g = this->handlers->length;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",39)
		while((_g1 < _g)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",39)
			int i = (_g1)++;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",40)
			if (::Reflect_obj::compareMethods(this->handlers->__get(i),h))
				return this->handlers->splice(i,1)->__get(0);
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",42)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Dispatcher_obj,remove,return )

Void Dispatcher_obj::clear( ){
{
		HX_SOURCE_PUSH("Dispatcher_obj::clear")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",46)
		this->handlers = Array_obj< Dynamic >::__new();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Dispatcher_obj,clear,(void))

bool Dispatcher_obj::dispatch( Dynamic e){
	__SAFE_POINT
	HX_SOURCE_PUSH("Dispatcher_obj::dispatch")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",50)
	try{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",52)
		Array< Dynamic > list = this->handlers->copy();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",53)
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",53)
			int _g = 0;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",53)
			while((_g < list->length)){
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",53)
				Dynamic l = list->__get(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",53)
				++(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",54)
				l(e);
			}
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",55)
		return true;
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::haxe::test::_Dispatcher::EventException >() ){
			::haxe::test::_Dispatcher::EventException exc = __e;{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",57)
				return false;
			}
		}
		else throw(__e);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(Dispatcher_obj,dispatch,return )

bool Dispatcher_obj::has( ){
	HX_SOURCE_PUSH("Dispatcher_obj::has")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",62)
	return (this->handlers->length > 0);
}


HX_DEFINE_DYNAMIC_FUNC0(Dispatcher_obj,has,return )

Void Dispatcher_obj::stop( ){
{
		HX_SOURCE_PUSH("Dispatcher_obj::stop")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/Dispatcher.hx",66)
		hx::Throw (::haxe::test::_Dispatcher::EventException_obj::StopPropagation);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Dispatcher_obj,stop,(void))


Dispatcher_obj::Dispatcher_obj()
{
}

void Dispatcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Dispatcher);
	HX_MARK_MEMBER_NAME(handlers,"handlers");
	HX_MARK_END_CLASS();
}

Dynamic Dispatcher_obj::__Field(const ::String &inName)
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

Dynamic Dispatcher_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"handlers") ) { handlers=inValue.Cast< Array< Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Dispatcher_obj::__GetFields(Array< ::String> &outFields)
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

Class Dispatcher_obj::__mClass;

void Dispatcher_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.Dispatcher"), hx::TCanCast< Dispatcher_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Dispatcher_obj::__boot()
{
}

} // end namespace haxe
} // end namespace test
