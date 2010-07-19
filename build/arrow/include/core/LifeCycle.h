#ifndef INCLUDED_core_LifeCycle
#define INCLUDED_core_LifeCycle

#include <hxObject.h>

DECLARE_CLASS1(core,LifeCycle)
namespace core{


class LifeCycle_obj : public virtual hxObject
{
	public:
	INTERFACE_DEF
		virtual Void initialize( )=0;
		Dynamic initialize_dyn();
		virtual Void release( )=0;
		Dynamic release_dyn();
};

} // end namespace core

#endif /* INCLUDED_core_LifeCycle */ 
