#ifndef INCLUDED_hxunit_Data
#define INCLUDED_hxunit_Data

#include <hxObject.h>

DECLARE_CLASS1(hxunit,AType)
DECLARE_CLASS1(hxunit,Data)
namespace hxunit{


class Data_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef Data_obj OBJ_;

	protected:
		Data_obj();
		Void __construct();

	public:
		static hxObjectPtr<Data_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Data_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Data",4); }

		static Dynamic aTypeFunction( hxunit::AType t);
		static Dynamic aTypeFunction_dyn();

};

} // end namespace hxunit

#endif /* INCLUDED_hxunit_Data */ 
