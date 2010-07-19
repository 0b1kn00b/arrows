#include <hxObject.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_reflect_Argument
#include <reflect/Argument.h>
#endif
#ifndef INCLUDED_reflect_Field
#include <reflect/Field.h>
#endif
#ifndef INCLUDED_reflect_Member
#include <reflect/Member.h>
#endif
#ifndef INCLUDED_reflect_Method
#include <reflect/Method.h>
#endif
#ifndef INCLUDED_reflect_NamedField
#include <reflect/NamedField.h>
#endif
#ifndef INCLUDED_reflect_RType
#include <reflect/RType.h>
#endif
namespace reflect{

Void RType_obj::__construct()
{
{
	super::__construct();
}
;
	return null();
}

RType_obj::~RType_obj() { }

Dynamic RType_obj::__CreateEmpty() { return  new RType_obj; }
hxObjectPtr<RType_obj > RType_obj::__new()
{  hxObjectPtr<RType_obj > result = new RType_obj();
	result->__construct();
	return result;}

Dynamic RType_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<RType_obj > result = new RType_obj();
	result->__construct();
	return result;}

Hash RType_obj::getMethods( ){
	if (this->methods == null()){
		this->setMethods(Hash_obj::__new());
		Array<String > a = Type_obj::getInstanceFields(Type_obj::resolveClass(this->getName()->getValue().Cast<String >()));
		haxe::Log_obj::trace(a,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"RType.hx",8))->Add( String(L"lineNumber",10) , 13)->Add( String(L"className",9) , String(L"reflect.RType",13))->Add( String(L"methodName",10) , String(L"getMethods",10)));
		{
			int _g = 0;
			while(_g < a->length){
				String item = a->__get(_g);
				++_g;
				haxe::Log_obj::trace(item,hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"RType.hx",8))->Add( String(L"lineNumber",10) , 15)->Add( String(L"className",9) , String(L"reflect.RType",13))->Add( String(L"methodName",10) , String(L"getMethods",10)));
				Dynamic m = this->getValue()->__Field(item);
				if (Reflect_obj::isFunction(m)){
					reflect::Method m0 = reflect::Method_obj::__new();
					m0->setValue(m);
					reflect::Field f = reflect::Field_obj::__new();
					f->setValue(item).Cast<String >();
					m0->setName(f);
					this->methods->set(item,m0);
				}
			}
		}
	}
	return this->methods;
}


DEFINE_DYNAMIC_FUNC0(RType_obj,getMethods,return )

Hash RType_obj::setMethods( Hash value){
	return this->methods = value;
}


DEFINE_DYNAMIC_FUNC1(RType_obj,setMethods,return )

reflect::Field RType_obj::getName( ){
	if (this->name == null()){
		if (this->getValue() != null()){
			this->setName(reflect::Field_obj::__new());
			this->name->setValue(Type_obj::getClassName(Type_obj::getClass(this->getValue()))).Cast<String >();
		}
	}
	return this->name;
}


DEFINE_DYNAMIC_FUNC0(RType_obj,getName,return )

Dynamic RType_obj::create( reflect::RType type){

	BEGIN_LOCAL_FUNC0(_Function_1)
	Dynamic run(reflect::Argument a){
{
			return a->getValue();
		}
		return null();
	}
	END_LOCAL_FUNC1(return)

	return Type_obj::createInstance(type->getClassRef(),Lambda_obj::array(Lambda_obj::map(type->constructor->arguments, Dynamic(new _Function_1()))));
}


STATIC_DEFINE_DYNAMIC_FUNC1(RType_obj,create,return )


RType_obj::RType_obj()
{
	InitMember(methods);
	InitMember(properties);
	InitMember(superclass);
	InitMember(constructor);
}

Dynamic RType_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 6:
		if (!memcmp(inName.__s,L"create",sizeof(wchar_t)*6) ) { return create_dyn(); }
		break;
	case 7:
		if (!memcmp(inName.__s,L"methods",sizeof(wchar_t)*7) ) { return methods; }
		if (!memcmp(inName.__s,L"getName",sizeof(wchar_t)*7) ) { return getName_dyn(); }
		break;
	case 10:
		if (!memcmp(inName.__s,L"getMethods",sizeof(wchar_t)*10) ) { return getMethods_dyn(); }
		if (!memcmp(inName.__s,L"setMethods",sizeof(wchar_t)*10) ) { return setMethods_dyn(); }
		if (!memcmp(inName.__s,L"properties",sizeof(wchar_t)*10) ) { return properties; }
		if (!memcmp(inName.__s,L"superclass",sizeof(wchar_t)*10) ) { return superclass; }
		break;
	case 11:
		if (!memcmp(inName.__s,L"constructor",sizeof(wchar_t)*11) ) { return constructor; }
	}
	return super::__Field(inName);
}

static int __id_create = __hxcpp_field_to_id("create");
static int __id_methods = __hxcpp_field_to_id("methods");
static int __id_getMethods = __hxcpp_field_to_id("getMethods");
static int __id_setMethods = __hxcpp_field_to_id("setMethods");
static int __id_properties = __hxcpp_field_to_id("properties");
static int __id_superclass = __hxcpp_field_to_id("superclass");
static int __id_constructor = __hxcpp_field_to_id("constructor");
static int __id_getName = __hxcpp_field_to_id("getName");


Dynamic RType_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_create) return create_dyn();
	if (inFieldID==__id_methods) return methods;
	if (inFieldID==__id_getMethods) return getMethods_dyn();
	if (inFieldID==__id_setMethods) return setMethods_dyn();
	if (inFieldID==__id_properties) return properties;
	if (inFieldID==__id_superclass) return superclass;
	if (inFieldID==__id_constructor) return constructor;
	if (inFieldID==__id_getName) return getName_dyn();
	return super::__IField(inFieldID);
}

Dynamic RType_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"methods",sizeof(wchar_t)*7) ) { methods=inValue.Cast<Hash >();return inValue; }
		break;
	case 10:
		if (!memcmp(inName.__s,L"properties",sizeof(wchar_t)*10) ) { properties=inValue.Cast<Hash >();return inValue; }
		if (!memcmp(inName.__s,L"superclass",sizeof(wchar_t)*10) ) { superclass=inValue.Cast<reflect::RType >();return inValue; }
		break;
	case 11:
		if (!memcmp(inName.__s,L"constructor",sizeof(wchar_t)*11) ) { constructor=inValue.Cast<reflect::Method >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void RType_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"methods",7));
	outFields->push(String(L"properties",10));
	outFields->push(String(L"superclass",10));
	outFields->push(String(L"constructor",11));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"create",
	0 };

static wchar_t *sMemberFields[] = {
	L"methods",
	L"getMethods",
	L"setMethods",
	L"properties",
	L"superclass",
	L"constructor",
	L"getName",
	0 };

Class RType_obj::__mClass;

void RType_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"reflect.RType",13), TCanCast<RType_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void RType_obj::__boot()
{
}

} // end namespace reflect
