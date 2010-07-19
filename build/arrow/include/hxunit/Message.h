#ifndef INCLUDED_hxunit_Message
#define INCLUDED_hxunit_Message

#include <hxObject.h>

DECLARE_CLASS1(hxunit,Message)
namespace hxunit{


class Message_obj : public hxEnumBase_obj
{
	typedef hxEnumBase_obj super;
		typedef Message_obj OBJ_;

	public:
		Message_obj() {};
		DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		String GetEnumName( ) const { return String(L"hxunit.Message",14); }
		String __ToString() const { return String(L"Message.",8) + tag; }

		static Message assert(Dynamic v);
		static Dynamic assert_dyn();
		static Message error(Dynamic v);
		static Dynamic error_dyn();
		static Message handle(String name,Dynamic value,Dynamic passThrough);
		static Dynamic handle_dyn();
		static Message wait(Dynamic value);
		static Dynamic wait_dyn();
};

} // end namespace hxunit

#endif /* INCLUDED_hxunit_Message */ 
