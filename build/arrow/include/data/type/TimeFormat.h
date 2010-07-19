#ifndef INCLUDED_data_type_TimeFormat
#define INCLUDED_data_type_TimeFormat

#include <hxObject.h>

DECLARE_CLASS2(data,type,TimeFormat)
namespace data{
namespace type{


class TimeFormat_obj : public hxEnumBase_obj
{
	typedef hxEnumBase_obj super;
		typedef TimeFormat_obj OBJ_;

	public:
		TimeFormat_obj() {};
		DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		String GetEnumName( ) const { return String(L"data.type.TimeFormat",20); }
		String __ToString() const { return String(L"TimeFormat.",11) + tag; }

		static TimeFormat day;
		static TimeFormat hour;
		static TimeFormat millisecond;
		static TimeFormat minute;
		static TimeFormat second;
};

} // end namespace data
} // end namespace type

#endif /* INCLUDED_data_type_TimeFormat */ 
