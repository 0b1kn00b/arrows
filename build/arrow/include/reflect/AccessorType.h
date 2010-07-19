#ifndef INCLUDED_reflect_AccessorType
#define INCLUDED_reflect_AccessorType

#include <hxObject.h>

DECLARE_CLASS1(reflect,AccessorType)
namespace reflect{


class AccessorType_obj : public hxEnumBase_obj
{
	typedef hxEnumBase_obj super;
		typedef AccessorType_obj OBJ_;

	public:
		AccessorType_obj() {};
		DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		String GetEnumName( ) const { return String(L"reflect.AccessorType",20); }
		String __ToString() const { return String(L"AccessorType.",13) + tag; }

};

} // end namespace reflect

#endif /* INCLUDED_reflect_AccessorType */ 
