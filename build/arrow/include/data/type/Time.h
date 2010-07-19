#ifndef INCLUDED_data_type_Time
#define INCLUDED_data_type_Time

#include <hxObject.h>

DECLARE_CLASS2(data,type,Time)
DECLARE_CLASS2(data,type,TimeFormat)
namespace data{
namespace type{


class Time_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef Time_obj OBJ_;

	protected:
		Time_obj();
		Void __construct(Dynamic timeDifference,data::type::TimeFormat format);

	public:
		static hxObjectPtr<Time_obj > __new(Dynamic timeDifference,data::type::TimeFormat format);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Time_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Time",4); }

		virtual data::type::Time setValue( double timeDifference,data::type::TimeFormat format);
		Dynamic setValue_dyn();

		virtual data::type::Time plus( data::type::Time timeDifference);
		Dynamic plus_dyn();

		virtual data::type::Time minus( data::type::Time timeDifference);
		Dynamic minus_dyn();

		virtual double getMilliSeconds( Dynamic round);
		Dynamic getMilliSeconds_dyn();

		virtual double inMilliSeconds( );
		Dynamic inMilliSeconds_dyn();

		virtual double getSeconds( Dynamic round);
		Dynamic getSeconds_dyn();

		virtual double inSeconds( );
		Dynamic inSeconds_dyn();

		virtual double getMinutes( Dynamic round);
		Dynamic getMinutes_dyn();

		virtual double inMinutes( );
		Dynamic inMinutes_dyn();

		virtual double getHours( Dynamic round);
		Dynamic getHours_dyn();

		virtual double inHours( );
		Dynamic inHours_dyn();

		virtual double getDays( Dynamic round);
		Dynamic getDays_dyn();

		virtual double inDays( );
		Dynamic inDays_dyn();

		virtual String toString( );
		Dynamic toString_dyn();

		virtual Void evaluate( );
		Dynamic evaluate_dyn();

		double ms;
		double days;
		double hours;
		double minutes;
		double seconds;
		double milliSeconds;
		bool doEval;
		static data::type::Time fromTimeStamp( );
		static Dynamic fromTimeStamp_dyn();

		static double SECOND;
		static double MINUTE;
		static double HOUR;
		static double DAY;
};

} // end namespace data
} // end namespace type

#endif /* INCLUDED_data_type_Time */ 
