#include <hxcpp.h>

#include <EReg.h>
#include <haxe/functional/arrows/combinators/ArrThunk.h>
#include <haxe/functional/arrows/schedule/reactor/ReactorState.h>
#include <haxe/test/ui/common/PackageResult.h>
#include <Full.h>
#include <haxe/reactive/arrow/TraceObjectTest.h>
#include <haxe/functional/arrows/schedule/call/ArrowCallObject.h>
#include <haxe/functional/arrows/schedule/call/ArrowCall.h>
#include <haxe/functional/arrows/vo/Progress.h>
#include <haxe/util/Guid.h>
#include <haxe/test/ui/common/SuccessResultsDisplayMode.h>
#include <haxe/test/ui/common/HeaderDisplayMode.h>
#include <haxe/functional/arrows/ext/lambda/IterArrow.h>
#include <haxe/functional/arrows/ext/lambda/FoldThunk.h>
#include <haxe/functional/arrows/combinators/FunctionThunk.h>
#include <haxe/functional/arrows/combinators/DelayArrow.h>
#include <haxe/test/ui/text/HtmlReport.h>
#include <haxe/test/ui/common/FixtureResult.h>
#include <haxe/reactive/arrow/FunctionArrowTest.h>
#include <haxe/exception/ArgumentNullException.h>
#include <haxe/functional/arrows/ext/lambda/MapArrow.h>
#include <haxe/io/Error.h>
#include <haxe/functional/Predicate1Extensions.h>
#include <haxe/functional/arrows/schedule/call/Call.h>
#include <haxe/functional/P.h>
#include <haxe/reactive/arrow/LambdaArrowTest.h>
#include <haxe/functional/arrows/combinators/FanoutThunk.h>
#include <haxe/test/TestFixture.h>
#include <Stax.h>
#include <FieldOrder.h>
#include <Tuple5.h>
#include <Tuple4.h>
#include <Tuple3.h>
#include <Tuple2.h>
#include <_Prelude/AbstractProduct.h>
#include <Future.h>
#include <Either.h>
#include <Option.h>
#include <Unit.h>
#include <haxe/functional/arrows/schedule/event/SchedulerEventType.h>
#include <haxe/functional/arrows/schedule/constraint/ArrowCounterConstraint.h>
#include <haxe/reactive/arrow/ErrorTest.h>
#include <haxe/rtti/Meta.h>
#include <haxe/functional/arrows/ext/lambda/FilterThunk.h>
#include <haxe/Timer.h>
#include <haxe/exception/Exception.h>
#include <cpp/Lib.h>
#include <haxe/functional/arrows/combinators/FirstThunk.h>
#include <Std.h>
#include <haxe/functional/arrows/schedule/Buffer.h>
#include <haxe/functional/arrows/ext/lambda/FoldArrow.h>
#include <haxe/functional/arrows/combinators/InnerRepeatThunk.h>
#include <JValueExtensions.h>
#include <IterableExtensions.h>
#include <FutureExtensions.h>
#include <EitherExtensions.h>
#include <OptionExtensions.h>
#include <Function5Extensions.h>
#include <Function4Extensions.h>
#include <Function3Extensions.h>
#include <Function2Extensions.h>
#include <Function1Extensions.h>
#include <Function0Extensions.h>
#include <ArrayExtensions.h>
#include <DateExtensions.h>
#include <StringExtensions.h>
#include <FloatExtensions.h>
#include <IntExtensions.h>
#include <BoolExtensions.h>
#include <DynamicExtensions.h>
#include <haxe/functional/arrows/FactoryExtension.h>
#include <haxe/functional/arrows/Tuple2ArrowExtension.h>
#include <haxe/functional/arrows/TupleArrowExtension.h>
#include <haxe/functional/arrows/Function2Arrow.h>
#include <haxe/functional/arrows/Function1Arrow.h>
#include <haxe/functional/arrows/combinators/OrThunk.h>
#include <haxe/test/TestResult.h>
#include <haxe/test/ui/text/PrintReport.h>
#include <haxe/Log.h>
#include <haxe/functional/arrows/combinators/ProgressArrow.h>
#include <haxe/reactive/arrow/CancellerTest.h>
#include <StringBuf.h>
#include <haxe/functional/arrows/schedule/Invoker.h>
#include <haxe/test/Assert.h>
#include <haxe/functional/arrows/schedule/ScheduleType.h>
#include <haxe/functional/arrows/schedule/ScheduleManager.h>
#include <haxe/functional/arrows/ext/lambda/FilterArrow.h>
#include <haxe/TypeTools.h>
#include <haxe/test/TestHandler.h>
#include <haxe/test/ui/common/ClassResult.h>
#include <haxe/reactive/arrow/SchedulerTest.h>
#include <haxe/functional/arrows/combinators/PollThunk.h>
#include <haxe/text/json/JValue.h>
#include <haxe/test/Runner.h>
#include <haxe/functional/arrows/schedule/ArrowCounter.h>
#include <Date.h>
#include <Lambda.h>
#include <haxe/test/ui/common/ResultStats.h>
#include <haxe/text/json/JValueExtensions.h>
#include <haxe/functional/PartialFunction5ImplExtensions.h>
#include <haxe/functional/_PartialFunctionExtensions/PartialFunction5Impl.h>
#include <haxe/functional/PartialFunction4ImplExtensions.h>
#include <haxe/functional/_PartialFunctionExtensions/PartialFunction4Impl.h>
#include <haxe/functional/PartialFunction3ImplExtensions.h>
#include <haxe/functional/_PartialFunctionExtensions/PartialFunction3Impl.h>
#include <haxe/functional/PartialFunction2ImplExtensions.h>
#include <haxe/functional/_PartialFunctionExtensions/PartialFunction2Impl.h>
#include <haxe/functional/PartialFunction1ImplExtensions.h>
#include <haxe/functional/_PartialFunctionExtensions/PartialFunction1Impl.h>
#include <haxe/functional/arrows/TaggedValue.h>
#include <Reflect.h>
#include <haxe/functional/arrows/schedule/reactor/InlineReactor.h>
#include <haxe/functional/arrows/schedule/reactor/ConcreteReactor.h>
#include <haxe/functional/arrows/schedule/constraint/TimeConstraint.h>
#include <Type.h>
#include <ValueType.h>
#include <haxe/Stack.h>
#include <haxe/StackItem.h>
#include <haxe/functional/arrows/combinators/EventArrow.h>
#include <haxe/test/ui/Report.h>
#include <haxe/functional/arrows/combinators/BindThunk.h>
#include <haxe/test/Assertation.h>
#include <haxe/functional/arrows/schedule/constraint/NotEmptyConstraint.h>
#include <haxe/functional/arrows/schedule/constraint/NullConstraint.h>
#include <haxe/functional/arrows/ArrowInstance.h>
#include <haxe/functional/arrows/ext/LambdaArrow.h>
#include <haxe/functional/FoldableExtensions.h>
#include <haxe/functional/arrows/combinators/RepeatThunk.h>
#include <haxe/util/ObjectExtensions.h>
#include <hsl/haxe/Signal.h>
#include <haxe/functional/arrows/combinators/SecondThunk.h>
#include <haxe/functional/arrows/combinators/ProductThunk.h>
#include <haxe/test/ui/text/PlainTextReport.h>
#include <haxe/test/Notifier.h>
#include <haxe/test/Dispatcher.h>
#include <haxe/test/_Dispatcher/EventException.h>
#include <haxe/functional/arrows/schedule/BaseReactor.h>
#include <haxe/functional/arrows/schedule/BaseScheduler.h>
#include <hsl/haxe/_DirectSignaler/PropagationStatus.h>
#include <hsl/haxe/_DirectSignaler/AdvancedBond.h>
#include <hsl/haxe/_DirectSignaler/NiladicBond.h>
#include <hsl/haxe/_DirectSignaler/RegularBond.h>
#include <hsl/haxe/_DirectSignaler/SentinelBond.h>
#include <hsl/haxe/_DirectSignaler/LinkedBond.h>
#include <hsl/haxe/Bond.h>
#include <hsl/haxe/DirectSignaler.h>
#include <haxe/functional/arrows/combinators/Loop.h>
#include <haxe/functional/arrows/combinators/SignalArrow.h>
#include <haxe/functional/arrows/combinators/TerminalArrow.h>
#include <haxe/io/Bytes.h>
#include <haxe/functional/arrows/schedule/event/ReactorEvent.h>
#include <haxe/functional/arrows/schedule/event/SchedulerEvent.h>
#include <StringTools.h>
#include <haxe/functional/arrows/combinators/AnimateInnerThunk.h>
#include <haxe/functional/arrows/combinators/AnimateThunk.h>
#include <haxe/functional/arrows/ext/lambda/IterThunk.h>
#include <haxe/functional/arrows/combinators/JoinThunk.h>
#include <haxe/functional/arrows/combinators/ComposeThunk.h>
#include <haxe/data/collections/Map.h>
#include <haxe/data/collections/Set.h>
#include <haxe/data/transcode/TranscodeJValue.h>
#include <haxe/data/transcode/MapExtensions.h>
#include <haxe/data/transcode/ExtractorHelpers.h>
#include <IntHash.h>
#include <Hash.h>
#include <haxe/test/ui/common/ReportTools.h>
#include <haxe/functional/arrows/schedule/constraint/RunstateConstraint.h>
#include <haxe/test/MustMatcherExtensions.h>
#include <haxe/reactive/arrow/TestDynamicFunctionSource.h>
#include <haxe/reactive/arrow/TestDynamic.h>
#include <haxe/reactive/arrow/ArrowTest.h>
#include <IntIter.h>
#include <haxe/functional/arrows/ext/lambda/MapThunk.h>
#include <haxe/functional/arrows/Arrow.h>
#include <haxe/test/Must.h>
#include <List.h>
#include <haxe/reactive/arrow/ComplexTest.h>
#include <haxe/test/TestCase.h>
#include <haxe/data/collections/_List/Nil.h>
#include <haxe/data/collections/_List/Cons.h>
#include <haxe/data/collections/List.h>
#include <haxe/test/ui/common/ResultAggregator.h>

void __boot_all()
{
hx::RegisterResources( hx::GetResources() );
::EReg_obj::__register();
::haxe::functional::arrows::combinators::ArrThunk_obj::__register();
::haxe::functional::arrows::schedule::reactor::ReactorState_obj::__register();
::haxe::test::ui::common::PackageResult_obj::__register();
::Full_obj::__register();
::haxe::reactive::arrow::TraceObjectTest_obj::__register();
::haxe::functional::arrows::schedule::call::ArrowCallObject_obj::__register();
::haxe::functional::arrows::schedule::call::ArrowCall_obj::__register();
::haxe::functional::arrows::vo::Progress_obj::__register();
::haxe::util::Guid_obj::__register();
::haxe::test::ui::common::SuccessResultsDisplayMode_obj::__register();
::haxe::test::ui::common::HeaderDisplayMode_obj::__register();
::haxe::functional::arrows::ext::lambda::IterArrow_obj::__register();
::haxe::functional::arrows::ext::lambda::FoldThunk_obj::__register();
::haxe::functional::arrows::combinators::FunctionThunk_obj::__register();
::haxe::functional::arrows::combinators::DelayArrow_obj::__register();
::haxe::test::ui::text::HtmlReport_obj::__register();
::haxe::test::ui::common::FixtureResult_obj::__register();
::haxe::reactive::arrow::FunctionArrowTest_obj::__register();
::haxe::exception::ArgumentNullException_obj::__register();
::haxe::functional::arrows::ext::lambda::MapArrow_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::functional::Predicate1Extensions_obj::__register();
::haxe::functional::arrows::schedule::call::Call_obj::__register();
::haxe::functional::P_obj::__register();
::haxe::reactive::arrow::LambdaArrowTest_obj::__register();
::haxe::functional::arrows::combinators::FanoutThunk_obj::__register();
::haxe::test::TestFixture_obj::__register();
::Stax_obj::__register();
::FieldOrder_obj::__register();
::Tuple5_obj::__register();
::Tuple4_obj::__register();
::Tuple3_obj::__register();
::Tuple2_obj::__register();
::_Prelude::AbstractProduct_obj::__register();
::Future_obj::__register();
::Either_obj::__register();
::Option_obj::__register();
::Unit_obj::__register();
::haxe::functional::arrows::schedule::event::SchedulerEventType_obj::__register();
::haxe::functional::arrows::schedule::constraint::ArrowCounterConstraint_obj::__register();
::haxe::reactive::arrow::ErrorTest_obj::__register();
::haxe::rtti::Meta_obj::__register();
::haxe::functional::arrows::ext::lambda::FilterThunk_obj::__register();
::haxe::Timer_obj::__register();
::haxe::exception::Exception_obj::__register();
::cpp::Lib_obj::__register();
::haxe::functional::arrows::combinators::FirstThunk_obj::__register();
::Std_obj::__register();
::haxe::functional::arrows::schedule::Buffer_obj::__register();
::haxe::functional::arrows::ext::lambda::FoldArrow_obj::__register();
::haxe::functional::arrows::combinators::InnerRepeatThunk_obj::__register();
::JValueExtensions_obj::__register();
::IterableExtensions_obj::__register();
::FutureExtensions_obj::__register();
::EitherExtensions_obj::__register();
::OptionExtensions_obj::__register();
::Function5Extensions_obj::__register();
::Function4Extensions_obj::__register();
::Function3Extensions_obj::__register();
::Function2Extensions_obj::__register();
::Function1Extensions_obj::__register();
::Function0Extensions_obj::__register();
::ArrayExtensions_obj::__register();
::DateExtensions_obj::__register();
::StringExtensions_obj::__register();
::FloatExtensions_obj::__register();
::IntExtensions_obj::__register();
::BoolExtensions_obj::__register();
::DynamicExtensions_obj::__register();
::haxe::functional::arrows::FactoryExtension_obj::__register();
::haxe::functional::arrows::Tuple2ArrowExtension_obj::__register();
::haxe::functional::arrows::TupleArrowExtension_obj::__register();
::haxe::functional::arrows::Function2Arrow_obj::__register();
::haxe::functional::arrows::Function1Arrow_obj::__register();
::haxe::functional::arrows::combinators::OrThunk_obj::__register();
::haxe::test::TestResult_obj::__register();
::haxe::test::ui::text::PrintReport_obj::__register();
::haxe::Log_obj::__register();
::haxe::functional::arrows::combinators::ProgressArrow_obj::__register();
::haxe::reactive::arrow::CancellerTest_obj::__register();
::StringBuf_obj::__register();
::haxe::functional::arrows::schedule::Invoker_obj::__register();
::haxe::test::Assert_obj::__register();
::haxe::functional::arrows::schedule::ScheduleType_obj::__register();
::haxe::functional::arrows::schedule::ScheduleManager_obj::__register();
::haxe::functional::arrows::ext::lambda::FilterArrow_obj::__register();
::haxe::TypeTools_obj::__register();
::haxe::test::TestHandler_obj::__register();
::haxe::test::ui::common::ClassResult_obj::__register();
::haxe::reactive::arrow::SchedulerTest_obj::__register();
::haxe::functional::arrows::combinators::PollThunk_obj::__register();
::haxe::text::json::JValue_obj::__register();
::haxe::test::Runner_obj::__register();
::haxe::functional::arrows::schedule::ArrowCounter_obj::__register();
::Date_obj::__register();
::Lambda_obj::__register();
::haxe::test::ui::common::ResultStats_obj::__register();
::haxe::text::json::JValueExtensions_obj::__register();
::haxe::functional::PartialFunction5ImplExtensions_obj::__register();
::haxe::functional::_PartialFunctionExtensions::PartialFunction5Impl_obj::__register();
::haxe::functional::PartialFunction4ImplExtensions_obj::__register();
::haxe::functional::_PartialFunctionExtensions::PartialFunction4Impl_obj::__register();
::haxe::functional::PartialFunction3ImplExtensions_obj::__register();
::haxe::functional::_PartialFunctionExtensions::PartialFunction3Impl_obj::__register();
::haxe::functional::PartialFunction2ImplExtensions_obj::__register();
::haxe::functional::_PartialFunctionExtensions::PartialFunction2Impl_obj::__register();
::haxe::functional::PartialFunction1ImplExtensions_obj::__register();
::haxe::functional::_PartialFunctionExtensions::PartialFunction1Impl_obj::__register();
::haxe::functional::arrows::TaggedValue_obj::__register();
::Reflect_obj::__register();
::haxe::functional::arrows::schedule::reactor::InlineReactor_obj::__register();
::haxe::functional::arrows::schedule::reactor::ConcreteReactor_obj::__register();
::haxe::functional::arrows::schedule::constraint::TimeConstraint_obj::__register();
::Type_obj::__register();
::ValueType_obj::__register();
::haxe::Stack_obj::__register();
::haxe::StackItem_obj::__register();
::haxe::functional::arrows::combinators::EventArrow_obj::__register();
::haxe::test::ui::Report_obj::__register();
::haxe::functional::arrows::combinators::BindThunk_obj::__register();
::haxe::test::Assertation_obj::__register();
::haxe::functional::arrows::schedule::constraint::NotEmptyConstraint_obj::__register();
::haxe::functional::arrows::schedule::constraint::NullConstraint_obj::__register();
::haxe::functional::arrows::ArrowInstance_obj::__register();
::haxe::functional::arrows::ext::LambdaArrow_obj::__register();
::haxe::functional::FoldableExtensions_obj::__register();
::haxe::functional::arrows::combinators::RepeatThunk_obj::__register();
::haxe::util::ObjectExtensions_obj::__register();
::hsl::haxe::Signal_obj::__register();
::haxe::functional::arrows::combinators::SecondThunk_obj::__register();
::haxe::functional::arrows::combinators::ProductThunk_obj::__register();
::haxe::test::ui::text::PlainTextReport_obj::__register();
::haxe::test::Notifier_obj::__register();
::haxe::test::Dispatcher_obj::__register();
::haxe::test::_Dispatcher::EventException_obj::__register();
::haxe::functional::arrows::schedule::BaseReactor_obj::__register();
::haxe::functional::arrows::schedule::BaseScheduler_obj::__register();
::hsl::haxe::_DirectSignaler::PropagationStatus_obj::__register();
::hsl::haxe::_DirectSignaler::AdvancedBond_obj::__register();
::hsl::haxe::_DirectSignaler::NiladicBond_obj::__register();
::hsl::haxe::_DirectSignaler::RegularBond_obj::__register();
::hsl::haxe::_DirectSignaler::SentinelBond_obj::__register();
::hsl::haxe::_DirectSignaler::LinkedBond_obj::__register();
::hsl::haxe::Bond_obj::__register();
::hsl::haxe::DirectSignaler_obj::__register();
::haxe::functional::arrows::combinators::Loop_obj::__register();
::haxe::functional::arrows::combinators::SignalArrow_obj::__register();
::haxe::functional::arrows::combinators::TerminalArrow_obj::__register();
::haxe::io::Bytes_obj::__register();
::haxe::functional::arrows::schedule::event::ReactorEvent_obj::__register();
::haxe::functional::arrows::schedule::event::SchedulerEvent_obj::__register();
::StringTools_obj::__register();
::haxe::functional::arrows::combinators::AnimateInnerThunk_obj::__register();
::haxe::functional::arrows::combinators::AnimateThunk_obj::__register();
::haxe::functional::arrows::ext::lambda::IterThunk_obj::__register();
::haxe::functional::arrows::combinators::JoinThunk_obj::__register();
::haxe::functional::arrows::combinators::ComposeThunk_obj::__register();
::haxe::data::collections::Map_obj::__register();
::haxe::data::collections::Set_obj::__register();
::haxe::data::transcode::TranscodeJValue_obj::__register();
::haxe::data::transcode::MapExtensions_obj::__register();
::haxe::data::transcode::ExtractorHelpers_obj::__register();
::IntHash_obj::__register();
::Hash_obj::__register();
::haxe::test::ui::common::ReportTools_obj::__register();
::haxe::functional::arrows::schedule::constraint::RunstateConstraint_obj::__register();
::haxe::test::MustMatcherExtensions_obj::__register();
::haxe::reactive::arrow::TestDynamicFunctionSource_obj::__register();
::haxe::reactive::arrow::TestDynamic_obj::__register();
::haxe::reactive::arrow::ArrowTest_obj::__register();
::IntIter_obj::__register();
::haxe::functional::arrows::ext::lambda::MapThunk_obj::__register();
::haxe::functional::arrows::Arrow_obj::__register();
::haxe::test::Must_obj::__register();
::List_obj::__register();
::haxe::reactive::arrow::ComplexTest_obj::__register();
::haxe::test::TestCase_obj::__register();
::haxe::data::collections::_List::Nil_obj::__register();
::haxe::data::collections::_List::Cons_obj::__register();
::haxe::data::collections::List_obj::__register();
::haxe::test::ui::common::ResultAggregator_obj::__register();
::haxe::test::ui::common::ResultAggregator_obj::__boot();
::haxe::data::collections::List_obj::__boot();
::haxe::data::collections::_List::Cons_obj::__boot();
::haxe::data::collections::_List::Nil_obj::__boot();
::haxe::test::TestCase_obj::__boot();
::haxe::reactive::arrow::ComplexTest_obj::__boot();
::List_obj::__boot();
::haxe::test::Must_obj::__boot();
::haxe::functional::arrows::Arrow_obj::__boot();
::haxe::functional::arrows::ext::lambda::MapThunk_obj::__boot();
::IntIter_obj::__boot();
::haxe::reactive::arrow::ArrowTest_obj::__boot();
::haxe::reactive::arrow::TestDynamic_obj::__boot();
::haxe::reactive::arrow::TestDynamicFunctionSource_obj::__boot();
::haxe::test::MustMatcherExtensions_obj::__boot();
::haxe::functional::arrows::schedule::constraint::RunstateConstraint_obj::__boot();
::haxe::test::ui::common::ReportTools_obj::__boot();
::Hash_obj::__boot();
::IntHash_obj::__boot();
::haxe::data::transcode::ExtractorHelpers_obj::__boot();
::haxe::data::transcode::MapExtensions_obj::__boot();
::haxe::data::transcode::TranscodeJValue_obj::__boot();
::haxe::data::collections::Set_obj::__boot();
::haxe::data::collections::Map_obj::__boot();
::haxe::functional::arrows::combinators::ComposeThunk_obj::__boot();
::haxe::functional::arrows::combinators::JoinThunk_obj::__boot();
::haxe::functional::arrows::ext::lambda::IterThunk_obj::__boot();
::haxe::functional::arrows::combinators::AnimateThunk_obj::__boot();
::haxe::functional::arrows::combinators::AnimateInnerThunk_obj::__boot();
::StringTools_obj::__boot();
::haxe::functional::arrows::schedule::event::SchedulerEvent_obj::__boot();
::haxe::functional::arrows::schedule::event::ReactorEvent_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::functional::arrows::combinators::TerminalArrow_obj::__boot();
::haxe::functional::arrows::combinators::SignalArrow_obj::__boot();
::haxe::functional::arrows::combinators::Loop_obj::__boot();
::hsl::haxe::DirectSignaler_obj::__boot();
::hsl::haxe::Bond_obj::__boot();
::hsl::haxe::_DirectSignaler::LinkedBond_obj::__boot();
::hsl::haxe::_DirectSignaler::SentinelBond_obj::__boot();
::hsl::haxe::_DirectSignaler::RegularBond_obj::__boot();
::hsl::haxe::_DirectSignaler::NiladicBond_obj::__boot();
::hsl::haxe::_DirectSignaler::AdvancedBond_obj::__boot();
::hsl::haxe::_DirectSignaler::PropagationStatus_obj::__boot();
::haxe::functional::arrows::schedule::BaseScheduler_obj::__boot();
::haxe::functional::arrows::schedule::BaseReactor_obj::__boot();
::haxe::test::_Dispatcher::EventException_obj::__boot();
::haxe::test::Dispatcher_obj::__boot();
::haxe::test::Notifier_obj::__boot();
::haxe::test::ui::text::PlainTextReport_obj::__boot();
::haxe::functional::arrows::combinators::ProductThunk_obj::__boot();
::haxe::functional::arrows::combinators::SecondThunk_obj::__boot();
::hsl::haxe::Signal_obj::__boot();
::haxe::util::ObjectExtensions_obj::__boot();
::haxe::functional::arrows::combinators::RepeatThunk_obj::__boot();
::haxe::functional::FoldableExtensions_obj::__boot();
::haxe::functional::arrows::ext::LambdaArrow_obj::__boot();
::haxe::functional::arrows::ArrowInstance_obj::__boot();
::haxe::functional::arrows::schedule::constraint::NullConstraint_obj::__boot();
::haxe::functional::arrows::schedule::constraint::NotEmptyConstraint_obj::__boot();
::haxe::test::Assertation_obj::__boot();
::haxe::functional::arrows::combinators::BindThunk_obj::__boot();
::haxe::test::ui::Report_obj::__boot();
::haxe::functional::arrows::combinators::EventArrow_obj::__boot();
::haxe::StackItem_obj::__boot();
::haxe::Stack_obj::__boot();
::ValueType_obj::__boot();
::Type_obj::__boot();
::haxe::functional::arrows::schedule::constraint::TimeConstraint_obj::__boot();
::haxe::functional::arrows::schedule::reactor::ConcreteReactor_obj::__boot();
::haxe::functional::arrows::schedule::reactor::InlineReactor_obj::__boot();
::Reflect_obj::__boot();
::haxe::functional::arrows::TaggedValue_obj::__boot();
::haxe::functional::_PartialFunctionExtensions::PartialFunction1Impl_obj::__boot();
::haxe::functional::PartialFunction1ImplExtensions_obj::__boot();
::haxe::functional::_PartialFunctionExtensions::PartialFunction2Impl_obj::__boot();
::haxe::functional::PartialFunction2ImplExtensions_obj::__boot();
::haxe::functional::_PartialFunctionExtensions::PartialFunction3Impl_obj::__boot();
::haxe::functional::PartialFunction3ImplExtensions_obj::__boot();
::haxe::functional::_PartialFunctionExtensions::PartialFunction4Impl_obj::__boot();
::haxe::functional::PartialFunction4ImplExtensions_obj::__boot();
::haxe::functional::_PartialFunctionExtensions::PartialFunction5Impl_obj::__boot();
::haxe::functional::PartialFunction5ImplExtensions_obj::__boot();
::haxe::text::json::JValueExtensions_obj::__boot();
::haxe::test::ui::common::ResultStats_obj::__boot();
::Lambda_obj::__boot();
::Date_obj::__boot();
::haxe::functional::arrows::schedule::ArrowCounter_obj::__boot();
::haxe::test::Runner_obj::__boot();
::haxe::text::json::JValue_obj::__boot();
::haxe::functional::arrows::combinators::PollThunk_obj::__boot();
::haxe::reactive::arrow::SchedulerTest_obj::__boot();
::haxe::test::ui::common::ClassResult_obj::__boot();
::haxe::test::TestHandler_obj::__boot();
::haxe::TypeTools_obj::__boot();
::haxe::functional::arrows::ext::lambda::FilterArrow_obj::__boot();
::haxe::functional::arrows::schedule::ScheduleManager_obj::__boot();
::haxe::functional::arrows::schedule::ScheduleType_obj::__boot();
::haxe::test::Assert_obj::__boot();
::haxe::functional::arrows::schedule::Invoker_obj::__boot();
::StringBuf_obj::__boot();
::haxe::reactive::arrow::CancellerTest_obj::__boot();
::haxe::functional::arrows::combinators::ProgressArrow_obj::__boot();
::haxe::Log_obj::__boot();
::haxe::test::ui::text::PrintReport_obj::__boot();
::haxe::test::TestResult_obj::__boot();
::haxe::functional::arrows::combinators::OrThunk_obj::__boot();
::haxe::functional::arrows::Function1Arrow_obj::__boot();
::haxe::functional::arrows::Function2Arrow_obj::__boot();
::haxe::functional::arrows::TupleArrowExtension_obj::__boot();
::haxe::functional::arrows::Tuple2ArrowExtension_obj::__boot();
::haxe::functional::arrows::FactoryExtension_obj::__boot();
::DynamicExtensions_obj::__boot();
::BoolExtensions_obj::__boot();
::IntExtensions_obj::__boot();
::FloatExtensions_obj::__boot();
::StringExtensions_obj::__boot();
::DateExtensions_obj::__boot();
::ArrayExtensions_obj::__boot();
::Function0Extensions_obj::__boot();
::Function1Extensions_obj::__boot();
::Function2Extensions_obj::__boot();
::Function3Extensions_obj::__boot();
::Function4Extensions_obj::__boot();
::Function5Extensions_obj::__boot();
::OptionExtensions_obj::__boot();
::EitherExtensions_obj::__boot();
::FutureExtensions_obj::__boot();
::IterableExtensions_obj::__boot();
::JValueExtensions_obj::__boot();
::haxe::functional::arrows::combinators::InnerRepeatThunk_obj::__boot();
::haxe::functional::arrows::ext::lambda::FoldArrow_obj::__boot();
::haxe::functional::arrows::schedule::Buffer_obj::__boot();
::Std_obj::__boot();
::haxe::functional::arrows::combinators::FirstThunk_obj::__boot();
::cpp::Lib_obj::__boot();
::haxe::exception::Exception_obj::__boot();
::haxe::Timer_obj::__boot();
::haxe::functional::arrows::ext::lambda::FilterThunk_obj::__boot();
::haxe::rtti::Meta_obj::__boot();
::haxe::reactive::arrow::ErrorTest_obj::__boot();
::haxe::functional::arrows::schedule::constraint::ArrowCounterConstraint_obj::__boot();
::haxe::functional::arrows::schedule::event::SchedulerEventType_obj::__boot();
::Unit_obj::__boot();
::Option_obj::__boot();
::Either_obj::__boot();
::Future_obj::__boot();
::_Prelude::AbstractProduct_obj::__boot();
::Tuple2_obj::__boot();
::Tuple3_obj::__boot();
::Tuple4_obj::__boot();
::Tuple5_obj::__boot();
::FieldOrder_obj::__boot();
::Stax_obj::__boot();
::haxe::test::TestFixture_obj::__boot();
::haxe::functional::arrows::combinators::FanoutThunk_obj::__boot();
::haxe::reactive::arrow::LambdaArrowTest_obj::__boot();
::haxe::functional::P_obj::__boot();
::haxe::functional::arrows::schedule::call::Call_obj::__boot();
::haxe::functional::Predicate1Extensions_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::functional::arrows::ext::lambda::MapArrow_obj::__boot();
::haxe::exception::ArgumentNullException_obj::__boot();
::haxe::reactive::arrow::FunctionArrowTest_obj::__boot();
::haxe::test::ui::common::FixtureResult_obj::__boot();
::haxe::test::ui::text::HtmlReport_obj::__boot();
::haxe::functional::arrows::combinators::DelayArrow_obj::__boot();
::haxe::functional::arrows::combinators::FunctionThunk_obj::__boot();
::haxe::functional::arrows::ext::lambda::FoldThunk_obj::__boot();
::haxe::functional::arrows::ext::lambda::IterArrow_obj::__boot();
::haxe::test::ui::common::HeaderDisplayMode_obj::__boot();
::haxe::test::ui::common::SuccessResultsDisplayMode_obj::__boot();
::haxe::util::Guid_obj::__boot();
::haxe::functional::arrows::vo::Progress_obj::__boot();
::haxe::functional::arrows::schedule::call::ArrowCall_obj::__boot();
::haxe::functional::arrows::schedule::call::ArrowCallObject_obj::__boot();
::haxe::reactive::arrow::TraceObjectTest_obj::__boot();
::Full_obj::__boot();
::haxe::test::ui::common::PackageResult_obj::__boot();
::haxe::functional::arrows::schedule::reactor::ReactorState_obj::__boot();
::haxe::functional::arrows::combinators::ArrThunk_obj::__boot();
::EReg_obj::__boot();
}

