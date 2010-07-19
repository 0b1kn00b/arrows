#ifndef INCLUDED_arrow_combinators_ComposeThunk
#define INCLUDED_arrow_combinators_ComposeThunk

#include <hxObject.h>

#include <arrow/AsyncArrow.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS2(arrow,combinators,ComposeThunk)
namespace arrow{
namespace combinators{


class ComposeThunk_obj : public arrow::AsyncArrow_obj
{
	public:
		typedef arrow::AsyncArrow_obj super;
		typedef ComposeThunk_obj OBJ_;

	protected:
		ComposeThunk_obj();
		Void __construct(arrow::AsyncArrow $t1,arrow::AsyncArrow $t2);

	public:
		static hxObjectPtr<ComposeThunk_obj > __new(arrow::AsyncArrow $t1,arrow::AsyncArrow $t2);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~ComposeThunk_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"ComposeThunk",12); }

		virtual String getName( );
		Dynamic getName_dyn();

};

} // end namespace arrow
} // end namespace combinators

#endif /* INCLUDED_arrow_combinators_ComposeThunk */ 
