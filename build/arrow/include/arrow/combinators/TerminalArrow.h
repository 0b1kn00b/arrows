#ifndef INCLUDED_arrow_combinators_TerminalArrow
#define INCLUDED_arrow_combinators_TerminalArrow

#include <hxObject.h>

#include <arrow/AsyncArrow.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS2(arrow,combinators,TerminalArrow)
namespace arrow{
namespace combinators{


class TerminalArrow_obj : public arrow::AsyncArrow_obj
{
	public:
		typedef arrow::AsyncArrow_obj super;
		typedef TerminalArrow_obj OBJ_;

	protected:
		TerminalArrow_obj();
		Void __construct();

	public:
		static hxObjectPtr<TerminalArrow_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~TerminalArrow_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"TerminalArrow",13); }

		virtual String getName( );
		Dynamic getName_dyn();

};

} // end namespace arrow
} // end namespace combinators

#endif /* INCLUDED_arrow_combinators_TerminalArrow */ 
