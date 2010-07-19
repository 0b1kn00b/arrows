#ifndef INCLUDED_reflect_Member
#define INCLUDED_reflect_Member

#include <hxObject.h>

DECLARE_CLASS1(reflect,Field)
DECLARE_CLASS1(reflect,Member)
DECLARE_CLASS1(reflect,NamedField)
DECLARE_CLASS1(reflect,RType)
namespace reflect{


class Member_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef Member_obj OBJ_;

	protected:
		Member_obj();
		Void __construct();

	public:
		static hxObjectPtr<Member_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~Member_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"Member",6); }

		reflect::RType declaredBy;
		virtual reflect::RType getDeclaredBy( );
		Dynamic getDeclaredBy_dyn();

		virtual reflect::RType setDeclaredBy( reflect::RType type);
		Dynamic setDeclaredBy_dyn();

};

} // end namespace reflect

#endif /* INCLUDED_reflect_Member */ 
