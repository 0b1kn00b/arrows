#ifndef INCLUDED_Type
#define INCLUDED_Type

#include <hxObject.h>

DECLARE_CLASS0(Type)
DECLARE_CLASS0(ValueType)


class Type_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef Type_obj OBJ_;

	protected:
		Type_obj();
		Void __construct();

	public:
		static hxObjectPtr<Type_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Type_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Type",4); }

		static Class getClass( Dynamic o);
		static Dynamic getClass_dyn();

		static Enum getEnum( Dynamic o);
		static Dynamic getEnum_dyn();

		static Class getSuperClass( Class c);
		static Dynamic getSuperClass_dyn();

		static String getClassName( Class c);
		static Dynamic getClassName_dyn();

		static String getEnumName( Enum e);
		static Dynamic getEnumName_dyn();

		static Class resolveClass( String name);
		static Dynamic resolveClass_dyn();

		static Enum resolveEnum( String name);
		static Dynamic resolveEnum_dyn();

		static Dynamic createInstance( Class cl,Array<Dynamic > args);
		static Dynamic createInstance_dyn();

		static Dynamic createEmptyInstance( Class cl);
		static Dynamic createEmptyInstance_dyn();

		static Dynamic createEnum( Enum e,String constr,Array<Dynamic > params);
		static Dynamic createEnum_dyn();

		static Dynamic createEnumIndex( Enum e,int index,Array<Dynamic > params);
		static Dynamic createEnumIndex_dyn();

		static Array<String > getInstanceFields( Class c);
		static Dynamic getInstanceFields_dyn();

		static Array<String > getClassFields( Class c);
		static Dynamic getClassFields_dyn();

		static Array<String > getEnumConstructs( Enum e);
		static Dynamic getEnumConstructs_dyn();

		static ValueType _typeof( Dynamic v);
		static Dynamic _typeof_dyn();

		static bool enumEq( Dynamic a,Dynamic b);
		static Dynamic enumEq_dyn();

		static String enumConstructor( Dynamic e);
		static Dynamic enumConstructor_dyn();

		static Array<Dynamic > enumParameters( Dynamic e);
		static Dynamic enumParameters_dyn();

		static int enumIndex( Dynamic e);
		static Dynamic enumIndex_dyn();

};


#endif /* INCLUDED_Type */ 
