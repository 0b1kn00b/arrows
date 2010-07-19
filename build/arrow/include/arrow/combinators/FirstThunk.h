#ifndef INCLUDED_arrow_combinators_FirstThunk
#define INCLUDED_arrow_combinators_FirstThunk

#include <hxObject.h>

#include <arrow/combinators/ProductThunk.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS2(arrow,combinators,FirstThunk)
DECLARE_CLASS2(arrow,combinators,ProductThunk)
namespace arrow{
namespace combinators{


class FirstThunk_obj : public arrow::combinators::ProductThunk_obj
{
	public:
		typedef arrow::combinators::ProductThunk_obj super;
		typedef FirstThunk_obj OBJ_;

	protected:
		FirstThunk_obj();
		Void __construct(arrow::AsyncArrow f);

	public:
		static hxObjectPtr<FirstThunk_obj > __new(arrow::AsyncArrow f);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~FirstThunk_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"FirstThunk",10); }

		virtual String getName( );
		Dynamic getName_dyn();

};

} // end namespace arrow
} // end namespace combinators

#endif /* INCLUDED_arrow_combinators_FirstThunk */ 
