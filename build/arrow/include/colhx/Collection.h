#ifndef INCLUDED_colhx_Collection
#define INCLUDED_colhx_Collection

#include <hxObject.h>

DECLARE_CLASS1(colhx,Collection)
namespace colhx{


class Collection_obj : public virtual hxObject
{
	public:
	INTERFACE_DEF
		
		virtual int getLength( )=0;
		Dynamic getLength_dyn();
		virtual bool contains( Dynamic obj)=0;
		Dynamic contains_dyn();
		virtual Void clear( )=0;
		Dynamic clear_dyn();
		virtual bool isEmpty( )=0;
		Dynamic isEmpty_dyn();
		virtual Array<Dynamic > toArray( )=0;
		Dynamic toArray_dyn();
		virtual Dynamic iterator( )=0;
		Dynamic iterator_dyn();
};

} // end namespace colhx

#endif /* INCLUDED_colhx_Collection */ 
