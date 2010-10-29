#include <hxcpp.h>

#ifndef INCLUDED_haxe_data_collections_Collection
#include <haxe/data/collections/Collection.h>
#endif
#ifndef INCLUDED_haxe_functional_Foldable
#include <haxe/functional/Foldable.h>
#endif
namespace haxe{
namespace data{
namespace collections{

HX_DEFINE_DYNAMIC_FUNC0(Collection_obj,size,return )

HX_DEFINE_DYNAMIC_FUNC1(Collection_obj,contains,return )

HX_DEFINE_DYNAMIC_FUNC1(Collection_obj,add,return )

HX_DEFINE_DYNAMIC_FUNC1(Collection_obj,addAll,return )

HX_DEFINE_DYNAMIC_FUNC1(Collection_obj,remove,return )

HX_DEFINE_DYNAMIC_FUNC1(Collection_obj,removeAll,return )


} // end namespace haxe
} // end namespace data
} // end namespace collections
