#ifndef INCLUDED_arrow_combinators_DelayArrow
#define INCLUDED_arrow_combinators_DelayArrow

#include <hxObject.h>

#include <arrow/AsyncArrow.h>
DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS2(arrow,combinators,DelayArrow)
DECLARE_CLASS2(data,type,Time)
namespace arrow{
namespace combinators{


class DelayArrow_obj : public arrow::AsyncArrow_obj
{
	public:
		typedef arrow::AsyncArrow_obj super;
		typedef DelayArrow_obj OBJ_;

	protected:
		DelayArrow_obj();
		Void __construct(data::type::Time time);

	public:
		static hxObjectPtr<DelayArrow_obj > __new(data::type::Time time);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~DelayArrow_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"DelayArrow",10); }

		data::type::Time time;
		Dynamic cancel;
	Dynamic &cancel_dyn() { return cancel;}
};

} // end namespace arrow
} // end namespace combinators

#endif /* INCLUDED_arrow_combinators_DelayArrow */ 
