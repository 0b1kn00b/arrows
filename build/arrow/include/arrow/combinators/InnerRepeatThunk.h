#ifndef INCLUDED_arrow_combinators_InnerRepeatThunk
#define INCLUDED_arrow_combinators_InnerRepeatThunk

#include <hxObject.h>

#include <arrow/AsyncArrow.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS1(arrow,AsyncArrowInstance)
DECLARE_CLASS2(arrow,combinators,InnerRepeatThunk)
namespace arrow{
namespace combinators{


class InnerRepeatThunk_obj : public arrow::AsyncArrow_obj
{
	public:
		typedef arrow::AsyncArrow_obj super;
		typedef InnerRepeatThunk_obj OBJ_;

	protected:
		InnerRepeatThunk_obj();
		Void __construct(arrow::AsyncArrow $t1,arrow::AsyncArrowInstance a);

	public:
		static hxObjectPtr<InnerRepeatThunk_obj > __new(arrow::AsyncArrow $t1,arrow::AsyncArrowInstance a);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~InnerRepeatThunk_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"InnerRepeatThunk",16); }

		bool cancelled;
		Dynamic cancel;
		virtual String getName( );
		Dynamic getName_dyn();

};

} // end namespace arrow
} // end namespace combinators

#endif /* INCLUDED_arrow_combinators_InnerRepeatThunk */ 
