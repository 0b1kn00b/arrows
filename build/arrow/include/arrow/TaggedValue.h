#ifndef INCLUDED_arrow_TaggedValue
#define INCLUDED_arrow_TaggedValue

#include <hxObject.h>

DECLARE_CLASS1(arrow,TaggedValue)
namespace arrow{


class TaggedValue_obj : public virtual hxObject
{
	public:
		typedef hxObject super;
		typedef TaggedValue_obj OBJ_;

	protected:
		TaggedValue_obj();
		Void __construct(Dynamic tag,Dynamic value);

	public:
		static hxObjectPtr<TaggedValue_obj > __new(Dynamic tag,Dynamic value);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(DynamicArray inArgs);
		~TaggedValue_obj();

		DO_RTTI;
		static void __boot();
		static void __register();
		String __ToString() const { return String(L"TaggedValue",11); }

		Dynamic tag;
		Dynamic value;
};

} // end namespace arrow

#endif /* INCLUDED_arrow_TaggedValue */ 
