#include <hxObject.h>

#ifndef INCLUDED_IntIter
#include <IntIter.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_util_MathUtil
#include <util/MathUtil.h>
#endif
namespace util{

Void MathUtil_obj::__construct()
{
	return null();
}

MathUtil_obj::~MathUtil_obj() { }

Dynamic MathUtil_obj::__CreateEmpty() { return  new MathUtil_obj; }
hxObjectPtr<MathUtil_obj > MathUtil_obj::__new()
{  hxObjectPtr<MathUtil_obj > result = new MathUtil_obj();
	result->__construct();
	return result;}

Dynamic MathUtil_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<MathUtil_obj > result = new MathUtil_obj();
	result->__construct();
	return result;}

double MathUtil_obj::delta( double n0,double n1){
	return n1 - n0;
}


STATIC_DEFINE_DYNAMIC_FUNC2(MathUtil_obj,delta,return )

double MathUtil_obj::normalize( double v,double n0,double n1){
	return double((v - n0)) / double(n1 - n0);
}


STATIC_DEFINE_DYNAMIC_FUNC3(MathUtil_obj,normalize,return )

double MathUtil_obj::interpolate( double v,double n0,double n1){
	return n0 + (n1 - n0) * v;
}


STATIC_DEFINE_DYNAMIC_FUNC3(MathUtil_obj,interpolate,return )

double MathUtil_obj::map( double v,double min0,double max0,double min1,double max1){
	return min1 + (max1 - min1) * double((v - min0)) / double(max0 - min0);
}


STATIC_DEFINE_DYNAMIC_FUNC5(MathUtil_obj,map,return )

bool MathUtil_obj::isOdd( int value){
	struct _Function_1{
		static bool Block( int &value)/* DEF (ret block)(not intern) */{
			int tmp = hxMod(value,2);
			return Std_obj::is(tmp,hxClassOf<Bool >()) ? int( tmp ) : int( hxThrow (String(L"Class cast error",16)) );
		}
	};
	return _Function_1::Block(value);
}


STATIC_DEFINE_DYNAMIC_FUNC1(MathUtil_obj,isOdd,return )

bool MathUtil_obj::isEven( int value){
	struct _Function_1{
		static bool Block( int &value)/* DEF (ret block)(not intern) */{
			int tmp = hxMod(value,2);
			return Std_obj::is(tmp,hxClassOf<Bool >()) ? int( tmp ) : int( hxThrow (String(L"Class cast error",16)) );
		}
	};
	return (_Function_1::Block(value) == false);
}


STATIC_DEFINE_DYNAMIC_FUNC1(MathUtil_obj,isEven,return )

bool MathUtil_obj::isInteger( double n){
	return (hxMod(n,1) == 0);
}


STATIC_DEFINE_DYNAMIC_FUNC1(MathUtil_obj,isInteger,return )

bool MathUtil_obj::isNatural( int n){
	return (bool((n > 0)) && bool((hxMod(n,1) == 0)));
}


STATIC_DEFINE_DYNAMIC_FUNC1(MathUtil_obj,isNatural,return )

bool MathUtil_obj::isPrime( int n){
	if (n == 1)
		return false;
	if (n == 2)
		return false;
	if (hxMod(n,2) == 0)
		return false;
	IntIter iter = IntIter_obj::__new(3,Math_obj::ceil(Math_obj::sqrt(n)) + 1);
	for(Dynamic __it = iter;  __it->__Field(String(L"hasNext",7))(); ){
int i = __it->__Field(String(L"next",4))();
		{
			if (hxMod(n,1) == 0){
				return false;
			}
			i++;
		}
;
	}
	return true;
}


STATIC_DEFINE_DYNAMIC_FUNC1(MathUtil_obj,isPrime,return )

int MathUtil_obj::factorial( int n){
	if (n < 0){
		hxThrow (String(L"function factorial requires natural number as input",51));
	}
	if (n == 0){
		return 1;
	}
	int i = n - 1;
	while(i > 0){
		n = n * i;
		i--;
	}
	return n;
}


STATIC_DEFINE_DYNAMIC_FUNC1(MathUtil_obj,factorial,return )

Array<int > MathUtil_obj::getDivisors( int n){
	Array<int > r = Array_obj<int >::__new();
	IntIter iter = IntIter_obj::__new(1,Math_obj::ceil((double(n) / double(2)) + 1));
	for(Dynamic __it = iter;  __it->__Field(String(L"hasNext",7))(); ){
int i = __it->__Field(String(L"next",4))();
		{
			if (hxMod(n,i) == 0){
				r->push(i);
			}
		}
;
	}
	if (n != 0){
		r->push(n);
	}
	return r;
}


STATIC_DEFINE_DYNAMIC_FUNC1(MathUtil_obj,getDivisors,return )

double MathUtil_obj::round( double n,Dynamic __o_c){
int c = __o_c.Default(1);
{
		double r = Math_obj::pow(10,c);
		return double(Math_obj::round(n * r)) / double(r);
	}
}


STATIC_DEFINE_DYNAMIC_FUNC2(MathUtil_obj,round,return )

double MathUtil_obj::ceil( double n,Dynamic __o_c){
int c = __o_c.Default(1);
{
		double r = Math_obj::pow(10,c);
		return double(Math_obj::ceil(n * r)) / double(r);
	}
}


STATIC_DEFINE_DYNAMIC_FUNC2(MathUtil_obj,ceil,return )

double MathUtil_obj::floor( double n,Dynamic __o_c){
int c = __o_c.Default(1);
{
		double r = Math_obj::pow(10,c);
		return double(Math_obj::floor(n * r)) / double(r);
	}
}


STATIC_DEFINE_DYNAMIC_FUNC2(MathUtil_obj,floor,return )


MathUtil_obj::MathUtil_obj()
{
}

Dynamic MathUtil_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 3:
		if (!memcmp(inName.__s,L"map",sizeof(wchar_t)*3) ) { return map_dyn(); }
		break;
	case 4:
		if (!memcmp(inName.__s,L"ceil",sizeof(wchar_t)*4) ) { return ceil_dyn(); }
		break;
	case 5:
		if (!memcmp(inName.__s,L"delta",sizeof(wchar_t)*5) ) { return delta_dyn(); }
		if (!memcmp(inName.__s,L"isOdd",sizeof(wchar_t)*5) ) { return isOdd_dyn(); }
		if (!memcmp(inName.__s,L"round",sizeof(wchar_t)*5) ) { return round_dyn(); }
		if (!memcmp(inName.__s,L"floor",sizeof(wchar_t)*5) ) { return floor_dyn(); }
		break;
	case 6:
		if (!memcmp(inName.__s,L"isEven",sizeof(wchar_t)*6) ) { return isEven_dyn(); }
		break;
	case 7:
		if (!memcmp(inName.__s,L"isPrime",sizeof(wchar_t)*7) ) { return isPrime_dyn(); }
		break;
	case 9:
		if (!memcmp(inName.__s,L"normalize",sizeof(wchar_t)*9) ) { return normalize_dyn(); }
		if (!memcmp(inName.__s,L"isInteger",sizeof(wchar_t)*9) ) { return isInteger_dyn(); }
		if (!memcmp(inName.__s,L"isNatural",sizeof(wchar_t)*9) ) { return isNatural_dyn(); }
		if (!memcmp(inName.__s,L"factorial",sizeof(wchar_t)*9) ) { return factorial_dyn(); }
		break;
	case 11:
		if (!memcmp(inName.__s,L"interpolate",sizeof(wchar_t)*11) ) { return interpolate_dyn(); }
		if (!memcmp(inName.__s,L"getDivisors",sizeof(wchar_t)*11) ) { return getDivisors_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_delta = __hxcpp_field_to_id("delta");
static int __id_normalize = __hxcpp_field_to_id("normalize");
static int __id_interpolate = __hxcpp_field_to_id("interpolate");
static int __id_map = __hxcpp_field_to_id("map");
static int __id_isOdd = __hxcpp_field_to_id("isOdd");
static int __id_isEven = __hxcpp_field_to_id("isEven");
static int __id_isInteger = __hxcpp_field_to_id("isInteger");
static int __id_isNatural = __hxcpp_field_to_id("isNatural");
static int __id_isPrime = __hxcpp_field_to_id("isPrime");
static int __id_factorial = __hxcpp_field_to_id("factorial");
static int __id_getDivisors = __hxcpp_field_to_id("getDivisors");
static int __id_round = __hxcpp_field_to_id("round");
static int __id_ceil = __hxcpp_field_to_id("ceil");
static int __id_floor = __hxcpp_field_to_id("floor");


Dynamic MathUtil_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_delta) return delta_dyn();
	if (inFieldID==__id_normalize) return normalize_dyn();
	if (inFieldID==__id_interpolate) return interpolate_dyn();
	if (inFieldID==__id_map) return map_dyn();
	if (inFieldID==__id_isOdd) return isOdd_dyn();
	if (inFieldID==__id_isEven) return isEven_dyn();
	if (inFieldID==__id_isInteger) return isInteger_dyn();
	if (inFieldID==__id_isNatural) return isNatural_dyn();
	if (inFieldID==__id_isPrime) return isPrime_dyn();
	if (inFieldID==__id_factorial) return factorial_dyn();
	if (inFieldID==__id_getDivisors) return getDivisors_dyn();
	if (inFieldID==__id_round) return round_dyn();
	if (inFieldID==__id_ceil) return ceil_dyn();
	if (inFieldID==__id_floor) return floor_dyn();
	return super::__IField(inFieldID);
}

Dynamic MathUtil_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void MathUtil_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"delta",
	L"normalize",
	L"interpolate",
	L"map",
	L"isOdd",
	L"isEven",
	L"isInteger",
	L"isNatural",
	L"isPrime",
	L"factorial",
	L"getDivisors",
	L"round",
	L"ceil",
	L"floor",
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class MathUtil_obj::__mClass;

void MathUtil_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"util.MathUtil",13), TCanCast<MathUtil_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void MathUtil_obj::__boot()
{
}

} // end namespace util
