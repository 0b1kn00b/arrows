#ifndef INCLUDED_reflect_NamedField
#define INCLUDED_reflect_NamedField

#include <hxObject.h>

#include <reflect/Field.h>
DECLARE_CLASS1(reflect,Field)
DECLARE_CLASS1(reflect,Member)
DECLARE_CLASS1(reflect,NamedField)
namespace reflect{


class NamedField_obj : public reflect::Field_obj
{
	public:
		typedef reflect::Field_obj super;
		typedef NamedField_obj OBJ_;

	protected:
		NamedField_obj();
		Void __construct();

	public:
		static hxObjectPtr<NamedField_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~NamedField_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"NamedField",10); }

		reflect::Field name;
		virtual reflect::Field getName( );
		Dynamic getName_dyn();

		virtual reflect::Field setName( reflect::Field value);
		Dynamic setName_dyn();

		virtual Class getClassRef( );
		Dynamic getClassRef_dyn();

};

} // end namespace reflect

#endif /* INCLUDED_reflect_NamedField */ 
