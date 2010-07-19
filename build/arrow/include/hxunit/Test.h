#ifndef INCLUDED_hxunit_Test
#define INCLUDED_hxunit_Test

#include <hxObject.h>

DECLARE_CLASS1(hxunit,Test)
namespace hxunit{


class Test_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef Test_obj OBJ_;

	protected:
		Test_obj();
		Void __construct(String name,Dynamic method);

	public:
		static hxObjectPtr<Test_obj > __new(String name,Dynamic method);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Test_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Test",4); }

		String name;
		Dynamic method;
	Dynamic &method_dyn() { return method;}
};

} // end namespace hxunit

#endif /* INCLUDED_hxunit_Test */ 
