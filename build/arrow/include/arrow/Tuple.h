#ifndef INCLUDED_arrow_Tuple
#define INCLUDED_arrow_Tuple

#include <hxObject.h>

DECLARE_CLASS1(arrow,Tuple)
namespace arrow{


class Tuple_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef Tuple_obj OBJ_;

	protected:
		Tuple_obj();
		Void __construct(Dynamic args);

	public:
		static hxObjectPtr<Tuple_obj > __new(Dynamic args);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Tuple_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Tuple",5); }

		Dynamic data;
		virtual Dynamic getData( );
		Dynamic getData_dyn();

		int length;
		virtual int getLength( );
		Dynamic getLength_dyn();

		virtual Dynamic fst( );
		Dynamic fst_dyn();

		virtual Dynamic snd( );
		Dynamic snd_dyn();

		virtual String toString( );
		Dynamic toString_dyn();

		virtual String toTupleString( );
		Dynamic toTupleString_dyn();

		Array<Dynamic > memoArray;
		virtual Array<Dynamic > toArray( );
		Dynamic toArray_dyn();

		virtual Dynamic applyArrayTo( Dynamic f);
		Dynamic applyArrayTo_dyn();

};

} // end namespace arrow

#endif /* INCLUDED_arrow_Tuple */ 
