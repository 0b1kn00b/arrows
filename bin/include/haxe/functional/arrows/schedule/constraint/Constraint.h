#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_Constraint
#define INCLUDED_haxe_functional_arrows_schedule_constraint_Constraint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,constraint,Constraint)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace constraint{


class Constraint_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Constraint_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual bool proceed( )=0;
		Dynamic proceed_dyn();
};

#define DELEGATE_haxe_functional_arrows_schedule_constraint_Constraint \
virtual bool proceed( ) { return mDelegate->proceed();}  \
virtual Dynamic proceed_dyn() { return mDelegate->proceed_dyn();}  \


template<typename IMPL>
class Constraint_delegate_ : public Constraint_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Constraint_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_haxe_functional_arrows_schedule_constraint_Constraint
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace constraint

#endif /* INCLUDED_haxe_functional_arrows_schedule_constraint_Constraint */ 
