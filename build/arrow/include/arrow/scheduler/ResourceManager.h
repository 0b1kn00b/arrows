#ifndef INCLUDED_arrow_scheduler_ResourceManager
#define INCLUDED_arrow_scheduler_ResourceManager

#include <hxObject.h>

DECLARE_CLASS2(arrow,scheduler,ResourceManager)
DECLARE_CLASS3(arrow,scheduler,resources,Resource)
namespace arrow{
namespace scheduler{


class ResourceManager_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef ResourceManager_obj OBJ_;

	protected:
		ResourceManager_obj();
		Void __construct();

	public:
		static hxObjectPtr<ResourceManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~ResourceManager_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"ResourceManager",15); }

		static arrow::scheduler::resources::Resource getResource( String key);
		static Dynamic getResource_dyn();

};

} // end namespace arrow
} // end namespace scheduler

#endif /* INCLUDED_arrow_scheduler_ResourceManager */ 
