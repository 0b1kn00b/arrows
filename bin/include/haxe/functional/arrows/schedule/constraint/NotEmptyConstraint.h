#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_NotEmptyConstraint
#define INCLUDED_haxe_functional_arrows_schedule_constraint_NotEmptyConstraint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/schedule/constraint/NullConstraint.h>
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,ScheduleManager)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,constraint,Constraint)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,constraint,NotEmptyConstraint)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,constraint,NullConstraint)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace constraint{


class NotEmptyConstraint_obj : public ::haxe::functional::arrows::schedule::constraint::NullConstraint_obj{
	public:
		typedef ::haxe::functional::arrows::schedule::constraint::NullConstraint_obj super;
		typedef NotEmptyConstraint_obj OBJ_;
		NotEmptyConstraint_obj();
		Void __construct(::haxe::functional::arrows::schedule::ScheduleManager manager);

	public:
		static hx::ObjectPtr< NotEmptyConstraint_obj > __new(::haxe::functional::arrows::schedule::ScheduleManager manager);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~NotEmptyConstraint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("NotEmptyConstraint"); }

		virtual bool proceed( );
		Dynamic proceed_dyn();

		virtual ::haxe::functional::arrows::schedule::constraint::NotEmptyConstraint clone( );
		Dynamic clone_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace constraint

#endif /* INCLUDED_haxe_functional_arrows_schedule_constraint_NotEmptyConstraint */ 
