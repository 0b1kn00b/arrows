#ifndef INCLUDED_hxunit_AType
#define INCLUDED_hxunit_AType

#include <hxObject.h>

DECLARE_CLASS1(hxunit,AType)
namespace hxunit{


class AType_obj : public hxEnumBase_obj
{
	typedef hxEnumBase_obj super;
		typedef AType_obj OBJ_;

	public:
		AType_obj() {};
		DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		String GetEnumName( ) const { return String(L"hxunit.AType",12); }
		String __ToString() const { return String(L"AType.",6) + tag; }

		static AType bool;
		static AType custom(Dynamic v);
		static Dynamic custom_dyn();
};

} // end namespace hxunit

#endif /* INCLUDED_hxunit_AType */ 
