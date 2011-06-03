#ifndef INCLUDED_colhx_sort_DListInsertionSort
#define INCLUDED_colhx_sort_DListInsertionSort

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(colhx,Collection)
HX_DECLARE_CLASS1(colhx,DList)
HX_DECLARE_CLASS2(colhx,sort,DListInsertionSort)
namespace colhx{
namespace sort{


class DListInsertionSort_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DListInsertionSort_obj OBJ_;
		DListInsertionSort_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< DListInsertionSort_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DListInsertionSort_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("DListInsertionSort"); }

		static Void sort( ::colhx::DList value,Dynamic comparator);
		static Dynamic sort_dyn();

};

} // end namespace colhx
} // end namespace sort

#endif /* INCLUDED_colhx_sort_DListInsertionSort */ 
