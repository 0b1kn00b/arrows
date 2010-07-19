#ifndef INCLUDED_reflect_RType
#define INCLUDED_reflect_RType

#include <hxObject.h>

#include <reflect/NamedField.h>
DECLARE_CLASS0(Hash)
DECLARE_CLASS1(reflect,Field)
DECLARE_CLASS1(reflect,Member)
DECLARE_CLASS1(reflect,Method)
DECLARE_CLASS1(reflect,NamedField)
DECLARE_CLASS1(reflect,RType)
namespace reflect{


class RType_obj : public reflect::NamedField_obj
{
	public:
		typedef reflect::NamedField_obj super;
		typedef RType_obj OBJ_;

	protected:
		RType_obj();
		Void __construct();

	public:
		static hxObjectPtr<RType_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~RType_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"RType",5); }

		Hash methods;
		virtual Hash getMethods( );
		Dynamic getMethods_dyn();

		virtual Hash setMethods( Hash value);
		Dynamic setMethods_dyn();

		Hash properties;
		reflect::RType superclass;
		reflect::Method constructor;
		virtual reflect::Field getName( );
		Dynamic getName_dyn();

		static Dynamic create( reflect::RType type);
		static Dynamic create_dyn();

};

} // end namespace reflect

#endif /* INCLUDED_reflect_RType */ 
