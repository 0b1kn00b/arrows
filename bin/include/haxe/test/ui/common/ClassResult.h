#ifndef INCLUDED_haxe_test_ui_common_ClassResult
#define INCLUDED_haxe_test_ui_common_ClassResult

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS4(haxe,test,ui,common,ClassResult)
HX_DECLARE_CLASS4(haxe,test,ui,common,FixtureResult)
HX_DECLARE_CLASS4(haxe,test,ui,common,ResultStats)
namespace haxe{
namespace test{
namespace ui{
namespace common{


class ClassResult_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ClassResult_obj OBJ_;
		ClassResult_obj();
		Void __construct(::String className,::String setupName,::String teardownName);

	public:
		static hx::ObjectPtr< ClassResult_obj > __new(::String className,::String setupName,::String teardownName);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~ClassResult_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		::String __ToString() const { return HX_CSTRING("ClassResult"); }

		::Hash fixtures; /* REM */ 
		::String className; /* REM */ 
		::String setupName; /* REM */ 
		::String teardownName; /* REM */ 
		bool hasSetup; /* REM */ 
		bool hasTeardown; /* REM */ 
		int methods; /* REM */ 
		::haxe::test::ui::common::ResultStats stats; /* REM */ 
		virtual Void add( ::haxe::test::ui::common::FixtureResult result);
		Dynamic add_dyn();

		virtual ::haxe::test::ui::common::FixtureResult get( ::String method);
		Dynamic get_dyn();

		virtual bool exists( ::String method);
		Dynamic exists_dyn();

		virtual Array< ::String > methodNames( Dynamic errorsHavePriority);
		Dynamic methodNames_dyn();

};

} // end namespace haxe
} // end namespace test
} // end namespace ui
} // end namespace common

#endif /* INCLUDED_haxe_test_ui_common_ClassResult */ 
