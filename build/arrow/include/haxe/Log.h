#ifndef INCLUDED_haxe_Log
#define INCLUDED_haxe_Log

#include <hxObject.h>

DECLARE_CLASS1(haxe,Log)
namespace haxe{


class Log_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef Log_obj OBJ_;

	protected:
		Log_obj();
		Void __construct();

	public:
		static hxObjectPtr<Log_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Log_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Log",3); }

		static Void trace( Dynamic v,Dynamic infos);
		static Dynamic trace_dyn();

		static Void clear( );
		static Dynamic clear_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Log */ 
