#ifndef INCLUDED_haxe_functional_arrows_schedule_constraint_TimeConstraint
#define INCLUDED_haxe_functional_arrows_schedule_constraint_TimeConstraint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/schedule/constraint/Constraint.h>
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,constraint,Constraint)
HX_DECLARE_CLASS5(haxe,functional,arrows,schedule,constraint,TimeConstraint)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{
namespace constraint{


class TimeConstraint_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TimeConstraint_obj OBJ_;
		TimeConstraint_obj();
		Void __construct(Dynamic __o_span);

	public:
		static hx::ObjectPtr< TimeConstraint_obj > __new(Dynamic __o_span);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~TimeConstraint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::haxe::functional::arrows::schedule::constraint::Constraint_obj *()
			{ return new ::haxe::functional::arrows::schedule::constraint::Constraint_delegate_< TimeConstraint_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("TimeConstraint"); }

		double span; /* REM */ 
		virtual bool proceed( );
		Dynamic proceed_dyn();

		virtual ::haxe::functional::arrows::schedule::constraint::TimeConstraint clone( );
		Dynamic clone_dyn();

		double mark; /* REM */ 
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule
} // end namespace constraint

#endif /* INCLUDED_haxe_functional_arrows_schedule_constraint_TimeConstraint */ 
