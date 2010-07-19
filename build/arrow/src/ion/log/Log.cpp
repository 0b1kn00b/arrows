#include <hxObject.h>

#ifndef INCLUDED_ion_log_Log
#include <ion/log/Log.h>
#endif
#ifndef INCLUDED_ion_log_Logger
#include <ion/log/Logger.h>
#endif
namespace ion{
namespace log{

DEFINE_DYNAMIC_FUNC0(Log_obj,getLog,return )

DEFINE_DYNAMIC_FUNC1(Log_obj,_log,)

DEFINE_DYNAMIC_FUNC1(Log_obj,info,)

DEFINE_DYNAMIC_FUNC1(Log_obj,debug,)

DEFINE_DYNAMIC_FUNC1(Log_obj,warn,)

DEFINE_DYNAMIC_FUNC1(Log_obj,error,)

DEFINE_DYNAMIC_FUNC1(Log_obj,fatal,)


} // end namespace ion
} // end namespace log
