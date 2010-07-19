#ifndef INCLUDED_arrow_combinators_FanoutThunk
#define INCLUDED_arrow_combinators_FanoutThunk

#include <hxObject.h>

#include <arrow/combinators/ComposeThunk.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS2(arrow,combinators,ComposeThunk)
DECLARE_CLASS2(arrow,combinators,FanoutThunk)
namespace arrow{
namespace combinators{


class FanoutThunk_obj : public arrow::combinators::ComposeThunk_obj
{
	public:
		typedef arrow::combinators::ComposeThunk_obj super;
		typedef FanoutThunk_obj OBJ_;

	protected:
		FanoutThunk_obj();
		Void __construct(arrow::AsyncArrow f,arrow::AsyncArrow g);

	public:
		static hxObjectPtr<FanoutThunk_obj > __new(arrow::AsyncArrow f,arrow::AsyncArrow g);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~FanoutThunk_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"FanoutThunk",11); }

		virtual String getName( );
		Dynamic getName_dyn();

};

} // end namespace arrow
} // end namespace combinators

#endif /* INCLUDED_arrow_combinators_FanoutThunk */ 
