#include <hxcpp.h>

#ifndef INCLUDED_DynamicExtensions
#include <DynamicExtensions.h>
#endif
#ifndef INCLUDED_Future
#include <Future.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_OptionExtensions
#include <OptionExtensions.h>
#endif
#ifndef INCLUDED_Product
#include <Product.h>
#endif
#ifndef INCLUDED_Stax
#include <Stax.h>
#endif
#ifndef INCLUDED_Tuple2
#include <Tuple2.h>
#endif
#ifndef INCLUDED__Prelude_AbstractProduct
#include <_Prelude/AbstractProduct.h>
#endif

Void Future_obj::__construct()
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",88)
	this->_listeners = Array_obj< Dynamic >::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",89)
	this->__FieldRef(HX_CSTRING("_result")) = null();
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",90)
	this->_isSet = false;
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",91)
	this->_isCanceled = false;
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",92)
	this->_cancelers = Array_obj< Dynamic >::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",93)
	this->_canceled = Array_obj< Dynamic >::__new();
}
;
	return null();
}

Future_obj::~Future_obj() { }

Dynamic Future_obj::__CreateEmpty() { return  new Future_obj; }
hx::ObjectPtr< Future_obj > Future_obj::__new()
{  hx::ObjectPtr< Future_obj > result = new Future_obj();
	result->__construct();
	return result;}

Dynamic Future_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Future_obj > result = new Future_obj();
	result->__construct();
	return result;}

::Future Future_obj::deliver( Dynamic t){
	__SAFE_POINT
	HX_SOURCE_PUSH("Future_obj::deliver")
	struct _Function_1_1{
		inline static ::Future Block( ::Future_obj *__this,Dynamic &t){
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",111)
			__this->__FieldRef(HX_CSTRING("_result")) = t;
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",112)
			__this->_isSet = true;
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",114)
			{
				HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",114)
				int _g = 0;
				Array< Dynamic > _g1 = __this->_listeners;
				HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",114)
				while((_g < _g1->length)){
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",114)
					Dynamic l = _g1->__get(_g);
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",114)
					++(_g);
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",114)
					l(__this->__Field(HX_CSTRING("_result")));
				}
			}
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",116)
			__this->_listeners = Array_obj< Dynamic >::__new();
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",118)
			return __this;
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",108)
	return (  (this->_isCanceled) ? ::Future(this) : ::Future((  (this->_isSet) ? ::Future(::Stax_obj::error(HX_CSTRING("Future already delivered")).Cast< ::Future >()) : ::Future(_Function_1_1::Block(this,t)) )) );
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,deliver,return )

::Future Future_obj::allowCancelOnlyIf( Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("Future_obj::allowCancelOnlyIf")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",130)
	if (!(this->isDone()))
		this->_cancelers->push(f);
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",132)
	return this;
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,allowCancelOnlyIf,return )

::Future Future_obj::ifCanceled( Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("Future_obj::ifCanceled")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",145)
	if (this->isCanceled()){
		HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",145)
		f();
	}
	else{
		HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",146)
		if (!(this->isDone()))
			this->_canceled->push(f);
	}
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",148)
	return this;
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,ifCanceled,return )

bool Future_obj::cancel( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Future_obj::cancel")
	struct _Function_1_1{
		inline static bool Block( ::Future_obj *__this){
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",162)
			bool r = true;
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",164)
			{
				HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",164)
				int _g = 0;
				Array< Dynamic > _g1 = __this->_cancelers;
				HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",164)
				while((_g < _g1->length)){
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",164)
					Dynamic canceller = _g1->__get(_g);
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",164)
					++(_g);
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",164)
					r = (bool(r) && bool(canceller()));
				}
			}
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",166)
			if (r){
				HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",168)
				__this->forceCancel();
			}
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",171)
			return r;
		}
	};
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",159)
	return (  (this->isDone()) ? bool(false) : bool((  (this->isCanceled()) ? bool(true) : bool(_Function_1_1::Block(this)) )) );
}


HX_DEFINE_DYNAMIC_FUNC0(Future_obj,cancel,return )

bool Future_obj::isDone( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Future_obj::isDone")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",178)
	return (bool(this->isDelivered()) || bool(this->isCanceled()));
}


HX_DEFINE_DYNAMIC_FUNC0(Future_obj,isDone,return )

bool Future_obj::isDelivered( ){
	HX_SOURCE_PUSH("Future_obj::isDelivered")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",184)
	return this->_isSet;
}


HX_DEFINE_DYNAMIC_FUNC0(Future_obj,isDelivered,return )

bool Future_obj::isCanceled( ){
	HX_SOURCE_PUSH("Future_obj::isCanceled")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",190)
	return this->_isCanceled;
}


HX_DEFINE_DYNAMIC_FUNC0(Future_obj,isCanceled,return )

::Future Future_obj::deliverTo( Dynamic f){
	__SAFE_POINT
	HX_SOURCE_PUSH("Future_obj::deliverTo")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",197)
	if (this->isCanceled()){
		HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",197)
		return this;
	}
	else{
		HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",198)
		if (this->isDelivered()){
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",198)
			f(this->__Field(HX_CSTRING("_result")));
		}
		else{
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",199)
			this->_listeners->push(f);
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",201)
	return this;
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,deliverTo,return )

::Future Future_obj::map( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Future_obj::map")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",209)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",210)
	Array< ::Future > fut = Array_obj< ::Future >::__new().Add(::Future_obj::__new());

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< ::Future >,fut,Array< Dynamic >,f)
	Void run(Dynamic t){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",212)
			fut[0]->deliver(f->__get(0)(t));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",212)
	this->deliverTo( Dynamic(new _Function_1_1(fut,f)));

	HX_BEGIN_LOCAL_FUNC1(_Function_1_2,Array< ::Future >,fut)
	Void run(){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",213)
			fut[0]->forceCancel();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",213)
	this->ifCanceled( Dynamic(new _Function_1_2(fut)));
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",215)
	return fut->__get(0);
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,map,return )

::Future Future_obj::then( ::Future f){
	HX_SOURCE_PUSH("Future_obj::then")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",219)
	return f;
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,then,return )

::Future Future_obj::flatMap( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Future_obj::flatMap")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",236)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",237)
	Array< ::Future > fut = Array_obj< ::Future >::__new().Add(::Future_obj::__new());

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f,Array< ::Future >,fut)
	Void run(Dynamic t){
{
			__SAFE_POINT

			HX_BEGIN_LOCAL_FUNC1(_Function_2_1,Array< ::Future >,fut)
			Void run(Dynamic s){
{
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",241)
					fut[0]->deliver(s);
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))


			HX_BEGIN_LOCAL_FUNC1(_Function_2_2,Array< ::Future >,fut)
			Void run(){
{
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",243)
					fut[0]->forceCancel();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",240)
			f->__get(0)(t)->deliverTo( Dynamic(new _Function_2_1(fut)))->ifCanceled( Dynamic(new _Function_2_2(fut)));
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",239)
	this->deliverTo( Dynamic(new _Function_1_1(f,fut)));

	HX_BEGIN_LOCAL_FUNC1(_Function_1_2,Array< ::Future >,fut)
	Void run(){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",247)
			fut[0]->forceCancel();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",247)
	this->ifCanceled( Dynamic(new _Function_1_2(fut)));
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",249)
	return fut->__get(0);
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,flatMap,return )

::Future Future_obj::filter( Dynamic $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Future_obj::filter")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",256)
	Array< Dynamic > f = Array_obj< Dynamic >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",257)
	Array< ::Future > fut = Array_obj< ::Future >::__new().Add(::Future_obj::__new());

	HX_BEGIN_LOCAL_FUNC2(_Function_1_1,Array< Dynamic >,f,Array< ::Future >,fut)
	Void run(Dynamic t){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",259)
			if (f->__get(0)(t)){
				HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",259)
				fut[0]->deliver(t);
			}
			else{
				HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",259)
				fut[0]->forceCancel();
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",259)
	this->deliverTo( Dynamic(new _Function_1_1(f,fut)));

	HX_BEGIN_LOCAL_FUNC1(_Function_1_2,Array< ::Future >,fut)
	Void run(){
		{
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",261)
			fut[0]->forceCancel();
		}
;
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",261)
	this->ifCanceled( Dynamic(new _Function_1_2(fut)));
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",263)
	return fut->__get(0);
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,filter,return )

::Future Future_obj::zip( ::Future $t1){
	__SAFE_POINT
	HX_SOURCE_PUSH("Future_obj::zip")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",271)
	Array< ::Future > f2 = Array_obj< ::Future >::__new().Add($t1);
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",272)
	Array< ::Future > zipped = Array_obj< ::Future >::__new().Add(::Future_obj::__new());
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",274)
	Array< ::Future > f1 = Array_obj< ::Future >::__new().Add(this);

	HX_BEGIN_LOCAL_FUNC3(_Function_1_1,Array< ::Future >,f2,Array< ::Future >,f1,Array< ::Future >,zipped)
	Void run(){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",277)
			if ((bool(f1[0]->isDelivered()) && bool(f2[0]->isDelivered()))){
				HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",278)
				zipped[0]->deliver(::Tuple2_obj::create(::OptionExtensions_obj::get(f1[0]->value()),::OptionExtensions_obj::get(f2[0]->value())));
			}
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",276)
	Array< Dynamic > deliverZip = Array_obj< Dynamic >::__new().Add( Dynamic(new _Function_1_1(f2,f1,zipped)));

	HX_BEGIN_LOCAL_FUNC1(_Function_1_2,Array< Dynamic >,deliverZip)
	Void run(Dynamic v){
		{
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",284)
			deliverZip->__get(0)();
		}
;
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",284)
	f1[0]->deliverTo( Dynamic(new _Function_1_2(deliverZip)));

	HX_BEGIN_LOCAL_FUNC1(_Function_1_3,Array< Dynamic >,deliverZip)
	Void run(Dynamic v){
		{
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",285)
			deliverZip->__get(0)();
		}
;
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",285)
	f2[0]->deliverTo( Dynamic(new _Function_1_3(deliverZip)));

	HX_BEGIN_LOCAL_FUNC2(_Function_1_4,Array< ::Future >,f1,Array< ::Future >,f2)
	bool run(){
		__SAFE_POINT;
		return (bool(f1[0]->cancel()) || bool(f2[0]->cancel()));
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",287)
	zipped[0]->allowCancelOnlyIf( Dynamic(new _Function_1_4(f1,f2)));

	HX_BEGIN_LOCAL_FUNC1(_Function_1_5,Array< ::Future >,zipped)
	Void run(){
		{
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",289)
			zipped[0]->forceCancel();
		}
;
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",289)
	f1[0]->ifCanceled( Dynamic(new _Function_1_5(zipped)));

	HX_BEGIN_LOCAL_FUNC1(_Function_1_6,Array< ::Future >,zipped)
	Void run(){
		{
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",290)
			zipped[0]->forceCancel();
		}
;
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",290)
	f2[0]->ifCanceled( Dynamic(new _Function_1_6(zipped)));
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",292)
	return zipped->__get(0);
}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,zip,return )

::Option Future_obj::value( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Future_obj::value")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",298)
	return (  (this->_isSet) ? ::Option(::Option_obj::Some(this->__Field(HX_CSTRING("_result")))) : ::Option(::Option_obj::None) );
}


HX_DEFINE_DYNAMIC_FUNC0(Future_obj,value,return )

::Option Future_obj::toOption( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Future_obj::toOption")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",302)
	return this->value();
}


HX_DEFINE_DYNAMIC_FUNC0(Future_obj,toOption,return )

Array< Dynamic > Future_obj::toArray( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Future_obj::toArray")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",306)
	return ::OptionExtensions_obj::toArray(this->value());
}


HX_DEFINE_DYNAMIC_FUNC0(Future_obj,toArray,return )

::Future Future_obj::forceCancel( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Future_obj::forceCancel")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",310)
	if (!(this->_isCanceled)){
		HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",311)
		this->_isCanceled = true;
		HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",313)
		{
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",313)
			int _g = 0;
			Array< Dynamic > _g1 = this->_canceled;
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",313)
			while((_g < _g1->length)){
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",313)
				Dynamic canceled = _g1->__get(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",313)
				++(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",313)
				canceled();
			}
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",316)
	return this;
}


HX_DEFINE_DYNAMIC_FUNC0(Future_obj,forceCancel,return )

::Future Future_obj::dead( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("Future_obj::dead")

	HX_BEGIN_LOCAL_FUNC0(_Function_1_1)
	Void run(::Future future){
{
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",100)
			future->cancel();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",99)
	return ::DynamicExtensions_obj::withEffect(::Future_obj::__new(), Dynamic(new _Function_1_1())).Cast< ::Future >();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Future_obj,dead,return )

::Future Future_obj::create( ){
	HX_SOURCE_PUSH("Future_obj::create")
	HX_SOURCE_POS("../stax/src/main/haxe/Prelude.hx",320)
	return ::Future_obj::__new();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Future_obj,create,return )


Future_obj::Future_obj()
{
}

void Future_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Future);
	HX_MARK_MEMBER_NAME(_listeners,"_listeners");
	HX_MARK_MEMBER_NAME(_result,"_result");
	HX_MARK_MEMBER_NAME(_isSet,"_isSet");
	HX_MARK_MEMBER_NAME(_isCanceled,"_isCanceled");
	HX_MARK_MEMBER_NAME(_cancelers,"_cancelers");
	HX_MARK_MEMBER_NAME(_canceled,"_canceled");
	HX_MARK_END_CLASS();
}

Dynamic Future_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map_dyn(); }
		if (HX_FIELD_EQ(inName,"zip") ) { return zip_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"dead") ) { return dead_dyn(); }
		if (HX_FIELD_EQ(inName,"then") ) { return then_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"_isSet") ) { return _isSet; }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"isDone") ) { return isDone_dyn(); }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_result") ) { return _result; }
		if (HX_FIELD_EQ(inName,"deliver") ) { return deliver_dyn(); }
		if (HX_FIELD_EQ(inName,"flatMap") ) { return flatMap_dyn(); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return toArray_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toOption") ) { return toOption_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_canceled") ) { return _canceled; }
		if (HX_FIELD_EQ(inName,"deliverTo") ) { return deliverTo_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_listeners") ) { return _listeners; }
		if (HX_FIELD_EQ(inName,"_cancelers") ) { return _cancelers; }
		if (HX_FIELD_EQ(inName,"ifCanceled") ) { return ifCanceled_dyn(); }
		if (HX_FIELD_EQ(inName,"isCanceled") ) { return isCanceled_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_isCanceled") ) { return _isCanceled; }
		if (HX_FIELD_EQ(inName,"isDelivered") ) { return isDelivered_dyn(); }
		if (HX_FIELD_EQ(inName,"forceCancel") ) { return forceCancel_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"allowCancelOnlyIf") ) { return allowCancelOnlyIf_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic Future_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_isSet") ) { _isSet=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_result") ) { _result=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_canceled") ) { _canceled=inValue.Cast< Array< Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_listeners") ) { _listeners=inValue.Cast< Array< Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cancelers") ) { _cancelers=inValue.Cast< Array< Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_isCanceled") ) { _isCanceled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Future_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_listeners"));
	outFields->push(HX_CSTRING("_result"));
	outFields->push(HX_CSTRING("_isSet"));
	outFields->push(HX_CSTRING("_isCanceled"));
	outFields->push(HX_CSTRING("_cancelers"));
	outFields->push(HX_CSTRING("_canceled"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("dead"),
	HX_CSTRING("create"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_listeners"),
	HX_CSTRING("_result"),
	HX_CSTRING("_isSet"),
	HX_CSTRING("_isCanceled"),
	HX_CSTRING("_cancelers"),
	HX_CSTRING("_canceled"),
	HX_CSTRING("deliver"),
	HX_CSTRING("allowCancelOnlyIf"),
	HX_CSTRING("ifCanceled"),
	HX_CSTRING("cancel"),
	HX_CSTRING("isDone"),
	HX_CSTRING("isDelivered"),
	HX_CSTRING("isCanceled"),
	HX_CSTRING("deliverTo"),
	HX_CSTRING("map"),
	HX_CSTRING("then"),
	HX_CSTRING("flatMap"),
	HX_CSTRING("filter"),
	HX_CSTRING("zip"),
	HX_CSTRING("value"),
	HX_CSTRING("toOption"),
	HX_CSTRING("toArray"),
	HX_CSTRING("forceCancel"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class Future_obj::__mClass;

void Future_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("Future"), hx::TCanCast< Future_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void Future_obj::__boot()
{
}

