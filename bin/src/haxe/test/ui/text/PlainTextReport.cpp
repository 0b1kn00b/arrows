#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
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
#ifndef INCLUDED_haxe_test_ui_text_PlainTextReport
#include <haxe/test/ui/text/PlainTextReport.h>
#endif
namespace haxe{
namespace test{
namespace ui{
namespace text{

Void PlainTextReport_obj::__construct(::haxe::test::Runner runner,Dynamic outputHandler)
{
{
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",42)
	this->aggregator = ::haxe::test::ui::common::ResultAggregator_obj::__new(runner,true);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",43)
	runner->onStart->__Field(HX_CSTRING("add"))(this->start_dyn());
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",44)
	this->aggregator->onComplete->__Field(HX_CSTRING("add"))(this->complete_dyn());
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",45)
	if ((null() != outputHandler))
		this->setHandler(outputHandler);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",47)
	this->displaySuccessResults = ::haxe::test::ui::common::SuccessResultsDisplayMode_obj::AlwaysShowSuccessResults;
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",48)
	this->displayHeader = ::haxe::test::ui::common::HeaderDisplayMode_obj::AlwaysShowHeader;
}
;
	return null();
}

PlainTextReport_obj::~PlainTextReport_obj() { }

Dynamic PlainTextReport_obj::__CreateEmpty() { return  new PlainTextReport_obj; }
hx::ObjectPtr< PlainTextReport_obj > PlainTextReport_obj::__new(::haxe::test::Runner runner,Dynamic outputHandler)
{  hx::ObjectPtr< PlainTextReport_obj > result = new PlainTextReport_obj();
	result->__construct(runner,outputHandler);
	return result;}

Dynamic PlainTextReport_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlainTextReport_obj > result = new PlainTextReport_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *PlainTextReport_obj::__ToInterface(const type_info &inType) {
	if (inType==typeid( ::haxe::test::ui::common::IReport_obj)) return operator ::haxe::test::ui::common::IReport_obj *();
	return super::__ToInterface(inType);
}

Void PlainTextReport_obj::setHandler( Dynamic handler){
{
		HX_SOURCE_PUSH("PlainTextReport_obj::setHandler")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",52)
		this->handler = handler;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlainTextReport_obj,setHandler,(void))

Void PlainTextReport_obj::start( ::haxe::test::Runner e){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("PlainTextReport_obj::start")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",57)
		this->startTime = ::haxe::Timer_obj::stamp();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlainTextReport_obj,start,(void))

::String PlainTextReport_obj::indents( int c){
	HX_SOURCE_PUSH("PlainTextReport_obj::indents")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",61)
	::String s = HX_CSTRING("");
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",62)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",62)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",62)
		while((_g < c)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",62)
			int _ = (_g)++;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",63)
			hx::AddEq(s,this->indent);
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",64)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC1(PlainTextReport_obj,indents,return )

::String PlainTextReport_obj::dumpStack( Array< ::haxe::StackItem > stack){
	__SAFE_POINT
	HX_SOURCE_PUSH("PlainTextReport_obj::dumpStack")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",68)
	if ((stack->length == 0))
		return HX_CSTRING("");
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",71)
	Array< ::String > parts = ::haxe::Stack_obj::toString(stack).split(HX_CSTRING("\n"));
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",72)
	Array< ::String > r = Array_obj< ::String >::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",73)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",73)
		int _g = 0;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",73)
		while((_g < parts->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",73)
			::String part = parts->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",73)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",74)
			if ((part.indexOf(HX_CSTRING(" utest."),null()) >= 0))
				continue;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",75)
			r->push(part);
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",77)
	return r->join(this->newline);
}


HX_DEFINE_DYNAMIC_FUNC1(PlainTextReport_obj,dumpStack,return )

Void PlainTextReport_obj::addHeader( ::StringBuf buf,::haxe::test::ui::common::PackageResult result){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("PlainTextReport_obj::addHeader")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",81)
		if (!(::haxe::test::ui::common::ReportTools_obj::hasHeader(this,result->stats)))
			return null();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",84)
		double end = ::haxe::Timer_obj::stamp();
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",88)
		double time = (double(::Std_obj::_int((((end - this->startTime)) * 1000))) / double(1000));
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",90)
		buf->b[buf->b->length] = (((((((HX_CSTRING("results: ") + ((  (result->stats->isOk) ? ::String(HX_CSTRING("ALL TESTS OK")) : ::String(HX_CSTRING("SOME TESTS FAILURES")) )))) + this->newline)) + HX_CSTRING(" "))) + this->newline);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",92)
		buf->b[buf->b->length] = (((HX_CSTRING("assertations: ") + result->stats->assertations)) + this->newline);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",93)
		buf->b[buf->b->length] = (((HX_CSTRING("successes: ") + result->stats->successes)) + this->newline);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",94)
		buf->b[buf->b->length] = (((HX_CSTRING("errors: ") + result->stats->errors)) + this->newline);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",95)
		buf->b[buf->b->length] = (((HX_CSTRING("failures: ") + result->stats->failures)) + this->newline);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",96)
		buf->b[buf->b->length] = (((HX_CSTRING("warnings: ") + result->stats->warnings)) + this->newline);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",97)
		buf->b[buf->b->length] = (((HX_CSTRING("execution time: ") + time)) + this->newline);
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",101)
		buf->b[buf->b->length] = this->newline;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlainTextReport_obj,addHeader,(void))

::String PlainTextReport_obj::getResults( ){
	__SAFE_POINT
	HX_SOURCE_PUSH("PlainTextReport_obj::getResults")
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",106)
	::StringBuf buf = ::StringBuf_obj::__new();
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",107)
	this->addHeader(buf,this->result);
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",109)
	{
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",109)
		int _g = 0;
		Array< ::String > _g1 = this->result->packageNames(null());
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",109)
		while((_g < _g1->length)){
			__SAFE_POINT
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",109)
			::String pname = _g1->__get(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",109)
			++(_g);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",110)
			::haxe::test::ui::common::PackageResult pack = this->result->getPackage(pname);
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",111)
			if (::haxe::test::ui::common::ReportTools_obj::skipResult(this,pack->stats,this->result->stats->isOk))
				continue;
			HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",112)
			{
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",112)
				int _g2 = 0;
				Array< ::String > _g3 = pack->classNames(null());
				HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",112)
				while((_g2 < _g3->length)){
					__SAFE_POINT
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",112)
					::String cname = _g3->__get(_g2);
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",112)
					++(_g2);
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",113)
					::haxe::test::ui::common::ClassResult cls = pack->getClass(cname);
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",114)
					if (::haxe::test::ui::common::ReportTools_obj::skipResult(this,cls->stats,this->result->stats->isOk))
						continue;
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",115)
					buf->b[buf->b->length] = (((((  ((pname == HX_CSTRING(""))) ? ::String(HX_CSTRING("")) : ::String((pname + HX_CSTRING("."))) )) + cname)) + this->newline);
					HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",116)
					{
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",116)
						int _g4 = 0;
						Array< ::String > _g5 = cls->methodNames(null());
						HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",116)
						while((_g4 < _g5->length)){
							__SAFE_POINT
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",116)
							::String mname = _g5->__get(_g4);
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",116)
							++(_g4);
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",117)
							::haxe::test::ui::common::FixtureResult fix = cls->get(mname);
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",118)
							if (::haxe::test::ui::common::ReportTools_obj::skipResult(this,fix->stats,this->result->stats->isOk))
								continue;
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",119)
							buf->b[buf->b->length] = (((this->indents(1) + mname)) + HX_CSTRING(": "));
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",120)
							if (fix->stats->isOk){
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",121)
								buf->b[buf->b->length] = HX_CSTRING("OK ");
							}
							else{
								HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",122)
								if (fix->stats->hasErrors){
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",123)
									buf->b[buf->b->length] = HX_CSTRING("ERROR ");
								}
								else{
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",124)
									if (fix->stats->hasFailures){
										HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",125)
										buf->b[buf->b->length] = HX_CSTRING("FAILURE ");
									}
									else{
										HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",126)
										if (fix->stats->hasWarnings){
											HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",127)
											buf->b[buf->b->length] = HX_CSTRING("WARNING ");
										}
									}
								}
							}
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",129)
							::String messages = HX_CSTRING("");
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",130)
							for(::cpp::FastIterator_obj< ::haxe::test::Assertation > *__it = ::cpp::CreateFastIterator< ::haxe::test::Assertation >(fix->__Field(HX_CSTRING("iterator"))());  __it->hasNext(); ){
								::haxe::test::Assertation assertation = __it->next();
								{
									HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",131)
									::haxe::test::Assertation _switch_1 = (assertation);
									switch((_switch_1)->GetIndex()){
										case 0: {
											Dynamic pos = _switch_1->__Param(0);
{
												HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",133)
												buf->b[buf->b->length] = HX_CSTRING(".");
											}
										}
										;break;
										case 1: {
											Dynamic pos = _switch_1->__Param(1);
											::String msg = _switch_1->__Param(0);
{
												HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",135)
												buf->b[buf->b->length] = HX_CSTRING("F");
												HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",136)
												hx::AddEq(messages,(((((((((this->indents(2) + HX_CSTRING("line: "))) + pos->__Field(HX_CSTRING("lineNumber")).Cast< int >())) + HX_CSTRING(", "))) + msg)) + this->newline));
											}
										}
										;break;
										case 2: {
											Array< ::haxe::StackItem > s = _switch_1->__Param(1);
											Dynamic e = _switch_1->__Param(0);
{
												HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",138)
												buf->b[buf->b->length] = HX_CSTRING("E");
												HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",139)
												hx::AddEq(messages,(((((this->indents(2) + ::Std_obj::string(e))) + this->dumpStack(s))) + this->newline));
											}
										}
										;break;
										case 3: {
											Array< ::haxe::StackItem > s = _switch_1->__Param(1);
											Dynamic e = _switch_1->__Param(0);
{
												HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",141)
												buf->b[buf->b->length] = HX_CSTRING("S");
												HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",142)
												hx::AddEq(messages,(((((this->indents(2) + ::Std_obj::string(e))) + this->dumpStack(s))) + this->newline));
											}
										}
										;break;
										case 4: {
											Array< ::haxe::StackItem > s = _switch_1->__Param(1);
											Dynamic e = _switch_1->__Param(0);
{
												HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",144)
												buf->b[buf->b->length] = HX_CSTRING("T");
												HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",145)
												hx::AddEq(messages,(((((this->indents(2) + ::Std_obj::string(e))) + this->dumpStack(s))) + this->newline));
											}
										}
										;break;
										case 5: {
											Array< ::haxe::StackItem > s = _switch_1->__Param(1);
											int missedAsyncs = _switch_1->__Param(0);
{
												HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",147)
												buf->b[buf->b->length] = HX_CSTRING("O");
												HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",148)
												hx::AddEq(messages,(((((((this->indents(2) + HX_CSTRING("missed async calls: "))) + missedAsyncs)) + this->dumpStack(s))) + this->newline));
											}
										}
										;break;
										case 6: {
											Array< ::haxe::StackItem > s = _switch_1->__Param(1);
											Dynamic e = _switch_1->__Param(0);
{
												HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",150)
												buf->b[buf->b->length] = HX_CSTRING("A");
												HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",151)
												hx::AddEq(messages,(((((this->indents(2) + ::Std_obj::string(e))) + this->dumpStack(s))) + this->newline));
											}
										}
										;break;
										case 7: {
											::String msg = _switch_1->__Param(0);
{
												HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",153)
												buf->b[buf->b->length] = HX_CSTRING("W");
												HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",154)
												hx::AddEq(messages,(((this->indents(2) + msg)) + this->newline));
											}
										}
										;break;
									}
								}
;
								__SAFE_POINT
							}
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",157)
							buf->b[buf->b->length] = this->newline;
							HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",158)
							buf->b[buf->b->length] = messages;
						}
					}
				}
			}
		}
	}
	HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",162)
	return buf->b->join(HX_CSTRING(""));
}


HX_DEFINE_DYNAMIC_FUNC0(PlainTextReport_obj,getResults,return )

Void PlainTextReport_obj::complete( ::haxe::test::ui::common::PackageResult result){
{
		__SAFE_POINT
		HX_SOURCE_PUSH("PlainTextReport_obj::complete")
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",166)
		this->result = result;
		HX_SOURCE_POS("../stax/src/main/haxe/haxe/test/ui/text/PlainTextReport.hx",167)
		this->handler(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlainTextReport_obj,complete,(void))


PlainTextReport_obj::PlainTextReport_obj()
{
}

void PlainTextReport_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlainTextReport);
	HX_MARK_MEMBER_NAME(displaySuccessResults,"displaySuccessResults");
	HX_MARK_MEMBER_NAME(displayHeader,"displayHeader");
	HX_MARK_MEMBER_NAME(handler,"handler");
	HX_MARK_MEMBER_NAME(aggregator,"aggregator");
	HX_MARK_MEMBER_NAME(newline,"newline");
	HX_MARK_MEMBER_NAME(indent,"indent");
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	HX_MARK_MEMBER_NAME(result,"result");
	HX_MARK_END_CLASS();
}

Dynamic PlainTextReport_obj::__Field(const ::String &inName)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"indent") ) { return indent; }
		if (HX_FIELD_EQ(inName,"result") ) { return result; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { return handler; }
		if (HX_FIELD_EQ(inName,"newline") ) { return newline; }
		if (HX_FIELD_EQ(inName,"indents") ) { return indents_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"complete") ) { return complete_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startTime") ) { return startTime; }
		if (HX_FIELD_EQ(inName,"dumpStack") ) { return dumpStack_dyn(); }
		if (HX_FIELD_EQ(inName,"addHeader") ) { return addHeader_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"aggregator") ) { return aggregator; }
		if (HX_FIELD_EQ(inName,"setHandler") ) { return setHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"getResults") ) { return getResults_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayHeader") ) { return displayHeader; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"displaySuccessResults") ) { return displaySuccessResults; }
	}
	return super::__Field(inName);
}

Dynamic PlainTextReport_obj::__SetField(const ::String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"indent") ) { indent=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"result") ) { result=inValue.Cast< ::haxe::test::ui::common::PackageResult >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"handler") ) { handler=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"newline") ) { newline=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< double >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"aggregator") ) { aggregator=inValue.Cast< ::haxe::test::ui::common::ResultAggregator >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayHeader") ) { displayHeader=inValue.Cast< ::haxe::test::ui::common::HeaderDisplayMode >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"displaySuccessResults") ) { displaySuccessResults=inValue.Cast< ::haxe::test::ui::common::SuccessResultsDisplayMode >(); return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void PlainTextReport_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("displaySuccessResults"));
	outFields->push(HX_CSTRING("displayHeader"));
	outFields->push(HX_CSTRING("aggregator"));
	outFields->push(HX_CSTRING("newline"));
	outFields->push(HX_CSTRING("indent"));
	outFields->push(HX_CSTRING("startTime"));
	outFields->push(HX_CSTRING("result"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("displaySuccessResults"),
	HX_CSTRING("displayHeader"),
	HX_CSTRING("handler"),
	HX_CSTRING("aggregator"),
	HX_CSTRING("newline"),
	HX_CSTRING("indent"),
	HX_CSTRING("setHandler"),
	HX_CSTRING("startTime"),
	HX_CSTRING("start"),
	HX_CSTRING("indents"),
	HX_CSTRING("dumpStack"),
	HX_CSTRING("addHeader"),
	HX_CSTRING("result"),
	HX_CSTRING("getResults"),
	HX_CSTRING("complete"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

Class PlainTextReport_obj::__mClass;

void PlainTextReport_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.test.ui.text.PlainTextReport"), hx::TCanCast< PlainTextReport_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics);
}

void PlainTextReport_obj::__boot()
{
}

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace text
