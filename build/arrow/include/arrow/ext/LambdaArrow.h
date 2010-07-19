#ifndef INCLUDED_arrow_ext_LambdaArrow
#define INCLUDED_arrow_ext_LambdaArrow

#include <hxObject.h>

DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS2(arrow,ext,LambdaArrow)
DECLARE_CLASS3(arrow,ext,lambda,FilterThunk)
DECLARE_CLASS3(arrow,ext,lambda,FoldThunk)
namespace arrow{
namespace ext{


class LambdaArrow_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef LambdaArrow_obj OBJ_;

	protected:
		LambdaArrow_obj();
		Void __construct();

	public:
		static hxObjectPtr<LambdaArrow_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~LambdaArrow_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"LambdaArrow",11); }

		static arrow::AsyncArrow iter( arrow::AsyncArrow self,Dynamic f);
		static Dynamic iter_dyn();

		static arrow::AsyncArrow map( arrow::AsyncArrow self,Dynamic f);
		static Dynamic map_dyn();

		static arrow::ext::lambda::FoldThunk fold( arrow::AsyncArrow self,Dynamic first,Dynamic f);
		static Dynamic fold_dyn();

		static arrow::ext::lambda::FilterThunk filter( arrow::AsyncArrow self,Dynamic f,Dynamic inverse);
		static Dynamic filter_dyn();

		static arrow::ext::lambda::FoldThunk set( arrow::AsyncArrow self,Dynamic $t1);
		static Dynamic set_dyn();

};

} // end namespace arrow
} // end namespace ext

#endif /* INCLUDED_arrow_ext_LambdaArrow */ 
