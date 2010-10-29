#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_test_Runner
#include <haxe/test/Runner.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_IReport
#include <haxe/test/ui/common/IReport.h>
#endif
#ifndef INCLUDED_haxe_test_ui_text_PlainTextReport
#include <haxe/test/ui/text/PlainTextReport.h>
#endif
#ifndef INCLUDED_haxe_test_ui_text_PrintReport
#include <haxe/test/ui/text/PrintReport.h>
#endif
namespace haxe{
namespace test{
namespace ui{
namespace text{

Void PrintReport_obj::__construct(::haxe::test::Runner runner)
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PrintReport.hx",67)
	super::__construct(runner,this->_handler_dyn());
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PrintReport.hx",68)
	this->newline = HX_CSTRING("\n");
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PrintReport.hx",69)
	this->indent = HX_CSTRING("  ");
}
;
	return null();
}

PrintReport_obj::~PrintReport_obj() { }

Dynamic PrintReport_obj::__CreateEmpty() { return  new PrintReport_obj; }
hx::ObjectPtr< PrintReport_obj > PrintReport_obj::__new(::haxe::test::Runner runner)
{  hx::ObjectPtr< PrintReport_obj > result = new PrintReport_obj();
	result->__construct(runner);
	return result;}

Dynamic PrintReport_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PrintReport_obj > result = new PrintReport_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PrintReport_obj::_handler( ::haxe::test::ui::text::PlainTextReport report){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("PrintReport_obj::_handler")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PrintReport.hx",74)
		this->_trace(report->getResults());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PrintReport_obj,_handler,(void))

Void PrintReport_obj::_trace( ::String s){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("PrintReport_obj::_trace")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PrintReport.hx",79)
		s = ::StringTools_obj::replace(s,HX_CSTRING("  "),this->indent);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PrintReport.hx",80)
		s = ::StringTools_obj::replace(s,HX_CSTRING("\n"),this->newline);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PrintReport.hx",81)
		::haxe::Log_obj::trace(s,hx::SourceInfo(HX_CSTRING("PrintReport.hx"),81,HX_CSTRING("haxe.test.ui.text.PrintReport"),HX_CSTRING("_trace")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PrintReport_obj,_trace,(void))

Void PrintReport_obj::_print( ::String s){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("PrintReport_obj::_print")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PrintReport.hx",85)
		::cpp::Lib_obj::print(s);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PrintReport_obj,_print,(void))


PrintReport_obj::PrintReport_obj()
{
}

void PrintReport_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PrintReport);
	HX_MARK_MEMBER_NAME(useTrace,"useTrace");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

Dynamic PrintReport_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_trace") ) { return _trace_dyn(); }
		if (HX_FIELD_EQ(inName,"_print") ) { return _print_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"useTrace") ) { return useTrace; }
		if (HX_FIELD_EQ(inName,"_handler") ) { return _handler_dyn(); }
	}
	return super::__Field(inName);
}

Dynamic PrintReport_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"useTrace") ) { useTrace=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void PrintReport_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("useTrace"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("useTrace"),
	HX_CSTRING("_handler"),
	HX_CSTRING("_trace"),
	HX_CSTRING("_print"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class PrintReport_obj::__mClass;

void PrintReport_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.ui.text.PrintReport"), hx::TCanCast< PrintReport_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void PrintReport_obj::__boot()
{
}

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace text
