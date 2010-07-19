#ifndef INCLUDED_util_Counter
#define INCLUDED_util_Counter

#include <hxObject.h>

DECLARE_CLASS1(util,Counter)
namespace util{


class Counter_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef Counter_obj OBJ_;

	protected:
		Counter_obj();
		Void __construct(int max);

	public:
		static hxObjectPtr<Counter_obj > __new(int max);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Counter_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Counter",7); }

		int maxCount;
		int current;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void step( );
		Dynamic step_dyn();

		virtual Void max( );
		Dynamic max_dyn();

		virtual bool isDone( );
		Dynamic isDone_dyn();

};

} // end namespace util

#endif /* INCLUDED_util_Counter */ 
