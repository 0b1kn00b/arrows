#ifndef INCLUDED_Either
#define INCLUDED_Either

#include <hxcpp.h>

HX_DECLARE_CLASS0(Either)


class Either_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Either_obj OBJ_;

	public:
		Either_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("Either"); }
		::String __ToString() const { return HX_CSTRING("Either.") + tag; }

		static Either Left(Dynamic v);
		static Dynamic Left_dyn();
		static Either Right(Dynamic v);
		static Dynamic Right_dyn();
};


#endif /* INCLUDED_Either */ 
