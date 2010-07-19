#ifndef INCLUDED_hxunit_responder_TestResponder
#define INCLUDED_hxunit_responder_TestResponder

#include <hxObject.h>

DECLARE_CLASS1(hxunit,TestResult)
DECLARE_CLASS2(hxunit,responder,TestResponder)
namespace hxunit{
namespace responder{


class TestResponder_obj : public virtual hxObject
{
	public:
	INTERFACE_DEF
		virtual Void begin( )=0;
		Dynamic begin_dyn();
		virtual Void consume( hxunit::TestResult v)=0;
		Dynamic consume_dyn();
		virtual Void end( )=0;
		Dynamic end_dyn();
};

} // end namespace hxunit
} // end namespace responder

#endif /* INCLUDED_hxunit_responder_TestResponder */ 
