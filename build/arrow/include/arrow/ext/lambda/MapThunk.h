#ifndef INCLUDED_arrow_ext_lambda_MapThunk
#define INCLUDED_arrow_ext_lambda_MapThunk

#include <hxObject.h>

#include <arrow/AsyncArrow.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS3(arrow,ext,lambda,MapThunk)
namespace arrow{
namespace ext{
namespace lambda{


class MapThunk_obj : public arrow::AsyncArrow_obj
{
	public:
		typedef arrow::AsyncArrow_obj super;
		typedef MapThunk_obj OBJ_;

	protected:
		MapThunk_obj();
		Void __construct(arrow::AsyncArrow $t1,Dynamic $t2);

	public:
		static hxObjectPtr<MapThunk_obj > __new(arrow::AsyncArrow $t1,Dynamic $t2);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~MapThunk_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"MapThunk",8); }

		virtual String getName( );
		Dynamic getName_dyn();

};

} // end namespace arrow
} // end namespace ext
} // end namespace lambda

#endif /* INCLUDED_arrow_ext_lambda_MapThunk */ 
