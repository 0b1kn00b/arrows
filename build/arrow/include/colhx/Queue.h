#ifndef INCLUDED_colhx_Queue
#define INCLUDED_colhx_Queue

#include <hxObject.h>

#include <colhx/Collection.h>
DECLARE_CLASS0(List)
DECLARE_CLASS1(colhx,Collection)
DECLARE_CLASS1(colhx,Queue)
namespace colhx{


class Queue_obj : public virtual hxObject, public colhx::Collection_obj
{
	public:
		typedef hxObject super;
		typedef Queue_obj OBJ_;

	protected:
		Queue_obj();
		Void __construct();

	public:
		static hxObjectPtr<Queue_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Queue_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Queue",5); }

		int length;
		List list;
		virtual Dynamic getHead( );
		Dynamic getHead_dyn();

		virtual Dynamic getTail( );
		Dynamic getTail_dyn();

		virtual Void enqueue( Dynamic item);
		Dynamic enqueue_dyn();

		virtual Dynamic dequeue( );
		Dynamic dequeue_dyn();

		virtual bool remove( Dynamic obj);
		Dynamic remove_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual int getLength( );
		Dynamic getLength_dyn();

		virtual bool isEmpty( );
		Dynamic isEmpty_dyn();

		virtual bool contains( Dynamic obj);
		Dynamic contains_dyn();

		virtual Array<Dynamic > toArray( );
		Dynamic toArray_dyn();

		virtual String toString( );
		Dynamic toString_dyn();

		virtual String dump( );
		Dynamic dump_dyn();

		virtual Dynamic iterator( );
		Dynamic iterator_dyn();

		virtual List getInternalList( );
		Dynamic getInternalList_dyn();

		virtual colhx::Queue copy( );
		Dynamic copy_dyn();

};

} // end namespace colhx

#endif /* INCLUDED_colhx_Queue */ 
