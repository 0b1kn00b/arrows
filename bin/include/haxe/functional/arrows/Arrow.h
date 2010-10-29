#ifndef INCLUDED_haxe_functional_arrows_Arrow
#define INCLUDED_haxe_functional_arrows_Arrow

#include <hxcpp.h>

HX_DECLARE_CLASS3(haxe,functional,arrows,Arrow)
HX_DECLARE_CLASS3(haxe,functional,arrows,ArrowInstance)
HX_DECLARE_CLASS3(haxe,functional,arrows,TaggedValue)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,AnimateThunk)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,ArrThunk)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,BindThunk)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,ComposeThunk)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,FanoutThunk)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,FirstThunk)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,FunctionThunk)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,JoinThunk)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,OrThunk)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,PollThunk)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,ProductThunk)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,ProgressArrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,RepeatThunk)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,SecondThunk)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,SignalArrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,combinators,TerminalArrow)
HX_DECLARE_CLASS4(haxe,functional,arrows,schedule,Scheduler)
HX_DECLARE_CLASS2(hsl,haxe,Signaler)
namespace haxe{
namespace functional{
namespace arrows{


class Arrow_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Arrow_obj OBJ_;
		Arrow_obj();
		Void __construct(Dynamic method);

	public:
		static hx::ObjectPtr< Arrow_obj > __new(Dynamic method);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Arrow_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("Arrow"); }

		Dynamic error;
		inline Dynamic &error_dyn() {return error; }

		Dynamic method; /* REM */ 
		::String info; /* REM */ 
		virtual Void execute( Dynamic x,::haxe::functional::arrows::ArrowInstance a);
		Dynamic execute_dyn();

		virtual ::haxe::functional::arrows::combinators::ProgressArrow run( Dynamic args);
		Dynamic run_dyn();

		::String name; /* REM */ 
		virtual ::String getName( );
		Dynamic getName_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual ::haxe::functional::arrows::combinators::ComposeThunk then( ::haxe::functional::arrows::Arrow f);
		Dynamic then_dyn();

		virtual ::haxe::functional::arrows::combinators::ProductThunk pair( ::haxe::functional::arrows::Arrow f);
		Dynamic pair_dyn();

		virtual ::haxe::functional::arrows::combinators::FirstThunk first( );
		Dynamic first_dyn();

		virtual ::haxe::functional::arrows::combinators::SecondThunk second( );
		Dynamic second_dyn();

		virtual ::haxe::functional::arrows::combinators::FanoutThunk fanout( ::haxe::functional::arrows::Arrow f);
		Dynamic fanout_dyn();

		virtual ::haxe::functional::arrows::combinators::BindThunk tie( ::haxe::functional::arrows::Arrow f);
		Dynamic tie_dyn();

		virtual ::haxe::functional::arrows::combinators::JoinThunk join( ::haxe::functional::arrows::Arrow f);
		Dynamic join_dyn();

		virtual ::haxe::functional::arrows::combinators::RepeatThunk repeat( );
		Dynamic repeat_dyn();

		virtual ::haxe::functional::arrows::combinators::OrThunk _or( ::haxe::functional::arrows::Arrow f);
		Dynamic _or_dyn();

		virtual ::haxe::functional::arrows::combinators::AnimateThunk animate( int ms);
		Dynamic animate_dyn();

		virtual ::haxe::functional::arrows::combinators::ComposeThunk dump( ::haxe::functional::arrows::Arrow f);
		Dynamic dump_dyn();

		virtual ::haxe::functional::arrows::combinators::ComposeThunk print( );
		Dynamic print_dyn();

		virtual ::haxe::functional::arrows::combinators::SignalArrow signalA( );
		Dynamic signalA_dyn();

		virtual ::haxe::functional::arrows::Arrow start( );
		Dynamic start_dyn();

		::haxe::functional::arrows::schedule::Scheduler scheduler; /* REM */ 
		static ::haxe::functional::arrows::combinators::TerminalArrow terminal( );
		static Dynamic terminal_dyn();

		static ::haxe::functional::arrows::Arrow fanoutA( );
		static Dynamic fanoutA_dyn();

		static ::haxe::functional::arrows::combinators::FunctionThunk liftF( Dynamic f);
		static Dynamic liftF_dyn();

		static ::haxe::functional::arrows::combinators::ArrThunk tupleF( Dynamic f);
		static Dynamic tupleF_dyn();

		static ::haxe::functional::arrows::Arrow returnA( );
		static Dynamic returnA_dyn();

		static ::haxe::functional::arrows::Arrow constA( Dynamic $t1);
		static Dynamic constA_dyn();

		static ::haxe::functional::arrows::TaggedValue doRepeat( Dynamic v);
		static Dynamic doRepeat_dyn();

		static ::haxe::functional::arrows::TaggedValue doDone( Dynamic v);
		static Dynamic doDone_dyn();

		static ::haxe::functional::arrows::Arrow delayA( int ms);
		static Dynamic delayA_dyn();

		static ::haxe::functional::arrows::combinators::PollThunk poll( Dynamic predicate);
		static Dynamic poll_dyn();

		static Void begin( );
		static Dynamic begin_dyn();

};

} // end namespace haxe
} // end namespace functional
} // end namespace arrows

#endif /* INCLUDED_haxe_functional_arrows_Arrow */ 
