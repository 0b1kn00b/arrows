#include <hxObject.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrow
#include <arrow/AsyncArrow.h>
#endif
#ifndef INCLUDED_arrow_AsyncArrowInstance
#include <arrow/AsyncArrowInstance.h>
#endif
#ifndef INCLUDED_arrow_TaggedValue
#include <arrow/TaggedValue.h>
#endif
#ifndef INCLUDED_arrow_combinators_ArrThunk
#include <arrow/combinators/ArrThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_ComposeThunk
#include <arrow/combinators/ComposeThunk.h>
#endif
#ifndef INCLUDED_arrow_combinators_ProgressArrow
#include <arrow/combinators/ProgressArrow.h>
#endif
#ifndef INCLUDED_arrow_combinators_RepeatThunk
#include <arrow/combinators/RepeatThunk.h>
#endif
#ifndef INCLUDED_arrow_ext_lambda_MapArrow
#include <arrow/ext/lambda/MapArrow.h>
#endif
#ifndef INCLUDED_event_EventDispatcher
#include <event/EventDispatcher.h>
#endif
#ifndef INCLUDED_event_EventListener
#include <event/EventListener.h>
#endif
#ifndef INCLUDED_util_ReflectUtil
#include <util/ReflectUtil.h>
#endif
namespace arrow{
namespace ext{
namespace lambda{

Void MapArrow_obj::__construct(Dynamic $t2)
{
{
	Array<Dynamic > f = Array_obj<Dynamic >::__new().Add($t2);

	BEGIN_LOCAL_FUNC1(_Function_1,Array<Dynamic >,f)
	Dynamic run(Dynamic x,arrow::AsyncArrowInstance $t1){
{
			Array<arrow::AsyncArrowInstance > a = Array_obj<arrow::AsyncArrowInstance >::__new().Add($t1);
			if (!util::ReflectUtil_obj::isIterable(x)){
				hxThrow (String(L" arg is not Iterable",20));
			}
			Array<List > out = Array_obj<List >::__new().Add(List_obj::__new());
			Array<Dynamic > it = Array_obj<Dynamic >::__new().Add(x->__Field(String(L"iterator",8))());

			BEGIN_LOCAL_FUNC3(_Function_2,Array<Dynamic >,it,Array<List >,out,Array<Dynamic >,f)
			arrow::TaggedValue run(Dynamic x1){
{
					if (it[0]->__Field(String(L"hasNext",7))()){
						Dynamic n = it[0]->__Field(String(L"next",4))();
						out[0]->add(Reflect_obj::callMethod(null(),f->__get(0),Array_obj<Dynamic >::__new().Add(n)));
						return arrow::AsyncArrow_obj::doRepeat(null());
					}
					else{
						return arrow::AsyncArrow_obj::doDone(null());
					}
				}
				return null();
			}
			END_LOCAL_FUNC1(return)

			Dynamic f0 =  Dynamic(new _Function_2(it,out,f));

			BEGIN_LOCAL_FUNC2(_Function_3,Array<arrow::AsyncArrowInstance >,a,Array<List >,out)
			Void run(Dynamic x1){
{
					a[0]->cont(out->__get(0),null(),null());
				}
				return null();
			}
			END_LOCAL_FUNC1((void))

			Dynamic f1 =  Dynamic(new _Function_3(a,out));
			arrow::AsyncArrow_obj::tuple(f0)->repeat()->then(f1)->run(x);
		}
		return null();
	}
	END_LOCAL_FUNC2(return)

	super::__construct( Dynamic(new _Function_1(f)));
}
;
	return null();
}

MapArrow_obj::~MapArrow_obj() { }

Dynamic MapArrow_obj::__CreateEmpty() { return  new MapArrow_obj; }
hxObjectPtr<MapArrow_obj > MapArrow_obj::__new(Dynamic $t2)
{  hxObjectPtr<MapArrow_obj > result = new MapArrow_obj();
	result->__construct($t2);
	return result;}

Dynamic MapArrow_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<MapArrow_obj > result = new MapArrow_obj();
	result->__construct(inArgs[0]);
	return result;}


MapArrow_obj::MapArrow_obj()
{
}

Dynamic MapArrow_obj::__Field(const String &inName)
{
	return super::__Field(inName);
}



Dynamic MapArrow_obj::__IField(int inFieldID)
{
	return super::__IField(inFieldID);
}

Dynamic MapArrow_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	return super::__SetField(inName,inValue);
}

void MapArrow_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	0 };

static wchar_t *sMemberFields[] = {
	0 };

Class MapArrow_obj::__mClass;

void MapArrow_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"arrow.ext.lambda.MapArrow",25), TCanCast<MapArrow_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void MapArrow_obj::__boot()
{
}

} // end namespace arrow
} // end namespace ext
} // end namespace lambda
