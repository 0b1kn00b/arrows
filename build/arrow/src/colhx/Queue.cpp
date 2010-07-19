#include <hxObject.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_colhx_Collection
#include <colhx/Collection.h>
#endif
#ifndef INCLUDED_colhx_Queue
#include <colhx/Queue.h>
#endif
namespace colhx{

Void Queue_obj::__construct()
{
{
	this->list = List_obj::__new();
}
;
	return null();
}

Queue_obj::~Queue_obj() { }

Dynamic Queue_obj::__CreateEmpty() { return  new Queue_obj; }
hxObjectPtr<Queue_obj > Queue_obj::__new()
{  hxObjectPtr<Queue_obj > result = new Queue_obj();
	result->__construct();
	return result;}

Dynamic Queue_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Queue_obj > result = new Queue_obj();
	result->__construct();
	return result;}

Dynamic Queue_obj::getHead( ){
	if (this->list->isEmpty())
		return null();
	return this->list->first();
}


DEFINE_DYNAMIC_FUNC0(Queue_obj,getHead,return )

Dynamic Queue_obj::getTail( ){
	if (this->list->isEmpty())
		return null();
	return this->list->last();
}


DEFINE_DYNAMIC_FUNC0(Queue_obj,getTail,return )

Void Queue_obj::enqueue( Dynamic item){
{
		this->list->add(item);
	}
return null();
}


DEFINE_DYNAMIC_FUNC1(Queue_obj,enqueue,(void))

Dynamic Queue_obj::dequeue( ){
	return this->list->pop();
}


DEFINE_DYNAMIC_FUNC0(Queue_obj,dequeue,return )

bool Queue_obj::remove( Dynamic obj){
	return this->list->remove(obj);
}


DEFINE_DYNAMIC_FUNC1(Queue_obj,remove,return )

Void Queue_obj::clear( ){
{
		this->list = List_obj::__new();
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(Queue_obj,clear,(void))

int Queue_obj::getLength( ){
	return this->list->length;
}


DEFINE_DYNAMIC_FUNC0(Queue_obj,getLength,return )

bool Queue_obj::isEmpty( ){
	return this->list->isEmpty();
}


DEFINE_DYNAMIC_FUNC0(Queue_obj,isEmpty,return )

bool Queue_obj::contains( Dynamic obj){
	for(Dynamic __it = this->list->iterator();  __it->__Field(String(L"hasNext",7))(); ){
Dynamic match = __it->__Field(String(L"next",4))();
		{
			if (obj == match)
				return true;
		}
;
	}
	return false;
}


DEFINE_DYNAMIC_FUNC1(Queue_obj,contains,return )

Array<Dynamic > Queue_obj::toArray( ){
	return Lambda_obj::array(this->list);
}


DEFINE_DYNAMIC_FUNC0(Queue_obj,toArray,return )

String Queue_obj::toString( ){
	return String(L"[Queue, size=",13) + Std_obj::string(this->list->length) + String(L"]",1);
}


DEFINE_DYNAMIC_FUNC0(Queue_obj,toString,return )

String Queue_obj::dump( ){
	String s = String(L"Queue (Head -> Tail): \n",23);
	for(Dynamic __it = this->list->iterator();  __it->__Field(String(L"hasNext",7))(); ){
Dynamic obj = __it->__Field(String(L"next",4))();
		hxAddEq(s,String(L"[val: ",6) + Std_obj::string(obj) + String(L"]\n",2));
	}
	return s;
}


DEFINE_DYNAMIC_FUNC0(Queue_obj,dump,return )

Dynamic Queue_obj::iterator( ){
	return this->list->iterator();
}


DEFINE_DYNAMIC_FUNC0(Queue_obj,iterator,return )

List Queue_obj::getInternalList( ){
	return this->list;
}


DEFINE_DYNAMIC_FUNC0(Queue_obj,getInternalList,return )

colhx::Queue Queue_obj::copy( ){
	colhx::Queue q = colhx::Queue_obj::__new();
	for(Dynamic __it = this->list->iterator();  __it->__Field(String(L"hasNext",7))(); ){
Dynamic obj = __it->__Field(String(L"next",4))();
		q->enqueue(obj);
	}
	return q;
}


DEFINE_DYNAMIC_FUNC0(Queue_obj,copy,return )


Queue_obj::Queue_obj()
{
	InitMember(length);
	InitMember(list);
}

Dynamic Queue_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"list",sizeof(wchar_t)*4) ) { return list; }
		if (!memcmp(inName.__s,L"dump",sizeof(wchar_t)*4) ) { return dump_dyn(); }
		if (!memcmp(inName.__s,L"copy",sizeof(wchar_t)*4) ) { return copy_dyn(); }
		break;
	case 5:
		if (!memcmp(inName.__s,L"clear",sizeof(wchar_t)*5) ) { return clear_dyn(); }
		break;
	case 6:
		if (!memcmp(inName.__s,L"length",sizeof(wchar_t)*6) ) { return length; }
		if (!memcmp(inName.__s,L"remove",sizeof(wchar_t)*6) ) { return remove_dyn(); }
		break;
	case 7:
		if (!memcmp(inName.__s,L"getHead",sizeof(wchar_t)*7) ) { return getHead_dyn(); }
		if (!memcmp(inName.__s,L"getTail",sizeof(wchar_t)*7) ) { return getTail_dyn(); }
		if (!memcmp(inName.__s,L"enqueue",sizeof(wchar_t)*7) ) { return enqueue_dyn(); }
		if (!memcmp(inName.__s,L"dequeue",sizeof(wchar_t)*7) ) { return dequeue_dyn(); }
		if (!memcmp(inName.__s,L"isEmpty",sizeof(wchar_t)*7) ) { return isEmpty_dyn(); }
		if (!memcmp(inName.__s,L"toArray",sizeof(wchar_t)*7) ) { return toArray_dyn(); }
		break;
	case 8:
		if (!memcmp(inName.__s,L"contains",sizeof(wchar_t)*8) ) { return contains_dyn(); }
		if (!memcmp(inName.__s,L"toString",sizeof(wchar_t)*8) ) { return toString_dyn(); }
		if (!memcmp(inName.__s,L"iterator",sizeof(wchar_t)*8) ) { return iterator_dyn(); }
		break;
	case 9:
		if (!memcmp(inName.__s,L"getLength",sizeof(wchar_t)*9) ) { return getLength_dyn(); }
		break;
	case 15:
		if (!memcmp(inName.__s,L"getInternalList",sizeof(wchar_t)*15) ) { return getInternalList_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_length = __hxcpp_field_to_id("length");
static int __id_list = __hxcpp_field_to_id("list");
static int __id_getHead = __hxcpp_field_to_id("getHead");
static int __id_getTail = __hxcpp_field_to_id("getTail");
static int __id_enqueue = __hxcpp_field_to_id("enqueue");
static int __id_dequeue = __hxcpp_field_to_id("dequeue");
static int __id_remove = __hxcpp_field_to_id("remove");
static int __id_clear = __hxcpp_field_to_id("clear");
static int __id_getLength = __hxcpp_field_to_id("getLength");
static int __id_isEmpty = __hxcpp_field_to_id("isEmpty");
static int __id_contains = __hxcpp_field_to_id("contains");
static int __id_toArray = __hxcpp_field_to_id("toArray");
static int __id_toString = __hxcpp_field_to_id("toString");
static int __id_dump = __hxcpp_field_to_id("dump");
static int __id_iterator = __hxcpp_field_to_id("iterator");
static int __id_getInternalList = __hxcpp_field_to_id("getInternalList");
static int __id_copy = __hxcpp_field_to_id("copy");


Dynamic Queue_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_length) return length;
	if (inFieldID==__id_list) return list;
	if (inFieldID==__id_getHead) return getHead_dyn();
	if (inFieldID==__id_getTail) return getTail_dyn();
	if (inFieldID==__id_enqueue) return enqueue_dyn();
	if (inFieldID==__id_dequeue) return dequeue_dyn();
	if (inFieldID==__id_remove) return remove_dyn();
	if (inFieldID==__id_clear) return clear_dyn();
	if (inFieldID==__id_getLength) return getLength_dyn();
	if (inFieldID==__id_isEmpty) return isEmpty_dyn();
	if (inFieldID==__id_contains) return contains_dyn();
	if (inFieldID==__id_toArray) return toArray_dyn();
	if (inFieldID==__id_toString) return toString_dyn();
	if (inFieldID==__id_dump) return dump_dyn();
	if (inFieldID==__id_iterator) return iterator_dyn();
	if (inFieldID==__id_getInternalList) return getInternalList_dyn();
	if (inFieldID==__id_copy) return copy_dyn();
	return super::__IField(inFieldID);
}

Dynamic Queue_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"list",sizeof(wchar_t)*4) ) { list=inValue.Cast<List >();return inValue; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"length",sizeof(wchar_t)*6) ) { length=inValue.Cast<int >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Queue_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"length",6));
	outFields->push(String(L"list",4));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"length",
	L"list",
	L"getHead",
	L"getTail",
	L"enqueue",
	L"dequeue",
	L"remove",
	L"clear",
	L"getLength",
	L"isEmpty",
	L"contains",
	L"toArray",
	L"toString",
	L"dump",
	L"iterator",
	L"getInternalList",
	L"copy",
	0 };

Class Queue_obj::__mClass;

void Queue_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"colhx.Queue",11), TCanCast<Queue_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Queue_obj::__boot()
{
}

} // end namespace colhx
