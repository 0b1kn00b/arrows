#ifndef INCLUDED_arrow_combinators_BindThunk
#define INCLUDED_arrow_combinators_BindThunk

#include <hxObject.h>

#include <arrow/combinators/ComposeThunk.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS2(arrow,combinators,BindThunk)
DECLARE_CLASS2(arrow,combinators,ComposeThunk)
namespace arrow{
namespace combinators{


class BindThunk_obj : public arrow::combinators::ComposeThunk_obj
{
	public:
		typedef arrow::combinators::ComposeThunk_obj super;
		typedef BindThunk_obj OBJ_;

	protected:
		BindThunk_obj();
		Void __construct(arrow::AsyncArrow f,arrow::AsyncArrow g);

	public:
		static hxObjectPtr<BindThunk_obj > __new(arrow::AsyncArrow f,arrow::AsyncArrow g);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~BindThunk_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"BindThunk",9); }

		virtual String getName( );
		Dynamic getName_dyn();

};

} // end namespace arrow
} // end namespace combinators

#endif /* INCLUDED_arrow_combinators_BindThunk */ 
