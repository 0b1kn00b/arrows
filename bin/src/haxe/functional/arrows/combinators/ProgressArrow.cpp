#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_ProgressArrow
#include <haxe/functional/arrows/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_vo_Progress
#include <haxe/functional/arrows/vo/Progress.h>
#endif
#ifndef INCLUDED_hsl_haxe_Bond
#include <hsl/haxe/Bond.h>
#endif
#ifndef INCLUDED_hsl_haxe_DirectSignaler
#include <hsl/haxe/DirectSignaler.h>
#endif
#ifndef INCLUDED_hsl_haxe_Signal
#include <hsl/haxe/Signal.h>
#endif
#ifndef INCLUDED_hsl_haxe_Signaler
#include <hsl/haxe/Signaler.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{

Void ProgressArrow_obj::__construct(::haxe::functional::arrows::ArrowInstance instance)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProgressArrow.hx",43)
	this->internalSignaler = ::hsl::haxe::DirectSignaler_obj::__new(this,null());
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProgressArrow.hx",44)
	this->instance = instance;
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProgressArrow.hx",45)
	Array< ::haxe::functional::arrows::combinators::ProgressArrow > self = Array_obj< ::haxe::functional::arrows::combinators::ProgressArrow >::__new().Add(this);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::haxe::functional::arrows::combinators::ProgressArrow >,self)
	Void run(Dynamic x,::haxe::functional::arrows::ArrowInstance a){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProgressArrow.hx",48)
			a->cont(self->__get(0),null(),null(),null());
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProgressArrow.hx",46)
	super::__construct( Dynamic(new _Function_1_1(self)));
}
;
	return null();
}

ProgressArrow_obj::~ProgressArrow_obj() { }

Dynamic ProgressArrow_obj::__CreateEmpty() { return  new ProgressArrow_obj; }
hx::ObjectPtr< ProgressArrow_obj > ProgressArrow_obj::__new(::haxe::functional::arrows::ArrowInstance instance)
{  hx::ObjectPtr< ProgressArrow_obj > result = new ProgressArrow_obj();
	result->__construct(instance);
	return result;}

Dynamic ProgressArrow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProgressArrow_obj > result = new ProgressArrow_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *ProgressArrow_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::hsl::haxe::Signaler_obj)) return operator ::hsl::haxe::Signaler_obj *();
	return super::__ToInterface(inType);
}

Void ProgressArrow_obj::cancel( ){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ProgressArrow_obj::cancel")
		HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProgressArrow.hx",54)
		this->instance->cancel();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ProgressArrow_obj,cancel,(void))

bool ProgressArrow_obj::getIsListenedTo( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("ProgressArrow_obj::getIsListenedTo")
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProgressArrow.hx",58)
	return this->internalSignaler->getIsListenedTo();
}


HX_DEFINE_DYNAMIC_FUNC0(ProgressArrow_obj,getIsListenedTo,return )

Void ProgressArrow_obj::addBubblingTarget( ::hsl::haxe::Signaler value){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ProgressArrow_obj::addBubblingTarget")
		HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProgressArrow.hx",63)
		this->internalSignaler->addBubblingTarget(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ProgressArrow_obj,addBubblingTarget,(void))

::hsl::haxe::Bond ProgressArrow_obj::bind( Dynamic listener){
	__SAFE_POINT
	HX_SOURCE_PUSH("ProgressArrow_obj::bind")
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProgressArrow.hx",66)
	return this->internalSignaler->bind(listener);
}


HX_DEFINE_DYNAMIC_FUNC1(ProgressArrow_obj,bind,return )

::hsl::haxe::Bond ProgressArrow_obj::bindAdvanced( Dynamic listener){
	__SAFE_POINT
	HX_SOURCE_PUSH("ProgressArrow_obj::bindAdvanced")
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProgressArrow.hx",69)
	return this->internalSignaler->bindAdvanced(listener);
}


HX_DEFINE_DYNAMIC_FUNC1(ProgressArrow_obj,bindAdvanced,return )

::hsl::haxe::Bond ProgressArrow_obj::bindVoid( Dynamic listener){
	__SAFE_POINT
	HX_SOURCE_PUSH("ProgressArrow_obj::bindVoid")
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProgressArrow.hx",72)
	return this->internalSignaler->bindVoid(listener);
}


HX_DEFINE_DYNAMIC_FUNC1(ProgressArrow_obj,bindVoid,return )

Void ProgressArrow_obj::dispatch( ::haxe::functional::arrows::vo::Progress data,Dynamic origin,Dynamic positionInformation){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ProgressArrow_obj::dispatch")
		HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProgressArrow.hx",80)
		this->internalSignaler->dispatch(data,origin,hx::SourceInfo(HX_CSTRING("ProgressArrow.hx"),80,HX_CSTRING("haxe.functional.arrows.combinators.ProgressArrow"),HX_CSTRING("dispatch")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ProgressArrow_obj,dispatch,(void))

Void ProgressArrow_obj::removeBubblingTarget( ::hsl::haxe::Signaler value){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ProgressArrow_obj::removeBubblingTarget")
		HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProgressArrow.hx",84)
		this->internalSignaler->removeBubblingTarget(value);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ProgressArrow_obj,removeBubblingTarget,(void))

Void ProgressArrow_obj::unbind( Dynamic listener){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ProgressArrow_obj::unbind")
		HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProgressArrow.hx",87)
		this->internalSignaler->unbind(listener);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ProgressArrow_obj,unbind,(void))

Void ProgressArrow_obj::unbindAdvanced( Dynamic listener){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ProgressArrow_obj::unbindAdvanced")
		HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProgressArrow.hx",90)
		this->internalSignaler->unbindAdvanced(listener);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ProgressArrow_obj,unbindAdvanced,(void))

Void ProgressArrow_obj::unbindVoid( Dynamic listener){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ProgressArrow_obj::unbindVoid")
		HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProgressArrow.hx",93)
		this->internalSignaler->unbindVoid(listener);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ProgressArrow_obj,unbindVoid,(void))

Void ProgressArrow_obj::addNotificationTarget( ::hsl::haxe::Signaler v){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ProgressArrow_obj::addNotificationTarget")
		HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProgressArrow.hx",96)
		this->internalSignaler->addNotificationTarget(v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ProgressArrow_obj,addNotificationTarget,(void))

Void ProgressArrow_obj::removeNotificationTarget( ::hsl::haxe::Signaler v){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("ProgressArrow_obj::removeNotificationTarget")
		HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProgressArrow.hx",99)
		this->internalSignaler->removeNotificationTarget(v);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ProgressArrow_obj,removeNotificationTarget,(void))

::String ProgressArrow_obj::getName( ){
	HX_SOURCE_PUSH("ProgressArrow_obj::getName")
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/ProgressArrow.hx",101)
	return HX_CSTRING("ProgressArrow");
}


HX_DEFINE_DYNAMIC_FUNC0(ProgressArrow_obj,getName,return )


ProgressArrow_obj::ProgressArrow_obj()
{
}

void ProgressArrow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProgressArrow);
	HX_MARK_MEMBER_NAME(internalSignaler,"internalSignaler");
	HX_MARK_MEMBER_NAME(instance,"instance");
	HX_MARK_MEMBER_NAME(isListenedTo,"isListenedTo");
	HX_MARK_MEMBER_NAME(subject,"subject");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic ProgressArrow_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"bind") ) { return bind_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"unbind") ) { return unbind_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"subject") ) { return subject; }
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		if (HX_FIELD_EQ(inName,"bindVoid") ) { return bindVoid_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"unbindVoid") ) { return unbindVoid_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isListenedTo") ) { return getIsListenedTo(); }
		if (HX_FIELD_EQ(inName,"bindAdvanced") ) { return bindAdvanced_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"unbindAdvanced") ) { return unbindAdvanced_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getIsListenedTo") ) { return getIsListenedTo_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"internalSignaler") ) { return internalSignaler; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"addBubblingTarget") ) { return addBubblingTarget_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"removeBubblingTarget") ) { return removeBubblingTarget_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"addNotificationTarget") ) { return addNotificationTarget_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"removeNotificationTarget") ) { return removeNotificationTarget_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic ProgressArrow_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"subject") ) { subject=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::haxe::functional::arrows::ArrowInstance >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isListenedTo") ) { isListenedTo=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"internalSignaler") ) { internalSignaler=inValue.Cast< ::hsl::haxe::DirectSignaler >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void ProgressArrow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("internalSignaler"));
	outFields->push(HX_CSTRING("instance"));
	outFields->push(HX_CSTRING("isListenedTo"));
	outFields->push(HX_CSTRING("subject"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("internalSignaler"),
	HX_CSTRING("instance"),
	HX_CSTRING("cancel"),
	HX_CSTRING("isListenedTo"),
	HX_CSTRING("getIsListenedTo"),
	HX_CSTRING("subject"),
	HX_CSTRING("addBubblingTarget"),
	HX_CSTRING("bind"),
	HX_CSTRING("bindAdvanced"),
	HX_CSTRING("bindVoid"),
	HX_CSTRING("dispatch"),
	HX_CSTRING("removeBubblingTarget"),
	HX_CSTRING("unbind"),
	HX_CSTRING("unbindAdvanced"),
	HX_CSTRING("unbindVoid"),
	HX_CSTRING("addNotificationTarget"),
	HX_CSTRING("removeNotificationTarget"),
	HX_CSTRING("getName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class ProgressArrow_obj::__mClass;

void ProgressArrow_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.ProgressArrow"), hx::TCanCast< ProgressArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void ProgressArrow_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
