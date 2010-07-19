#ifndef INCLUDED_arrow_ext_lambda_FoldThunk
#define INCLUDED_arrow_ext_lambda_FoldThunk

#include <hxObject.h>

#include <arrow/AsyncArrow.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS3(arrow,ext,lambda,FoldThunk)
namespace arrow{
namespace ext{
namespace lambda{


class FoldThunk_obj : public arrow::AsyncArrow_obj
{
	public:
		typedef arrow::AsyncArrow_obj super;
		typedef FoldThunk_obj OBJ_;

	protected:
		FoldThunk_obj();
		Void __construct(Dynamic $t1,Dynamic $t2,Dynamic $t3);

	public:
		static hxObjectPtr<FoldThunk_obj > __new(Dynamic $t1,Dynamic $t2,Dynamic $t3);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~FoldThunk_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"FoldThunk",9); }

};

} // end namespace arrow
} // end namespace ext
} // end namespace lambda

#endif /* INCLUDED_arrow_ext_lambda_FoldThunk */ 
