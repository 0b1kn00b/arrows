#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_RunstateConstraint
#define INCLUDED_haxe_functional_arrows_schedule_constraint_RunstateConstraint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/schedule/constraint/Constraint.h>
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,constraint,Constraint)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,constraint,RunstateConstraint)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace constraint{


class RunstateConstraint_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RunstateConstraint_obj OBJ_;
		RunstateConstraint_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< RunstateConstraint_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~RunstateConstraint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::haxe::functional::arrows::schedule::constraint::Constraint_obj *()
			{ return new ::haxe::functional::arrows::schedule::constraint::Constraint_delegate_< RunstateConstraint_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("RunstateConstraint"); }

		virtual bool proceed( );
		Dynamic proceed_dyn();

		virtual Void terminate( );
		Dynamic terminate_dyn();

		bool go; /* REM */ 
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace constraint

#endif /* INCLUDED_haxe_functional_arrows_schedule_constraint_RunstateConstraint */ 
