#include <hxcpp.h>

#ifndef INCLUDED_FieldOrder
#include <FieldOrder.h>
#endif

Void FieldOrder_obj::__construct()
{
	return null();
}

FieldOrder_obj::~FieldOrder_obj() { }

Dynamic FieldOrder_obj::__CreateEmpty() { return  new FieldOrder_obj; }
hx::ObjectPtr< FieldOrder_obj > FieldOrder_obj::__new()
{  hx::ObjectPtr< FieldOrder_obj > result = new FieldOrder_obj();
	result->__construct();
	return result;}

Dynamic FieldOrder_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FieldOrder_obj > result = new FieldOrder_obj();
	result->__construct();
	return result;}

int FieldOrder_obj::Ascending;

int FieldOrder_obj::Descending;

int FieldOrder_obj::Ignore;


FieldOrder_obj::FieldOrder_obj()
{
}

void FieldOrder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FieldOrder);
	HX_MARK_END_CLASS();
}

Dynamic FieldOrder_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"Ignore") ) { return Ignore; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"Ascending") ) { return Ascending; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"Descending") ) { return Descending; }
	}
	return super::__Field(inName);
}

Dynamic FieldOrder_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"Ignore") ) { Ignore=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"Ascending") ) { Ascending=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"Descending") ) { Descending=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void FieldOrder_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("Ascending"),
	HX_CSTRING("Descending"),
	HX_CSTRING("Ignore"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FieldOrder_obj::Ascending,"Ascending");
	HX_MARK_MEMBER_NAME(FieldOrder_obj::Descending,"Descending");
	HX_MARK_MEMBER_NAME(FieldOrder_obj::Ignore,"Ignore");
};

Class FieldOrder_obj::__mClass;

void FieldOrder_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("FieldOrder"), hx::TCanCast< FieldOrder_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void FieldOrder_obj::__boot()
{
	hx::Static(Ascending) = 1;
	hx::Static(Descending) = -1;
	hx::Static(Ignore) = 0;
}

