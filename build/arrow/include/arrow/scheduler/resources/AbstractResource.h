#ifndef INCLUDED_arrow_scheduler_resources_AbstractResource
#define INCLUDED_arrow_scheduler_resources_AbstractResource

#include <hxObject.h>

#include <arrow/scheduler/resources/Resource.h>
DECLARE_CLASS3(arrow,scheduler,resources,AbstractResource)
DECLARE_CLASS3(arrow,scheduler,resources,Resource)
DECLARE_CLASS3(arrow,scheduler,resources,ResourceCondition)
namespace arrow{
namespace scheduler{
namespace resources{


class AbstractResource_obj : public virtual hxObject, public arrow::scheduler::resources::Resource_obj
{
	public:
		typedef hxObject super;
		typedef AbstractResource_obj OBJ_;

	protected:
		AbstractResource_obj();
		Void __construct();

	public:
		static hxObjectPtr<AbstractResource_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~AbstractResource_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"AbstractResource",16); }

		virtual Void notify( Dynamic value);
		Dynamic notify_dyn();

		virtual Void yield( );
		Dynamic yield_dyn();

		String id;
		arrow::scheduler::resources::ResourceCondition state;
		virtual arrow::scheduler::resources::ResourceCondition getState( );
		Dynamic getState_dyn();

		virtual arrow::scheduler::resources::ResourceCondition setState( arrow::scheduler::resources::ResourceCondition state);
		Dynamic setState_dyn();

};

} // end namespace arrow
} // end namespace scheduler
} // end namespace resources

#endif /* INCLUDED_arrow_scheduler_resources_AbstractResource */ 
