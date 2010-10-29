#ifndef INCLUDED_Option
#define INCLUDED_Option

#include <hxcpp.h>

HX_DECLARE_CLASS0(Option)


class Option_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Option_obj OBJ_;

	public:
		Option_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("Option"); }
		::String __ToString() const { return HX_CSTRING("Option.") + tag; }

		static Option None;
		static Option Some(Dynamic v);
		static Dynamic Some_dyn();
};


#endif /* INCLUDED_Option */ 
