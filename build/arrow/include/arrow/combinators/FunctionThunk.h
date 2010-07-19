#ifndef INCLUDED_arrow_combinators_FunctionThunk
#define INCLUDED_arrow_combinators_FunctionThunk

#include <hxObject.h>

#include <arrow/AsyncArrow.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS2(arrow,combinators,FunctionThunk)
namespace arrow{
namespace combinators{


class FunctionThunk_obj : public arrow::AsyncArrow_obj
{
	public:
		typedef arrow::AsyncArrow_obj super;
		typedef FunctionThunk_obj OBJ_;

	protected:
		FunctionThunk_obj();
		Void __construct(Dynamic $t1);

	public:
		static hxObjectPtr<FunctionThunk_obj > __new(Dynamic $t1);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~FunctionThunk_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"FunctionThunk",13); }

		virtual String getName( );
		Dynamic getName_dyn();

};

} // end namespace arrow
} // end namespace combinators

#endif /* INCLUDED_arrow_combinators_FunctionThunk */ 
