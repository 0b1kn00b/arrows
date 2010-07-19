#include <hxObject.h>

#ifndef INCLUDED_hxunit_TestResult
#include <hxunit/TestResult.h>
#endif
#ifndef INCLUDED_hxunit_responder_TestResponder
#include <hxunit/responder/TestResponder.h>
#endif
namespace hxunit{
namespace responder{

DEFINE_DYNAMIC_FUNC0(TestResponder_obj,begin,)

DEFINE_DYNAMIC_FUNC1(TestResponder_obj,consume,)

DEFINE_DYNAMIC_FUNC0(TestResponder_obj,end,)


} // end namespace hxunit
} // end namespace responder
