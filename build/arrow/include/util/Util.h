#ifndef INCLUDED_util_Util
#define INCLUDED_util_Util

#include <hxObject.h>

DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS1(util,Util)
namespace util{


class Util_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef Util_obj OBJ_;

	protected:
		Util_obj();
		Void __construct();

	public:
		static hxObjectPtr<Util_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Util_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Util",4); }

		static bool isNull( Dynamic value);
		static Dynamic isNull_dyn();

		static bool isNotNull( arrow::AsyncArrow value);
		static Dynamic isNotNull_dyn();

};

} // end namespace util

#endif /* INCLUDED_util_Util */ 
