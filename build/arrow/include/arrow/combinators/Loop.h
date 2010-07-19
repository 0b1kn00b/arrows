#ifndef INCLUDED_arrow_combinators_Loop
#define INCLUDED_arrow_combinators_Loop

#include <hxObject.h>

DECLARE_CLASS2(arrow,combinators,Loop)
namespace arrow{
namespace combinators{


class Loop_obj : public hxEnumBase_obj
{
	typedef hxEnumBase_obj super;
		typedef Loop_obj OBJ_;

	public:
		Loop_obj() {};
		DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		String GetEnumName( ) const { return String(L"arrow.combinators.Loop",22); }
		String __ToString() const { return String(L"Loop.",5) + tag; }

		static Loop done;
		static Loop repeat;
};

} // end namespace arrow
} // end namespace combinators

#endif /* INCLUDED_arrow_combinators_Loop */ 
