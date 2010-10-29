#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Stack
#include <haxe/Stack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_test_Assertation
#include <haxe/test/Assertation.h>
#endif
#ifndef INCLUDED_haxe_test_Dispatcher
#include <haxe/test/Dispatcher.h>
#endif
#ifndef INCLUDED_haxe_test_Runner
#include <haxe/test/Runner.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_ClassResult
#include <haxe/test/ui/common/ClassResult.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_FixtureResult
#include <haxe/test/ui/common/FixtureResult.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_HeaderDisplayMode
#include <haxe/test/ui/common/HeaderDisplayMode.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_IReport
#include <haxe/test/ui/common/IReport.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_PackageResult
#include <haxe/test/ui/common/PackageResult.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_ReportTools
#include <haxe/test/ui/common/ReportTools.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_ResultAggregator
#include <haxe/test/ui/common/ResultAggregator.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_ResultStats
#include <haxe/test/ui/common/ResultStats.h>
#endif
#ifndef INCLUDED_haxe_test_ui_common_SuccessResultsDisplayMode
#include <haxe/test/ui/common/SuccessResultsDisplayMode.h>
#endif
#ifndef INCLUDED_haxe_test_ui_text_HtmlReport
#include <haxe/test/ui/text/HtmlReport.h>
#endif
namespace haxe{
namespace test{
namespace ui{
namespace text{

Void HtmlReport_obj::__construct(::haxe::test::Runner runner,Dynamic outputHandler,Dynamic __o_traceRedirected)
{
bool traceRedirected = __o_traceRedirected.Default(true);
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",60)
	this->aggregator = ::haxe::test::ui::common::ResultAggregator_obj::__new(runner,true);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",61)
	runner->onStart->__Field(HX_CSTRING("add"))(this->start_dyn());
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",62)
	this->aggregator->onComplete->__Field(HX_CSTRING("add"))(this->complete_dyn());
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",63)
	if ((null() == outputHandler)){
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",64)
		this->setHandler(this->_handler_dyn());
	}
	else{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",66)
		this->setHandler(outputHandler);
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",67)
	if (traceRedirected)
		this->redirectTrace();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",69)
	this->displaySuccessResults = ::haxe::test::ui::common::SuccessResultsDisplayMode_obj::AlwaysShowSuccessResults;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",70)
	this->displayHeader = ::haxe::test::ui::common::HeaderDisplayMode_obj::AlwaysShowHeader;
}
;
	return null();
}

HtmlReport_obj::~HtmlReport_obj() { }

Dynamic HtmlReport_obj::__CreateEmpty() { return  new HtmlReport_obj; }
hx::ObjectPtr< HtmlReport_obj > HtmlReport_obj::__new(::haxe::test::Runner runner,Dynamic outputHandler,Dynamic __o_traceRedirected)
{  hx::ObjectPtr< HtmlReport_obj > result = new HtmlReport_obj();
	result->__construct(runner,outputHandler,__o_traceRedirected);
	return result;}

Dynamic HtmlReport_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HtmlReport_obj > result = new HtmlReport_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *HtmlReport_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::haxe::test::ui::common::IReport_obj)) return operator ::haxe::test::ui::common::IReport_obj *();
	return super::__ToInterface(inType);
}

Void HtmlReport_obj::setHandler( Dynamic handler){
{
		HX_SOURCE_PUSH("HtmlReport_obj::setHandler")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",74)
		this->handler = handler;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HtmlReport_obj,setHandler,(void))

Void HtmlReport_obj::redirectTrace( ){
{
		HX_SOURCE_PUSH("HtmlReport_obj::redirectTrace")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",78)
		if (this->traceRedirected)
			return null();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",80)
		this->_traces = Array_obj< Dynamic >::__new();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",81)
		this->__FieldRef(HX_CSTRING("oldTrace")) = ::haxe::Log_obj::trace_dyn();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",82)
		::haxe::Log_obj::trace = this->_trace_dyn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HtmlReport_obj,redirectTrace,(void))

Void HtmlReport_obj::restoreTrace( ){
{
		HX_SOURCE_PUSH("HtmlReport_obj::restoreTrace")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",86)
		if (!(this->traceRedirected))
			return null();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",88)
		::haxe::Log_obj::trace = this->__Field(HX_CSTRING("oldTrace"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HtmlReport_obj,restoreTrace,(void))

Void HtmlReport_obj::_trace( Dynamic v,Dynamic infos){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("HtmlReport_obj::_trace")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",93)
		double time = ::haxe::Timer_obj::stamp();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",94)
		double delta = (  ((this->__Field(HX_CSTRING("_traceTime")) == null())) ? double(0) : double((time - this->__Field(HX_CSTRING("_traceTime")))) );
		struct _Function_1_1{
			inline static Dynamic Block( double &time,::haxe::test::ui::text::HtmlReport_obj *__this,Dynamic &v,Dynamic &infos,double &delta){
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("msg") , ::StringTools_obj::htmlEscape(::Std_obj::string(v)));
				__result->Add(HX_CSTRING("infos") , infos);
				__result->Add(HX_CSTRING("time") , (time - __this->startTime));
				__result->Add(HX_CSTRING("delta") , delta);
				__result->Add(HX_CSTRING("stack") , ::haxe::Stack_obj::callStack());
				return __result;
			}
		};
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",95)
		this->_traces->push(_Function_1_1::Block(time,this,v,infos,delta));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",102)
		this->__FieldRef(HX_CSTRING("_traceTime")) = ::haxe::Timer_obj::stamp();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HtmlReport_obj,_trace,(void))

Void HtmlReport_obj::start( ::haxe::test::Runner e){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("HtmlReport_obj::start")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",107)
		this->startTime = ::haxe::Timer_obj::stamp();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HtmlReport_obj,start,(void))

::String HtmlReport_obj::cls( ::haxe::test::ui::common::ResultStats stats){
	HX_SOURCE_PUSH("HtmlReport_obj::cls")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",111)
	if (stats->hasErrors){
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",112)
		return HX_CSTRING("error");
	}
	else{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",113)
		if (stats->hasFailures){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",114)
			return HX_CSTRING("failure");
		}
		else{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",115)
			if (stats->hasWarnings){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",116)
				return HX_CSTRING("warn");
			}
			else{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",118)
				return HX_CSTRING("ok");
			}
		}
	}
}


HX_DEFINE_DYNAMIC_FUNC1(HtmlReport_obj,cls,return )

Void HtmlReport_obj::resultNumbers( ::StringBuf buf,::haxe::test::ui::common::ResultStats stats){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("HtmlReport_obj::resultNumbers")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",122)
		Array< ::String > numbers = Array_obj< ::String >::__new();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",123)
		if ((stats->assertations == 1)){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",124)
			numbers->push(HX_CSTRING("<strong>1</strong> test"));
		}
		else{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",126)
			numbers->push((((HX_CSTRING("<strong>") + stats->assertations)) + HX_CSTRING("</strong> tests")));
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",128)
		if ((stats->successes != stats->assertations)){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",129)
			if ((stats->successes == 1)){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",130)
				numbers->push(HX_CSTRING("<strong>1</strong> pass"));
			}
			else{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",131)
				if ((stats->successes > 0))
					numbers->push((((HX_CSTRING("<strong>") + stats->successes)) + HX_CSTRING("</strong> passes")));
			}
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",135)
		if ((stats->errors == 1)){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",136)
			numbers->push(HX_CSTRING("<strong>1</strong> error"));
		}
		else{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",137)
			if ((stats->errors > 0))
				numbers->push((((HX_CSTRING("<strong>") + stats->errors)) + HX_CSTRING("</strong> errors")));
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",140)
		if ((stats->failures == 1)){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",141)
			numbers->push(HX_CSTRING("<strong>1</strong> failure"));
		}
		else{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",142)
			if ((stats->failures > 0))
				numbers->push((((HX_CSTRING("<strong>") + stats->failures)) + HX_CSTRING("</strong> failures")));
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",145)
		if ((stats->warnings == 1)){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",146)
			numbers->push(HX_CSTRING("<strong>1</strong> warning"));
		}
		else{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",147)
			if ((stats->warnings > 0))
				numbers->push((((HX_CSTRING("<strong>") + stats->warnings)) + HX_CSTRING("</strong> warnings")));
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",150)
		buf->b[buf->b->length] = numbers->join(HX_CSTRING(", "));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HtmlReport_obj,resultNumbers,(void))

Void HtmlReport_obj::blockNumbers( ::StringBuf buf,::haxe::test::ui::common::ResultStats stats){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("HtmlReport_obj::blockNumbers")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",154)
		buf->b[buf->b->length] = (((HX_CSTRING("<div class=\"") + this->cls(stats))) + HX_CSTRING("bg statnumbers\">"));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",155)
		this->resultNumbers(buf,stats);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",156)
		buf->b[buf->b->length] = HX_CSTRING("</div>");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(HtmlReport_obj,blockNumbers,(void))

::String HtmlReport_obj::formatStack( Array< ::haxe::StackItem > stack,Dynamic __o_addNL){
bool addNL = __o_addNL.Default(true);
	HX_SOURCE_PUSH("HtmlReport_obj::formatStack");
{
		__SAFE_POINT
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",160)
		Array< ::String > parts = Array_obj< ::String >::__new();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",161)
		::String nl = (  (addNL) ? ::String(HX_CSTRING("\n")) : ::String(HX_CSTRING("")) );
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",162)
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",162)
			int _g = 0;
			Array< ::String > _g1 = ::haxe::Stack_obj::toString(stack).split(HX_CSTRING("\n"));
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",162)
			while((_g < _g1->length)){
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",162)
				::String part = _g1->__get(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",162)
				++(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",164)
				if ((::StringTools_obj::trim(part) == HX_CSTRING("")))
					continue;
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",166)
				if ((-1 < part.indexOf(HX_CSTRING("Called from utest."),null())))
					continue;
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",172)
				parts->push(part);
			}
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",175)
		::String s = (((((HX_CSTRING("<ul><li>") + parts->join((((HX_CSTRING("</li>") + nl)) + HX_CSTRING("<li>"))))) + HX_CSTRING("</li></ul>"))) + nl);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",177)
		return (((((HX_CSTRING("<div>") + s)) + HX_CSTRING("</div>"))) + nl);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(HtmlReport_obj,formatStack,return )

Void HtmlReport_obj::addFixture( ::StringBuf buf,::haxe::test::ui::common::FixtureResult result,::String name,bool isOk){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("HtmlReport_obj::addFixture")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",181)
		if (::haxe::test::ui::common::ReportTools_obj::skipResult(this,result->stats,isOk))
			return null();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",182)
		buf->b[buf->b->length] = HX_CSTRING("<li class=\"fixture\"><div class=\"li\">");
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",183)
		buf->b[buf->b->length] = (((HX_CSTRING("<span class=\"") + this->cls(result->stats))) + HX_CSTRING("bg fixtureresult\">"));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",184)
		if (result->stats->isOk){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",185)
			buf->b[buf->b->length] = HX_CSTRING("OK ");
		}
		else{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",186)
			if (result->stats->hasErrors){
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",187)
				buf->b[buf->b->length] = HX_CSTRING("ERROR ");
			}
			else{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",188)
				if (result->stats->hasFailures){
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",189)
					buf->b[buf->b->length] = HX_CSTRING("FAILURE ");
				}
				else{
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",190)
					if (result->stats->hasWarnings){
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",191)
						buf->b[buf->b->length] = HX_CSTRING("WARNING ");
					}
				}
			}
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",193)
		buf->b[buf->b->length] = HX_CSTRING("</span>");
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",194)
		buf->b[buf->b->length] = HX_CSTRING("<div class=\"fixturedetails\">");
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",195)
		buf->b[buf->b->length] = (((HX_CSTRING("<strong>") + name)) + HX_CSTRING("</strong>"));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",196)
		buf->b[buf->b->length] = HX_CSTRING(": ");
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",197)
		this->resultNumbers(buf,result->stats);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",198)
		Array< ::String > messages = Array_obj< ::String >::__new();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",199)
		for(::cpp::FastIterator_obj< ::haxe::test::Assertation > *__it = ::cpp::CreateFastIterator< ::haxe::test::Assertation >(result->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
			::haxe::test::Assertation assertation = __it->next();
			{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",200)
				::haxe::test::Assertation _switch_1 = (assertation);
				switch((_switch_1)->GetIndex()){
					case 0: {
						Dynamic pos = _switch_1->__Param(0);
{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",201)
							Dynamic();
						}
					}
					;break;
					case 1: {
						Dynamic pos = _switch_1->__Param(1);
						::String msg = _switch_1->__Param(0);
{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",203)
							messages->push((((((((HX_CSTRING("<strong>line ") + pos->__Field(HX_CSTRING("lineNumber")).Cast< int >())) + HX_CSTRING("</strong>: <em>"))) + ::StringTools_obj::htmlEscape(msg))) + HX_CSTRING("</em>")));
						}
					}
					;break;
					case 2: {
						Array< ::haxe::StackItem > s = _switch_1->__Param(1);
						Dynamic e = _switch_1->__Param(0);
{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",205)
							messages->push((((((HX_CSTRING("<strong>error</strong>: <em>") + ::StringTools_obj::htmlEscape(::Std_obj::string(e)))) + HX_CSTRING("</em>\n"))) + this->formatStack(s,null())));
						}
					}
					;break;
					case 3: {
						Array< ::haxe::StackItem > s = _switch_1->__Param(1);
						Dynamic e = _switch_1->__Param(0);
{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",207)
							messages->push((((((HX_CSTRING("<strong>setup error</strong>: ") + ::StringTools_obj::htmlEscape(::Std_obj::string(e)))) + HX_CSTRING("\n"))) + this->formatStack(s,null())));
						}
					}
					;break;
					case 4: {
						Array< ::haxe::StackItem > s = _switch_1->__Param(1);
						Dynamic e = _switch_1->__Param(0);
{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",209)
							messages->push((((((HX_CSTRING("<strong>tear-down error</strong>: ") + ::StringTools_obj::htmlEscape(::Std_obj::string(e)))) + HX_CSTRING("\n"))) + this->formatStack(s,null())));
						}
					}
					;break;
					case 5: {
						Array< ::haxe::StackItem > s = _switch_1->__Param(1);
						int missedAsyncs = _switch_1->__Param(0);
{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",211)
							messages->push((HX_CSTRING("<strong>missed async call(s)</strong>: ") + missedAsyncs));
						}
					}
					;break;
					case 6: {
						Array< ::haxe::StackItem > s = _switch_1->__Param(1);
						Dynamic e = _switch_1->__Param(0);
{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",213)
							messages->push((((((HX_CSTRING("<strong>async error</strong>: ") + ::StringTools_obj::htmlEscape(::Std_obj::string(e)))) + HX_CSTRING("\n"))) + this->formatStack(s,null())));
						}
					}
					;break;
					case 7: {
						::String msg = _switch_1->__Param(0);
{
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",215)
							messages->push(::StringTools_obj::htmlEscape(msg));
						}
					}
					;break;
				}
			}
;
			__SAFE_POINT
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",218)
		if ((messages->length > 0)){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",219)
			buf->b[buf->b->length] = HX_CSTRING("<div class=\"testoutput\">");
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",220)
			buf->b[buf->b->length] = messages->join(HX_CSTRING("<br/>"));
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",221)
			buf->b[buf->b->length] = HX_CSTRING("</div>\n");
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",223)
		buf->b[buf->b->length] = HX_CSTRING("</div>\n");
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",224)
		buf->b[buf->b->length] = HX_CSTRING("</div></li>\n");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(HtmlReport_obj,addFixture,(void))

Void HtmlReport_obj::addClass( ::StringBuf buf,::haxe::test::ui::common::ClassResult result,::String name,bool isOk){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("HtmlReport_obj::addClass")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",228)
		if (::haxe::test::ui::common::ReportTools_obj::skipResult(this,result->stats,isOk))
			return null();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",229)
		buf->b[buf->b->length] = HX_CSTRING("<li>");
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",230)
		buf->b[buf->b->length] = (((HX_CSTRING("<h2 class=\"classname\">") + name)) + HX_CSTRING("</h2>"));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",231)
		this->blockNumbers(buf,result->stats);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",232)
		buf->b[buf->b->length] = HX_CSTRING("<ul>\n");
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",233)
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",233)
			int _g = 0;
			Array< ::String > _g1 = result->methodNames(null());
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",233)
			while((_g < _g1->length)){
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",233)
				::String mname = _g1->__get(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",233)
				++(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",234)
				this->addFixture(buf,result->get(mname),mname,isOk);
			}
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",236)
		buf->b[buf->b->length] = HX_CSTRING("</ul>\n");
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",237)
		buf->b[buf->b->length] = HX_CSTRING("</li>\n");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(HtmlReport_obj,addClass,(void))

Void HtmlReport_obj::addPackages( ::StringBuf buf,::haxe::test::ui::common::PackageResult result,bool isOk){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("HtmlReport_obj::addPackages")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",241)
		if (::haxe::test::ui::common::ReportTools_obj::skipResult(this,result->stats,isOk))
			return null();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",242)
		buf->b[buf->b->length] = HX_CSTRING("<ul id=\"utest-results-packages\">\n");
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",243)
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",243)
			int _g = 0;
			Array< ::String > _g1 = result->packageNames(false);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",243)
			while((_g < _g1->length)){
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",243)
				::String name = _g1->__get(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",243)
				++(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",244)
				this->addPackage(buf,result->getPackage(name),name,isOk);
			}
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",246)
		buf->b[buf->b->length] = HX_CSTRING("</ul>\n");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(HtmlReport_obj,addPackages,(void))

Void HtmlReport_obj::addPackage( ::StringBuf buf,::haxe::test::ui::common::PackageResult result,::String name,bool isOk){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("HtmlReport_obj::addPackage")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",250)
		if (::haxe::test::ui::common::ReportTools_obj::skipResult(this,result->stats,isOk))
			return null();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",251)
		if ((bool((name == HX_CSTRING(""))) && bool((result->classNames(null())->length == 0))))
			return null();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",252)
		buf->b[buf->b->length] = HX_CSTRING("<li>");
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",253)
		buf->b[buf->b->length] = (((HX_CSTRING("<h2>") + name)) + HX_CSTRING("</h2>"));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",254)
		this->blockNumbers(buf,result->stats);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",255)
		buf->b[buf->b->length] = HX_CSTRING("<ul>\n");
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",256)
		{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",256)
			int _g = 0;
			Array< ::String > _g1 = result->classNames(null());
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",256)
			while((_g < _g1->length)){
				__SAFE_POINT
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",256)
				::String cname = _g1->__get(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",256)
				++(_g);
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",257)
				this->addClass(buf,result->getClass(cname),cname,isOk);
			}
		}
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",258)
		buf->b[buf->b->length] = HX_CSTRING("</ul>\n");
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",259)
		buf->b[buf->b->length] = HX_CSTRING("</li>\n");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(HtmlReport_obj,addPackage,(void))

::String HtmlReport_obj::getHeader( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("HtmlReport_obj::getHeader")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",263)
	::StringBuf buf = ::StringBuf_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",264)
	if (!(::haxe::test::ui::common::ReportTools_obj::hasHeader(this,this->result->stats)))
		return HX_CSTRING("");
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",267)
	double end = ::haxe::Timer_obj::stamp();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",268)
	double time = (double(::Std_obj::_int((((end - this->startTime)) * 1000))) / double(1000));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",269)
	::String msg = HX_CSTRING("TEST OK");
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",270)
	if (this->result->stats->hasErrors){
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",271)
		msg = HX_CSTRING("TEST ERRORS");
	}
	else{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",272)
		if (this->result->stats->hasFailures){
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",273)
			msg = HX_CSTRING("TEST FAILED");
		}
		else{
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",274)
			if (this->result->stats->hasWarnings)
				msg = HX_CSTRING("WARNING REPORTED");
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",277)
	buf->b[buf->b->length] = (((((((HX_CSTRING("<h1 class=\"") + this->cls(this->result->stats))) + HX_CSTRING("bg header\">"))) + msg)) + HX_CSTRING("</h1>\n"));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",278)
	buf->b[buf->b->length] = HX_CSTRING("<div class=\"headerinfo\">");
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",280)
	this->resultNumbers(buf,this->result->stats);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",281)
	buf->b[buf->b->length] = (((((((HX_CSTRING(" performed on <strong>") + ::haxe::test::ui::text::HtmlReport_obj::platform)) + HX_CSTRING("</strong>, executed in <strong> "))) + time)) + HX_CSTRING(" sec. </strong></div >\n "));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",282)
	return buf->b->join(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC0(HtmlReport_obj,getHeader,return )

::String HtmlReport_obj::getTrace( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("HtmlReport_obj::getTrace")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",286)
	::StringBuf buf = ::StringBuf_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",287)
	if ((bool((this->_traces == null())) || bool((this->_traces->length == 0))))
		return HX_CSTRING("");
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",289)
	buf->b[buf->b->length] = HX_CSTRING("<div class=\"trace\"><h2>traces</h2><ol>");
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",290)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",290)
		int _g = 0;
		Array< Dynamic > _g1 = this->_traces;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",290)
		while((_g < _g1->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",290)
			Dynamic t = _g1->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",290)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",291)
			buf->b[buf->b->length] = HX_CSTRING("<li><div class=\"li\">");
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",292)
			::String stack = ::StringTools_obj::replace(this->formatStack(t->__Field(HX_CSTRING("stack")).Cast< Array< ::haxe::StackItem > >(),false),HX_CSTRING("'"),HX_CSTRING("\\'"));
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",293)
			::String method = (((((((((((HX_CSTRING("<span class=\"tracepackage\">") + t->__Field(HX_CSTRING("infos"))->__Field(HX_CSTRING("className")).Cast< ::String >())) + HX_CSTRING("</span><br/>"))) + t->__Field(HX_CSTRING("infos"))->__Field(HX_CSTRING("methodName")).Cast< ::String >())) + HX_CSTRING("("))) + t->__Field(HX_CSTRING("infos"))->__Field(HX_CSTRING("lineNumber")).Cast< int >())) + HX_CSTRING(")"));
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",294)
			buf->b[buf->b->length] = (((HX_CSTRING("<span class=\"tracepos\" onmouseover=\"utestTooltip(this.parentNode, '") + stack)) + HX_CSTRING("')\" onmouseout=\"utestRemoveTooltip()\">"));
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",295)
			buf->b[buf->b->length] = method;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",298)
			buf->b[buf->b->length] = HX_CSTRING("</span><span class=\"tracetime\">");
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",299)
			buf->b[buf->b->length] = (HX_CSTRING("@ ") + this->formatTime(t->__Field(HX_CSTRING("time")).Cast< double >()));
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",300)
			if ((::Math_obj::round((t->__Field(HX_CSTRING("delta")).Cast< double >() * 1000)) > 0))
				buf->b[buf->b->length] = (HX_CSTRING(", ~") + this->formatTime(t->__Field(HX_CSTRING("delta")).Cast< double >()));
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",303)
			buf->b[buf->b->length] = HX_CSTRING("</span><span class=\"tracemsg\">");
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",304)
			buf->b[buf->b->length] = ::StringTools_obj::replace(::StringTools_obj::trim(t->__Field(HX_CSTRING("msg")).Cast< ::String >()),HX_CSTRING("\n"),HX_CSTRING("<br/>\n"));
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",306)
			buf->b[buf->b->length] = HX_CSTRING("</span><div class=\"clr\"></div></div></li>");
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",308)
	buf->b[buf->b->length] = HX_CSTRING("</ol></div>");
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",309)
	return buf->b->join(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC0(HtmlReport_obj,getTrace,return )

::String HtmlReport_obj::getResults( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("HtmlReport_obj::getResults")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",313)
	::StringBuf buf = ::StringBuf_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",314)
	this->addPackages(buf,this->result,this->result->stats->isOk);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",315)
	return buf->b->join(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC0(HtmlReport_obj,getResults,return )

::String HtmlReport_obj::getAll( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("HtmlReport_obj::getAll")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",319)
	if (!(::haxe::test::ui::common::ReportTools_obj::hasOutput(this,this->result->stats))){
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",320)
		return HX_CSTRING("");
	}
	else{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",322)
		return (((this->getHeader() + this->getTrace())) + this->getResults());
	}
}


HX_DEFINE_DYNAMIC_FUNC0(HtmlReport_obj,getAll,return )

::String HtmlReport_obj::getHtml( ::String title){
	__SAFE_POINT
	HX_SOURCE_PUSH("HtmlReport_obj::getHtml")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",326)
	if ((null() == title))
		title = (HX_CSTRING("utest: ") + ::haxe::test::ui::text::HtmlReport_obj::platform);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",328)
	::String s = this->getAll();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",329)
	if ((HX_CSTRING("") == s)){
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",330)
		return HX_CSTRING("");
	}
	else{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",332)
		return this->wrapHtml(title,s);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(HtmlReport_obj,getHtml,return )

Void HtmlReport_obj::complete( ::haxe::test::ui::common::PackageResult result){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("HtmlReport_obj::complete")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",337)
		this->result = result;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",338)
		this->handler(this);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",339)
		this->restoreTrace();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HtmlReport_obj,complete,(void))

::String HtmlReport_obj::formatTime( double t){
	__SAFE_POINT
	HX_SOURCE_PUSH("HtmlReport_obj::formatTime")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",343)
	return (::Math_obj::round((t * 1000)) + HX_CSTRING(" ms"));
}


HX_DEFINE_DYNAMIC_FUNC1(HtmlReport_obj,formatTime,return )

::String HtmlReport_obj::cssStyle( ){
	HX_SOURCE_PUSH("HtmlReport_obj::cssStyle")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",348)
	return HX_CSTRING("body, dd, dt {\r\n  font-family: Verdana, Arial, Sans-serif;\r\n  font-size: 12px;\r\n}\r\ndl {\r\n  width: 180px;\r\n}\r\ndd, dt {\r\n  margin : 0;\r\n  padding : 2px 5px;\r\n  border-top: 1px solid #f0f0f0;\r\n  border-left: 1px solid #f0f0f0;\r\n  border-right: 1px solid #CCCCCC;\r\n  border-bottom: 1px solid #CCCCCC;\r\n}\r\ndd.value {\r\n  text-align: center;\r\n  background-color: #eeeeee;\r\n}\r\ndt {\r\n  text-align: left;\r\n  background-color: #e6e6e6;\r\n  float: left;\r\n  width: 100px;\r\n}\r\n\r\nh1, h2, h3, h4, h5, h6 {\r\n  margin: 0;\r\n  padding: 0;\r\n}\r\n\r\nh1 {\r\n  text-align: center;\r\n  font-weight: bold;\r\n  padding: 5px 0 4px 0;\r\n  font-family: Arial, Sans-serif;\r\n  font-size: 18px;\r\n  border-top: 1px solid #f0f0f0;\r\n  border-left: 1px solid #f0f0f0;\r\n  border-right: 1px solid #CCCCCC;\r\n  border-bottom: 1px solid #CCCCCC;\r\n  margin: 0 2px 0px 2px;\r\n}\r\n\r\nh2 {\r\n  font-weight: bold;\r\n  padding: 2px 0 2px 8px;\r\n  font-family: Arial, Sans-serif;\r\n  font-size: 13px;\r\n  border-top: 1px solid #f0f0f0;\r\n  border-left: 1px solid #f0f0f0;\r\n  border-right: 1px solid #CCCCCC;\r\n  border-bottom: 1px solid #CCCCCC;\r\n  margin: 0 0 0px 0;\r\n  background-color: #FFFFFF;\r\n  color: #777777;\r\n}\r\n\r\nh2.classname {\r\n  color: #000000;\r\n}\r\n\r\n.okbg {\r\n  background-color: #66FF55;\r\n}\r\n.errorbg {\r\n  background-color: #CC1100;\r\n}\r\n.failurebg {\r\n  background-color: #EE3322;\r\n}\r\n.warnbg {\r\n  background-color: #FFCC99;\r\n}\r\n.headerinfo {\r\n  text-align: right;\r\n  font-size: 11px;\r\n  font - color: 0xCCCCCC;\r\n  margin: 0 2px 5px 2px;\r\n  border-left: 1px solid #f0f0f0;\r\n  border-right: 1px solid #CCCCCC;\r\n  border-bottom: 1px solid #CCCCCC;\r\n  padding: 2px;\r\n}\r\n\r\nli {\r\n  padding: 4px;\r\n  margin: 2px;\r\n  border-top: 1px solid #f0f0f0;\r\n  border-left: 1px solid #f0f0f0;\r\n  border-right: 1px solid #CCCCCC;\r\n  border-bottom: 1px solid #CCCCCC;\r\n  background-color: #e6e6e6;\r\n}\r\n\r\nli.fixture {\r\n  background-color: #f6f6f6;\r\n  padding-bottom: 6px;\r\n}\r\n\r\ndiv.fixturedetails {\r\n  padding-left: 108px;\r\n}\r\n\r\nul {\r\n  padding: 0;\r\n  margin: 6px 0 0 0;\r\n  list-style-type: none;\r\n}\r\n\r\nol {\r\n  padding: 0 0 0 28px;\r\n  margin: 0px 0 0 0;\r\n}\r\n\r\n.statnumbers {\r\n  padding: 2px 8px;\r\n}\r\n\r\n.fixtureresult {\r\n  width: 100px;\r\n  text-align: center;\r\n  display: block;\r\n  float: left;\r\n  font-weight: bold;\r\n  padding: 1px;\r\n  margin: 0 0 0 0;\r\n}\r\n\r\n.testoutput {\r\n  border: 1px dashed #CCCCCC;\r\n  margin: 4px 0 0 0;\r\n  padding: 4px 8px;\r\n  background-color: #eeeeee;\r\n}\r\n\r\nspan.tracepos, span.traceposempty {\r\n  display: block;\r\n  float: left;\r\n  font-weight: bold;\r\n  font-size: 9px;\r\n  width: 170px;\r\n  margin: 2px 0 0 2px;\r\n}\r\n\r\nspan.tracepos:hover {\r\n  cursor : pointer;\r\n  background-color: #ffff99;\r\n}\r\n\r\nspan.tracemsg {\r\n  display: block;\r\n  margin-left: 180px;\r\n  background-color: #eeeeee;\r\n  padding: 7px;\r\n}\r\n\r\nspan.tracetime {\r\n  display: block;\r\n  float: right;\r\n  margin: 2px;\r\n  font-size: 9px;\r\n  color: #777777;\r\n}\r\n\r\n\r\ndiv.trace ol {\r\n  padding: 0 0 0 40px;\r\n  color: #777777;\r\n}\r\n\r\ndiv.trace li {\r\n  padding: 0;\r\n}\r\n\r\ndiv.trace li div.li {\r\n  color: #000000;\r\n}\r\n\r\ndiv.trace h2 {\r\n  margin: 0 2px 0px 2px;\r\n  padding-left: 4px;\r\n}\r\n\r\n.tracepackage {\r\n  color: #777777;\r\n  font-weight: normal;\r\n}\r\n\r\n.clr {\r\n  clear: both;\r\n}\r\n\r\n#utesttip {\r\n  margin-top: -3px;\r\n  margin-left: 170px;\r\n  font-size: 9px;\r\n}\r\n\r\n#utesttip li {\r\n  margin: 0;\r\n  background-color: #ffff99;\r\n  padding: 2px 4px;\r\n  border: 0;\r\n  border-bottom: 1px dashed #ffff33;\r\n}");
}


HX_DEFINE_DYNAMIC_FUNC0(HtmlReport_obj,cssStyle,return )

::String HtmlReport_obj::jsScript( ){
	HX_SOURCE_PUSH("HtmlReport_obj::jsScript")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",558)
	return HX_CSTRING("function utestTooltip(ref, text) {\r\n  var el = document.getElementById(\"utesttip\");\r\n  if(!el) {\r\n    var el = document.createElement(\"div\")\r\n    el.id = \"utesttip\";\r\n    el.style.position = \"absolute\";\r\n    document.body.appendChild(el)\r\n  }\r\n  var p = utestFindPos(ref);\r\n  el.style.left = p[0];\r\n  el.style.top = p[1];\r\n  el.innerHTML =  text;\r\n}\r\n\r\nfunction utestFindPos(el) {\r\n  var left = 0;\r\n  var top = 0;\r\n  do {\r\n    left += el.offsetLeft;\r\n    top += el.offsetTop;\r\n  } while(el = el.offsetParent)\r\n  return [left, top];\r\n}\r\n\r\nfunction utestRemoveTooltip() {\r\n  var el = document.getElementById(\"utesttip\")\r\n  if(el)\r\n    document.body.removeChild(el)\r\n}");
}


HX_DEFINE_DYNAMIC_FUNC0(HtmlReport_obj,jsScript,return )

::String HtmlReport_obj::wrapHtml( ::String title,::String s){
	__SAFE_POINT
	HX_SOURCE_PUSH("HtmlReport_obj::wrapHtml")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",591)
	return (((((((((((((((HX_CSTRING("<head>\n<meta http-equiv=\"Content-Type\" content=\"text/html;charset=utf-8\" />\n<title>") + title)) + HX_CSTRING("</title>\r\n      <style type=\"text/css\">"))) + this->cssStyle())) + HX_CSTRING("</style>\r\n      <script type=\"text/javascript\">\n"))) + this->jsScript())) + HX_CSTRING("\n</script>\n</head>\r\n      <body>\n"))) + s)) + HX_CSTRING("\n</body>\n</html>"));
}


HX_DEFINE_DYNAMIC_FUNC2(HtmlReport_obj,wrapHtml,return )

Void HtmlReport_obj::_handler( ::haxe::test::ui::text::HtmlReport report){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("HtmlReport_obj::_handler")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/HtmlReport.hx",600)
		::cpp::Lib_obj::print(report->getHtml(null()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HtmlReport_obj,_handler,(void))

::String HtmlReport_obj::platform;


HtmlReport_obj::HtmlReport_obj()
{
}

void HtmlReport_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HtmlReport);
	HX_MARK_MEMBER_NAME(traceRedirected,"traceRedirected");
	HX_MARK_MEMBER_NAME(displaySuccessResults,"displaySuccessResults");
	HX_MARK_MEMBER_NAME(displayHeader,"displayHeader");
	HX_MARK_MEMBER_NAME(handler,"handler");
	HX_MARK_MEMBER_NAME(aggregator,"aggregator");
	HX_MARK_MEMBER_NAME(oldTrace,"oldTrace");
	HX_MARK_MEMBER_NAME(_traces,"_traces");
	HX_MARK_MEMBER_NAME(_traceTime,"_traceTime");
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	HX_MARK_MEMBER_NAME(result,"result");
	HX_MARK_END_CLASS();
}

Dynamic HtmlReport_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"cls") ) { return cls_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_trace") ) { return _trace_dyn(); }
		if (HX_FIELD_EQ(inName,"getAll") ) { return getAll_dyn(); }
		if (HX_FIELD_EQ(inName,"result") ) { return result; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { return handler; }
		if (HX_FIELD_EQ(inName,"_traces") ) { return _traces; }
		if (HX_FIELD_EQ(inName,"getHtml") ) { return getHtml_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"platform") ) { return platform; }
		if (HX_FIELD_EQ(inName,"oldTrace") ) { return oldTrace; }
		if (HX_FIELD_EQ(inName,"addClass") ) { return addClass_dyn(); }
		if (HX_FIELD_EQ(inName,"getTrace") ) { return getTrace_dyn(); }
		if (HX_FIELD_EQ(inName,"complete") ) { return complete_dyn(); }
		if (HX_FIELD_EQ(inName,"cssStyle") ) { return cssStyle_dyn(); }
		if (HX_FIELD_EQ(inName,"jsScript") ) { return jsScript_dyn(); }
		if (HX_FIELD_EQ(inName,"wrapHtml") ) { return wrapHtml_dyn(); }
		if (HX_FIELD_EQ(inName,"_handler") ) { return _handler_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startTime") ) { return startTime; }
		if (HX_FIELD_EQ(inName,"getHeader") ) { return getHeader_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"aggregator") ) { return aggregator; }
		if (HX_FIELD_EQ(inName,"setHandler") ) { return setHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"_traceTime") ) { return _traceTime; }
		if (HX_FIELD_EQ(inName,"addFixture") ) { return addFixture_dyn(); }
		if (HX_FIELD_EQ(inName,"addPackage") ) { return addPackage_dyn(); }
		if (HX_FIELD_EQ(inName,"getResults") ) { return getResults_dyn(); }
		if (HX_FIELD_EQ(inName,"formatTime") ) { return formatTime_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"formatStack") ) { return formatStack_dyn(); }
		if (HX_FIELD_EQ(inName,"addPackages") ) { return addPackages_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"restoreTrace") ) { return restoreTrace_dyn(); }
		if (HX_FIELD_EQ(inName,"blockNumbers") ) { return blockNumbers_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayHeader") ) { return displayHeader; }
		if (HX_FIELD_EQ(inName,"redirectTrace") ) { return redirectTrace_dyn(); }
		if (HX_FIELD_EQ(inName,"resultNumbers") ) { return resultNumbers_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"traceRedirected") ) { return traceRedirected; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"displaySuccessResults") ) { return displaySuccessResults; }
	}
	return super::__Field(inName);
}

Dynamic HtmlReport_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { result=inValue.Cast< ::haxe::test::ui::common::PackageResult >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { handler=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_traces") ) { _traces=inValue.Cast< Array< Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"platform") ) { platform=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"oldTrace") ) { oldTrace=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< double >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"aggregator") ) { aggregator=inValue.Cast< ::haxe::test::ui::common::ResultAggregator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_traceTime") ) { _traceTime=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayHeader") ) { displayHeader=inValue.Cast< ::haxe::test::ui::common::HeaderDisplayMode >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"traceRedirected") ) { traceRedirected=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"displaySuccessResults") ) { displaySuccessResults=inValue.Cast< ::haxe::test::ui::common::SuccessResultsDisplayMode >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void HtmlReport_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("traceRedirected"));
	outFields->push(HX_CSTRING("displaySuccessResults"));
	outFields->push(HX_CSTRING("displayHeader"));
	outFields->push(HX_CSTRING("aggregator"));
	outFields->push(HX_CSTRING("oldTrace"));
	outFields->push(HX_CSTRING("_traces"));
	outFields->push(HX_CSTRING("_traceTime"));
	outFields->push(HX_CSTRING("startTime"));
	outFields->push(HX_CSTRING("result"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("platform"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("traceRedirected"),
	HX_CSTRING("displaySuccessResults"),
	HX_CSTRING("displayHeader"),
	HX_CSTRING("handler"),
	HX_CSTRING("aggregator"),
	HX_CSTRING("oldTrace"),
	HX_CSTRING("_traces"),
	HX_CSTRING("setHandler"),
	HX_CSTRING("redirectTrace"),
	HX_CSTRING("restoreTrace"),
	HX_CSTRING("_traceTime"),
	HX_CSTRING("_trace"),
	HX_CSTRING("startTime"),
	HX_CSTRING("start"),
	HX_CSTRING("cls"),
	HX_CSTRING("resultNumbers"),
	HX_CSTRING("blockNumbers"),
	HX_CSTRING("formatStack"),
	HX_CSTRING("addFixture"),
	HX_CSTRING("addClass"),
	HX_CSTRING("addPackages"),
	HX_CSTRING("addPackage"),
	HX_CSTRING("getHeader"),
	HX_CSTRING("getTrace"),
	HX_CSTRING("getResults"),
	HX_CSTRING("getAll"),
	HX_CSTRING("getHtml"),
	HX_CSTRING("result"),
	HX_CSTRING("complete"),
	HX_CSTRING("formatTime"),
	HX_CSTRING("cssStyle"),
	HX_CSTRING("jsScript"),
	HX_CSTRING("wrapHtml"),
	HX_CSTRING("_handler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HtmlReport_obj::platform,"platform");
};

Class HtmlReport_obj::__mClass;

void HtmlReport_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.ui.text.HtmlReport"), hx::TCanCast< HtmlReport_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void HtmlReport_obj::__boot()
{
	hx::Static(platform) = HX_CSTRING("cpp");
}

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace text
