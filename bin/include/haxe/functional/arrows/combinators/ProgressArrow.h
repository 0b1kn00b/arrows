#ifndef INCLUDED_haxe_functional_arrows_combinators_ProgressArrow
#define INCLUDED_haxe_functional_arrows_combinators_ProgressArrow

#include <hxcpp.h>

#include <haxe/functional/arrows/Arrow.h>
#include <hsl/haxe/Signaler.h>
HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS3(haxe,functional,arrows,ArrowInstance)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,ProgressArrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,vo,Progress)
HX_DECLARE_CLASS2(hsl,haxe,Bond)
HX_DECLARE_CLASS2(hsl,haxe,DirectSignaler)
HX_DECLARE_CLASS2(hsl,haxe,Signal)
HX_DECLARE_CLASS2(hsl,haxe,Signaler)
namespace haxe{
namespace functional{
namespace arrows{
namespace combinators{


class ProgressArrow_obj : public ::haxe::functional::arrows::Arrow_obj{
	public:
		typedef ::haxe::functional::arrows::Arrow_obj super;
		typedef ProgressArrow_obj OBJ_;
		ProgressArrow_obj();
		Void __construct(::haxe::functional::arrows::ArrowInstance instance);

	public:
		static hx::ObjectPtr< ProgressArrow_obj > __new(::haxe::functional::arrows::ArrowInstance instance);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ProgressArrow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::hsl::haxe::Signaler_obj *()
			{ return new ::hsl::haxe::Signaler_delegate_< ProgressArrow_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("ProgressArrow"); }

		::hsl::haxe::DirectSignaler internalSignaler; /* REM */ 
		::haxe::functional::arrows::ArrowInstance instance; /* REM */ 
		virtual Void cancel( );
		Dynamic cancel_dyn();

		bool isListenedTo; /* REM */ 
		virtual bool getIsListenedTo( );
		Dynamic getIsListenedTo_dyn();

		Dynamic subject; /* REM */ 
		virtual Void addBubblingTarget( ::hsl::haxe::Signaler value);
		Dynamic addBubblingTarget_dyn();

		virtual ::hsl::haxe::Bond bind( Dynamic listener);
		Dynamic bind_dyn();

		virtual ::hsl::haxe::Bond bindAdvanced( Dynamic listener);
		Dynamic bindAdvanced_dyn();

		virtual ::hsl::haxe::Bond bindVoid( Dynamic listener);
		Dynamic bindVoid_dyn();

		virtual Void dispatch( ::haxe::functional::arrows::vo::Progress data,Dynamic origin,Dynamic positionInformation);
		Dynamic dispatch_dyn();

		virtual Void removeBubblingTarget( ::hsl::haxe::Signaler value);
		Dynamic removeBubblingTarget_dyn();

		virtual Void unbind( Dynamic listener);
		Dynamic unbind_dyn();

		virtual Void unbindAdvanced( Dynamic listener);
		Dynamic unbindAdvanced_dyn();

		virtual Void unbindVoid( Dynamic listener);
		Dynamic unbindVoid_dyn();

		virtual Void addNotificationTarget( ::hsl::haxe::Signaler v);
		Dynamic addNotificationTarget_dyn();

		virtual Void removeNotificationTarget( ::hsl::haxe::Signaler v);
		Dynamic removeNotificationTarget_dyn();

		virtual ::String getName( );
		Dynamic getName_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows
} // end namespace combinators

#endif /* INCLUDED_haxe_functional_arrows_combinators_ProgressArrow */ 
