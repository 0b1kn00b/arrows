#include <hxObject.h>

#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrowInstance
#include <arrow/AsyncArrowInstance.h>
#endif
#ifndef INCLUDED_arrow_Tuple
#include <arrow/Tuple.h>
#endif
#ifndef INCLUDED_arrow_combinators_ArrThunk
#include <arrow/combinators/ArrThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_ComposeThunk
#include <arrow/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_ProductThunk
#include <arrow/combinators/ProductThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_ProgressArrow
#include <arrow/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_event_EventDispatcher
#include <event/EventDispatcher.h>
#endif
#ifndef INCLUDED_event_EventListener
#include <event/EventListener.h>
#endif
namespace arrow{
namespace combinators{

Void ProductThunk_obj::__construct(arrow::AsyncArrow $t2,arrow::AsyncArrow $t3)
{
{
	Array<arrow::AsyncArrow > g = Array_obj<arrow::AsyncArrow >::__new().Add($t3);
	Array<arrow::AsyncArrow > f = Array_obj<arrow::AsyncArrow >::__new().Add($t2);
	arrow::combinators::ProductThunk self = this;

	BEGIN_LOCAL_FUNC2(_Function_1,Array<arrow::AsyncArrow >,f,Array<arrow::AsyncArrow >,g)
	Void run(arrow::Tuple x,arrow::AsyncArrowInstance $t1){
{
			Array<arrow::AsyncArrowInstance > a = Array_obj<arrow::AsyncArrowInstance >::__new().Add($t1);
			Array<arrow::combinators::ProgressArrow > first = Array_obj<arrow::combinators::ProgressArrow >::__new().Add(null());
			Array<arrow::combinators::ProgressArrow > second = Array_obj<arrow::combinators::ProgressArrow >::__new().Add(null());

			BEGIN_LOCAL_FUNC2(_Function_2,Array<arrow::combinators::ProgressArrow >,first,Array<arrow::combinators::ProgressArrow >,second)
			Void run(){
{
					first[0]->cancel();
					second[0]->cancel();
				}
				return null();
			}
			END_LOCAL_FUNC0((void))

			Array<Dynamic > cancel = Array_obj<Dynamic >::__new().Add( Dynamic(new _Function_2(first,second)));
			a[0]->addCanceller(cancel->__get(0));
			Array<Dynamic > y1 = Array_obj<Dynamic >::__new().Add(null());
			Array<Dynamic > y2 = Array_obj<Dynamic >::__new().Add(null());
			Array<int > count = Array_obj<int >::__new().Add(2);

			BEGIN_LOCAL_FUNC5(_Function_3,Array<Dynamic >,cancel,Array<Dynamic >,y1,Array<int >,count,Array<arrow::AsyncArrowInstance >,a,Array<Dynamic >,y2)
			Void run(){
{
					if (--count[0] == 0){
						a[0]->advance(cancel->__get(0));
						a[0]->cont(arrow::Tuple_obj::__new(Array_obj<Dynamic >::__new().Add(y1->__get(0)).Add(y2->__get(0))),null(),null());
					}
				}
				return null();
			}
			END_LOCAL_FUNC0((void))

			Array<Dynamic > barrier = Array_obj<Dynamic >::__new().Add( Dynamic(new _Function_3(cancel,y1,count,a,y2)));

			BEGIN_LOCAL_FUNC0(_Function_4)
			Dynamic run(Dynamic x1){
{
					return x1;
				}
				return null();
			}
			END_LOCAL_FUNC1(return)

			arrow::combinators::ArrThunk debug = arrow::AsyncArrow_obj::tuple( Dynamic(new _Function_4()));

			BEGIN_LOCAL_FUNC2(_Function_5,Array<Dynamic >,y1,Array<Dynamic >,barrier)
			Dynamic run(Dynamic y){
{
					y1[0] = y;
					barrier->__get(0)();
				}
				return null();
			}
			END_LOCAL_FUNC1(return)

			arrow::combinators::ArrThunk f1 = arrow::AsyncArrow_obj::tuple( Dynamic(new _Function_5(y1,barrier)));

			BEGIN_LOCAL_FUNC2(_Function_6,Array<Dynamic >,y2,Array<Dynamic >,barrier)
			Dynamic run(Dynamic y){
{
					y2[0] = y;
					barrier->__get(0)();
				}
				return null();
			}
			END_LOCAL_FUNC1(return)

			arrow::combinators::ArrThunk g1 = arrow::AsyncArrow_obj::tuple( Dynamic(new _Function_6(y2,barrier)));
			first[0] = f[0]->then(f1)->run(x->fst());
			second[0] = g[0]->then(g1)->run(x->snd());
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	super::__construct( Dynamic(new _Function_1(f,g)));
}
;
	return null();
}

ProductThunk_obj::~ProductThunk_obj() { }

Dynamic ProductThunk_obj::__CreateEmpty() { return  new ProductThunk_obj; }
hxObjectPtr<ProductThunk_obj > ProductThunk_obj::__new(arrow::AsyncArrow $t2,arrow::AsyncArrow $t3)
{  hxObjectPtr<ProductThunk_obj > result = new ProductThunk_obj();
	result->__construct($t2,$t3);
	return result;}

Dynamic ProductThunk_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<ProductThunk_obj > result = new ProductThunk_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

String ProductThunk_obj::getName( ){
	return String(L"ProductThunk",12);
}


DEFINE_DYNAMIC_FUNC0(ProductThunk_obj,getName,return )


ProductThunk_obj::ProductThunk_obj()
{
}

Dynamic ProductThunk_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 7:
		if (!memcmp(inName.__s,L"getName",sizeof(wchar_t)*7) ) { return getName_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_getName = __hxcpp_field_to_id("getName");


Dynamic ProductThunk_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_getName) return getName_dyn();
	return super::__IField(inFieldID);
}

Dynamic ProductThunk_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void ProductThunk_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	L"getName",
	0 };

Class ProductThunk_obj::__mClass;

void ProductThunk_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.combinators.ProductThunk",30), TCanCast<ProductThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void ProductThunk_obj::__boot()
{
}

} // end namespace arrow
} // end namespace combinators
