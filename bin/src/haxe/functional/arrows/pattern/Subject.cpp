#include <hxcpp.h>

#ifndef INCLUDED_haxe_functional_arrows_pattern_Observer
#include <haxe/functional/arrows/pattern/Observer.h>
#endif
#ifndef INCLUDED_haxe_functional_arrows_pattern_Subject
#include <haxe/functional/arrows/pattern/Subject.h>
#endif
namespace haxe{
namespace functional{
namespace arrows{
namespace pattern{

HX_DEFINE_DYNAMIC_FUNC1(Subject_obj,attach,return )

HX_DEFINE_DYNAMIC_FUNC1(Subject_obj,detach,return )

HX_DEFINE_DYNAMIC_FUNC0(Subject_obj,notify,)


} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace pattern
