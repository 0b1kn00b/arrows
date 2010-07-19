#include <hxObject.h>

#include <StringTools.h>
#include <reflect/RType.h>
#include <colhx/Queue.h>
#include <arrow/ext/lambda/IterThunk.h>
#include <arrow/ext/lambda/FilterArrow.h>
#include <arrow/Arrow.h>
#include <ion/log/Logger.h>
#include <arrow/combinators/EventArrow.h>
#include <reflect/Access.h>
#include <arrow/combinators/TerminalArrow.h>
#include <test/arrow/TestDynamicFunctionSource.h>
#include <test/arrow/TestDynamic.h>
#include <test/arrow/ArrowTest.h>
#include <arrow/scheduler/ResourceManagerSingleton.h>
#include <arrow/scheduler/ResourceManager.h>
#include <haxe/Md5.h>
#include <arrow/scheduler/resources/SimpleResource.h>
#include <Main.h>
#include <data/XQueue.h>
#include <arrow/combinators/RepeatThunk.h>
#include <arrow/ProgressEvent.h>
#include <Std.h>
#include <reflect/Method.h>
#include <arrow/ext/LambdaArrow.h>
#include <cpp/CppDate__.h>
#include <Hash.h>
#include <arrow/TaggedValue.h>
#include <haxe/Log.h>
#include <hxunit/Data.h>
#include <hxunit/Message.h>
#include <hxunit/AType.h>
#include <hxunit/Test.h>
#include <event/EventSystem.h>
#include <reflect/Property.h>
#include <reflect/AccessorType.h>
#include <arrow/ext/lambda/FilterThunk.h>
#include <arrow/combinators/JoinThunk.h>
#include <arrow/ext/lambda/FoldArrow.h>
#include <hxunit/TestGenerator.h>
#include <arrow/combinators/DelayArrow.h>
#include <arrow/ext/lambda/MapArrow.h>
#include <arrow/FunctionProfile.h>
#include <test/arrow/ComplexTest.h>
#include <Lambda.h>
#include <data/type/Time.h>
#include <data/type/TimeFormat.h>
#include <StringBuf.h>
#include <hxunit/TestResult.h>
#include <hxunit/error/TestError.h>
#include <arrow/combinators/ArrThunk.h>
#include <arrow/combinators/OrThunk.h>
#include <arrow/combinators/BindThunk.h>
#include <util/EventUtil.h>
#include <hxunit/TestMonitor.h>
#include <util/UUID.h>
#include <reflect/NamedField.h>
#include <haxe/Timer.h>
#include <util/Counter.h>
#include <arrow/scheduler/resources/AbstractResource.h>
#include <util/ReflectUtil.h>
#include <Type.h>
#include <ValueType.h>
#include <arrow/ext/lambda/FoldThunk.h>
#include <event/Event.h>
#include <IntIter.h>
#include <hxunit/TestRunner.h>
#include <util/MathUtil.h>
#include <arrow/ext/lambda/MapThunk.h>
#include <arrow/scheduler/resources/ResourceCondition.h>
#include <Reflect.h>
#include <arrow/AsyncArrowInstance.h>
#include <reflect/Argument.h>
#include <core/AbstractLocator.h>
#include <arrow/ext/lambda/IterArrow.h>
#include <arrow/combinators/FunctionThunk.h>
#include <hxunit/AnonymousTestCase.h>
#include <hxunit/TestCase.h>
#include <arrow/combinators/SecondThunk.h>
#include <util/Util.h>
#include <arrow/combinators/ProgressArrow.h>
#include <arrow/combinators/Loop.h>
#include <arrow/combinators/InnerRepeatThunk.h>
#include <reflect/Field.h>
#include <reflect/Member.h>
#include <ion/log/SimpleLog.h>
#include <EReg.h>
#include <cpp/Lib.h>
#include <arrow/Box.h>
#include <arrow/Tuple.h>
#include <hxunit/error/AssertionError.h>
#include <hxunit/error/HxUnitError.h>
#include <ion/log/LogInstance.h>
#include <arrow/combinators/FirstThunk.h>
#include <arrow/combinators/ProductThunk.h>
#include <List.h>
#include <hxunit/responder/SimpleResponder.h>
#include <arrow/combinators/FanoutThunk.h>
#include <arrow/combinators/ComposeThunk.h>
#include <arrow/AsyncArrow.h>
#include <test/arrow/ArrowSuite.h>
#include <hxunit/TestSuite.h>
#include <hxunit/TestFrameworkPrimitive.h>
#include <ion/log/LogLevel.h>

void __boot_all()
{
RegisterResources( GetResources() );
StringTools_obj::__register();
reflect::RType_obj::__register();
colhx::Queue_obj::__register();
arrow::ext::lambda::IterThunk_obj::__register();
arrow::ext::lambda::FilterArrow_obj::__register();
arrow::Arrow_obj::__register();
ion::log::Logger_obj::__register();
arrow::combinators::EventArrow_obj::__register();
reflect::Access_obj::__register();
arrow::combinators::TerminalArrow_obj::__register();
test::arrow::TestDynamicFunctionSource_obj::__register();
test::arrow::TestDynamic_obj::__register();
test::arrow::ArrowTest_obj::__register();
arrow::scheduler::ResourceManagerSingleton_obj::__register();
arrow::scheduler::ResourceManager_obj::__register();
haxe::Md5_obj::__register();
arrow::scheduler::resources::SimpleResource_obj::__register();
Main_obj::__register();
data::XQueue_obj::__register();
arrow::combinators::RepeatThunk_obj::__register();
arrow::ProgressEvent_obj::__register();
Std_obj::__register();
reflect::Method_obj::__register();
arrow::ext::LambdaArrow_obj::__register();
cpp::CppDate___obj::__register();
Hash_obj::__register();
arrow::TaggedValue_obj::__register();
haxe::Log_obj::__register();
hxunit::Data_obj::__register();
hxunit::Message_obj::__register();
hxunit::AType_obj::__register();
hxunit::Test_obj::__register();
event::EventSystem_obj::__register();
reflect::Property_obj::__register();
reflect::AccessorType_obj::__register();
arrow::ext::lambda::FilterThunk_obj::__register();
arrow::combinators::JoinThunk_obj::__register();
arrow::ext::lambda::FoldArrow_obj::__register();
hxunit::TestGenerator_obj::__register();
arrow::combinators::DelayArrow_obj::__register();
arrow::ext::lambda::MapArrow_obj::__register();
arrow::FunctionProfile_obj::__register();
test::arrow::ComplexTest_obj::__register();
Lambda_obj::__register();
data::type::Time_obj::__register();
data::type::TimeFormat_obj::__register();
StringBuf_obj::__register();
hxunit::TestResult_obj::__register();
hxunit::error::TestError_obj::__register();
arrow::combinators::ArrThunk_obj::__register();
arrow::combinators::OrThunk_obj::__register();
arrow::combinators::BindThunk_obj::__register();
util::EventUtil_obj::__register();
hxunit::TestMonitor_obj::__register();
util::UUID_obj::__register();
reflect::NamedField_obj::__register();
haxe::Timer_obj::__register();
util::Counter_obj::__register();
arrow::scheduler::resources::AbstractResource_obj::__register();
util::ReflectUtil_obj::__register();
Type_obj::__register();
ValueType_obj::__register();
arrow::ext::lambda::FoldThunk_obj::__register();
event::Event_obj::__register();
IntIter_obj::__register();
hxunit::TestRunner_obj::__register();
util::MathUtil_obj::__register();
arrow::ext::lambda::MapThunk_obj::__register();
arrow::scheduler::resources::ResourceCondition_obj::__register();
Reflect_obj::__register();
arrow::AsyncArrowInstance_obj::__register();
reflect::Argument_obj::__register();
core::AbstractLocator_obj::__register();
arrow::ext::lambda::IterArrow_obj::__register();
arrow::combinators::FunctionThunk_obj::__register();
hxunit::AnonymousTestCase_obj::__register();
hxunit::TestCase_obj::__register();
arrow::combinators::SecondThunk_obj::__register();
util::Util_obj::__register();
arrow::combinators::ProgressArrow_obj::__register();
arrow::combinators::Loop_obj::__register();
arrow::combinators::InnerRepeatThunk_obj::__register();
reflect::Field_obj::__register();
reflect::Member_obj::__register();
ion::log::SimpleLog_obj::__register();
EReg_obj::__register();
cpp::Lib_obj::__register();
arrow::Box_obj::__register();
arrow::Tuple_obj::__register();
hxunit::error::AssertionError_obj::__register();
hxunit::error::HxUnitError_obj::__register();
ion::log::LogInstance_obj::__register();
arrow::combinators::FirstThunk_obj::__register();
arrow::combinators::ProductThunk_obj::__register();
List_obj::__register();
hxunit::responder::SimpleResponder_obj::__register();
arrow::combinators::FanoutThunk_obj::__register();
arrow::combinators::ComposeThunk_obj::__register();
arrow::AsyncArrow_obj::__register();
test::arrow::ArrowSuite_obj::__register();
hxunit::TestSuite_obj::__register();
hxunit::TestFrameworkPrimitive_obj::__register();
ion::log::LogLevel_obj::__register();
Std_obj::__init__();
ion::log::LogLevel_obj::__boot();
hxunit::TestFrameworkPrimitive_obj::__boot();
hxunit::TestSuite_obj::__boot();
test::arrow::ArrowSuite_obj::__boot();
arrow::AsyncArrow_obj::__boot();
arrow::combinators::ComposeThunk_obj::__boot();
arrow::combinators::FanoutThunk_obj::__boot();
hxunit::responder::SimpleResponder_obj::__boot();
List_obj::__boot();
arrow::combinators::ProductThunk_obj::__boot();
arrow::combinators::FirstThunk_obj::__boot();
ion::log::LogInstance_obj::__boot();
hxunit::error::HxUnitError_obj::__boot();
hxunit::error::AssertionError_obj::__boot();
arrow::Tuple_obj::__boot();
arrow::Box_obj::__boot();
cpp::Lib_obj::__boot();
EReg_obj::__boot();
ion::log::SimpleLog_obj::__boot();
reflect::Member_obj::__boot();
reflect::Field_obj::__boot();
arrow::combinators::InnerRepeatThunk_obj::__boot();
arrow::combinators::Loop_obj::__boot();
arrow::combinators::ProgressArrow_obj::__boot();
util::Util_obj::__boot();
arrow::combinators::SecondThunk_obj::__boot();
hxunit::TestCase_obj::__boot();
hxunit::AnonymousTestCase_obj::__boot();
arrow::combinators::FunctionThunk_obj::__boot();
arrow::ext::lambda::IterArrow_obj::__boot();
core::AbstractLocator_obj::__boot();
reflect::Argument_obj::__boot();
arrow::AsyncArrowInstance_obj::__boot();
Reflect_obj::__boot();
arrow::scheduler::resources::ResourceCondition_obj::__boot();
arrow::ext::lambda::MapThunk_obj::__boot();
util::MathUtil_obj::__boot();
hxunit::TestRunner_obj::__boot();
IntIter_obj::__boot();
event::Event_obj::__boot();
arrow::ext::lambda::FoldThunk_obj::__boot();
ValueType_obj::__boot();
Type_obj::__boot();
util::ReflectUtil_obj::__boot();
arrow::scheduler::resources::AbstractResource_obj::__boot();
util::Counter_obj::__boot();
haxe::Timer_obj::__boot();
reflect::NamedField_obj::__boot();
util::UUID_obj::__boot();
hxunit::TestMonitor_obj::__boot();
util::EventUtil_obj::__boot();
arrow::combinators::BindThunk_obj::__boot();
arrow::combinators::OrThunk_obj::__boot();
arrow::combinators::ArrThunk_obj::__boot();
hxunit::error::TestError_obj::__boot();
hxunit::TestResult_obj::__boot();
StringBuf_obj::__boot();
data::type::TimeFormat_obj::__boot();
data::type::Time_obj::__boot();
Lambda_obj::__boot();
test::arrow::ComplexTest_obj::__boot();
arrow::FunctionProfile_obj::__boot();
arrow::ext::lambda::MapArrow_obj::__boot();
arrow::combinators::DelayArrow_obj::__boot();
hxunit::TestGenerator_obj::__boot();
arrow::ext::lambda::FoldArrow_obj::__boot();
arrow::combinators::JoinThunk_obj::__boot();
arrow::ext::lambda::FilterThunk_obj::__boot();
reflect::AccessorType_obj::__boot();
reflect::Property_obj::__boot();
event::EventSystem_obj::__boot();
hxunit::Test_obj::__boot();
hxunit::AType_obj::__boot();
hxunit::Message_obj::__boot();
hxunit::Data_obj::__boot();
haxe::Log_obj::__boot();
arrow::TaggedValue_obj::__boot();
Hash_obj::__boot();
cpp::CppDate___obj::__boot();
arrow::ext::LambdaArrow_obj::__boot();
reflect::Method_obj::__boot();
Std_obj::__boot();
arrow::ProgressEvent_obj::__boot();
arrow::combinators::RepeatThunk_obj::__boot();
data::XQueue_obj::__boot();
Main_obj::__boot();
arrow::scheduler::resources::SimpleResource_obj::__boot();
haxe::Md5_obj::__boot();
arrow::scheduler::ResourceManager_obj::__boot();
arrow::scheduler::ResourceManagerSingleton_obj::__boot();
test::arrow::ArrowTest_obj::__boot();
test::arrow::TestDynamic_obj::__boot();
test::arrow::TestDynamicFunctionSource_obj::__boot();
arrow::combinators::TerminalArrow_obj::__boot();
reflect::Access_obj::__boot();
arrow::combinators::EventArrow_obj::__boot();
ion::log::Logger_obj::__boot();
arrow::Arrow_obj::__boot();
arrow::ext::lambda::FilterArrow_obj::__boot();
arrow::ext::lambda::IterThunk_obj::__boot();
colhx::Queue_obj::__boot();
reflect::RType_obj::__boot();
StringTools_obj::__boot();
}

