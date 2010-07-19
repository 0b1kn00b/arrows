#ifndef INCLUDED_hxunit_error_TestError
#define INCLUDED_hxunit_error_TestError

#include <hxObject.h>

#include <hxunit/error/HxUnitError.h>
DECLARE_CLASS2(hxunit,error,HxUnitError)
DECLARE_CLASS2(hxunit,error,TestError)
namespace hxunit{
namespace error{


class TestError_obj : public hxunit::error::HxUnitError_obj
{
	public:
		typedef hxunit::error::HxUnitError_obj super;
		typedef TestError_obj OBJ_;

	protected:
		TestError_obj();
		Void __construct(String message,Dynamic error,Dynamic posInfos);

	public:
		static hxObjectPtr<TestError_obj > __new(String message,Dynamic error,Dynamic posInfos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~TestError_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"TestError",9); }

		Dynamic e;
		virtual String toString( );
		Dynamic toString_dyn();

};

} // end namespace hxunit
} // end namespace error

#endif /* INCLUDED_hxunit_error_TestError */ 
