#ifndef INCLUDED_arrow_ext_lambda_IterArrow
#define INCLUDED_arrow_ext_lambda_IterArrow

#include <hxObject.h>

#include <arrow/AsyncArrow.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS3(arrow,ext,lambda,IterArrow)
namespace arrow{
namespace ext{
namespace lambda{


class IterArrow_obj : public arrow::AsyncArrow_obj
{
	public:
		typedef arrow::AsyncArrow_obj super;
		typedef IterArrow_obj OBJ_;

	protected:
		IterArrow_obj();
		Void __construct(Dynamic $t2);

	public:
		static hxObjectPtr<IterArrow_obj > __new(Dynamic $t2);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~IterArrow_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"IterArrow",9); }

};

} // end namespace arrow
} // end namespace ext
} // end namespace lambda

#endif /* INCLUDED_arrow_ext_lambda_IterArrow */ 
