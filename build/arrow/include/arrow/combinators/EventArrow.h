#ifndef INCLUDED_arrow_combinators_EventArrow
#define INCLUDED_arrow_combinators_EventArrow

#include <hxObject.h>

#include <arrow/AsyncArrow.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS2(arrow,combinators,EventArrow)
namespace arrow{
namespace combinators{


class EventArrow_obj : public arrow::AsyncArrow_obj
{
	public:
		typedef arrow::AsyncArrow_obj super;
		typedef EventArrow_obj OBJ_;

	protected:
		EventArrow_obj();
		Void __construct(Dynamic $t3);

	public:
		static hxObjectPtr<EventArrow_obj > __new(Dynamic $t3);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~EventArrow_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"EventArrow",10); }

		Dynamic trigger;
};

} // end namespace arrow
} // end namespace combinators

#endif /* INCLUDED_arrow_combinators_EventArrow */ 
