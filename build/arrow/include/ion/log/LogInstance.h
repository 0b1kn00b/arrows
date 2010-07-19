#ifndef INCLUDED_ion_log_LogInstance
#define INCLUDED_ion_log_LogInstance

#include <hxObject.h>

DECLARE_CLASS2(ion,log,Log)
DECLARE_CLASS2(ion,log,LogInstance)
namespace ion{
namespace log{


class LogInstance_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef LogInstance_obj OBJ_;

	protected:
		LogInstance_obj();
		Void __construct(ion::log::Log log);

	public:
		static hxObjectPtr<LogInstance_obj > __new(ion::log::Log log);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~LogInstance_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"LogInstance",11); }

		bool active;
		ion::log::Log log;
};

} // end namespace ion
} // end namespace log

#endif /* INCLUDED_ion_log_LogInstance */ 
