#ifndef INCLUDED_colhx_Collection
#define INCLUDED_colhx_Collection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(colhx,Collection)
namespace colhx{


class Collection_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Collection_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		
		virtual int getLength( )=0;
		Dynamic getLength_dyn();
		virtual bool contains( Dynamic obj)=0;
		Dynamic contains_dyn();
		virtual Void clear( )=0;
		Dynamic clear_dyn();
		virtual bool isEmpty( )=0;
		Dynamic isEmpty_dyn();
		virtual Dynamic toArray( )=0;
		Dynamic toArray_dyn();
		virtual Dynamic iterator( )=0;
		Dynamic iterator_dyn();
};

#define DELEGATE_colhx_Collection \
virtual int getLength( ) { return mDelegate->getLength();}  \
virtual Dynamic getLength_dyn() { return mDelegate->getLength_dyn();}  \
virtual bool contains( Dynamic obj) { return mDelegate->contains(obj);}  \
virtual Dynamic contains_dyn() { return mDelegate->contains_dyn();}  \
virtual Void clear( ) { return mDelegate->clear();}  \
virtual Dynamic clear_dyn() { return mDelegate->clear_dyn();}  \
virtual bool isEmpty( ) { return mDelegate->isEmpty();}  \
virtual Dynamic isEmpty_dyn() { return mDelegate->isEmpty_dyn();}  \
virtual Dynamic toArray( ) { return mDelegate->toArray();}  \
virtual Dynamic toArray_dyn() { return mDelegate->toArray_dyn();}  \
virtual Dynamic iterator( ) { return mDelegate->iterator();}  \
virtual Dynamic iterator_dyn() { return mDelegate->iterator_dyn();}  \


template<typename IMPL>
class Collection_delegate_ : public Collection_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Collection_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_colhx_Collection
};

} // end namespace colhx

#endif /* INCLUDED_colhx_Collection */ 
