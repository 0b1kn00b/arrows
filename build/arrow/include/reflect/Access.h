#ifndef INCLUDED_reflect_Access
#define INCLUDED_reflect_Access

#include <hxObject.h>

DECLARE_CLASS1(reflect,Access)
namespace reflect{


class Access_obj : public hxEnumBase_obj
{
	typedef hxEnumBase_obj super;
		typedef Access_obj OBJ_;

	public:
		Access_obj() {};
		DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		String GetEnumName( ) const { return String(L"reflect.Access",14); }
		String __ToString() const { return String(L"Access.",7) + tag; }

		static Access assignment;
		static Access read;
		static Access readwrite;
		static Access write;
};

} // end namespace reflect

#endif /* INCLUDED_reflect_Access */ 
