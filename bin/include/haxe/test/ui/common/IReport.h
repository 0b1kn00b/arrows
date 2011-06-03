#ifndef INCLUDED_haxe_test_ui_common_IReport
#define INCLUDED_haxe_test_ui_common_IReport

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(haxe,test,ui,common,HeaderDisplayMode)
HX_DECLARE_CLASS4(haxe,test,ui,common,IReport)
HX_DECLARE_CLASS4(haxe,test,ui,common,SuccessResultsDisplayMode)
namespace haxe{
namespace test{
namespace ui{
namespace common{


class IReport_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IReport_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		
		
		virtual Void setHandler( Dynamic handler)=0;
		Dynamic setHandler_dyn();
};

#define DELEGATE_haxe_test_ui_common_IReport \
virtual Void setHandler( Dynamic handler) { return mDelegate->setHandler(handler);}  \
virtual Dynamic setHandler_dyn() { return mDelegate->setHandler_dyn();}  \


template<typename IMPL>
class IReport_delegate_ : public IReport_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IReport_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		DELEGATE_haxe_test_ui_common_IReport
};

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace common

#endif /* INCLUDED_haxe_test_ui_common_IReport */ 
