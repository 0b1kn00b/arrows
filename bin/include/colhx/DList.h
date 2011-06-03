#ifndef INCLUDED_colhx_DList
#define INCLUDED_colhx_DList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <colhx/Collection.h>
HX_DECLARE_CLASS1(colhx,Collection)
HX_DECLARE_CLASS1(colhx,DIterator)
HX_DECLARE_CLASS1(colhx,DList)
HX_DECLARE_CLASS1(colhx,DListNode)
namespace colhx{


class DList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DList_obj OBJ_;
		DList_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< DList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DList_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::colhx::Collection_obj *()
			{ return new ::colhx::Collection_delegate_< DList_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("DList"); }

		::colhx::DListNode head; /* REM */ 
		::colhx::DListNode tail; /* REM */ 
		int length; /* REM */ 
		int _length; /* REM */ 
		virtual int getLength( );
		Dynamic getLength_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual bool isEmpty( );
		Dynamic isEmpty_dyn();

		virtual ::colhx::DListNode add( Dynamic value);
		Dynamic add_dyn();

		virtual Void addAll( Dynamic value);
		Dynamic addAll_dyn();

		virtual ::colhx::DListNode push( Dynamic value);
		Dynamic push_dyn();

		virtual Void pushAll( Dynamic value);
		Dynamic pushAll_dyn();

		virtual ::colhx::DListNode insertBefore( ::colhx::DIterator itr,Dynamic value);
		Dynamic insertBefore_dyn();

		virtual ::colhx::DListNode insertAfter( ::colhx::DIterator itr,Dynamic value);
		Dynamic insertAfter_dyn();

		virtual bool removeAtCursor( ::colhx::DIterator itr);
		Dynamic removeAtCursor_dyn();

		virtual bool remove( Dynamic item);
		Dynamic remove_dyn();

		virtual bool contains( Dynamic _tmp_obj);
		Dynamic contains_dyn();

		virtual Dynamic removeHead( );
		Dynamic removeHead_dyn();

		virtual Dynamic removeTail( );
		Dynamic removeTail_dyn();

		virtual Void merge( Array< ::colhx::DList > value);
		Dynamic merge_dyn();

		virtual ::colhx::DList concat( Array< ::colhx::DList > value);
		Dynamic concat_dyn();

		virtual ::colhx::DIterator getDualIterator( );
		Dynamic getDualIterator_dyn();

		virtual Dynamic toArray( );
		Dynamic toArray_dyn();

		virtual Dynamic iterator( );
		Dynamic iterator_dyn();

		virtual Void sort( Dynamic merge,Dynamic comparator);
		Dynamic sort_dyn();

		virtual ::colhx::DListNode nodeOf( Dynamic value,::colhx::DIterator from);
		Dynamic nodeOf_dyn();

		virtual ::colhx::DListNode lastNodeOf( Dynamic value,::colhx::DIterator from);
		Dynamic lastNodeOf_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::String dump( );
		Dynamic dump_dyn();

};

} // end namespace colhx

#endif /* INCLUDED_colhx_DList */ 
