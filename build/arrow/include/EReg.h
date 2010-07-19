#ifndef INCLUDED_EReg
#define INCLUDED_EReg

#include <hxObject.h>

DECLARE_CLASS0(EReg)


class EReg_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef EReg_obj OBJ_;

	protected:
		EReg_obj();
		Void __construct(String r,String opt);

	public:
		static hxObjectPtr<EReg_obj > __new(String r,String opt);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~EReg_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"EReg",4); }

		Dynamic r;
		String last;
		bool global;
		virtual bool match( String s);
		Dynamic match_dyn();

		virtual String matched( int n);
		Dynamic matched_dyn();

		virtual String matchedLeft( );
		Dynamic matchedLeft_dyn();

		virtual String matchedRight( );
		Dynamic matchedRight_dyn();

		virtual Dynamic matchedPos( );
		Dynamic matchedPos_dyn();

		virtual Array<String > split( String s);
		Dynamic split_dyn();

		virtual String replace( String s,String by);
		Dynamic replace_dyn();

		virtual String customReplace( String s,Dynamic f);
		Dynamic customReplace_dyn();

		static Dynamic regexp_new_options;
	Dynamic &regexp_new_options_dyn() { return regexp_new_options;}
		static Dynamic regexp_match;
	Dynamic &regexp_match_dyn() { return regexp_match;}
		static Dynamic regexp_matched;
	Dynamic &regexp_matched_dyn() { return regexp_matched;}
		static Dynamic regexp_matched_pos;
	Dynamic &regexp_matched_pos_dyn() { return regexp_matched_pos;}
};


#endif /* INCLUDED_EReg */ 
