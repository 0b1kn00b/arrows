#ifndef INCLUDED_reflect_Method
#define INCLUDED_reflect_Method

#include <hxObject.h>

#include <reflect/NamedField.h>
DECLARE_CLASS1(reflect,Argument)
DECLARE_CLASS1(reflect,Field)
DECLARE_CLASS1(reflect,Member)
DECLARE_CLASS1(reflect,Method)
DECLARE_CLASS1(reflect,NamedField)
namespace reflect{


class Method_obj : public reflect::NamedField_obj
{
	public:
		typedef reflect::NamedField_obj super;
		typedef Method_obj OBJ_;

	protected:
		Method_obj();
		Void __construct();

	public:
		static hxObjectPtr<Method_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Method_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Method",6); }

		Array<reflect::Argument > arguments;
		virtual Dynamic getValue( );
		Dynamic getValue_dyn();

};

} // end namespace reflect

#endif /* INCLUDED_reflect_Method */ 
