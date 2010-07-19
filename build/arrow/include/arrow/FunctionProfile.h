#ifndef INCLUDED_arrow_FunctionProfile
#define INCLUDED_arrow_FunctionProfile

#include <hxObject.h>

DECLARE_CLASS1(arrow,FunctionProfile)
namespace arrow{


class FunctionProfile_obj : public hxEnumBase_obj
{
	typedef hxEnumBase_obj super;
		typedef FunctionProfile_obj OBJ_;

	public:
		FunctionProfile_obj() {};
		DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		String GetEnumName( ) const { return String(L"arrow.FunctionProfile",21); }
		String __ToString() const { return String(L"FunctionProfile.",16) + tag; }

		static FunctionProfile both;
		static FunctionProfile output;
		static FunctionProfile parameter;
};

} // end namespace arrow

#endif /* INCLUDED_arrow_FunctionProfile */ 
