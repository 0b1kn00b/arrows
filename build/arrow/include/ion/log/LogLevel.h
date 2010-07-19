#ifndef INCLUDED_ion_log_LogLevel
#define INCLUDED_ion_log_LogLevel

#include <hxObject.h>

DECLARE_CLASS2(ion,log,LogLevel)
namespace ion{
namespace log{


class LogLevel_obj : public hxEnumBase_obj
{
	typedef hxEnumBase_obj super;
		typedef LogLevel_obj OBJ_;

	public:
		LogLevel_obj() {};
		DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		String GetEnumName( ) const { return String(L"ion.log.LogLevel",16); }
		String __ToString() const { return String(L"LogLevel.",9) + tag; }

		static LogLevel custom(String id);
		static Dynamic custom_dyn();
		static LogLevel debug;
		static LogLevel error;
		static LogLevel fatal;
		static LogLevel info;
		static LogLevel warn;
};

} // end namespace ion
} // end namespace log

#endif /* INCLUDED_ion_log_LogLevel */ 
