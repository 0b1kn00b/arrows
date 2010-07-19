#ifndef INCLUDED_ion_log_Log
#define INCLUDED_ion_log_Log

#include <hxObject.h>

DECLARE_CLASS2(ion,log,Log)
DECLARE_CLASS2(ion,log,Logger)
namespace ion{
namespace log{


class Log_obj : public virtual hxObject
{
	public:
	INTERFACE_DEF
		
		virtual Dynamic getLog( )=0;
		Dynamic getLog_dyn();
		virtual Void _log( Array<Dynamic > message)=0;
		Dynamic _log_dyn();
		virtual Void info( Array<Dynamic > message)=0;
		Dynamic info_dyn();
		virtual Void debug( Array<Dynamic > message)=0;
		Dynamic debug_dyn();
		virtual Void warn( Array<Dynamic > message)=0;
		Dynamic warn_dyn();
		virtual Void error( Array<Dynamic > message)=0;
		Dynamic error_dyn();
		virtual Void fatal( Array<Dynamic > message)=0;
		Dynamic fatal_dyn();
		
};

} // end namespace ion
} // end namespace log

#endif /* INCLUDED_ion_log_Log */ 
