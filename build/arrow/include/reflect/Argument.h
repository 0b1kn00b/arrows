#ifndef INCLUDED_reflect_Argument
#define INCLUDED_reflect_Argument

#include <hxObject.h>

#include <reflect/Field.h>
DECLARE_CLASS1(reflect,Argument)
DECLARE_CLASS1(reflect,Field)
DECLARE_CLASS1(reflect,Member)
namespace reflect{


class Argument_obj : public reflect::Field_obj
{
	public:
		typedef reflect::Field_obj super;
		typedef Argument_obj OBJ_;

	protected:
		Argument_obj();
		Void __construct();

	public:
		static hxObjectPtr<Argument_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Argument_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Argument",8); }

		bool necessary;
};

} // end namespace reflect

#endif /* INCLUDED_reflect_Argument */ 
