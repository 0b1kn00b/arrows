#ifndef INCLUDED_Product
#define INCLUDED_Product

#include <hxcpp.h>

HX_DECLARE_CLASS0(Product)


class Product_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Product_obj OBJ_;
		
		
		virtual Dynamic productElement( int n)=0;
		Dynamic productElement_dyn();
};

#define DELEGATE_Product \
virtual Dynamic productElement( int n) { return mDelegate->productElement(n);}  \
virtual Dynamic productElement_dyn() { return mDelegate->productElement_dyn();}  \


template<typename IMPL>
class Product_delegate_ : public Product_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Product_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_Product
};


#endif /* INCLUDED_Product */ 
