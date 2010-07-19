#include <hxObject.h>

#ifndef INCLUDED_util_Counter
#include <util/Counter.h>
#endif
namespace util{

Void Counter_obj::__construct(int max)
{
{
	this->maxCount = max;
	this->init();
}
;
	return null();
}

Counter_obj::~Counter_obj() { }

Dynamic Counter_obj::__CreateEmpty() { return  new Counter_obj; }
hxObjectPtr<Counter_obj > Counter_obj::__new(int max)
{  hxObjectPtr<Counter_obj > result = new Counter_obj();
	result->__construct(max);
	return result;}

Dynamic Counter_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Counter_obj > result = new Counter_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Counter_obj::init( ){
{
		this->current = 0;
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(Counter_obj,init,(void))

Void Counter_obj::step( ){
{
		this->current++;
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(Counter_obj,step,(void))

Void Counter_obj::max( ){
{
		this->current = this->maxCount + 1;
	}
return null();
}


DEFINE_DYNAMIC_FUNC0(Counter_obj,max,(void))

bool Counter_obj::isDone( ){
	return this->current > this->maxCount;
}


DEFINE_DYNAMIC_FUNC0(Counter_obj,isDone,return )


Counter_obj::Counter_obj()
{
	InitMember(maxCount);
	InitMember(current);
}

Dynamic Counter_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"max",sizeof(wchar_t)*3) ) { return max_dyn(); }
		break;
	case 4:
		if (!memcmp(inName.__s,L"init",sizeof(wchar_t)*4) ) { return init_dyn(); }
		if (!memcmp(inName.__s,L"step",sizeof(wchar_t)*4) ) { return step_dyn(); }
		break;
	case 6:
		if (!memcmp(inName.__s,L"isDone",sizeof(wchar_t)*6) ) { return isDone_dyn(); }
		break;
	case 7:
		if (!memcmp(inName.__s,L"current",sizeof(wchar_t)*7) ) { return current; }
		break;
	case 8:
		if (!memcmp(inName.__s,L"maxCount",sizeof(wchar_t)*8) ) { return maxCount; }
	}
	return super::__Field(inName);
}

static int __id_maxCount = __hxcpp_field_to_id("maxCount");
static int __id_current = __hxcpp_field_to_id("current");
static int __id_init = __hxcpp_field_to_id("init");
static int __id_step = __hxcpp_field_to_id("step");
static int __id_max = __hxcpp_field_to_id("max");
static int __id_isDone = __hxcpp_field_to_id("isDone");


Dynamic Counter_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_maxCount) return maxCount;
	if (inFieldID==__id_current) return current;
	if (inFieldID==__id_init) return init_dyn();
	if (inFieldID==__id_step) return step_dyn();
	if (inFieldID==__id_max) return max_dyn();
	if (inFieldID==__id_isDone) return isDone_dyn();
	return super::__IField(inFieldID);
}

Dynamic Counter_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"current",sizeof(wchar_t)*7) ) { current=inValue.Cast<int >();return inValue; }
		break;
	case 8:
		if (!memcmp(inName.__s,L"maxCount",sizeof(wchar_t)*8) ) { maxCount=inValue.Cast<int >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Counter_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"maxCount",8));
	outFields->push(String(L"current",7));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"maxCount",
	L"current",
	L"init",
	L"step",
	L"max",
	L"isDone",
	0 };

Class Counter_obj::__mClass;

void Counter_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"util.Counter",12), TCanCast<Counter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Counter_obj::__boot()
{
}

} // end namespace util
