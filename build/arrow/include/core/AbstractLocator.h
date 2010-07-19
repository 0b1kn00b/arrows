#ifndef INCLUDED_core_AbstractLocator
#define INCLUDED_core_AbstractLocator

#include <hxObject.h>

#include <core/LifeCycle.h>
DECLARE_CLASS0(Hash)
DECLARE_CLASS1(core,AbstractLocator)
DECLARE_CLASS1(core,LifeCycle)
namespace core{


class AbstractLocator_obj : public virtual hxObject, public core::LifeCycle_obj
{
	public:
		typedef hxObject super;
		typedef AbstractLocator_obj OBJ_;

	protected:
		AbstractLocator_obj();
		Void __construct();

	public:
		static hxObjectPtr<AbstractLocator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~AbstractLocator_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"AbstractLocator",15); }

		Hash content;
		virtual Void initialize( );
		Dynamic initialize_dyn();

		virtual Void release( );
		Dynamic release_dyn();

		virtual Dynamic locate( String name);
		Dynamic locate_dyn();

		virtual bool register( String name,Dynamic value);
		Dynamic register_dyn();

		virtual bool isRegistered( String name);
		Dynamic isRegistered_dyn();

		virtual bool unregister( String name);
		Dynamic unregister_dyn();

};

} // end namespace core

#endif /* INCLUDED_core_AbstractLocator */ 
