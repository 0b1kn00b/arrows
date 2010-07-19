#ifndef INCLUDED_arrow_ext_lambda_MapArrow
#define INCLUDED_arrow_ext_lambda_MapArrow

#include <hxObject.h>

#include <arrow/AsyncArrow.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS3(arrow,ext,lambda,MapArrow)
namespace arrow{
namespace ext{
namespace lambda{


class MapArrow_obj : public arrow::AsyncArrow_obj
{
	public:
		typedef arrow::AsyncArrow_obj super;
		typedef MapArrow_obj OBJ_;

	protected:
		MapArrow_obj();
		Void __construct(Dynamic $t2);

	public:
		static hxObjectPtr<MapArrow_obj > __new(Dynamic $t2);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~MapArrow_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"MapArrow",8); }

};

} // end namespace arrow
} // end namespace ext
} // end namespace lambda

#endif /* INCLUDED_arrow_ext_lambda_MapArrow */ 
