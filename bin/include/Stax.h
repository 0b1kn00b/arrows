#ifndef INCLUDED_Stax
#define INCLUDED_Stax

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(Stax)
HX_DECLARE_CLASS0(ValueType)


class Stax_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Stax_obj OBJ_;
		Stax_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Stax_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Stax_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Stax"); }

		static Dynamic _createOrderImpl( Dynamic $t1);
		static Dynamic _createOrderImpl_dyn();

		static Dynamic getOrderFor( Dynamic t);
		static Dynamic getOrderFor_dyn();

		static Dynamic getOrderForType( ::ValueType v);
		static Dynamic getOrderForType_dyn();

		static bool _hasMetaDataClass( ::Class c);
		static Dynamic _hasMetaDataClass_dyn();

		static Dynamic _getMetaDataField( ::Class c,::String f);
		static Dynamic _getMetaDataField_dyn();

		static Array< ::String > _fieldsWithMeta( ::Class $t1,::String $t2);
		static Dynamic _fieldsWithMeta_dyn();

		static Dynamic _createEqualImpl( Dynamic $t1);
		static Dynamic _createEqualImpl_dyn();

		static Dynamic getEqualFor( Dynamic t);
		static Dynamic getEqualFor_dyn();

		static Dynamic getEqualForType( ::ValueType v);
		static Dynamic getEqualForType_dyn();

		static Dynamic _createShowImpl( Dynamic $t1);
		static Dynamic _createShowImpl_dyn();

		static Dynamic getShowFor( Dynamic t);
		static Dynamic getShowFor_dyn();

		static Dynamic getShowForType( ::ValueType v);
		static Dynamic getShowForType_dyn();

		static Dynamic _createHashImpl( Dynamic $t1);
		static Dynamic _createHashImpl_dyn();

		static Dynamic getHashFor( Dynamic t);
		static Dynamic getHashFor_dyn();

		static Dynamic getHashForType( ::ValueType v);
		static Dynamic getHashForType_dyn();

		static Void thunk( );
		static Dynamic thunk_dyn();

		static Dynamic noop( );
		static Dynamic noop_dyn();

		static Dynamic noop1( );
		static Dynamic noop1_dyn();

		static Dynamic noop2( );
		static Dynamic noop2_dyn();

		static Dynamic noop3( );
		static Dynamic noop3_dyn();

		static Dynamic noop4( );
		static Dynamic noop4_dyn();

		static Dynamic noop5( );
		static Dynamic noop5_dyn();

		static Dynamic identity( );
		static Dynamic identity_dyn();

		static Dynamic i( );
		static Dynamic i_dyn();

		static Dynamic unfold( Dynamic $t1,Dynamic $t2);
		static Dynamic unfold_dyn();

		static Dynamic error( ::String msg);
		static Dynamic error_dyn();

};


#endif /* INCLUDED_Stax */ 
