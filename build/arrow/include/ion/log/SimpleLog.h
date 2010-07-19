#ifndef INCLUDED_ion_log_SimpleLog
#define INCLUDED_ion_log_SimpleLog

#include <hxObject.h>

#include <ion/log/Log.h>
DECLARE_CLASS0(EReg)
DECLARE_CLASS2(ion,log,Log)
DECLARE_CLASS2(ion,log,Logger)
DECLARE_CLASS2(ion,log,SimpleLog)
namespace ion{
namespace log{


class SimpleLog_obj : public virtual hxObject, public ion::log::Log_obj
{
	public:
		typedef hxObject super;
		typedef SimpleLog_obj OBJ_;

	protected:
		SimpleLog_obj();
		Void __construct(String name);

	public:
		static hxObjectPtr<SimpleLog_obj > __new(String name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~SimpleLog_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"SimpleLog",9); }

		Dynamic log;
		virtual Dynamic getLog( );
		Dynamic getLog_dyn();

		virtual Void _log( Array<Dynamic > arr);
		Dynamic _log_dyn();

		virtual Void info( Array<Dynamic > message);
		Dynamic info_dyn();

		virtual Void debug( Array<Dynamic > message);
		Dynamic debug_dyn();

		virtual Void warn( Array<Dynamic > message);
		Dynamic warn_dyn();

		virtual Void error( Array<Dynamic > message);
		Dynamic error_dyn();

		virtual Void fatal( Array<Dynamic > message);
		Dynamic fatal_dyn();

		virtual Void __trace( String begin,Array<Dynamic > message);
		Dynamic __trace_dyn();

		virtual String parseString( String str,Array<Dynamic > $t1);
		Dynamic parseString_dyn();

		ion::log::Logger logger;
		String name;
		static EReg pattern;
};

} // end namespace ion
} // end namespace log

#endif /* INCLUDED_ion_log_SimpleLog */ 
