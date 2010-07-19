ifeq ("x$(HXCPP)","x")
 HXCPP := $(shell haxelib path hxcpp)
endif
include $(HXCPP)/make/make.setup

obj/StringTools$(OBJ) : src/StringTools.cpp include/StringTools.h
	$(COMPILE) src/StringTools.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/StringTools$(OBJ)

obj/reflect-RType$(OBJ) : src/reflect/RType.cpp include/Hash.h include/reflect/Field.h include/reflect/Member.h include/reflect/Method.h include/reflect/NamedField.h include/reflect/RType.h
	$(COMPILE) src/reflect/RType.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/reflect-RType$(OBJ)

obj/colhx-Queue$(OBJ) : src/colhx/Queue.cpp include/List.h include/colhx/Collection.h include/colhx/Queue.h
	$(COMPILE) src/colhx/Queue.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/colhx-Queue$(OBJ)

obj/arrow-ext-lambda-IterThunk$(OBJ) : src/arrow/ext/lambda/IterThunk.cpp include/arrow/AsyncArrow.h include/arrow/ext/lambda/IterThunk.h
	$(COMPILE) src/arrow/ext/lambda/IterThunk.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-ext-lambda-IterThunk$(OBJ)

obj/arrow-ext-lambda-FilterArrow$(OBJ) : src/arrow/ext/lambda/FilterArrow.cpp include/arrow/AsyncArrow.h include/arrow/ext/lambda/FilterArrow.h
	$(COMPILE) src/arrow/ext/lambda/FilterArrow.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-ext-lambda-FilterArrow$(OBJ)

obj/arrow-Arrow$(OBJ) : src/arrow/Arrow.cpp include/arrow/Arrow.h
	$(COMPILE) src/arrow/Arrow.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-Arrow$(OBJ)

obj/ion-log-Logger$(OBJ) : src/ion/log/Logger.cpp include/Hash.h include/ion/log/Log.h include/ion/log/Logger.h
	$(COMPILE) src/ion/log/Logger.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/ion-log-Logger$(OBJ)

obj/arrow-combinators-EventArrow$(OBJ) : src/arrow/combinators/EventArrow.cpp include/arrow/AsyncArrow.h include/arrow/combinators/EventArrow.h
	$(COMPILE) src/arrow/combinators/EventArrow.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-combinators-EventArrow$(OBJ)

obj/reflect-Access$(OBJ) : src/reflect/Access.cpp include/reflect/Access.h
	$(COMPILE) src/reflect/Access.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/reflect-Access$(OBJ)

obj/arrow-combinators-TerminalArrow$(OBJ) : src/arrow/combinators/TerminalArrow.cpp include/arrow/AsyncArrow.h include/arrow/combinators/TerminalArrow.h
	$(COMPILE) src/arrow/combinators/TerminalArrow.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-combinators-TerminalArrow$(OBJ)

obj/test-arrow-TestDynamicFunctionSource$(OBJ) : src/test/arrow/TestDynamicFunctionSource.cpp include/test/arrow/TestDynamicFunctionSource.h
	$(COMPILE) src/test/arrow/TestDynamicFunctionSource.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/test-arrow-TestDynamicFunctionSource$(OBJ)

obj/test-arrow-TestDynamic$(OBJ) : src/test/arrow/TestDynamic.cpp include/test/arrow/TestDynamic.h include/test/arrow/TestDynamicFunctionSource.h
	$(COMPILE) src/test/arrow/TestDynamic.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/test-arrow-TestDynamic$(OBJ)

obj/test-arrow-ArrowTest$(OBJ) : src/test/arrow/ArrowTest.cpp include/hxunit/TestCase.h include/hxunit/TestFrameworkPrimitive.h include/test/arrow/ArrowTest.h
	$(COMPILE) src/test/arrow/ArrowTest.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/test-arrow-ArrowTest$(OBJ)

obj/arrow-scheduler-ResourceManagerSingleton$(OBJ) : src/arrow/scheduler/ResourceManagerSingleton.cpp include/arrow/scheduler/ResourceManagerSingleton.h include/core/AbstractLocator.h include/core/LifeCycle.h
	$(COMPILE) src/arrow/scheduler/ResourceManagerSingleton.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-scheduler-ResourceManagerSingleton$(OBJ)

obj/arrow-scheduler-ResourceManager$(OBJ) : src/arrow/scheduler/ResourceManager.cpp include/arrow/scheduler/ResourceManager.h include/arrow/scheduler/resources/Resource.h
	$(COMPILE) src/arrow/scheduler/ResourceManager.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-scheduler-ResourceManager$(OBJ)

obj/haxe-Md5$(OBJ) : src/haxe/Md5.cpp include/haxe/Md5.h
	$(COMPILE) src/haxe/Md5.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/haxe-Md5$(OBJ)

obj/arrow-scheduler-resources-SimpleResource$(OBJ) : src/arrow/scheduler/resources/SimpleResource.cpp include/arrow/scheduler/resources/AbstractResource.h include/arrow/scheduler/resources/Resource.h include/arrow/scheduler/resources/SimpleResource.h include/colhx/Collection.h include/colhx/Queue.h
	$(COMPILE) src/arrow/scheduler/resources/SimpleResource.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-scheduler-resources-SimpleResource$(OBJ)

obj/Main$(OBJ) : src/Main.cpp include/Main.h
	$(COMPILE) src/Main.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/Main$(OBJ)

obj/data-XQueue$(OBJ) : src/data/XQueue.cpp include/List.h include/data/XQueue.h
	$(COMPILE) src/data/XQueue.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/data-XQueue$(OBJ)

obj/arrow-combinators-RepeatThunk$(OBJ) : src/arrow/combinators/RepeatThunk.cpp include/arrow/AsyncArrow.h include/arrow/combinators/RepeatThunk.h
	$(COMPILE) src/arrow/combinators/RepeatThunk.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-combinators-RepeatThunk$(OBJ)

obj/arrow-ProgressEvent$(OBJ) : src/arrow/ProgressEvent.cpp include/arrow/ProgressEvent.h include/event/Event.h
	$(COMPILE) src/arrow/ProgressEvent.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-ProgressEvent$(OBJ)

obj/Std$(OBJ) : src/Std.cpp include/Std.h
	$(COMPILE) src/Std.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/Std$(OBJ)

obj/reflect-Method$(OBJ) : src/reflect/Method.cpp include/reflect/Argument.h include/reflect/Field.h include/reflect/Member.h include/reflect/Method.h include/reflect/NamedField.h
	$(COMPILE) src/reflect/Method.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/reflect-Method$(OBJ)

obj/arrow-ext-LambdaArrow$(OBJ) : src/arrow/ext/LambdaArrow.cpp include/arrow/AsyncArrow.h include/arrow/ext/LambdaArrow.h include/arrow/ext/lambda/FilterThunk.h include/arrow/ext/lambda/FoldThunk.h
	$(COMPILE) src/arrow/ext/LambdaArrow.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-ext-LambdaArrow$(OBJ)

obj/cpp-CppDate__$(OBJ) : src/cpp/CppDate__.cpp include/cpp/CppDate__.h
	$(COMPILE) src/cpp/CppDate__.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/cpp-CppDate__$(OBJ)

obj/Hash$(OBJ) : src/Hash.cpp include/Hash.h
	$(COMPILE) src/Hash.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/Hash$(OBJ)

obj/arrow-TaggedValue$(OBJ) : src/arrow/TaggedValue.cpp include/arrow/TaggedValue.h
	$(COMPILE) src/arrow/TaggedValue.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-TaggedValue$(OBJ)

obj/haxe-Log$(OBJ) : src/haxe/Log.cpp include/haxe/Log.h
	$(COMPILE) src/haxe/Log.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/haxe-Log$(OBJ)

obj/hxunit-Data$(OBJ) : src/hxunit/Data.cpp include/hxunit/AType.h include/hxunit/Data.h
	$(COMPILE) src/hxunit/Data.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/hxunit-Data$(OBJ)

obj/hxunit-Message$(OBJ) : src/hxunit/Message.cpp include/hxunit/Message.h
	$(COMPILE) src/hxunit/Message.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/hxunit-Message$(OBJ)

obj/hxunit-AType$(OBJ) : src/hxunit/AType.cpp include/hxunit/AType.h
	$(COMPILE) src/hxunit/AType.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/hxunit-AType$(OBJ)

obj/hxunit-Test$(OBJ) : src/hxunit/Test.cpp include/hxunit/Test.h
	$(COMPILE) src/hxunit/Test.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/hxunit-Test$(OBJ)

obj/event-EventSystem$(OBJ) : src/event/EventSystem.cpp include/Hash.h include/event/Event.h include/event/EventDispatcher.h include/event/EventListener.h include/event/EventSystem.h
	$(COMPILE) src/event/EventSystem.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/event-EventSystem$(OBJ)

obj/reflect-Property$(OBJ) : src/reflect/Property.cpp include/reflect/Access.h include/reflect/Field.h include/reflect/Member.h include/reflect/Method.h include/reflect/NamedField.h include/reflect/Property.h
	$(COMPILE) src/reflect/Property.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/reflect-Property$(OBJ)

obj/reflect-AccessorType$(OBJ) : src/reflect/AccessorType.cpp include/reflect/AccessorType.h
	$(COMPILE) src/reflect/AccessorType.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/reflect-AccessorType$(OBJ)

obj/arrow-ext-lambda-FilterThunk$(OBJ) : src/arrow/ext/lambda/FilterThunk.cpp include/arrow/AsyncArrow.h include/arrow/ext/lambda/FilterThunk.h
	$(COMPILE) src/arrow/ext/lambda/FilterThunk.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-ext-lambda-FilterThunk$(OBJ)

obj/arrow-combinators-JoinThunk$(OBJ) : src/arrow/combinators/JoinThunk.cpp include/arrow/AsyncArrow.h include/arrow/combinators/ComposeThunk.h include/arrow/combinators/JoinThunk.h
	$(COMPILE) src/arrow/combinators/JoinThunk.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-combinators-JoinThunk$(OBJ)

obj/arrow-ext-lambda-FoldArrow$(OBJ) : src/arrow/ext/lambda/FoldArrow.cpp include/arrow/AsyncArrow.h include/arrow/ext/lambda/FoldArrow.h
	$(COMPILE) src/arrow/ext/lambda/FoldArrow.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-ext-lambda-FoldArrow$(OBJ)

obj/hxunit-TestGenerator$(OBJ) : src/hxunit/TestGenerator.cpp include/List.h include/hxunit/AnonymousTestCase.h include/hxunit/TestCase.h include/hxunit/TestFrameworkPrimitive.h include/hxunit/TestGenerator.h include/hxunit/TestSuite.h
	$(COMPILE) src/hxunit/TestGenerator.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/hxunit-TestGenerator$(OBJ)

obj/arrow-combinators-DelayArrow$(OBJ) : src/arrow/combinators/DelayArrow.cpp include/arrow/AsyncArrow.h include/arrow/combinators/DelayArrow.h include/data/type/Time.h
	$(COMPILE) src/arrow/combinators/DelayArrow.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-combinators-DelayArrow$(OBJ)

obj/arrow-ext-lambda-MapArrow$(OBJ) : src/arrow/ext/lambda/MapArrow.cpp include/arrow/AsyncArrow.h include/arrow/ext/lambda/MapArrow.h
	$(COMPILE) src/arrow/ext/lambda/MapArrow.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-ext-lambda-MapArrow$(OBJ)

obj/arrow-FunctionProfile$(OBJ) : src/arrow/FunctionProfile.cpp include/arrow/FunctionProfile.h
	$(COMPILE) src/arrow/FunctionProfile.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-FunctionProfile$(OBJ)

obj/test-arrow-ComplexTest$(OBJ) : src/test/arrow/ComplexTest.cpp include/hxunit/TestCase.h include/hxunit/TestFrameworkPrimitive.h include/test/arrow/ComplexTest.h
	$(COMPILE) src/test/arrow/ComplexTest.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/test-arrow-ComplexTest$(OBJ)

obj/Lambda$(OBJ) : src/Lambda.cpp include/Lambda.h include/List.h
	$(COMPILE) src/Lambda.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/Lambda$(OBJ)

obj/data-type-Time$(OBJ) : src/data/type/Time.cpp include/data/type/Time.h include/data/type/TimeFormat.h
	$(COMPILE) src/data/type/Time.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/data-type-Time$(OBJ)

obj/data-type-TimeFormat$(OBJ) : src/data/type/TimeFormat.cpp include/data/type/TimeFormat.h
	$(COMPILE) src/data/type/TimeFormat.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/data-type-TimeFormat$(OBJ)

obj/StringBuf$(OBJ) : src/StringBuf.cpp include/StringBuf.h
	$(COMPILE) src/StringBuf.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/StringBuf$(OBJ)

obj/hxunit-TestResult$(OBJ) : src/hxunit/TestResult.cpp include/List.h include/hxunit/TestResult.h
	$(COMPILE) src/hxunit/TestResult.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/hxunit-TestResult$(OBJ)

obj/hxunit-error-TestError$(OBJ) : src/hxunit/error/TestError.cpp include/hxunit/error/HxUnitError.h include/hxunit/error/TestError.h
	$(COMPILE) src/hxunit/error/TestError.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/hxunit-error-TestError$(OBJ)

obj/arrow-combinators-ArrThunk$(OBJ) : src/arrow/combinators/ArrThunk.cpp include/arrow/AsyncArrow.h include/arrow/combinators/ArrThunk.h
	$(COMPILE) src/arrow/combinators/ArrThunk.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-combinators-ArrThunk$(OBJ)

obj/arrow-combinators-OrThunk$(OBJ) : src/arrow/combinators/OrThunk.cpp include/arrow/AsyncArrow.h include/arrow/combinators/OrThunk.h
	$(COMPILE) src/arrow/combinators/OrThunk.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-combinators-OrThunk$(OBJ)

obj/arrow-combinators-BindThunk$(OBJ) : src/arrow/combinators/BindThunk.cpp include/arrow/AsyncArrow.h include/arrow/combinators/BindThunk.h include/arrow/combinators/ComposeThunk.h
	$(COMPILE) src/arrow/combinators/BindThunk.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-combinators-BindThunk$(OBJ)

obj/util-EventUtil$(OBJ) : src/util/EventUtil.cpp include/util/EventUtil.h
	$(COMPILE) src/util/EventUtil.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/util-EventUtil$(OBJ)

obj/hxunit-TestMonitor$(OBJ) : src/hxunit/TestMonitor.cpp include/Hash.h include/List.h include/haxe/Timer.h include/hxunit/Message.h include/hxunit/TestCase.h include/hxunit/TestFrameworkPrimitive.h include/hxunit/TestMonitor.h include/hxunit/TestResult.h include/hxunit/TestRunner.h
	$(COMPILE) src/hxunit/TestMonitor.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/hxunit-TestMonitor$(OBJ)

obj/util-UUID$(OBJ) : src/util/UUID.cpp include/util/UUID.h
	$(COMPILE) src/util/UUID.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/util-UUID$(OBJ)

obj/reflect-NamedField$(OBJ) : src/reflect/NamedField.cpp include/reflect/Field.h include/reflect/Member.h include/reflect/NamedField.h
	$(COMPILE) src/reflect/NamedField.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/reflect-NamedField$(OBJ)

obj/haxe-Timer$(OBJ) : src/haxe/Timer.cpp include/haxe/Timer.h
	$(COMPILE) src/haxe/Timer.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/haxe-Timer$(OBJ)

obj/util-Counter$(OBJ) : src/util/Counter.cpp include/util/Counter.h
	$(COMPILE) src/util/Counter.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/util-Counter$(OBJ)

obj/arrow-scheduler-resources-AbstractResource$(OBJ) : src/arrow/scheduler/resources/AbstractResource.cpp include/arrow/scheduler/resources/AbstractResource.h include/arrow/scheduler/resources/Resource.h include/arrow/scheduler/resources/ResourceCondition.h
	$(COMPILE) src/arrow/scheduler/resources/AbstractResource.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-scheduler-resources-AbstractResource$(OBJ)

obj/util-ReflectUtil$(OBJ) : src/util/ReflectUtil.cpp include/util/ReflectUtil.h
	$(COMPILE) src/util/ReflectUtil.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/util-ReflectUtil$(OBJ)

obj/Type$(OBJ) : src/Type.cpp include/Type.h include/ValueType.h
	$(COMPILE) src/Type.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/Type$(OBJ)

obj/ValueType$(OBJ) : src/ValueType.cpp include/ValueType.h
	$(COMPILE) src/ValueType.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/ValueType$(OBJ)

obj/arrow-ext-lambda-FoldThunk$(OBJ) : src/arrow/ext/lambda/FoldThunk.cpp include/arrow/AsyncArrow.h include/arrow/ext/lambda/FoldThunk.h
	$(COMPILE) src/arrow/ext/lambda/FoldThunk.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-ext-lambda-FoldThunk$(OBJ)

obj/event-Event$(OBJ) : src/event/Event.cpp include/event/Event.h
	$(COMPILE) src/event/Event.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/event-Event$(OBJ)

obj/arrow-scheduler-resources-Resource$(OBJ) : src/arrow/scheduler/resources/Resource.cpp include/arrow/scheduler/resources/Resource.h include/arrow/scheduler/resources/ResourceCondition.h
	$(COMPILE) src/arrow/scheduler/resources/Resource.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-scheduler-resources-Resource$(OBJ)

obj/IntIter$(OBJ) : src/IntIter.cpp include/IntIter.h
	$(COMPILE) src/IntIter.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/IntIter$(OBJ)

obj/hxunit-TestRunner$(OBJ) : src/hxunit/TestRunner.cpp include/hxunit/TestGenerator.h include/hxunit/TestMonitor.h include/hxunit/TestRunner.h include/hxunit/responder/TestResponder.h
	$(COMPILE) src/hxunit/TestRunner.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/hxunit-TestRunner$(OBJ)

obj/util-MathUtil$(OBJ) : src/util/MathUtil.cpp include/util/MathUtil.h
	$(COMPILE) src/util/MathUtil.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/util-MathUtil$(OBJ)

obj/arrow-ext-lambda-MapThunk$(OBJ) : src/arrow/ext/lambda/MapThunk.cpp include/arrow/AsyncArrow.h include/arrow/ext/lambda/MapThunk.h
	$(COMPILE) src/arrow/ext/lambda/MapThunk.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-ext-lambda-MapThunk$(OBJ)

obj/arrow-scheduler-resources-ResourceCondition$(OBJ) : src/arrow/scheduler/resources/ResourceCondition.cpp include/arrow/scheduler/resources/ResourceCondition.h
	$(COMPILE) src/arrow/scheduler/resources/ResourceCondition.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-scheduler-resources-ResourceCondition$(OBJ)

obj/core-Named$(OBJ) : src/core/Named.cpp include/core/Named.h
	$(COMPILE) src/core/Named.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/core-Named$(OBJ)

obj/Reflect$(OBJ) : src/Reflect.cpp include/Reflect.h
	$(COMPILE) src/Reflect.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/Reflect$(OBJ)

obj/arrow-AsyncArrowInstance$(OBJ) : src/arrow/AsyncArrowInstance.cpp include/arrow/AsyncArrow.h include/arrow/AsyncArrowInstance.h include/arrow/combinators/ProgressArrow.h include/arrow/scheduler/resources/Resource.h include/data/XQueue.h include/event/EventDispatcher.h include/event/EventListener.h include/ion/log/Log.h include/util/Counter.h
	$(COMPILE) src/arrow/AsyncArrowInstance.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-AsyncArrowInstance$(OBJ)

obj/reflect-Argument$(OBJ) : src/reflect/Argument.cpp include/reflect/Argument.h include/reflect/Field.h include/reflect/Member.h
	$(COMPILE) src/reflect/Argument.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/reflect-Argument$(OBJ)

obj/core-AbstractLocator$(OBJ) : src/core/AbstractLocator.cpp include/Hash.h include/core/AbstractLocator.h include/core/LifeCycle.h
	$(COMPILE) src/core/AbstractLocator.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/core-AbstractLocator$(OBJ)

obj/core-LifeCycle$(OBJ) : src/core/LifeCycle.cpp include/core/LifeCycle.h
	$(COMPILE) src/core/LifeCycle.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/core-LifeCycle$(OBJ)

obj/arrow-ext-lambda-IterArrow$(OBJ) : src/arrow/ext/lambda/IterArrow.cpp include/arrow/AsyncArrow.h include/arrow/ext/lambda/IterArrow.h
	$(COMPILE) src/arrow/ext/lambda/IterArrow.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-ext-lambda-IterArrow$(OBJ)

obj/arrow-combinators-FunctionThunk$(OBJ) : src/arrow/combinators/FunctionThunk.cpp include/arrow/AsyncArrow.h include/arrow/combinators/FunctionThunk.h
	$(COMPILE) src/arrow/combinators/FunctionThunk.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-combinators-FunctionThunk$(OBJ)

obj/hxunit-AnonymousTestCase$(OBJ) : src/hxunit/AnonymousTestCase.cpp include/hxunit/AnonymousTestCase.h include/hxunit/TestCase.h include/hxunit/TestFrameworkPrimitive.h
	$(COMPILE) src/hxunit/AnonymousTestCase.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/hxunit-AnonymousTestCase$(OBJ)

obj/hxunit-TestCase$(OBJ) : src/hxunit/TestCase.cpp include/data/type/Time.h include/hxunit/AType.h include/hxunit/TestCase.h include/hxunit/TestFrameworkPrimitive.h include/hxunit/TestMonitor.h
	$(COMPILE) src/hxunit/TestCase.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/hxunit-TestCase$(OBJ)

obj/arrow-combinators-SecondThunk$(OBJ) : src/arrow/combinators/SecondThunk.cpp include/arrow/AsyncArrow.h include/arrow/combinators/ProductThunk.h include/arrow/combinators/SecondThunk.h
	$(COMPILE) src/arrow/combinators/SecondThunk.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-combinators-SecondThunk$(OBJ)

obj/util-Util$(OBJ) : src/util/Util.cpp include/arrow/AsyncArrow.h include/util/Util.h
	$(COMPILE) src/util/Util.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/util-Util$(OBJ)

obj/arrow-combinators-ProgressArrow$(OBJ) : src/arrow/combinators/ProgressArrow.cpp include/arrow/AsyncArrow.h include/arrow/AsyncArrowInstance.h include/arrow/combinators/ProgressArrow.h include/event/Event.h include/event/EventDispatcher.h include/event/EventListener.h include/event/EventSystem.h
	$(COMPILE) src/arrow/combinators/ProgressArrow.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-combinators-ProgressArrow$(OBJ)

obj/event-EventListener$(OBJ) : src/event/EventListener.cpp include/event/Event.h include/event/EventListener.h
	$(COMPILE) src/event/EventListener.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/event-EventListener$(OBJ)

obj/event-EventDispatcher$(OBJ) : src/event/EventDispatcher.cpp include/event/Event.h include/event/EventDispatcher.h
	$(COMPILE) src/event/EventDispatcher.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/event-EventDispatcher$(OBJ)

obj/arrow-combinators-Loop$(OBJ) : src/arrow/combinators/Loop.cpp include/arrow/combinators/Loop.h
	$(COMPILE) src/arrow/combinators/Loop.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-combinators-Loop$(OBJ)

obj/arrow-combinators-InnerRepeatThunk$(OBJ) : src/arrow/combinators/InnerRepeatThunk.cpp include/arrow/AsyncArrow.h include/arrow/AsyncArrowInstance.h include/arrow/combinators/InnerRepeatThunk.h
	$(COMPILE) src/arrow/combinators/InnerRepeatThunk.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-combinators-InnerRepeatThunk$(OBJ)

obj/reflect-Field$(OBJ) : src/reflect/Field.cpp include/reflect/Field.h include/reflect/Member.h
	$(COMPILE) src/reflect/Field.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/reflect-Field$(OBJ)

obj/reflect-Member$(OBJ) : src/reflect/Member.cpp include/reflect/Field.h include/reflect/Member.h include/reflect/NamedField.h include/reflect/RType.h
	$(COMPILE) src/reflect/Member.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/reflect-Member$(OBJ)

obj/ion-log-SimpleLog$(OBJ) : src/ion/log/SimpleLog.cpp include/EReg.h include/ion/log/Log.h include/ion/log/Logger.h include/ion/log/SimpleLog.h
	$(COMPILE) src/ion/log/SimpleLog.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/ion-log-SimpleLog$(OBJ)

obj/EReg$(OBJ) : src/EReg.cpp include/EReg.h
	$(COMPILE) src/EReg.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/EReg$(OBJ)

obj/cpp-Lib$(OBJ) : src/cpp/Lib.cpp include/cpp/Lib.h
	$(COMPILE) src/cpp/Lib.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/cpp-Lib$(OBJ)

obj/ion-log-Log$(OBJ) : src/ion/log/Log.cpp include/ion/log/Log.h include/ion/log/Logger.h
	$(COMPILE) src/ion/log/Log.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/ion-log-Log$(OBJ)

obj/arrow-Box$(OBJ) : src/arrow/Box.cpp include/arrow/Box.h
	$(COMPILE) src/arrow/Box.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-Box$(OBJ)

obj/arrow-Tuple$(OBJ) : src/arrow/Tuple.cpp include/arrow/Tuple.h
	$(COMPILE) src/arrow/Tuple.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-Tuple$(OBJ)

obj/hxunit-error-AssertionError$(OBJ) : src/hxunit/error/AssertionError.cpp include/hxunit/error/AssertionError.h include/hxunit/error/HxUnitError.h
	$(COMPILE) src/hxunit/error/AssertionError.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/hxunit-error-AssertionError$(OBJ)

obj/hxunit-error-HxUnitError$(OBJ) : src/hxunit/error/HxUnitError.cpp include/hxunit/error/HxUnitError.h
	$(COMPILE) src/hxunit/error/HxUnitError.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/hxunit-error-HxUnitError$(OBJ)

obj/ion-log-LogInstance$(OBJ) : src/ion/log/LogInstance.cpp include/ion/log/Log.h include/ion/log/LogInstance.h
	$(COMPILE) src/ion/log/LogInstance.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/ion-log-LogInstance$(OBJ)

obj/arrow-combinators-FirstThunk$(OBJ) : src/arrow/combinators/FirstThunk.cpp include/arrow/AsyncArrow.h include/arrow/combinators/FirstThunk.h include/arrow/combinators/ProductThunk.h
	$(COMPILE) src/arrow/combinators/FirstThunk.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-combinators-FirstThunk$(OBJ)

obj/arrow-combinators-ProductThunk$(OBJ) : src/arrow/combinators/ProductThunk.cpp include/arrow/AsyncArrow.h include/arrow/combinators/ProductThunk.h
	$(COMPILE) src/arrow/combinators/ProductThunk.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-combinators-ProductThunk$(OBJ)

obj/List$(OBJ) : src/List.cpp include/List.h
	$(COMPILE) src/List.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/List$(OBJ)

obj/colhx-Collection$(OBJ) : src/colhx/Collection.cpp include/colhx/Collection.h
	$(COMPILE) src/colhx/Collection.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/colhx-Collection$(OBJ)

obj/hxunit-responder-SimpleResponder$(OBJ) : src/hxunit/responder/SimpleResponder.cpp include/hxunit/TestResult.h include/hxunit/responder/SimpleResponder.h include/hxunit/responder/TestResponder.h
	$(COMPILE) src/hxunit/responder/SimpleResponder.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/hxunit-responder-SimpleResponder$(OBJ)

obj/hxunit-responder-TestResponder$(OBJ) : src/hxunit/responder/TestResponder.cpp include/hxunit/TestResult.h include/hxunit/responder/TestResponder.h
	$(COMPILE) src/hxunit/responder/TestResponder.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/hxunit-responder-TestResponder$(OBJ)

obj/arrow-combinators-FanoutThunk$(OBJ) : src/arrow/combinators/FanoutThunk.cpp include/arrow/AsyncArrow.h include/arrow/combinators/ComposeThunk.h include/arrow/combinators/FanoutThunk.h
	$(COMPILE) src/arrow/combinators/FanoutThunk.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-combinators-FanoutThunk$(OBJ)

obj/arrow-combinators-ComposeThunk$(OBJ) : src/arrow/combinators/ComposeThunk.cpp include/arrow/AsyncArrow.h include/arrow/combinators/ComposeThunk.h
	$(COMPILE) src/arrow/combinators/ComposeThunk.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-combinators-ComposeThunk$(OBJ)

obj/arrow-AsyncArrow$(OBJ) : src/arrow/AsyncArrow.cpp include/arrow/AsyncArrow.h include/arrow/AsyncArrowInstance.h include/arrow/TaggedValue.h include/arrow/combinators/ArrThunk.h include/arrow/combinators/BindThunk.h include/arrow/combinators/ComposeThunk.h include/arrow/combinators/EventArrow.h include/arrow/combinators/FanoutThunk.h include/arrow/combinators/FirstThunk.h include/arrow/combinators/FunctionThunk.h include/arrow/combinators/JoinThunk.h include/arrow/combinators/OrThunk.h include/arrow/combinators/ProductThunk.h include/arrow/combinators/ProgressArrow.h include/arrow/combinators/RepeatThunk.h include/arrow/combinators/SecondThunk.h include/arrow/combinators/TerminalArrow.h include/data/type/Time.h include/event/EventDispatcher.h include/event/EventListener.h include/ion/log/Log.h
	$(COMPILE) src/arrow/AsyncArrow.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/arrow-AsyncArrow$(OBJ)

obj/test-arrow-ArrowSuite$(OBJ) : src/test/arrow/ArrowSuite.cpp include/hxunit/TestFrameworkPrimitive.h include/hxunit/TestSuite.h include/test/arrow/ArrowSuite.h
	$(COMPILE) src/test/arrow/ArrowSuite.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/test-arrow-ArrowSuite$(OBJ)

obj/hxunit-TestSuite$(OBJ) : src/hxunit/TestSuite.cpp include/List.h include/hxunit/TestFrameworkPrimitive.h include/hxunit/TestSuite.h
	$(COMPILE) src/hxunit/TestSuite.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/hxunit-TestSuite$(OBJ)

obj/hxunit-TestFrameworkPrimitive$(OBJ) : src/hxunit/TestFrameworkPrimitive.cpp include/hxunit/TestFrameworkPrimitive.h
	$(COMPILE) src/hxunit/TestFrameworkPrimitive.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/hxunit-TestFrameworkPrimitive$(OBJ)

obj/ion-log-LogLevel$(OBJ) : src/ion/log/LogLevel.cpp include/ion/log/LogLevel.h
	$(COMPILE) src/ion/log/LogLevel.cpp $(OUT_FLAGS)$@

OBJ_FILES +=  obj/ion-log-LogLevel$(OBJ)



PROJECT = Main


include $(HXCPP)/make/make.tail
