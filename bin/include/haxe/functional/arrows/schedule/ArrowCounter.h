#ifndef INCLUDED_haxe_functional_arrows_schedule_ArrowCounter
#define INCLUDED_haxe_functional_arrows_schedule_ArrowCounter

#include <hxcpp.h>

HX_DECLARE_CLASS3(haxe,functional,arrows,ArrowInstance)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,ArrowCounter)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,ScheduleManager)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{


class ArrowCounter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArrowCounter_obj OBJ_;
		ArrowCounter_obj();
		Void __construct(::haxe::functional::arrows::schedule::ScheduleManager manager);

	public:
		static hx::ObjectPtr< ArrowCounter_obj > __new(::haxe::functional::arrows::schedule::ScheduleManager manager);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ArrowCounter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ArrowCounter"); }

		::haxe::functional::arrows::schedule::ScheduleManager manager; /* REM */ 
		int length; /* REM */ 
		virtual int getLength( );
		Dynamic getLength_dyn();

		virtual Void increment( ::String value,::haxe::functional::arrows::ArrowInstance a);
		Dynamic increment_dyn();

		virtual Void decrement( ::String value);
		Dynamic decrement_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule

#endif /* INCLUDED_haxe_functional_arrows_schedule_ArrowCounter */ 
