#ifndef INCLUDED_arrow_combinators_ArrThunk
#define INCLUDED_arrow_combinators_ArrThunk

#include <hxObject.h>

#include <arrow/AsyncArrow.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS2(arrow,combinators,ArrThunk)
namespace arrow{
namespace combinators{


class ArrThunk_obj : public arrow::AsyncArrow_obj
{
	public:
		typedef arrow::AsyncArrow_obj super;
		typedef ArrThunk_obj OBJ_;

	protected:
		ArrThunk_obj();
		Void __construct(Dynamic $t1);

	public:
		static hxObjectPtr<ArrThunk_obj > __new(Dynamic $t1);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~ArrThunk_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"ArrThunk",8); }

		virtual String getName( );
		Dynamic getName_dyn();

};

} // end namespace arrow
} // end namespace combinators

#endif /* INCLUDED_arrow_combinators_ArrThunk */ 
