#ifndef INCLUDED_arrow_AsyncArrow
#define INCLUDED_arrow_AsyncArrow

#include <hxObject.h>

DECLARE_CLASS1(arrow,AsyncArrow)
DECLARE_CLASS1(arrow,AsyncArrowInstance)
DECLARE_CLASS1(arrow,TaggedValue)
DECLARE_CLASS2(arrow,combinators,ArrThunk)
DECLARE_CLASS2(arrow,combinators,BindThunk)
DECLARE_CLASS2(arrow,combinators,ComposeThunk)
DECLARE_CLASS2(arrow,combinators,EventArrow)
DECLARE_CLASS2(arrow,combinators,FanoutThunk)
DECLARE_CLASS2(arrow,combinators,FirstThunk)
DECLARE_CLASS2(arrow,combinators,FunctionThunk)
DECLARE_CLASS2(arrow,combinators,JoinThunk)
DECLARE_CLASS2(arrow,combinators,OrThunk)
DECLARE_CLASS2(arrow,combinators,ProductThunk)
DECLARE_CLASS2(arrow,combinators,ProgressArrow)
DECLARE_CLASS2(arrow,combinators,RepeatThunk)
DECLARE_CLASS2(arrow,combinators,SecondThunk)
DECLARE_CLASS2(arrow,combinators,TerminalArrow)
DECLARE_CLASS2(data,type,Time)
DECLARE_CLASS1(event,EventDispatcher)
DECLARE_CLASS1(event,EventListener)
DECLARE_CLASS2(ion,log,Log)
namespace arrow{


class AsyncArrow_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef AsyncArrow_obj OBJ_;

	protected:
		AsyncArrow_obj();
		Void __construct(Dynamic method);

	public:
		static hxObjectPtr<AsyncArrow_obj > __new(Dynamic method);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~AsyncArrow_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"AsyncArrow",10); }

		Dynamic error;
	Dynamic &error_dyn() { return error;}
		Dynamic method;
		String name;
		virtual String getName( );
		Dynamic getName_dyn();

		virtual arrow::combinators::ProgressArrow run( Dynamic args);
		Dynamic run_dyn();

		virtual Void apply( Dynamic args,arrow::AsyncArrowInstance next);
		Dynamic apply_dyn();

		virtual String toString( );
		Dynamic toString_dyn();

		virtual arrow::combinators::ComposeThunk then( Dynamic f);
		Dynamic then_dyn();

		virtual arrow::combinators::ProductThunk pair( Dynamic f);
		Dynamic pair_dyn();

		virtual arrow::combinators::FirstThunk first( );
		Dynamic first_dyn();

		virtual arrow::combinators::SecondThunk second( );
		Dynamic second_dyn();

		virtual arrow::combinators::FanoutThunk fanout( Dynamic f);
		Dynamic fanout_dyn();

		virtual arrow::combinators::BindThunk bind( Dynamic f);
		Dynamic bind_dyn();

		virtual arrow::combinators::JoinThunk join( Dynamic f);
		Dynamic join_dyn();

		virtual arrow::combinators::RepeatThunk repeat( );
		Dynamic repeat_dyn();

		virtual arrow::combinators::OrThunk _or( Dynamic trigger,Dynamic f);
		Dynamic _or_dyn();

		virtual Dynamic getCallback( int numArgs);
		Dynamic getCallback_dyn();

		virtual arrow::combinators::ComposeThunk dump( Dynamic f);
		Dynamic dump_dyn();

		virtual arrow::combinators::ComposeThunk print( );
		Dynamic print_dyn();

		virtual bool isFunction( Dynamic f);
		Dynamic isFunction_dyn();

		ion::log::Log log;
		static arrow::combinators::TerminalArrow terminal( );
		static Dynamic terminal_dyn();

		static arrow::combinators::ArrThunk fanoutA( );
		static Dynamic fanoutA_dyn();

		static arrow::combinators::FunctionThunk lift( Dynamic f);
		static Dynamic lift_dyn();

		static arrow::combinators::ArrThunk tuple( Dynamic f);
		static Dynamic tuple_dyn();

		static arrow::combinators::ArrThunk returnA( );
		static Dynamic returnA_dyn();

		static arrow::combinators::ArrThunk constA( Dynamic $t1);
		static Dynamic constA_dyn();

		static arrow::TaggedValue doRepeat( Dynamic v);
		static Dynamic doRepeat_dyn();

		static arrow::TaggedValue doDone( Dynamic v);
		static Dynamic doDone_dyn();

		static arrow::AsyncArrow delayA( data::type::Time time);
		static Dynamic delayA_dyn();

		static arrow::combinators::EventArrow eventA( Dynamic trigger);
		static Dynamic eventA_dyn();

};

} // end namespace arrow

#endif /* INCLUDED_arrow_AsyncArrow */ 
