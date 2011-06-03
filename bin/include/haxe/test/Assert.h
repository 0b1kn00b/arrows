#ifndef INCLUDED_haxe_test_Assert
#define INCLUDED_haxe_test_Assert

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS0(Either)
HX_DECLARE_CLASS0(Future)
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(haxe,test,Assert)
namespace haxe{
namespace test{


class Assert_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Assert_obj OBJ_;
		Assert_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Assert_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Assert_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Assert"); }

		static ::List results; /* REM */ 
		static Void that( Dynamic obj,Dynamic cond,::String msg,Dynamic pos);
		static Dynamic that_dyn();

		static Void isTrue( bool cond,::String msg,Dynamic pos);
		static Dynamic isTrue_dyn();

		static Void isFalse( bool value,::String msg,Dynamic pos);
		static Dynamic isFalse_dyn();

		static Void isNull( Dynamic value,::String msg,Dynamic pos);
		static Dynamic isNull_dyn();

		static Void notNull( Dynamic value,::String msg,Dynamic pos);
		static Dynamic notNull_dyn();

		static Void is( Dynamic value,Dynamic type,::String msg,Dynamic pos);
		static Dynamic is_dyn();

		static Void notEquals( Dynamic expected,Dynamic value,::String msg,Dynamic pos);
		static Dynamic notEquals_dyn();

		static Void equals( Dynamic expected,Dynamic value,Dynamic equal,::String msg,Dynamic pos);
		static Dynamic equals_dyn();

		static Void matches( ::EReg pattern,Dynamic value,::String msg,Dynamic pos);
		static Dynamic matches_dyn();

		static Void floatEquals( double expected,double value,Dynamic approx,::String msg,Dynamic pos);
		static Dynamic floatEquals_dyn();

		static ::String getTypeName( Dynamic v);
		static Dynamic getTypeName_dyn();

		static bool isIterable( Dynamic v,bool isAnonym);
		static Dynamic isIterable_dyn();

		static bool isIterator( Dynamic v,bool isAnonym);
		static Dynamic isIterator_dyn();

		static bool sameAs( Dynamic $t1,Dynamic $t2,Dynamic status);
		static Dynamic sameAs_dyn();

		static ::String q( Dynamic v);
		static Dynamic q_dyn();

		static Void looksLike( Dynamic expected,Dynamic value,Dynamic recursive,::String msg,Dynamic pos);
		static Dynamic looksLike_dyn();

		static Void throwsException( Dynamic method,::Class type,::String msg,Dynamic pos);
		static Dynamic throwsException_dyn();

		static Void equalsOneOf( Dynamic value,Dynamic possibilities,::String msg,Dynamic pos);
		static Dynamic equalsOneOf_dyn();

		static Void contains( Dynamic values,Dynamic match,::String msg,Dynamic pos);
		static Dynamic contains_dyn();

		static Void notContains( Dynamic values,Dynamic match,::String msg,Dynamic pos);
		static Dynamic notContains_dyn();

		static Void stringContains( ::String match,::String value,::String msg,Dynamic pos);
		static Dynamic stringContains_dyn();

		static Void stringSequence( Array< ::String > sequence,::String value,::String msg,Dynamic pos);
		static Dynamic stringSequence_dyn();

		static Void fail( Dynamic msg,Dynamic pos);
		static Dynamic fail_dyn();

		static Void warn( ::String msg);
		static Dynamic warn_dyn();

		static Dynamic createAsync;
		static inline Dynamic &createAsync_dyn() {return createAsync; }

		static Void delivered( ::Future $t1,Dynamic $t2,Dynamic timeout);
		static Dynamic delivered_dyn();

		static Void canceled( ::Future future,Dynamic assertions,Dynamic timeout);
		static Dynamic canceled_dyn();

		static Void notDelivered( ::Future $t1,Dynamic timeout,Dynamic $t2);
		static Dynamic notDelivered_dyn();

		static Dynamic createEvent;
		static inline Dynamic &createEvent_dyn() {return createEvent; }

		static ::String typeToString( Dynamic t);
		static Dynamic typeToString_dyn();

};

} // end namespace haxe
} // end namespace test

#endif /* INCLUDED_haxe_test_Assert */ 
