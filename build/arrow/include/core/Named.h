#ifndef INCLUDED_core_Named
#define INCLUDED_core_Named

#include <hxObject.h>

DECLARE_CLASS1(core,Named)
namespace core{


class Named_obj : public virtual hxObject
{
	public:
	INTERFACE_DEF
		
		virtual String getName( )=0;
		Dynamic getName_dyn();
};

} // end namespace core

#endif /* INCLUDED_core_Named */ 
