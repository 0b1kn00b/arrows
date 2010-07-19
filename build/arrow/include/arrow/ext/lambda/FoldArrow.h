#ifndef INCLUDED_arrow_ext_lambda_FoldArrow
#define INCLUDED_arrow_ext_lambda_FoldArrow

#include <hxObject.h>

#include <arrow/AsyncArrow.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS3(arrow,ext,lambda,FoldArrow)
namespace arrow{
namespace ext{
namespace lambda{


class FoldArrow_obj : public arrow::AsyncArrow_obj
{
	public:
		typedef arrow::AsyncArrow_obj super;
		typedef FoldArrow_obj OBJ_;

	protected:
		FoldArrow_obj();
		Void __construct(Dynamic $t2,Dynamic $t3);

	public:
		static hxObjectPtr<FoldArrow_obj > __new(Dynamic $t2,Dynamic $t3);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~FoldArrow_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"FoldArrow",9); }

};

} // end namespace arrow
} // end namespace ext
} // end namespace lambda

#endif /* INCLUDED_arrow_ext_lambda_FoldArrow */ 
