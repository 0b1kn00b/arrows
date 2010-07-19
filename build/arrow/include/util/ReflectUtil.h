#ifndef INCLUDED_util_ReflectUtil
#define INCLUDED_util_ReflectUtil

#include <hxObject.h>

DECLARE_CLASS1(util,ReflectUtil)
namespace util{


class ReflectUtil_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef ReflectUtil_obj OBJ_;

	protected:
		ReflectUtil_obj();
		Void __construct();

	public:
		static hxObjectPtr<ReflectUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~ReflectUtil_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"ReflectUtil",11); }

		static bool isIterable( Dynamic value);
		static Dynamic isIterable_dyn();

		static bool isSubclassOf( Dynamic value,Class type);
		static Dynamic isSubclassOf_dyn();

		static bool isProperty( Dynamic value);
		static Dynamic isProperty_dyn();

};

} // end namespace util

#endif /* INCLUDED_util_ReflectUtil */ 
