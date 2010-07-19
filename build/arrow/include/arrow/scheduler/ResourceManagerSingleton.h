#ifndef INCLUDED_arrow_scheduler_ResourceManagerSingleton
#define INCLUDED_arrow_scheduler_ResourceManagerSingleton

#include <hxObject.h>

#include <core/AbstractLocator.h>
DECLARE_CLASS2(arrow,scheduler,ResourceManagerSingleton)
DECLARE_CLASS1(core,AbstractLocator)
DECLARE_CLASS1(core,LifeCycle)
namespace arrow{
namespace scheduler{


class ResourceManagerSingleton_obj : public core::AbstractLocator_obj
{
	public:
		typedef core::AbstractLocator_obj super;
		typedef ResourceManagerSingleton_obj OBJ_;

	protected:
		ResourceManagerSingleton_obj();
		Void __construct();

	public:
		static hxObjectPtr<ResourceManagerSingleton_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~ResourceManagerSingleton_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"ResourceManagerSingleton",24); }

		int index;
		Array<String > data;
		static arrow::scheduler::ResourceManagerSingleton instance;
		static arrow::scheduler::ResourceManagerSingleton getInstance( );
		static Dynamic getInstance_dyn();

};

} // end namespace arrow
} // end namespace scheduler

#endif /* INCLUDED_arrow_scheduler_ResourceManagerSingleton */ 
