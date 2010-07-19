#ifndef INCLUDED_haxe_Md5
#define INCLUDED_haxe_Md5

#include <hxObject.h>

DECLARE_CLASS1(haxe,Md5)
namespace haxe{


class Md5_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef Md5_obj OBJ_;

	protected:
		Md5_obj();
		Void __construct();

	public:
		static hxObjectPtr<Md5_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Md5_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Md5",3); }

		virtual int bitOR( int a,int b);
		Dynamic bitOR_dyn();

		virtual int bitXOR( int a,int b);
		Dynamic bitXOR_dyn();

		virtual int bitAND( int a,int b);
		Dynamic bitAND_dyn();

		virtual int addme( int x,int y);
		Dynamic addme_dyn();

		virtual String rhex( int num);
		Dynamic rhex_dyn();

		virtual Array<int > str2blks( String str);
		Dynamic str2blks_dyn();

		virtual int rol( int num,int cnt);
		Dynamic rol_dyn();

		virtual int cmn( int q,int a,int b,int x,int s,int t);
		Dynamic cmn_dyn();

		virtual int ff( int a,int b,int c,int d,int x,int s,int t);
		Dynamic ff_dyn();

		virtual int gg( int a,int b,int c,int d,int x,int s,int t);
		Dynamic gg_dyn();

		virtual int hh( int a,int b,int c,int d,int x,int s,int t);
		Dynamic hh_dyn();

		virtual int ii( int a,int b,int c,int d,int x,int s,int t);
		Dynamic ii_dyn();

		virtual String doEncode( String str);
		Dynamic doEncode_dyn();

		static String encode( String s);
		static Dynamic encode_dyn();

		static haxe::Md5 inst;
};

} // end namespace haxe

#endif /* INCLUDED_haxe_Md5 */ 
