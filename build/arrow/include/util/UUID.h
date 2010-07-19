#ifndef INCLUDED_util_UUID
#define INCLUDED_util_UUID

#include <hxObject.h>

DECLARE_CLASS1(util,UUID)
namespace util{


class UUID_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef UUID_obj OBJ_;

	protected:
		UUID_obj();
		Void __construct();

	public:
		static hxObjectPtr<UUID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~UUID_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"UUID",4); }

		static String get( );
		static Dynamic get_dyn();

};

} // end namespace util

#endif /* INCLUDED_util_UUID */ 
