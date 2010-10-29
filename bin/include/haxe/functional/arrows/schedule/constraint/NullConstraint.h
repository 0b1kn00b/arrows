#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_NullConstraint
#define INCLUDED_haxe_functional_arrows_schedule_constraint_NullConstraint

#include <hxcpp.h>

#include <haxe/functional/arrows/schedule/constraint/Constraint.h>
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,ScheduleManager)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,constraint,Constraint)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,constraint,NullConstraint)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace constraint{


class NullConstraint_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef NullConstraint_obj OBJ_;
		NullConstraint_obj();
		Void __construct(::haxe::functional::arrows::schedule::ScheduleManager manager);

	public:
		static hx::ObjectPtr< NullConstraint_obj > __new(::haxe::functional::arrows::schedule::ScheduleManager manager);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~NullConstraint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::haxe::functional::arrows::schedule::constraint::Constraint_obj *()
			{ return new ::haxe::functional::arrows::schedule::constraint::Constraint_delegate_< NullConstraint_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("NullConstraint"); }

		::haxe::functional::arrows::schedule::ScheduleManager manager; /* REM */ 
		virtual bool proceed( );
		Dynamic proceed_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace constraint

#endif /* INCLUDED_haxe_functional_arrows_schedule_constraint_NullConstraint */ 
