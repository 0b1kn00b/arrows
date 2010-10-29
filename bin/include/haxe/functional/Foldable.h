#ifndef INCLUDED_haxe_functional_Foldable
#define INCLUDED_haxe_functional_Foldable

#include <hxcpp.h>

HX_DECLARE_CLASS2(haxe,functional,Foldable)
namespace haxe{
namespace functional{


class Foldable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Foldable_obj OBJ_;
		virtual ::haxe::functional::Foldable empty( )=0;
		Dynamic empty_dyn();
		virtual Dynamic append( Dynamic b)=0;
		Dynamic append_dyn();
		virtual Dynamic foldl( Dynamic t,Dynamic f)=0;
		Dynamic foldl_dyn();
};

#define DELEGATE_haxe_functional_Foldable \
virtual ::haxe::functional::Foldable empty( ) { return mDelegate->empty();}  \
virtual Dynamic empty_dyn() { return mDelegate->empty_dyn();}  \
virtual Dynamic append( Dynamic b) { return mDelegate->append(b);}  \
virtual Dynamic append_dyn() { return mDelegate->append_dyn();}  \
virtual Dynamic foldl( Dynamic t,Dynamic f) { return mDelegate->foldl(t,f);}  \
virtual Dynamic foldl_dyn() { return mDelegate->foldl_dyn();}  \


template<typename IMPL>
class Foldable_delegate_ : public Foldable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Foldable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_haxe_functional_Foldable
};

} // end namespace haxe
} // end namespace functional

#endif /* INCLUDED_haxe_functional_Foldable */ 
