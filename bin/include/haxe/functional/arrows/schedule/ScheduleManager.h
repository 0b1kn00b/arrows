#ifndef INCLUDED_haxe_functional_arrows_schedule_ScheduleManager
#define INCLUDED_haxe_functional_arrows_schedule_ScheduleManager

#include <hxcpp.h>

HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS4(haxe,functional,arrows,pattern,Subject)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,ArrowCounter)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,Buffer)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,Invoker)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,ScheduleManager)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,Scheduler)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{


class ScheduleManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ScheduleManager_obj OBJ_;
		ScheduleManager_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< ScheduleManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ScheduleManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ScheduleManager"); }

		::haxe::functional::arrows::schedule::Scheduler scheduler; /* REM */ 
		::haxe::functional::arrows::schedule::Buffer buffer; /* REM */ 
		::haxe::functional::arrows::schedule::Invoker invoker; /* REM */ 
		::haxe::functional::arrows::schedule::ArrowCounter pending; /* REM */ 
		bool autoTerminate; /* REM */ 
		double interval; /* REM */ 
		int timeout; /* REM */ 
		::Hash instances; /* REM */ 
		virtual ::haxe::functional::arrows::schedule::Scheduler getDefaultReactor( );
		Dynamic getDefaultReactor_dyn();

		static ::haxe::functional::arrows::schedule::ScheduleManager instance; /* REM */ 
		static ::haxe::functional::arrows::schedule::ScheduleManager getInstance( );
		static Dynamic getInstance_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule

#endif /* INCLUDED_haxe_functional_arrows_schedule_ScheduleManager */ 
