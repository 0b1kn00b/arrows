#ifndef INCLUDED_hxunit_error_HxUnitError
#define INCLUDED_hxunit_error_HxUnitError

#include <hxObject.h>

DECLARE_CLASS2(hxunit,error,HxUnitError)
namespace hxunit{
namespace error{


class HxUnitError_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef HxUnitError_obj OBJ_;

	protected:
		HxUnitError_obj();
		Void __construct(String message,Dynamic pos);

	public:
		static hxObjectPtr<HxUnitError_obj > __new(String message,Dynamic pos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~HxUnitError_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"HxUnitError",11); }

		String message;
		Dynamic pos;
};

} // end namespace hxunit
} // end namespace error

#endif /* INCLUDED_hxunit_error_HxUnitError */ 
