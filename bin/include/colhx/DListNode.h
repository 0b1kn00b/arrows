#ifndef INCLUDED_colhx_DListNode
#define INCLUDED_colhx_DListNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(colhx,DListNode)
namespace colhx{


class DListNode_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DListNode_obj OBJ_;
		DListNode_obj();
		Void __construct(Dynamic data,::colhx::DListNode next,::colhx::DListNode previous);

	public:
		static hx::ObjectPtr< DListNode_obj > __new(Dynamic data,::colhx::DListNode next,::colhx::DListNode previous);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~DListNode_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("DListNode"); }

		::colhx::DListNode next; /* REM */ 
		::colhx::DListNode prev; /* REM */ 
		Dynamic data; /* REM */ 
		virtual Void insertBefore( ::colhx::DListNode node);
		Dynamic insertBefore_dyn();

		virtual Void insertAfter( ::colhx::DListNode node);
		Dynamic insertAfter_dyn();

		virtual Void unlink( );
		Dynamic unlink_dyn();

};

} // end namespace colhx

#endif /* INCLUDED_colhx_DListNode */ 
