#ifndef INCLUDED_haxe_functional_arrows_schedule_BaseScheduler
#define INCLUDED_haxe_functional_arrows_schedule_BaseScheduler

#include <hxcpp.h>

#include <haxe/functional/arrows/schedule/Scheduler.h>
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,BaseScheduler)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,ScheduleManager)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,Scheduler)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{


class BaseScheduler_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BaseScheduler_obj OBJ_;
		BaseScheduler_obj();
		Void __construct(::haxe::functional::arrows::schedule::ScheduleManager manager);

	public:
		static hx::ObjectPtr< BaseScheduler_obj > __new(::haxe::functional::arrows::schedule::ScheduleManager manager);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~BaseScheduler_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::haxe::functional::arrows::schedule::Scheduler_obj *()
			{ return new ::haxe::functional::arrows::schedule::Scheduler_delegate_< BaseScheduler_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("BaseScheduler"); }

		::haxe::functional::arrows::schedule::ScheduleManager manager; /* REM */ 
		Dynamic invoke; /* REM */ 
	Dynamic &invoke_dyn() { return invoke;}
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule

#endif /* INCLUDED_haxe_functional_arrows_schedule_BaseScheduler */ 
