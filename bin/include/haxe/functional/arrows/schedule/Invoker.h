#ifndef INCLUDED_haxe_functional_arrows_schedule_Invoker
#define INCLUDED_haxe_functional_arrows_schedule_Invoker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,Invoker)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,ScheduleManager)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{


class Invoker_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Invoker_obj OBJ_;
		Invoker_obj();
		Void __construct(::haxe::functional::arrows::schedule::ScheduleManager scheduler);

	public:
		static hx::ObjectPtr< Invoker_obj > __new(::haxe::functional::arrows::schedule::ScheduleManager scheduler);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Invoker_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Invoker"); }

		::haxe::functional::arrows::schedule::ScheduleManager scheduler; /* REM */ 
		Dynamic error;
		inline Dynamic &error_dyn() {return error; }

		virtual Dynamic invoke( );
		Dynamic invoke_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule

#endif /* INCLUDED_haxe_functional_arrows_schedule_Invoker */ 
