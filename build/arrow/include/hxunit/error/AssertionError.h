#ifndef INCLUDED_hxunit_error_AssertionError
#define INCLUDED_hxunit_error_AssertionError

#include <hxObject.h>

#include <hxunit/error/HxUnitError.h>
DECLARE_CLASS2(hxunit,error,AssertionError)
DECLARE_CLASS2(hxunit,error,HxUnitError)
namespace hxunit{
namespace error{


class AssertionError_obj : public hxunit::error::HxUnitError_obj
{
	public:
		typedef hxunit::error::HxUnitError_obj super;
		typedef AssertionError_obj OBJ_;

	protected:
		AssertionError_obj();
		Void __construct(Dynamic __o_message,Dynamic pos);

	public:
		static hxObjectPtr<AssertionError_obj > __new(Dynamic __o_message,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~AssertionError_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"AssertionError",14); }

		virtual String toString( );
		Dynamic toString_dyn();

		static hxunit::error::AssertionError true( Dynamic pos);
		static Dynamic true_dyn();

};

} // end namespace hxunit
} // end namespace error

#endif /* INCLUDED_hxunit_error_AssertionError */ 
