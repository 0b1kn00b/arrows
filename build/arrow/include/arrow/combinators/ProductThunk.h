#ifndef INCLUDED_arrow_combinators_ProductThunk
#define INCLUDED_arrow_combinators_ProductThunk

#include <hxObject.h>

#include <arrow/AsyncArrow.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS2(arrow,combinators,ProductThunk)
namespace arrow{
namespace combinators{


class ProductThunk_obj : public arrow::AsyncArrow_obj
{
	public:
		typedef arrow::AsyncArrow_obj super;
		typedef ProductThunk_obj OBJ_;

	protected:
		ProductThunk_obj();
		Void __construct(arrow::AsyncArrow $t2,arrow::AsyncArrow $t3);

	public:
		static hxObjectPtr<ProductThunk_obj > __new(arrow::AsyncArrow $t2,arrow::AsyncArrow $t3);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~ProductThunk_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"ProductThunk",12); }

		virtual String getName( );
		Dynamic getName_dyn();

};

} // end namespace arrow
} // end namespace combinators

#endif /* INCLUDED_arrow_combinators_ProductThunk */ 
