#ifndef INCLUDED_arrow_AsyncArrowInstance
#define INCLUDED_arrow_AsyncArrowInstance

#include <hxObject.h>

DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS1(arrow,AsyncArrowInstance)
DECLARE_CLASS2(arrow,combinators,ProgressArrow)
DECLARE_CLASS3(arrow,scheduler,resources,Resource)
DECLARE_CLASS1(data,XQueue)
DECLARE_CLASS1(event,EventDispatcher)
DECLARE_CLASS1(event,EventListener)
DECLARE_CLASS2(ion,log,Log)
DECLARE_CLASS1(util,Counter)
namespace arrow{


class AsyncArrowInstance_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef AsyncArrowInstance_obj OBJ_;

	protected:
		AsyncArrowInstance_obj();
		Void __construct(arrow::AsyncArrow asynca,Dynamic x);

	public:
		static hxObjectPtr<AsyncArrowInstance_obj > __new(arrow::AsyncArrow asynca,Dynamic x);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~AsyncArrowInstance_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"AsyncArrowInstance",18); }

		arrow::combinators::ProgressArrow progress;
		Array<Dynamic > cancellers;
		Dynamic arguments;
		util::Counter calldepthCounter;
		data::XQueue queue;
		String uuid;
		arrow::scheduler::resources::Resource resource;
		virtual Void cont( Dynamic x,arrow::AsyncArrow $t4,arrow::AsyncArrow g);
		Dynamic cont_dyn();

		virtual Void enqueueMethods( arrow::AsyncArrow value0,arrow::AsyncArrow value1);
		Dynamic enqueueMethods_dyn();

		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual Void signal( String name,Dynamic detail);
		Dynamic signal_dyn();

		virtual Void addCanceller( Dynamic canceller);
		Dynamic addCanceller_dyn();

		virtual Void advance( Dynamic canceller);
		Dynamic advance_dyn();

		virtual String toString( );
		Dynamic toString_dyn();

		ion::log::Log log;
		static int calldepthlimit;
		static int timelimit;
		static int interval;
};

} // end namespace arrow

#endif /* INCLUDED_arrow_AsyncArrowInstance */ 
