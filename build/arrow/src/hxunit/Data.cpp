#include <hxObject.h>

#ifndef INCLUDED_hxunit_AType
#include <hxunit/AType.h>
#endif
#ifndef INCLUDED_hxunit_Data
#include <hxunit/Data.h>
#endif
#ifndef INCLUDED_hxunit_error_AssertionError
#include <hxunit/error/AssertionError.h>
#endif
#ifndef INCLUDED_hxunit_error_HxUnitError
#include <hxunit/error/HxUnitError.h>
#endif
namespace hxunit{

Void Data_obj::__construct()
{
{
}
;
	return null();
}

Data_obj::~Data_obj() { }

Dynamic Data_obj::__CreateEmpty() { return  new Data_obj; }
hxObjectPtr<Data_obj > Data_obj::__new()
{  hxObjectPtr<Data_obj > result = new Data_obj();
	result->__construct();
	return result;}

Dynamic Data_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Data_obj > result = new Data_obj();
	result->__construct();
	return result;}

Dynamic Data_obj::aTypeFunction( hxunit::AType t){
	Dynamic m;
	hxunit::AType _switch_1 = (t);
	switch((_switch_1)->GetIndex()){
		case 1: {
			Dynamic v = _switch_1->__Param(0);
{
				m = v;
			}
		}
		break;
		default: {

			BEGIN_LOCAL_FUNC0(_Function_1)
			Void run(bool value0,bool value1){
{
					if (value0 != value1){
						hxThrow (hxunit::error::AssertionError_obj::__new(String(L"expected ",9) + value0 + String(L" but was ",9) + value1 + String(L".",1),hxAnon_obj::Create()->Add( String(L"fileName",8) , String(L"Data.hx",7))->Add( String(L"lineNumber",10) , 54)->Add( String(L"className",9) , String(L"hxunit.Data",11))->Add( String(L"methodName",10) , String(L"aTypeFunction",13))));
					}
				}
				return null();
			}
			END_LOCAL_FUNC2((void))

			m =  Dynamic(new _Function_1());
		}
	}
	return m;
}


STATIC_DEFINE_DYNAMIC_FUNC1(Data_obj,aTypeFunction,return )


Data_obj::Data_obj()
{
}

Dynamic Data_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 13:
		if (!memcmp(inName.__s,L"aTypeFunction",sizeof(wchar_t)*13) ) { return aTypeFunction_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_aTypeFunction = __hxcpp_field_to_id("aTypeFunction");


Dynamic Data_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_aTypeFunction) return aTypeFunction_dyn();
	return super::__IField(inFieldID);
}

Dynamic Data_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void Data_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"aTypeFunction",
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class Data_obj::__mClass;

void Data_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"hxunit.Data",11), TCanCast<Data_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Data_obj::__boot()
{
}

} // end namespace hxunit
