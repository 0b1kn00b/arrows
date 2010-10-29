#ifndef INCLUDED_Future
#define INCLUDED_Future

#include <hxcpp.h>

HX_DECLARE_CLASS0(Future)
HX_DECLARE_CLASS0(Option)


class Future_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Future_obj OBJ_;
		Future_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Future_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Future_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Future"); }

		Array< Dynamic > _listeners; /* REM */ 
		Dynamic _result; /* REM */ 
		bool _isSet; /* REM */ 
		bool _isCanceled; /* REM */ 
		Array< Dynamic > _cancelers; /* REM */ 
		Array< Dynamic > _canceled; /* REM */ 
		virtual ::Future deliver( Dynamic t);
		Dynamic deliver_dyn();

		virtual ::Future allowCancelOnlyIf( Dynamic f);
		Dynamic allowCancelOnlyIf_dyn();

		virtual ::Future ifCanceled( Dynamic f);
		Dynamic ifCanceled_dyn();

		virtual bool cancel( );
		Dynamic cancel_dyn();

		virtual bool isDone( );
		Dynamic isDone_dyn();

		virtual bool isDelivered( );
		Dynamic isDelivered_dyn();

		virtual bool isCanceled( );
		Dynamic isCanceled_dyn();

		virtual ::Future deliverTo( Dynamic f);
		Dynamic deliverTo_dyn();

		virtual ::Future map( Dynamic $t1);
		Dynamic map_dyn();

		virtual ::Future then( ::Future f);
		Dynamic then_dyn();

		virtual ::Future flatMap( Dynamic $t1);
		Dynamic flatMap_dyn();

		virtual ::Future filter( Dynamic $t1);
		Dynamic filter_dyn();

		virtual ::Future zip( ::Future $t1);
		Dynamic zip_dyn();

		virtual ::Option value( );
		Dynamic value_dyn();

		virtual ::Option toOption( );
		Dynamic toOption_dyn();

		virtual Array< Dynamic > toArray( );
		Dynamic toArray_dyn();

		virtual ::Future forceCancel( );
		Dynamic forceCancel_dyn();

		static ::Future dead( );
		static Dynamic dead_dyn();

		static ::Future create( );
		static Dynamic create_dyn();

};


#endif /* INCLUDED_Future */ 
