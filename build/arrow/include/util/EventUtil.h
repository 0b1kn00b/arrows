#ifndef INCLUDED_util_EventUtil
#define INCLUDED_util_EventUtil

#include <hxObject.h>

DECLARE_CLASS1(util,EventUtil)
namespace util{


class EventUtil_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef EventUtil_obj OBJ_;

	protected:
		EventUtil_obj();
		Void __construct();

	public:
		static hxObjectPtr<EventUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~EventUtil_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"EventUtil",9); }

};

} // end namespace util

#endif /* INCLUDED_util_EventUtil */ 
