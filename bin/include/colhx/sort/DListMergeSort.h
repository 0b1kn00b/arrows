#ifndef INCLUDED_colhx_sort_DListMergeSort
#define INCLUDED_colhx_sort_DListMergeSort

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(colhx,Collection)
HX_DECLARE_CLASS1(colhx,DList)
HX_DECLARE_CLASS2(colhx,sort,DListMergeSort)
namespace colhx{
namespace sort{


class DListMergeSort_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DListMergeSort_obj OBJ_;
		DListMergeSort_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< DListMergeSort_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DListMergeSort_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("DListMergeSort"); }

		static Void sort( ::colhx::DList value,Dynamic comparator);
		static Dynamic sort_dyn();

};

} // end namespace colhx
} // end namespace sort

#endif /* INCLUDED_colhx_sort_DListMergeSort */ 
