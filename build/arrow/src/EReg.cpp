#include <hxObject.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif

Void EReg_obj::__construct(String r,String opt)
{
{
	Array<String > a = opt.split(String(L"g",1));
	this->global = a->length > 1;
	if (this->global)
		opt = a->join(String(L"",0));
	this->r = EReg_obj::regexp_new_options(r,opt);
}
;
	return null();
}

EReg_obj::~EReg_obj() { }

Dynamic EReg_obj::__CreateEmpty() { return  new EReg_obj; }
hxObjectPtr<EReg_obj > EReg_obj::__new(String r,String opt)
{  hxObjectPtr<EReg_obj > result = new EReg_obj();
	result->__construct(r,opt);
	return result;}

Dynamic EReg_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<EReg_obj > result = new EReg_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool EReg_obj::match( String s){
	bool p = EReg_obj::regexp_match(this->r,s,0,s.length);
	if (p)
		this->last = s;
	else
		this->last = null();
;
	return p;
}


DEFINE_DYNAMIC_FUNC1(EReg_obj,match,return )

String EReg_obj::matched( int n){
	String m = EReg_obj::regexp_matched(this->r,n);
	return m;
}


DEFINE_DYNAMIC_FUNC1(EReg_obj,matched,return )

String EReg_obj::matchedLeft( ){
	Dynamic p = EReg_obj::regexp_matched_pos(this->r,0);
	return this->last.substr(0,p->__Field(String(L"pos",3)).Cast<int >());
}


DEFINE_DYNAMIC_FUNC0(EReg_obj,matchedLeft,return )

String EReg_obj::matchedRight( ){
	Dynamic p = EReg_obj::regexp_matched_pos(this->r,0);
	int sz = p->__Field(String(L"pos",3)).Cast<int >() + p->__Field(String(L"len",3)).Cast<int >();
	return this->last.substr(sz,this->last.length - sz);
}


DEFINE_DYNAMIC_FUNC0(EReg_obj,matchedRight,return )

Dynamic EReg_obj::matchedPos( ){
	return EReg_obj::regexp_matched_pos(this->r,0);
}


DEFINE_DYNAMIC_FUNC0(EReg_obj,matchedPos,return )

Array<String > EReg_obj::split( String s){
	int pos = 0;
	int len = s.length;
	Array<String > a = Array_obj<String >::__new();
	bool first = true;
	do{
		if (!EReg_obj::regexp_match(this->r,s,pos,len))
			break;
		Dynamic p = EReg_obj::regexp_matched_pos(this->r,0);
		if (bool(p->__Field(String(L"len",3)).Cast<int >() == 0) && bool(!first)){
			if (p->__Field(String(L"pos",3)).Cast<int >() == s.length)
				break;
			hxAddEq(p.FieldRef(String(L"pos",3)),1);
		}
		a->push(s.substr(pos,p->__Field(String(L"pos",3)).Cast<int >() - pos));
		int tot = p->__Field(String(L"pos",3)).Cast<int >() + p->__Field(String(L"len",3)).Cast<int >() - pos;
		hxAddEq(pos,tot);
		hxSubEq(len,tot);
		first = false;
	}
while(this->global);
	a->push(s.substr(pos,len));
	return a;
}


DEFINE_DYNAMIC_FUNC1(EReg_obj,split,return )

String EReg_obj::replace( String s,String by){
	StringBuf b = StringBuf_obj::__new();
	int pos = 0;
	int len = s.length;
	Array<String > a = by.split(String(L"$",1));
	bool first = true;
	do{
		if (!EReg_obj::regexp_match(this->r,s.__s,pos,len))
			break;
		Dynamic p = EReg_obj::regexp_matched_pos(this->r,0);
		if (bool(p->__Field(String(L"len",3)).Cast<int >() == 0) && bool(!first)){
			if (p->__Field(String(L"pos",3)).Cast<int >() == s.length)
				break;
			hxAddEq(p.FieldRef(String(L"pos",3)),1);
		}
		hxAddEq(b->b,s.substr(pos,p->__Field(String(L"pos",3)).Cast<int >() - pos));
		if (a->length > 0)
			hxAddEq(b->b,a->__get(0));
		int i = 1;
		while(i < a->length){
			String k = a->__get(i);
			Dynamic c = k.charCodeAt(0);
			if (bool(c >= 49) && bool(c <= 57)){
				struct _Function_1{
					static Dynamic Block( EReg_obj *__this,Dynamic &c)/* DEF (not block)(ret intern) */{
						try{
							return EReg_obj::regexp_matched_pos(__this->r,c - 48);
						}
						catch(Dynamic __e){
							if (__e.IsClass<String >() ){
								String e = __e;{
									return null();
								}
							}
							else throw(__e);
						}
					}
				};
				Dynamic p1 = _Function_1::Block(this,c);
				if (p1 == null()){
					hxAddEq(b->b,String(L"$",1));
					hxAddEq(b->b,k);
				}
				else{
					hxAddEq(b->b,s.substr(p1->__Field(String(L"pos",3)).Cast<int >(),p1->__Field(String(L"len",3)).Cast<int >()));
					hxAddEq(b->b,k.substr(1,k.length - 1));
				}
			}
			else
				if (c == null()){
				hxAddEq(b->b,String(L"$",1));
				i++;
				String k2 = a->__get(i);
				if (bool(k2 != null()) && bool(k2.length > 0))
					hxAddEq(b->b,k2);
			}
			else
				hxAddEq(b->b,String(L"$",1) + k);
;
;
			i++;
		}
		int tot = p->__Field(String(L"pos",3)).Cast<int >() + p->__Field(String(L"len",3)).Cast<int >() - pos;
		hxAddEq(pos,tot);
		hxSubEq(len,tot);
		first = false;
	}
while(this->global);
	hxAddEq(b->b,s.substr(pos,len));
	return b->b;
}


DEFINE_DYNAMIC_FUNC2(EReg_obj,replace,return )

String EReg_obj::customReplace( String s,Dynamic f){
	StringBuf buf = StringBuf_obj::__new();
	while(true){
		if (!this->match(s))
			break;
		hxAddEq(buf->b,this->matchedLeft());
		hxAddEq(buf->b,f(this));
		s = this->matchedRight();
	}
	hxAddEq(buf->b,s);
	return buf->b;
}


DEFINE_DYNAMIC_FUNC2(EReg_obj,customReplace,return )

Dynamic EReg_obj::regexp_new_options;

Dynamic EReg_obj::regexp_match;

Dynamic EReg_obj::regexp_matched;

Dynamic EReg_obj::regexp_matched_pos;


EReg_obj::EReg_obj()
{
	InitMember(r);
	InitMember(last);
	InitMember(global);
}

Dynamic EReg_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 1:
		if (!memcmp(inName.__s,L"r",sizeof(wchar_t)*1) ) { return r; }
		break;
	case 4:
		if (!memcmp(inName.__s,L"last",sizeof(wchar_t)*4) ) { return last; }
		break;
	case 5:
		if (!memcmp(inName.__s,L"match",sizeof(wchar_t)*5) ) { return match_dyn(); }
		if (!memcmp(inName.__s,L"split",sizeof(wchar_t)*5) ) { return split_dyn(); }
		break;
	case 6:
		if (!memcmp(inName.__s,L"global",sizeof(wchar_t)*6) ) { return global; }
		break;
	case 7:
		if (!memcmp(inName.__s,L"matched",sizeof(wchar_t)*7) ) { return matched_dyn(); }
		if (!memcmp(inName.__s,L"replace",sizeof(wchar_t)*7) ) { return replace_dyn(); }
		break;
	case 10:
		if (!memcmp(inName.__s,L"matchedPos",sizeof(wchar_t)*10) ) { return matchedPos_dyn(); }
		break;
	case 11:
		if (!memcmp(inName.__s,L"matchedLeft",sizeof(wchar_t)*11) ) { return matchedLeft_dyn(); }
		break;
	case 12:
		if (!memcmp(inName.__s,L"regexp_match",sizeof(wchar_t)*12) ) { return regexp_match; }
		if (!memcmp(inName.__s,L"matchedRight",sizeof(wchar_t)*12) ) { return matchedRight_dyn(); }
		break;
	case 13:
		if (!memcmp(inName.__s,L"customReplace",sizeof(wchar_t)*13) ) { return customReplace_dyn(); }
		break;
	case 14:
		if (!memcmp(inName.__s,L"regexp_matched",sizeof(wchar_t)*14) ) { return regexp_matched; }
		break;
	case 18:
		if (!memcmp(inName.__s,L"regexp_new_options",sizeof(wchar_t)*18) ) { return regexp_new_options; }
		if (!memcmp(inName.__s,L"regexp_matched_pos",sizeof(wchar_t)*18) ) { return regexp_matched_pos; }
	}
	return super::__Field(inName);
}

static int __id_regexp_new_options = __hxcpp_field_to_id("regexp_new_options");
static int __id_regexp_match = __hxcpp_field_to_id("regexp_match");
static int __id_regexp_matched = __hxcpp_field_to_id("regexp_matched");
static int __id_regexp_matched_pos = __hxcpp_field_to_id("regexp_matched_pos");
static int __id_r = __hxcpp_field_to_id("r");
static int __id_last = __hxcpp_field_to_id("last");
static int __id_global = __hxcpp_field_to_id("global");
static int __id_match = __hxcpp_field_to_id("match");
static int __id_matched = __hxcpp_field_to_id("matched");
static int __id_matchedLeft = __hxcpp_field_to_id("matchedLeft");
static int __id_matchedRight = __hxcpp_field_to_id("matchedRight");
static int __id_matchedPos = __hxcpp_field_to_id("matchedPos");
static int __id_split = __hxcpp_field_to_id("split");
static int __id_replace = __hxcpp_field_to_id("replace");
static int __id_customReplace = __hxcpp_field_to_id("customReplace");


Dynamic EReg_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_regexp_new_options) return regexp_new_options;
	if (inFieldID==__id_regexp_match) return regexp_match;
	if (inFieldID==__id_regexp_matched) return regexp_matched;
	if (inFieldID==__id_regexp_matched_pos) return regexp_matched_pos;
	if (inFieldID==__id_r) return r;
	if (inFieldID==__id_last) return last;
	if (inFieldID==__id_global) return global;
	if (inFieldID==__id_match) return match_dyn();
	if (inFieldID==__id_matched) return matched_dyn();
	if (inFieldID==__id_matchedLeft) return matchedLeft_dyn();
	if (inFieldID==__id_matchedRight) return matchedRight_dyn();
	if (inFieldID==__id_matchedPos) return matchedPos_dyn();
	if (inFieldID==__id_split) return split_dyn();
	if (inFieldID==__id_replace) return replace_dyn();
	if (inFieldID==__id_customReplace) return customReplace_dyn();
	return super::__IField(inFieldID);
}

Dynamic EReg_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 1:
		if (!memcmp(inName.__s,L"r",sizeof(wchar_t)*1) ) { r=inValue.Cast<Dynamic >();return inValue; }
		break;
	case 4:
		if (!memcmp(inName.__s,L"last",sizeof(wchar_t)*4) ) { last=inValue.Cast<String >();return inValue; }
		break;
	case 6:
		if (!memcmp(inName.__s,L"global",sizeof(wchar_t)*6) ) { global=inValue.Cast<bool >();return inValue; }
		break;
	case 12:
		if (!memcmp(inName.__s,L"regexp_match",sizeof(wchar_t)*12) ) { regexp_match=inValue.Cast<Dynamic >();return inValue; }
		break;
	case 14:
		if (!memcmp(inName.__s,L"regexp_matched",sizeof(wchar_t)*14) ) { regexp_matched=inValue.Cast<Dynamic >();return inValue; }
		break;
	case 18:
		if (!memcmp(inName.__s,L"regexp_new_options",sizeof(wchar_t)*18) ) { regexp_new_options=inValue.Cast<Dynamic >();return inValue; }
		if (!memcmp(inName.__s,L"regexp_matched_pos",sizeof(wchar_t)*18) ) { regexp_matched_pos=inValue.Cast<Dynamic >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void EReg_obj::__GetFields(Array<String> &outFields)
{
	outFields->push(String(L"r",1));
	outFields->push(String(L"last",4));
	outFields->push(String(L"global",6));
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"regexp_new_options",
	L"regexp_match",
	L"regexp_matched",
	L"regexp_matched_pos",
	0 };

static wchar_t *sMemberFields[] = {
	L"r",
	L"last",
	L"global",
	L"match",
	L"matched",
	L"matchedLeft",
	L"matchedRight",
	L"matchedPos",
	L"split",
	L"replace",
	L"customReplace",
	0 };

Class EReg_obj::__mClass;

void EReg_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"EReg",4), TCanCast<EReg_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void EReg_obj::__boot()
{
	Static(regexp_new_options) = cpp::Lib_obj::load(String(L"regexp",6),String(L"regexp_new_options",18),2);
	Static(regexp_match) = cpp::Lib_obj::load(String(L"regexp",6),String(L"regexp_match",12),4);
	Static(regexp_matched) = cpp::Lib_obj::load(String(L"regexp",6),String(L"regexp_matched",14),2);
	Static(regexp_matched_pos) = cpp::Lib_obj::load(String(L"regexp",6),String(L"regexp_matched_pos",18),2);
}

