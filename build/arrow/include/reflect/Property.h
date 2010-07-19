#ifndef INCLUDED_reflect_Property
#define INCLUDED_reflect_Property

#include <hxObject.h>

#include <reflect/NamedField.h>
DECLARE_CLASS1(reflect,Access)
DECLARE_CLASS1(reflect,Field)
DECLARE_CLASS1(reflect,Member)
DECLARE_CLASS1(reflect,Method)
DECLARE_CLASS1(reflect,NamedField)
DECLARE_CLASS1(reflect,Property)
namespace reflect{


class Property_obj : public reflect::NamedField_obj
{
	public:
		typedef reflect::NamedField_obj super;
		typedef Property_obj OBJ_;

	protected:
		Property_obj();
		Void __construct();

	public:
		static hxObjectPtr<Property_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Property_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Property",8); }

		reflect::Method getter;
		virtual reflect::Method getGetter( );
		Dynamic getGetter_dyn();

		virtual reflect::Method setGetter( reflect::Method method);
		Dynamic setGetter_dyn();

		reflect::Method setter;
		virtual reflect::Method getSetter( );
		Dynamic getSetter_dyn();

		virtual reflect::Method setSetter( reflect::Method method);
		Dynamic setSetter_dyn();

		reflect::Access access;
		virtual Dynamic getValue( );
		Dynamic getValue_dyn();

		virtual Dynamic setValue( Dynamic value);
		Dynamic setValue_dyn();

};

} // end namespace reflect

#endif /* INCLUDED_reflect_Property */ 
