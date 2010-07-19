#include <hxObject.h>

#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrowInstance
#include <arrow/AsyncArrowInstance.h>
#endif
#ifndef INCLUDED_arrow_combinators_ArrThunk
#include <arrow/combinators/ArrThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_ComposeThunk
#include <arrow/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_OrThunk
#include <arrow/combinators/OrThunk.h>
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

Void OrThunk_obj::__construct(Dynamic __o_trigger,arrow::AsyncArrow $t2,arrow::AsyncArrow $t3)
{
String trigger = __o_trigger.Default(String(L"progress",8));
{
	Array<arrow::AsyncArrow > g = Array_obj<arrow::AsyncArrow >::__new().Add($t3);
	Array<arrow::AsyncArrow > f = Array_obj<arrow::AsyncArrow >::__new().Add($t2);
	arrow::combinators::OrThunk self = this;

	BEGIN_LOCAL_FUNC2(_Function_1,Array<arrow::AsyncArrow >,f,Array<arrow::AsyncArrow >,g)
	Void run(Dynamic x,arrow::AsyncArrowInstance $t1){
{
			Array<arrow::AsyncArrowInstance > a = Array_obj<arrow::AsyncArrowInstance >::__new().Add($t1);
			Array<Dynamic > a0 = Array_obj<Dynamic >::__new().Add(null());
			Array<Dynamic > a1 = Array_obj<Dynamic >::__new().Add(null());

			BEGIN_LOCAL_FUNC2(_Function_2,Array<Dynamic >,a0,Array<Dynamic >,a1)
			Void run(){
{
					a0[0]->__Field(String(L"cancel",6))();
					a1[0]->__Field(String(L"cancel",6))();
				}
				return null();
			}
			END_LOCAL_FUNC0((void))

			Array<Dynamic > cancel = Array_obj<Dynamic >::__new().Add( Dynamic(new _Function_2(a0,a1)));
			a[0]->addCanceller(cancel->__get(0));

			BEGIN_LOCAL_FUNC3(_Function_3,Array<Dynamic >,a1,Array<Dynamic >,cancel,Array<arrow::AsyncArrowInstance >,a)
			Void run(Dynamic y){
{
					if (a1[0]->__Field(String(L"cancel",6)) != null()){
						a1[0]->__Field(String(L"cancel",6))();
					}
					a[0]->advance(cancel->__get(0));
					a[0]->cont(y,null(),null());
				}
				return null();
			}
			END_LOCAL_FUNC1((void))

			a0[0] = f[0]->then(arrow::AsyncArrow_obj::tuple( Dynamic(new _Function_3(a1,cancel,a))))->run(x);

			BEGIN_LOCAL_FUNC3(_Function_4,Array<Dynamic >,cancel,Array<Dynamic >,a0,Array<arrow::AsyncArrowInstance >,a)
			Void run(Dynamic y){
{
					if (a0[0]->__Field(String(L"cancel",6)) != null()){
						a0[0]->__Field(String(L"cancel",6))();
					}
					a[0]->advance(cancel->__get(0));
					a[0]->cont(y,null(),null());
				}
				return null();
			}
			END_LOCAL_FUNC1((void))

			a1[0] = g[0]->then(arrow::AsyncArrow_obj::tuple( Dynamic(new _Function_4(cancel,a0,a))))->run(x);
		}
		return null();
	}
	END_LOCAL_FUNC2((void))

	super::__construct( Dynamic(new _Function_1(f,g)));
}
;
	return null();
}

OrThunk_obj::~OrThunk_obj() { }

Dynamic OrThunk_obj::__CreateEmpty() { return  new OrThunk_obj; }
hxObjectPtr<OrThunk_obj > OrThunk_obj::__new(Dynamic __o_trigger,arrow::AsyncArrow $t2,arrow::AsyncArrow $t3)
{  hxObjectPtr<OrThunk_obj > result = new OrThunk_obj();
	result->__construct(__o_trigger,$t2,$t3);
	return result;}

Dynamic OrThunk_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<OrThunk_obj > result = new OrThunk_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


OrThunk_obj::OrThunk_obj()
{
}

Dynamic OrThunk_obj::__Field(const String &inName)
{
	return super::__Field(inName);
}



Dynamic OrThunk_obj::__IField(int inFieldID)
{
	return super::__IField(inFieldID);
}

Dynamic OrThunk_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void OrThunk_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class OrThunk_obj::__mClass;

void OrThunk_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.combinators.OrThunk",25), TCanCast<OrThunk_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void OrThunk_obj::__boot()
{
}

} // end namespace arrow
} // end namespace combinators
