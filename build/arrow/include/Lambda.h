#ifndef INCLUDED_Lambda
#define INCLUDED_Lambda

#include <hxObject.h>

DECLARE_CLASS0(Lambda)
DECLARE_CLASS0(List)


class Lambda_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef Lambda_obj OBJ_;

	protected:
		Lambda_obj();
		Void __construct();

	public:
		static hxObjectPtr<Lambda_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Lambda_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Lambda",6); }

		static Array<Dynamic > array( Dynamic it);
		static Dynamic array_dyn();

		static List list( Dynamic it);
		static Dynamic list_dyn();

		static List map( Dynamic it,Dynamic f);
		static Dynamic map_dyn();

		static List mapi( Dynamic it,Dynamic f);
		static Dynamic mapi_dyn();

		static bool has( Dynamic it,Dynamic elt,Dynamic cmp);
		static Dynamic has_dyn();

		static bool exists( Dynamic it,Dynamic f);
		static Dynamic exists_dyn();

		static bool foreach( Dynamic it,Dynamic f);
		static Dynamic foreach_dyn();

		static Void iter( Dynamic it,Dynamic f);
		static Dynamic iter_dyn();

		static List filter( Dynamic it,Dynamic f);
		static Dynamic filter_dyn();

		static Dynamic fold( Dynamic it,Dynamic f,Dynamic first);
		static Dynamic fold_dyn();

		static int count( Dynamic it);
		static Dynamic count_dyn();

		static bool empty( Dynamic it);
		static Dynamic empty_dyn();

};


#endif /* INCLUDED_Lambda */ 
