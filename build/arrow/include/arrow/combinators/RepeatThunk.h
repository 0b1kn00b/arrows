#ifndef INCLUDED_arrow_combinators_RepeatThunk
#define INCLUDED_arrow_combinators_RepeatThunk

#include <hxObject.h>

#include <arrow/AsyncArrow.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS2(arrow,combinators,RepeatThunk)
namespace arrow{
namespace combinators{


class RepeatThunk_obj : public arrow::AsyncArrow_obj
{
	public:
		typedef arrow::AsyncArrow_obj super;
		typedef RepeatThunk_obj OBJ_;

	protected:
		RepeatThunk_obj();
		Void __construct(arrow::AsyncArrow $t1);

	public:
		static hxObjectPtr<RepeatThunk_obj > __new(arrow::AsyncArrow $t1);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~RepeatThunk_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"RepeatThunk",11); }

};

} // end namespace arrow
} // end namespace combinators

#endif /* INCLUDED_arrow_combinators_RepeatThunk */ 
