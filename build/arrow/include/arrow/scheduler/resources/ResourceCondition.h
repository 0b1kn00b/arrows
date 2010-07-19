#ifndef INCLUDED_arrow_scheduler_resources_ResourceCondition
#define INCLUDED_arrow_scheduler_resources_ResourceCondition

#include <hxObject.h>

DECLARE_CLASS3(arrow,scheduler,resources,ResourceCondition)
namespace arrow{
namespace scheduler{
namespace resources{


class ResourceCondition_obj : public hxEnumBase_obj
{
	typedef hxEnumBase_obj super;
		typedef ResourceCondition_obj OBJ_;

	public:
		ResourceCondition_obj() {};
		DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		String GetEnumName( ) const { return String(L"arrow.scheduler.resources.ResourceCondition",43); }
		String __ToString() const { return String(L"ResourceCondition.",18) + tag; }

		static ResourceCondition done;
		static ResourceCondition running;
		static ResourceCondition suspended;
		static ResourceCondition waiting;
};

} // end namespace arrow
} // end namespace scheduler
} // end namespace resources

#endif /* INCLUDED_arrow_scheduler_resources_ResourceCondition */ 
