#ifndef INCLUDED_arrow_Box
#define INCLUDED_arrow_Box

#include <hxObject.h>

DECLARE_CLASS1(arrow,Box)
namespace arrow{


class Box_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef Box_obj OBJ_;

	protected:
		Box_obj();
		Void __construct(Dynamic vals);

	public:
		static hxObjectPtr<Box_obj > __new(Dynamic vals);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Box_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Box",3); }

		Dynamic data;
};

} // end namespace arrow

#endif /* INCLUDED_arrow_Box */ 
