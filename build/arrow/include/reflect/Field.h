#ifndef INCLUDED_reflect_Field
#define INCLUDED_reflect_Field

#include <hxObject.h>

#include <reflect/Member.h>
DECLARE_CLASS1(reflect,Field)
DECLARE_CLASS1(reflect,Member)
namespace reflect{


class Field_obj : public reflect::Member_obj
{
	public:
		typedef reflect::Member_obj super;
		typedef Field_obj OBJ_;

	protected:
		Field_obj();
		Void __construct();

	public:
		static hxObjectPtr<Field_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Field_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Field",5); }

		Dynamic value;
		virtual Dynamic getValue( );
		Dynamic getValue_dyn();

		virtual Dynamic setValue( Dynamic value);
		Dynamic setValue_dyn();

		Class classRef;
		virtual Class getClassRef( );
		Dynamic getClassRef_dyn();

		virtual Class setClassRef( Class value);
		Dynamic setClassRef_dyn();

};

} // end namespace reflect

#endif /* INCLUDED_reflect_Field */ 
