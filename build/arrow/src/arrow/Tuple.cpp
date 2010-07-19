#include <hxObject.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_arrow_Box
#include <arrow/Box.h>
#endif
#ifndef INCLUDED_arrow_Tuple
#include <arrow/Tuple.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
namespace arrow{

Void Tuple_obj::__construct(Dynamic args)
{
{
	if (Std_obj::is(args,hxClassOf<arrow::Box >())){
		this->data = args->__Field(String(L"data",4));
		return null();
	}
	else
		if (args->__Field(String(L"length",6)) == 1){
		hxThrow (String(L"single values not supported",27));
	}
;
;
	this->data = args;
}
;
	return null();
}

Tuple_obj::~Tuple_obj() { }

Dynamic Tuple_obj::__CreateEmpty() { return  new Tuple_obj; }
hxObjectPtr<Tuple_obj > Tuple_obj::__new(Dynamic args)
{  hxObjectPtr<Tuple_obj > result = new Tuple_obj();
	result->__construct(args);
	return result;}

Dynamic Tuple_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Tuple_obj > result = new Tuple_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic Tuple_obj::getData( ){
	return this->data;
}


DEFINE_DYNAMIC_FUNC0(Tuple_obj,getData,return )

int Tuple_obj::getLength( ){
	return this->getData()->__Field(String(L"length",6));
}


DEFINE_DYNAMIC_FUNC0(Tuple_obj,getLength,return )

Dynamic Tuple_obj::fst( ){
	return this->getData()[0];
}


DEFINE_DYNAMIC_FUNC0(Tuple_obj,fst,return )

Dynamic Tuple_obj::snd( ){
	return this->getData()[1];
}


DEFINE_DYNAMIC_FUNC0(Tuple_obj,snd,return )

String Tuple_obj::toString( ){
	return String(L"[Tuple ",7) + this->toTupleString() + String(L"]",1);
}


DEFINE_DYNAMIC_FUNC0(Tuple_obj,toString,return )

String Tuple_obj::toTupleString( ){
	Array<String > str = Array_obj<String >::__new();
	Array<Dynamic > stack = Array_obj<Dynamic >::__new();
	Array<arrow::Tuple > current = this->getData();
	int i = 0;
	while(true){
		if (Std_obj::is(current,hxClassOf<Array<int> >())){
			arrow::Tuple c = current->__get(i);
			if (Std_obj::is(c,hxClassOf<arrow::Tuple >())){
				arrow::Tuple t = c;
				str->push(String(L"(",1));
				stack = stack->concat(Array_obj<Dynamic >::__new().Add(i + 1).Add(current));
				current = t->getData();
				i = 0;
				continue;
			}
			else
				if (i < current->length){
				str->push(Std_obj::string(c));
				i++;
			}
			else
				if (stack->length > 0){
				str->push(String(L")",1));
				current = stack->pop();
				i = stack->pop();
			}
			else{
				return str->join(String(L"",0));
			}
;
;
;
			if (i < current->length){
				str->push(String(L",",1));
			}
		}
		else{
			hxThrow (String(L"Box",3));
		}
	}
	return String(L"wrong",5);
}


DEFINE_DYNAMIC_FUNC0(Tuple_obj,toTupleString,return )

Array<Dynamic > Tuple_obj::toArray( ){
	if (this->memoArray != null()){
		return this->memoArray;
	}
	Array<Dynamic > stack = Array_obj<Dynamic >::__new();
	Array<Dynamic > array = Array_obj<Dynamic >::__new();
	arrow::Tuple current = this;
	int i = 0;
	while(true){
		if (Std_obj::is(current->getData(),hxClassOf<Array<int> >())){
			Dynamic c = current->getData()[i];
			if (Std_obj::is(c,hxClassOf<arrow::Tuple >())){
				if (c->__Field(String(L"memoArray",9)) != null()){
					array = array->concat(c->__Field(String(L"memoArray",9)));
					i++;
				}
				else{
					stack = stack->concat(Array_obj<Dynamic >::__new().Add(i + 1).Add(current).Add(array));
					array = Array_obj<Dynamic >::__new();
					struct _Function_1{
						static arrow::Tuple Block( Dynamic &c)/* DEF (ret block)(not intern) */{
							Dynamic tmp = c;
							return Std_obj::is(tmp,hxClassOf<arrow::Tuple >()) ? Dynamic( tmp ) : Dynamic( hxThrow (String(L"Class cast error",16)) );
						}
					};
					current = _Function_1::Block(c);
					i = 0;
				}
			}
			else
				if (i < current->getLength()){
				array->push(c);
				i++;
			}
			else
				if (stack->length > 0){
				current->memoArray = array;
				array = stack->pop();
				array = array->concat(current->memoArray);
				current = stack->pop();
				i = stack->pop();
			}
			else{
				current->memoArray = array;
				return array;
			}
;
;
;
		}
		else{
			hxThrow (String(L"Box",3));
		}
	}
	return Array_obj<String >::__new().Add(String(L"wrong",5));
}


DEFINE_DYNAMIC_FUNC0(Tuple_obj,toArray,return )

Dynamic Tuple_obj::applyArrayTo( Dynamic f){
	Array<Dynamic > ar = this->toArray();
	haxe::Log_obj::trace(f + String(L" ",1) + ar,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"Tuple.hx",8))->Add( String(L"lineNumber",10) , 111)->Add( String(L"className",9) , String(L"arrow.Tuple",11))->Add( String(L"methodName",10) , String(L"applyArrayTo",12)));
	return Reflect_obj::callMethod(null(),f,ar);
}


DEFINE_DYNAMIC_FUNC1(Tuple_obj,applyArrayTo,return )


Tuple_obj::Tuple_obj()
{
	InitMember(data);
	InitMember(length);
	InitMember(memoArray);
}

Dynamic Tuple_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"fst",sizeof(wchar_t)*3) ) { return fst_dyn(); }
		if (!memcmp(inName.__s,L"snd",sizeof(wchar_t)*3) ) { return snd_dyn(); }
		break;
	case 4:
		if (!memcmp(inName.__s,L"data",sizeof(wchar_t)*4) ) { return data; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"length",sizeof(wchar_t)*6) ) { return length; }
		break;
	case 7:
		if (!memcmp(inName.__s,L"getData",sizeof(wchar_t)*7) ) { return getData_dyn(); }
		if (!memcmp(inName.__s,L"toArray",sizeof(wchar_t)*7) ) { return toArray_dyn(); }
		break;
	case 8:
		if (!memcmp(inName.__s,L"toString",sizeof(wchar_t)*8) ) { return toString_dyn(); }
		break;
	case 9:
		if (!memcmp(inName.__s,L"getLength",sizeof(wchar_t)*9) ) { return getLength_dyn(); }
		if (!memcmp(inName.__s,L"memoArray",sizeof(wchar_t)*9) ) { return memoArray; }
		break;
	case 12:
		if (!memcmp(inName.__s,L"applyArrayTo",sizeof(wchar_t)*12) ) { return applyArrayTo_dyn(); }
		break;
	case 13:
		if (!memcmp(inName.__s,L"toTupleString",sizeof(wchar_t)*13) ) { return toTupleString_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_data = __hxcpp_field_to_id("data");
static int __id_getData = __hxcpp_field_to_id("getData");
static int __id_length = __hxcpp_field_to_id("length");
static int __id_getLength = __hxcpp_field_to_id("getLength");
static int __id_fst = __hxcpp_field_to_id("fst");
static int __id_snd = __hxcpp_field_to_id("snd");
static int __id_toString = __hxcpp_field_to_id("toString");
static int __id_toTupleString = __hxcpp_field_to_id("toTupleString");
static int __id_memoArray = __hxcpp_field_to_id("memoArray");
static int __id_toArray = __hxcpp_field_to_id("toArray");
static int __id_applyArrayTo = __hxcpp_field_to_id("applyArrayTo");


Dynamic Tuple_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_data) return data;
	if (inFieldID==__id_getData) return getData_dyn();
	if (inFieldID==__id_length) return length;
	if (inFieldID==__id_getLength) return getLength_dyn();
	if (inFieldID==__id_fst) return fst_dyn();
	if (inFieldID==__id_snd) return snd_dyn();
	if (inFieldID==__id_toString) return toString_dyn();
	if (inFieldID==__id_toTupleString) return toTupleString_dyn();
	if (inFieldID==__id_memoArray) return memoArray;
	if (inFieldID==__id_toArray) return toArray_dyn();
	if (inFieldID==__id_applyArrayTo) return applyArrayTo_dyn();
	return super::__IField(inFieldID);
}

Dynamic Tuple_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"data",sizeof(wchar_t)*4) ) { data=inValue.Cast<Dynamic >();return inValue; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"length",sizeof(wchar_t)*6) ) { length=inValue.Cast<int >();return inValue; }
		break;
	case 9:
		if (!memcmp(inName.__s,L"memoArray",sizeof(wchar_t)*9) ) { memoArray=inValue.Cast<Array<Dynamic > >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Tuple_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"data",4));
	outFields->push(String(L"length",6));
	outFields->push(String(L"memoArray",9));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"data",
	L"getData",
	L"length",
	L"getLength",
	L"fst",
	L"snd",
	L"toString",
	L"toTupleString",
	L"memoArray",
	L"toArray",
	L"applyArrayTo",
	0 };

Class Tuple_obj::__mClass;

void Tuple_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.Tuple",11), TCanCast<Tuple_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Tuple_obj::__boot()
{
}

} // end namespace arrow
