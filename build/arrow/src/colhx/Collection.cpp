#include <hxObject.h>

#ifndef INCLUDED_colhx_Collection
#include <colhx/Collection.h>
#endif
namespace colhx{

DEFINE_DYNAMIC_FUNC0(Collection_obj,getLength,return )

DEFINE_DYNAMIC_FUNC1(Collection_obj,contains,return )

DEFINE_DYNAMIC_FUNC0(Collection_obj,clear,)

DEFINE_DYNAMIC_FUNC0(Collection_obj,isEmpty,return )

DEFINE_DYNAMIC_FUNC0(Collection_obj,toArray,return )

DEFINE_DYNAMIC_FUNC0(Collection_obj,iterator,return )


} // end namespace colhx
