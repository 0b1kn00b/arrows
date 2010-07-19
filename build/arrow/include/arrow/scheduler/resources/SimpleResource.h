#ifndef INCLUDED_arrow_scheduler_resources_SimpleResource
#define INCLUDED_arrow_scheduler_resources_SimpleResource

#include <hxObject.h>

#include <arrow/scheduler/resources/AbstractResource.h>
DECLARE_CLASS3(arrow,scheduler,resources,AbstractResource)
DECLARE_CLASS3(arrow,scheduler,resources,Resource)
DECLARE_CLASS3(arrow,scheduler,resources,SimpleResource)
DECLARE_CLASS1(colhx,Collection)
DECLARE_CLASS1(colhx,Queue)
namespace arrow{
namespace scheduler{
namespace resources{


class SimpleResource_obj : public arrow::scheduler::resources::AbstractResource_obj
{
	public:
		typedef arrow::scheduler::resources::AbstractResource_obj super;
		typedef SimpleResource_obj OBJ_;

	protected:
		SimpleResource_obj();
		Void __construct(String id);

	public:
		static hxObjectPtr<SimpleResource_obj > __new(String id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~SimpleResource_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"SimpleResource",14); }

		virtual Void notify( Dynamic value);
		Dynamic notify_dyn();

		virtual Void yield( );
		Dynamic yield_dyn();

		colhx::Queue queue;
};

} // end namespace arrow
} // end namespace scheduler
} // end namespace resources

#endif /* INCLUDED_arrow_scheduler_resources_SimpleResource */ 
