#ifndef INCLUDED_arrow_ext_lambda_FilterArrow
#define INCLUDED_arrow_ext_lambda_FilterArrow

#include <hxObject.h>

#include <arrow/AsyncArrow.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS3(arrow,ext,lambda,FilterArrow)
namespace arrow{
namespace ext{
namespace lambda{


class FilterArrow_obj : public arrow::AsyncArrow_obj
{
	public:
		typedef arrow::AsyncArrow_obj super;
		typedef FilterArrow_obj OBJ_;

	protected:
		FilterArrow_obj();
		Void __construct(Dynamic $t2,Dynamic __o_$t3,Dynamic pos);

	public:
		static hxObjectPtr<FilterArrow_obj > __new(Dynamic $t2,Dynamic __o_$t3,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~FilterArrow_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"FilterArrow",11); }

		Dynamic f;
	Dynamic &f_dyn() { return f;}
};

} // end namespace arrow
} // end namespace ext
} // end namespace lambda

#endif /* INCLUDED_arrow_ext_lambda_FilterArrow */ 
