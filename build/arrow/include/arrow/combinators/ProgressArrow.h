#ifndef INCLUDED_arrow_combinators_ProgressArrow
#define INCLUDED_arrow_combinators_ProgressArrow

#include <hxObject.h>

#include <arrow/AsyncArrow.h>
#include <event/EventDispatcher.h>
#include <event/EventListener.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS1(arrow,AsyncArrowInstance)
DECLARE_CLASS2(arrow,combinators,ProgressArrow)
DECLARE_CLASS1(event,Event)
DECLARE_CLASS1(event,EventDispatcher)
DECLARE_CLASS1(event,EventListener)
DECLARE_CLASS1(event,EventSystem)
namespace arrow{
namespace combinators{


class ProgressArrow_obj : public arrow::AsyncArrow_obj, public event::EventDispatcher_obj, public event::EventListener_obj
{
	public:
		typedef arrow::AsyncArrow_obj super;
		typedef ProgressArrow_obj OBJ_;

	protected:
		ProgressArrow_obj();
		Void __construct(arrow::AsyncArrowInstance instance);

	public:
		static hxObjectPtr<ProgressArrow_obj > __new(arrow::AsyncArrowInstance instance);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~ProgressArrow_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"ProgressArrow",13); }

		arrow::AsyncArrowInstance instance;
		event::EventSystem event_sys;
		virtual Void cancel( );
		Dynamic cancel_dyn();

		virtual Void addEventListener( String name,Dynamic method,Dynamic params);
		Dynamic addEventListener_dyn();

		virtual Void removeEventListener( String name,Dynamic method,Dynamic params);
		Dynamic removeEventListener_dyn();

		virtual Void dispatchEvent( event::Event e);
		Dynamic dispatchEvent_dyn();

};

} // end namespace arrow
} // end namespace combinators

#endif /* INCLUDED_arrow_combinators_ProgressArrow */ 
