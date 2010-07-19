#ifndef INCLUDED_arrow_Arrow
#define INCLUDED_arrow_Arrow

#include <hxObject.h>

DECLARE_CLASS1(arrow,Arrow)
namespace arrow{


class Arrow_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef Arrow_obj OBJ_;

	protected:
		Arrow_obj();
		Void __construct(Dynamic method);

	public:
		static hxObjectPtr<Arrow_obj > __new(Dynamic method);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Arrow_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Arrow",5); }

		Dynamic method;
		virtual Void apply( Array<Dynamic > args);
		Dynamic apply_dyn();

		virtual arrow::Arrow compose( Dynamic $t2);
		Dynamic compose_dyn();

		virtual Void run( Dynamic x);
		Dynamic run_dyn();

		static Dynamic wrap( Dynamic $t1);
		static Dynamic wrap_dyn();

		static Dynamic arr( Dynamic $t1);
		static Dynamic arr_dyn();

		static arrow::Arrow eventA( String $t3);
		static Dynamic eventA_dyn();

};

} // end namespace arrow

#endif /* INCLUDED_arrow_Arrow */ 
