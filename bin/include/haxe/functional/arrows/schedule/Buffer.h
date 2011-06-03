#ifndef INCLUDED_haxe_functional_arrows_schedule_Buffer
#define INCLUDED_haxe_functional_arrows_schedule_Buffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/functional/arrows/pattern/Subject.h>
HX_DECLARE_CLASS1(colhx,Collection)
HX_DECLARE_CLASS1(colhx,DList)
HX_DECLARE_CLASS4(haxe,functional,arrows,blaze,Call)
HX_DECLARE_CLASS4(haxe,functional,arrows,pattern,Observer)
HX_DECLARE_CLASS4(haxe,functional,arrows,pattern,Subject)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,Buffer)
namespace haxe{
namespace functional{
namespace arrows{
namespace schedule{


class Buffer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Buffer_obj OBJ_;
		Buffer_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Buffer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Buffer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::haxe::functional::arrows::pattern::Subject_obj *()
			{ return new ::haxe::functional::arrows::pattern::Subject_delegate_< Buffer_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("Buffer"); }

		::colhx::DList list; /* REM */ 
		int length; /* REM */ 
		virtual int getLength( );
		Dynamic getLength_dyn();

		virtual Void enqueue( ::haxe::functional::arrows::blaze::Call item);
		Dynamic enqueue_dyn();

		virtual ::haxe::functional::arrows::blaze::Call dequeue( );
		Dynamic dequeue_dyn();

		virtual bool remove( ::String v);
		Dynamic remove_dyn();

		virtual Void cancel( ::String id);
		Dynamic cancel_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual bool attach( ::haxe::functional::arrows::pattern::Observer observer);
		Dynamic attach_dyn();

		virtual bool detach( ::haxe::functional::arrows::pattern::Observer observer);
		Dynamic detach_dyn();

		virtual Void notify( );
		Dynamic notify_dyn();

		Array< ::haxe::functional::arrows::pattern::Observer > observers; /* REM */ 
};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace schedule

#endif /* INCLUDED_haxe_functional_arrows_schedule_Buffer */ 
