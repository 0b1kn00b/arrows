#ifndef INCLUDED_arrow_scheduler_resources_Resource
#define INCLUDED_arrow_scheduler_resources_Resource

#include <hxObject.h>

DECLARE_CLASS3(arrow,scheduler,resources,Resource)
DECLARE_CLASS3(arrow,scheduler,resources,ResourceCondition)
namespace arrow{
namespace scheduler{
namespace resources{


class Resource_obj : public virtual hxObject
{
	public:
	INTERFACE_DEF
		virtual Void notify( Dynamic value)=0;
		Dynamic notify_dyn();
		
		
		virtual arrow::scheduler::resources::ResourceCondition getState( )=0;
		Dynamic getState_dyn();
		virtual arrow::scheduler::resources::ResourceCondition setState( arrow::scheduler::resources::ResourceCondition state)=0;
		Dynamic setState_dyn();
		virtual Void yield( )=0;
		Dynamic yield_dyn();
};

} // end namespace arrow
} // end namespace scheduler
} // end namespace resources

#endif /* INCLUDED_arrow_scheduler_resources_Resource */ 
