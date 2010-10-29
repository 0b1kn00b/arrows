#ifndef INCLUDED_haxe_functional_arrows_ArrowInstance
#define INCLUDED_haxe_functional_arrows_ArrowInstance

#include <hxcpp.h>

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS3(haxe,functional,arrows,ArrowInstance)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,ProgressArrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,ScheduleManager)
HX_DECLARE_CLASS2(hsl,haxe,Signaler)
namespace haxe{
namespace functional{
namespace arrows{


class ArrowInstance_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArrowInstance_obj OBJ_;
		ArrowInstance_obj();
		Void __construct(::haxe::functional::arrows::Arrow asynca,Dynamic x);

	public:
		static hx::ObjectPtr< ArrowInstance_obj > __new(::haxe::functional::arrows::Arrow asynca,Dynamic x);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ArrowInstance_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ArrowInstance"); }

		::haxe::functional::arrows::combinators::ProgressArrow progress; /* REM */ 
		::List stack; /* REM */ 
		::String uuid; /* REM */ 
		Array< Dynamic > cancellers; /* REM */ 
		::haxe::functional::arrows::schedule::ScheduleManager manager; /* REM */ 
		virtual Void cont( Dynamic x,::haxe::functional::arrows::Arrow f,::haxe::functional::arrows::Arrow g,Dynamic predicate);
		Dynamic cont_dyn();

		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual Void signal( ::String name,Dynamic detail);
		Dynamic signal_dyn();

		virtual Void addCanceller( Dynamic canceller);
		Dynamic addCanceller_dyn();

		virtual Void advance( Dynamic canceller);
		Dynamic advance_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows

#endif /* INCLUDED_haxe_functional_arrows_ArrowInstance */ 
