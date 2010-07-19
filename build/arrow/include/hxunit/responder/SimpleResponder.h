#ifndef INCLUDED_hxunit_responder_SimpleResponder
#define INCLUDED_hxunit_responder_SimpleResponder

#include <hxObject.h>

#include <hxunit/responder/TestResponder.h>
DECLARE_CLASS1(hxunit,TestResult)
DECLARE_CLASS2(hxunit,responder,SimpleResponder)
DECLARE_CLASS2(hxunit,responder,TestResponder)
namespace hxunit{
namespace responder{


class SimpleResponder_obj : public virtual hxObject, public hxunit::responder::TestResponder_obj
{
	public:
		typedef hxObject super;
		typedef SimpleResponder_obj OBJ_;

	protected:
		SimpleResponder_obj();
		Void __construct();

	public:
		static hxObjectPtr<SimpleResponder_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~SimpleResponder_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"SimpleResponder",15); }

		virtual Void begin( );
		Dynamic begin_dyn();

		virtual Void consume( hxunit::TestResult v);
		Dynamic consume_dyn();

		virtual Void end( );
		Dynamic end_dyn();

};

} // end namespace hxunit
} // end namespace responder

#endif /* INCLUDED_hxunit_responder_SimpleResponder */ 
