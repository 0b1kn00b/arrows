#ifndef INCLUDED_arrow_combinators_OrThunk
#define INCLUDED_arrow_combinators_OrThunk

#include <hxObject.h>

#include <arrow/AsyncArrow.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS2(arrow,combinators,OrThunk)
namespace arrow{
namespace combinators{


class OrThunk_obj : public arrow::AsyncArrow_obj
{
	public:
		typedef arrow::AsyncArrow_obj super;
		typedef OrThunk_obj OBJ_;

	protected:
		OrThunk_obj();
		Void __construct(Dynamic __o_trigger,arrow::AsyncArrow $t2,arrow::AsyncArrow $t3);

	public:
		static hxObjectPtr<OrThunk_obj > __new(Dynamic __o_trigger,arrow::AsyncArrow $t2,arrow::AsyncArrow $t3);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~OrThunk_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"OrThunk",7); }

};

} // end namespace arrow
} // end namespace combinators

#endif /* INCLUDED_arrow_combinators_OrThunk */ 
