#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_Arrow
#include <haxe/functional/arrows/Arrow.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#include <haxe/functional/arrows/ArrowInstance.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_TaggedValue
#include <haxe/functional/arrows/TaggedValue.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_InnerRepeatThunk
#include <haxe/functional/arrows/combinators/InnerRepeatThunk.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_combinators_Loop
#include <haxe/functional/arrows/combinators/Loop.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{

Void InnerRepeatThunk_obj::__construct(::haxe::functional::arrows::Arrow $t1,::haxe::functional::arrows::ArrowInstance a)
{
{
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/InnerRepeatThunk.hx",32)
	Array< ::haxe::functional::arrows::Arrow > f = Array_obj< ::haxe::functional::arrows::Arrow >::__new().Add($t1);
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/InnerRepeatThunk.hx",33)
	this->cancelled = false;
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/InnerRepeatThunk.hx",34)
	Array< ::haxe::functional::arrows::combinators::InnerRepeatThunk > self = Array_obj< ::haxe::functional::arrows::combinators::InnerRepeatThunk >::__new().Add(this);

	HX_BEGIN_LOCAL_FUNC1(_Function_1_1,Array< ::haxe::functional::arrows::combinators::InnerRepeatThunk >,self)
	Void run(){
{
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/InnerRepeatThunk.hx",36)
			self[0]->cancelled = true;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/InnerRepeatThunk.hx",35)
	this->__FieldRef(HX_CSTRING("cancel")) =  Dynamic(new _Function_1_1(self));
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/InnerRepeatThunk.hx",38)
	a->addCanceller(this->__Field(HX_CSTRING("cancel")));

	HX_BEGIN_LOCAL_FUNC2(_Function_1_2,Array< ::haxe::functional::arrows::combinators::InnerRepeatThunk >,self,Array< ::haxe::functional::arrows::Arrow >,f)
	Void run(Dynamic x,::haxe::functional::arrows::ArrowInstance a1){
{
			__SAFE_POINT
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/InnerRepeatThunk.hx",41)
			if (self[0]->cancelled){
				HX_SOURCE_POS("src/haxe/functional/arrows/combinators/InnerRepeatThunk.hx",42)
				return null();
			}
			HX_SOURCE_POS("src/haxe/functional/arrows/combinators/InnerRepeatThunk.hx",44)
			if (::Std_obj::is(x,hx::ClassOf< ::haxe::functional::arrows::TaggedValue >())){
				HX_SOURCE_POS("src/haxe/functional/arrows/combinators/InnerRepeatThunk.hx",45)
				::haxe::functional::arrows::combinators::Loop x0 = x->__Field(HX_CSTRING("tag"));
				HX_SOURCE_POS("src/haxe/functional/arrows/combinators/InnerRepeatThunk.hx",46)
				::haxe::functional::arrows::combinators::Loop _switch_1 = (x0);
				switch((_switch_1)->GetIndex()){
					case 0: {
						HX_SOURCE_POS("src/haxe/functional/arrows/combinators/InnerRepeatThunk.hx",48)
						a1->cont(x->__Field(HX_CSTRING("value")),f->__get(0),self->__get(0),null());
					}
					;break;
					case 1: {
						HX_SOURCE_POS("src/haxe/functional/arrows/combinators/InnerRepeatThunk.hx",50)
						a1->advance(self[0]->__Field(HX_CSTRING("cancel")));
						HX_SOURCE_POS("src/haxe/functional/arrows/combinators/InnerRepeatThunk.hx",51)
						a1->cont(x->__Field(HX_CSTRING("value")),null(),null(),null());
					}
					;break;
				}
			}
			else{
				HX_SOURCE_POS("src/haxe/functional/arrows/combinators/InnerRepeatThunk.hx",54)
				hx::Throw (HX_CSTRING("Repeat or Done?"));
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/InnerRepeatThunk.hx",39)
	super::__construct( Dynamic(new _Function_1_2(self,f)));
}
;
	return null();
}

InnerRepeatThunk_obj::~InnerRepeatThunk_obj() { }

Dynamic InnerRepeatThunk_obj::__CreateEmpty() { return  new InnerRepeatThunk_obj; }
hx::ObjectPtr< InnerRepeatThunk_obj > InnerRepeatThunk_obj::__new(::haxe::functional::arrows::Arrow $t1,::haxe::functional::arrows::ArrowInstance a)
{  hx::ObjectPtr< InnerRepeatThunk_obj > result = new InnerRepeatThunk_obj();
	result->__construct($t1,a);
	return result;}

Dynamic InnerRepeatThunk_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InnerRepeatThunk_obj > result = new InnerRepeatThunk_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::String InnerRepeatThunk_obj::getName( ){
	HX_SOURCE_PUSH("InnerRepeatThunk_obj::getName")
	HX_SOURCE_POS("src/haxe/functional/arrows/combinators/InnerRepeatThunk.hx",60)
	return HX_CSTRING("InnerThunk");
}


HX_DEFINE_DYNAMIC_FUNC0(InnerRepeatThunk_obj,getName,return )


InnerRepeatThunk_obj::InnerRepeatThunk_obj()
{
}

void InnerRepeatThunk_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InnerRepeatThunk);
	HX_MARK_MEMBER_NAME(cancelled,"cancelled");
	HX_MARK_MEMBER_NAME(cancel,"cancel");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic InnerRepeatThunk_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cancelled") ) { return cancelled; }
	}
	return super::__Field(inName);
}

Dynamic InnerRepeatThunk_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"cancel") ) { cancel=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cancelled") ) { cancelled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void InnerRepeatThunk_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("cancelled"));
	outFields->push(HX_CSTRING("cancel"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("cancelled"),
	HX_CSTRING("cancel"),
	HX_CSTRING("getName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class InnerRepeatThunk_obj::__mClass;

void InnerRepeatThunk_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.functional.arrows.combinators.InnerRepeatThunk"), hx::TCanCast< InnerRepeatThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void InnerRepeatThunk_obj::__boot()
{
}

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators
