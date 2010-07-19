#ifndef INCLUDED_util_MathUtil
#define INCLUDED_util_MathUtil

#include <hxObject.h>

DECLARE_CLASS1(util,MathUtil)
namespace util{


class MathUtil_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef MathUtil_obj OBJ_;

	protected:
		MathUtil_obj();
		Void __construct();

	public:
		static hxObjectPtr<MathUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~MathUtil_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"MathUtil",8); }

		static double delta( double n0,double n1);
		static Dynamic delta_dyn();

		static double normalize( double v,double n0,double n1);
		static Dynamic normalize_dyn();

		static double interpolate( double v,double n0,double n1);
		static Dynamic interpolate_dyn();

		static double map( double v,double min0,double max0,double min1,double max1);
		static Dynamic map_dyn();

		static bool isOdd( int value);
		static Dynamic isOdd_dyn();

		static bool isEven( int value);
		static Dynamic isEven_dyn();

		static bool isInteger( double n);
		static Dynamic isInteger_dyn();

		static bool isNatural( int n);
		static Dynamic isNatural_dyn();

		static bool isPrime( int n);
		static Dynamic isPrime_dyn();

		static int factorial( int n);
		static Dynamic factorial_dyn();

		static Array<int > getDivisors( int n);
		static Dynamic getDivisors_dyn();

		static double round( double n,Dynamic c);
		static Dynamic round_dyn();

		static double ceil( double n,Dynamic c);
		static Dynamic ceil_dyn();

		static double floor( double n,Dynamic c);
		static Dynamic floor_dyn();

};

} // end namespace util

#endif /* INCLUDED_util_MathUtil */ 
