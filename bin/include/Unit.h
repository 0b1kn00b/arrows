#ifndef INCLUDED_Unit
#define INCLUDED_Unit

#include <hxcpp.h>

HX_DECLARE_CLASS0(Unit)


class Unit_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Unit_obj OBJ_;

	public:
		Unit_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("Unit"); }
		::String __ToString() const { return HX_CSTRING("Unit.") + tag; }

		static Unit Unit;
};


#endif /* INCLUDED_Unit */ 
