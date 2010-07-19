#ifndef INCLUDED_data_XQueue
#define INCLUDED_data_XQueue

#include <hxObject.h>

DECLARE_CLASS0(List)
DECLARE_CLASS1(data,XQueue)
namespace data{


class XQueue_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef XQueue_obj OBJ_;

	protected:
		XQueue_obj();
		Void __construct();

	public:
		static hxObjectPtr<XQueue_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~XQueue_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"XQueue",6); }

		List content;
		int length;
		virtual Void push( Dynamic value);
		Dynamic push_dyn();

		virtual Dynamic pop( );
		Dynamic pop_dyn();

		virtual String toString( );
		Dynamic toString_dyn();

};

} // end namespace data

#endif /* INCLUDED_data_XQueue */ 
