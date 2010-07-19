#include <hxObject.h>

#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrowInstance
#include <arrow/AsyncArrowInstance.h>
#endif
#ifndef INCLUDED_arrow_combinators_TerminalArrow
#include <arrow/combinators/TerminalArrow.h>
#endif
namespace arrow{
namespace combinators{

Void TerminalArrow_obj::__construct()
{
{

	BEGIN_LOCAL_FUNC0(_Function_1)
	Void run(Dynamic x,arrow::AsyncArrowInstance a){
{
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	super::__construct( Dynamic(new _Function_1()));
}
;
	return null();
}

TerminalArrow_obj::~TerminalArrow_obj() { }

Dynamic TerminalArrow_obj::__CreateEmpty() { return  new TerminalArrow_obj; }
hxObjectPtr<TerminalArrow_obj > TerminalArrow_obj::__new()
{  hxObjectPtr<TerminalArrow_obj > result = new TerminalArrow_obj();
	result->__construct();
	return result;}

Dynamic TerminalArrow_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<TerminalArrow_obj > result = new TerminalArrow_obj();
	result->__construct();
	return result;}

String TerminalArrow_obj::getName( ){
	return String(L"TerminalArrow",13);
}


DEFINE_DYNAMIC_FUNC0(TerminalArrow_obj,getName,return )


TerminalArrow_obj::TerminalArrow_obj()
{
}

Dynamic TerminalArrow_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"getName",sizeof(wchar_t)*7) ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_getName = __hxcpp_field_to_id("getName");


Dynamic TerminalArrow_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_getName) return getName_dyn();
	return super::__IField(inFieldID);
}

Dynamic TerminalArrow_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void TerminalArrow_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"getName",
	0 };

Class TerminalArrow_obj::__mClass;

void TerminalArrow_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.combinators.TerminalArrow",31), TCanCast<TerminalArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void TerminalArrow_obj::__boot()
{
}

} // end namespace arrow
} // end namespace combinators
