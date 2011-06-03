#ifndef INCLUDED_colhx_DIterator
#define INCLUDED_colhx_DIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(colhx,Collection)
HX_DECLARE_CLASS1(colhx,DIterator)
HX_DECLARE_CLASS1(colhx,DList)
HX_DECLARE_CLASS1(colhx,DListNode)
namespace colhx{


class DIterator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DIterator_obj OBJ_;
		DIterator_obj();
		Void __construct(::colhx::DList target,::colhx::DListNode node);

	public:
		static hx::ObjectPtr< DIterator_obj > __new(::colhx::DList target,::colhx::DListNode node);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DIterator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("DIterator"); }

		::colhx::DList target; /* REM */ 
		::colhx::DListNode cursor; /* REM */ 
		::colhx::DListNode _cursor; /* REM */ 
		virtual ::colhx::DListNode getCursor( );
		Dynamic getCursor_dyn();

		virtual ::colhx::DListNode setCursor( ::colhx::DListNode value);
		Dynamic setCursor_dyn();

		Dynamic currentData; /* REM */ 
		virtual Dynamic getCurrentData( );
		Dynamic getCurrentData_dyn();

		virtual Dynamic setCurrentData( Dynamic to);
		Dynamic setCurrentData_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		virtual Void first( );
		Dynamic first_dyn();

		virtual Void last( );
		Dynamic last_dyn();

		virtual Void forward( );
		Dynamic forward_dyn();

		virtual Void backward( );
		Dynamic backward_dyn();

		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual Dynamic next( );
		Dynamic next_dyn();

		virtual bool valid( );
		Dynamic valid_dyn();

};

} // end namespace colhx

#endif /* INCLUDED_colhx_DIterator */ 
