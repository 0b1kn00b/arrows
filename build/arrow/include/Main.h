#ifndef INCLUDED_Main
#define INCLUDED_Main

#include <hxObject.h>

DECLARE_CLASS0(Main)


class Main_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef Main_obj OBJ_;

	protected:
		Main_obj();
		Void __construct();

	public:
		static hxObjectPtr<Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Main_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Main",4); }

		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_Main */ 
