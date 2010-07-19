#include <hxObject.h>

#ifndef INCLUDED_arrow_scheduler_resources_Resource
#include <arrow/scheduler/resources/Resource.h>
#endif
#ifndef INCLUDED_arrow_scheduler_resources_ResourceCondition
#include <arrow/scheduler/resources/ResourceCondition.h>
#endif
namespace arrow{
namespace scheduler{
namespace resources{

DEFINE_DYNAMIC_FUNC1(Resource_obj,notify,)

DEFINE_DYNAMIC_FUNC0(Resource_obj,getState,return )

DEFINE_DYNAMIC_FUNC1(Resource_obj,setState,return )

DEFINE_DYNAMIC_FUNC0(Resource_obj,yield,)


} // end namespace arrow
} // end namespace scheduler
} // end namespace resources
