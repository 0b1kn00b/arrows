#ifndef INCLUDED_haxe_data_collections_Collection
#define INCLUDED_haxe_data_collections_Collection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/Foldable.h>
HX_DECLARE_CLASS3(haxe,data,collections,Collection)
HX_DECLARE_CLASS2(haxe,functional,Foldable)
namespace haxe{
namespace data{
namespace collections{


class Collection_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Collection_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual int size( )=0;
		Dynamic size_dyn();
		virtual bool contains( Dynamic t)=0;
		Dynamic contains_dyn();
		virtual Dynamic add( Dynamic t)=0;
		Dynamic add_dyn();
		virtual Dynamic addAll( Dynamic t)=0;
		Dynamic addAll_dyn();
		virtual Dynamic remove( Dynamic t)=0;
		Dynamic remove_dyn();
		virtual Dynamic removeAll( Dynamic t)=0;
		Dynamic removeAll_dyn();
};

#define DELEGATE_haxe_data_collections_Collection \
virtual int size( ) { return mDelegate->size();}  \
virtual Dynamic size_dyn() { return mDelegate->size_dyn();}  \
virtual bool contains( Dynamic t) { return mDelegate->contains(t);}  \
virtual Dynamic contains_dyn() { return mDelegate->contains_dyn();}  \
virtual Dynamic add( Dynamic t) { return mDelegate->add(t);}  \
virtual Dynamic add_dyn() { return mDelegate->add_dyn();}  \
virtual Dynamic addAll( Dynamic t) { return mDelegate->addAll(t);}  \
virtual Dynamic addAll_dyn() { return mDelegate->addAll_dyn();}  \
virtual Dynamic remove( Dynamic t) { return mDelegate->remove(t);}  \
virtual Dynamic remove_dyn() { return mDelegate->remove_dyn();}  \
virtual Dynamic removeAll( Dynamic t) { return mDelegate->removeAll(t);}  \
virtual Dynamic removeAll_dyn() { return mDelegate->removeAll_dyn();}  \


template<typename IMPL>
class Collection_delegate_ : public Collection_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Collection_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_haxe_data_collections_Collection
};

} // end namespace haxe
} // end namespace data
} // end namespace collections

#endif /* INCLUDED_haxe_data_collections_Collection */ 
