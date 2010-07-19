#ifndef INCLUDED_ion_log_Logger
#define INCLUDED_ion_log_Logger

#include <hxObject.h>

DECLARE_CLASS0(Hash)
DECLARE_CLASS2(ion,log,Log)
DECLARE_CLASS2(ion,log,Logger)
namespace ion{
namespace log{


class Logger_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef Logger_obj OBJ_;

	protected:
		Logger_obj();
		Void __construct();

	public:
		static hxObjectPtr<Logger_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Logger_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Logger",6); }

		virtual ion::log::Log getLog( Dynamic key);
		Dynamic getLog_dyn();

		virtual bool isActive( String key);
		Dynamic isActive_dyn();

		Hash loggers;
		static ion::log::Logger instance;
		static ion::log::Logger getInstance( );
		static Dynamic getInstance_dyn();

};

} // end namespace ion
} // end namespace log

#endif /* INCLUDED_ion_log_Logger */ 
