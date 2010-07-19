#ifndef INCLUDED_arrow_combinators_SecondThunk
#define INCLUDED_arrow_combinators_SecondThunk

#include <hxObject.h>

#include <arrow/combinators/ProductThunk.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS2(arrow,combinators,ProductThunk)
DECLARE_CLASS2(arrow,combinators,SecondThunk)
namespace arrow{
namespace combinators{


class SecondThunk_obj : public arrow::combinators::ProductThunk_obj
{
	public:
		typedef arrow::combinators::ProductThunk_obj super;
		typedef SecondThunk_obj OBJ_;

	protected:
		SecondThunk_obj();
		Void __construct(arrow::AsyncArrow g);

	public:
		static hxObjectPtr<SecondThunk_obj > __new(arrow::AsyncArrow g);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~SecondThunk_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"SecondThunk",11); }

		virtual String getName( );
		Dynamic getName_dyn();

};

} // end namespace arrow
} // end namespace combinators

#endif /* INCLUDED_arrow_combinators_SecondThunk */ 
