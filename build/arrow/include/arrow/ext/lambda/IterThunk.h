#ifndef INCLUDED_arrow_ext_lambda_IterThunk
#define INCLUDED_arrow_ext_lambda_IterThunk

#include <hxObject.h>

#include <arrow/AsyncArrow.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS3(arrow,ext,lambda,IterThunk)
namespace arrow{
namespace ext{
namespace lambda{


class IterThunk_obj : public arrow::AsyncArrow_obj
{
	public:
		typedef arrow::AsyncArrow_obj super;
		typedef IterThunk_obj OBJ_;

	protected:
		IterThunk_obj();
		Void __construct(Dynamic $t1,Dynamic $t2);

	public:
		static hxObjectPtr<IterThunk_obj > __new(Dynamic $t1,Dynamic $t2);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~IterThunk_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"IterThunk",9); }

};

} // end namespace arrow
} // end namespace ext
} // end namespace lambda

#endif /* INCLUDED_arrow_ext_lambda_IterThunk */ 
