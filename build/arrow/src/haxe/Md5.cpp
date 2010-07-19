#include <hxObject.h>

#ifndef INCLUDED_haxe_Md5
#include <haxe/Md5.h>
#endif
namespace haxe{

Void Md5_obj::__construct()
{
{
}
;
	return null();
}

Md5_obj::~Md5_obj() { }

Dynamic Md5_obj::__CreateEmpty() { return  new Md5_obj; }
hxObjectPtr<Md5_obj > Md5_obj::__new()
{  hxObjectPtr<Md5_obj > result = new Md5_obj();
	result->__construct();
	return result;}

Dynamic Md5_obj::__Create(DynamicArray inArgs)
{  hxObjectPtr<Md5_obj > result = new Md5_obj();
	result->__construct();
	return result;}

int Md5_obj::bitOR( int a,int b){
	int lsb = int((int(a) & int(1))) | int((int(b) & int(1)));
	int msb31 = int((hxUShr(a,1))) | int((hxUShr(b,1)));
	return int((int(msb31) << int(1))) | int(lsb);
}


DEFINE_DYNAMIC_FUNC2(Md5_obj,bitOR,return )

int Md5_obj::bitXOR( int a,int b){
	int lsb = int((int(a) & int(1))) ^ int((int(b) & int(1)));
	int msb31 = int((hxUShr(a,1))) ^ int((hxUShr(b,1)));
	return int((int(msb31) << int(1))) | int(lsb);
}


DEFINE_DYNAMIC_FUNC2(Md5_obj,bitXOR,return )

int Md5_obj::bitAND( int a,int b){
	int lsb = int((int(a) & int(1))) & int((int(b) & int(1)));
	int msb31 = int((hxUShr(a,1))) & int((hxUShr(b,1)));
	return int((int(msb31) << int(1))) | int(lsb);
}


DEFINE_DYNAMIC_FUNC2(Md5_obj,bitAND,return )

int Md5_obj::addme( int x,int y){
	int lsw = (int(x) & int(65535)) + (int(y) & int(65535));
	int msw = (int(x) >> int(16)) + (int(y) >> int(16)) + (int(lsw) >> int(16));
	return int((int(msw) << int(16))) | int((int(lsw) & int(65535)));
}


DEFINE_DYNAMIC_FUNC2(Md5_obj,addme,return )

String Md5_obj::rhex( int num){
	String str = String(L"",0);
	String hex_chr = String(L"0123456789abcdef",16);
	{
		int _g = 0;
		while(_g < 4){
			int j = _g++;
			hxAddEq(str,hex_chr.charAt(int((int(num) >> int((j * 8 + 4)))) & int(15)) + hex_chr.charAt(int((int(num) >> int((j * 8)))) & int(15)));
		}
	}
	return str;
}


DEFINE_DYNAMIC_FUNC1(Md5_obj,rhex,return )

Array<int > Md5_obj::str2blks( String str){
	int nblk = (int((str.length + 8)) >> int(6)) + 1;
	Array<int > blks = Array_obj<int >::__new();
	{
		int _g1 = 0;
		int _g = (nblk * 16);
		while(_g1 < _g){
			int i = _g1++;
			blks[i] = 0;
		}
	}
	int i = 0;
	while(i < str.length){
		hxOrEq(blks[int(i) >> int(2)],int(str.charCodeAt(i)) << int(((hxMod((str.length * 8 + i),4)) * 8)));
		i++;
	}
	hxOrEq(blks[int(i) >> int(2)],int(128) << int(((hxMod((str.length * 8 + i),4)) * 8)));
	int l = str.length * 8;
	int k = nblk * 16 - 2;
	blks[k] = (int(l) & int(255));
	hxOrEq(blks[k],int((int((hxUShr(l,8))) & int(255))) << int(8));
	hxOrEq(blks[k],int((int((hxUShr(l,16))) & int(255))) << int(16));
	hxOrEq(blks[k],int((int((hxUShr(l,24))) & int(255))) << int(24));
	return blks;
}


DEFINE_DYNAMIC_FUNC1(Md5_obj,str2blks,return )

int Md5_obj::rol( int num,int cnt){
	return int((int(num) << int(cnt))) | int((hxUShr(num,(32 - cnt))));
}


DEFINE_DYNAMIC_FUNC2(Md5_obj,rol,return )

int Md5_obj::cmn( int q,int a,int b,int x,int s,int t){
	return this->addme(this->rol((this->addme(this->addme(a,q),this->addme(x,t))),s),b);
}


DEFINE_DYNAMIC_FUNC6(Md5_obj,cmn,return )

int Md5_obj::ff( int a,int b,int c,int d,int x,int s,int t){
	return this->cmn(this->bitOR(this->bitAND(b,c),this->bitAND((~b),d)),a,b,x,s,t);
}


DEFINE_DYNAMIC_FUNC7(Md5_obj,ff,return )

int Md5_obj::gg( int a,int b,int c,int d,int x,int s,int t){
	return this->cmn(this->bitOR(this->bitAND(b,d),this->bitAND(c,(~d))),a,b,x,s,t);
}


DEFINE_DYNAMIC_FUNC7(Md5_obj,gg,return )

int Md5_obj::hh( int a,int b,int c,int d,int x,int s,int t){
	return this->cmn(this->bitXOR(this->bitXOR(b,c),d),a,b,x,s,t);
}


DEFINE_DYNAMIC_FUNC7(Md5_obj,hh,return )

int Md5_obj::ii( int a,int b,int c,int d,int x,int s,int t){
	return this->cmn(this->bitXOR(c,this->bitOR(b,(~d))),a,b,x,s,t);
}


DEFINE_DYNAMIC_FUNC7(Md5_obj,ii,return )

String Md5_obj::doEncode( String str){
	Array<int > x = this->str2blks(str);
	int a = 1732584193;
	int b = -271733879;
	int c = -1732584194;
	int d = 271733878;
	int step;
	int i = 0;
	while(i < x->length){
		int olda = a;
		int oldb = b;
		int oldc = c;
		int oldd = d;
		step = 0;
		a = this->ff(a,b,c,d,x->__get(i),7,-680876936);
		d = this->ff(d,a,b,c,x->__get(i + 1),12,-389564586);
		c = this->ff(c,d,a,b,x->__get(i + 2),17,606105819);
		b = this->ff(b,c,d,a,x->__get(i + 3),22,-1044525330);
		a = this->ff(a,b,c,d,x->__get(i + 4),7,-176418897);
		d = this->ff(d,a,b,c,x->__get(i + 5),12,1200080426);
		c = this->ff(c,d,a,b,x->__get(i + 6),17,-1473231341);
		b = this->ff(b,c,d,a,x->__get(i + 7),22,-45705983);
		a = this->ff(a,b,c,d,x->__get(i + 8),7,1770035416);
		d = this->ff(d,a,b,c,x->__get(i + 9),12,-1958414417);
		c = this->ff(c,d,a,b,x->__get(i + 10),17,-42063);
		b = this->ff(b,c,d,a,x->__get(i + 11),22,-1990404162);
		a = this->ff(a,b,c,d,x->__get(i + 12),7,1804603682);
		d = this->ff(d,a,b,c,x->__get(i + 13),12,-40341101);
		c = this->ff(c,d,a,b,x->__get(i + 14),17,-1502002290);
		b = this->ff(b,c,d,a,x->__get(i + 15),22,1236535329);
		a = this->gg(a,b,c,d,x->__get(i + 1),5,-165796510);
		d = this->gg(d,a,b,c,x->__get(i + 6),9,-1069501632);
		c = this->gg(c,d,a,b,x->__get(i + 11),14,643717713);
		b = this->gg(b,c,d,a,x->__get(i),20,-373897302);
		a = this->gg(a,b,c,d,x->__get(i + 5),5,-701558691);
		d = this->gg(d,a,b,c,x->__get(i + 10),9,38016083);
		c = this->gg(c,d,a,b,x->__get(i + 15),14,-660478335);
		b = this->gg(b,c,d,a,x->__get(i + 4),20,-405537848);
		a = this->gg(a,b,c,d,x->__get(i + 9),5,568446438);
		d = this->gg(d,a,b,c,x->__get(i + 14),9,-1019803690);
		c = this->gg(c,d,a,b,x->__get(i + 3),14,-187363961);
		b = this->gg(b,c,d,a,x->__get(i + 8),20,1163531501);
		a = this->gg(a,b,c,d,x->__get(i + 13),5,-1444681467);
		d = this->gg(d,a,b,c,x->__get(i + 2),9,-51403784);
		c = this->gg(c,d,a,b,x->__get(i + 7),14,1735328473);
		b = this->gg(b,c,d,a,x->__get(i + 12),20,-1926607734);
		a = this->hh(a,b,c,d,x->__get(i + 5),4,-378558);
		d = this->hh(d,a,b,c,x->__get(i + 8),11,-2022574463);
		c = this->hh(c,d,a,b,x->__get(i + 11),16,1839030562);
		b = this->hh(b,c,d,a,x->__get(i + 14),23,-35309556);
		a = this->hh(a,b,c,d,x->__get(i + 1),4,-1530992060);
		d = this->hh(d,a,b,c,x->__get(i + 4),11,1272893353);
		c = this->hh(c,d,a,b,x->__get(i + 7),16,-155497632);
		b = this->hh(b,c,d,a,x->__get(i + 10),23,-1094730640);
		a = this->hh(a,b,c,d,x->__get(i + 13),4,681279174);
		d = this->hh(d,a,b,c,x->__get(i),11,-358537222);
		c = this->hh(c,d,a,b,x->__get(i + 3),16,-722521979);
		b = this->hh(b,c,d,a,x->__get(i + 6),23,76029189);
		a = this->hh(a,b,c,d,x->__get(i + 9),4,-640364487);
		d = this->hh(d,a,b,c,x->__get(i + 12),11,-421815835);
		c = this->hh(c,d,a,b,x->__get(i + 15),16,530742520);
		b = this->hh(b,c,d,a,x->__get(i + 2),23,-995338651);
		a = this->ii(a,b,c,d,x->__get(i),6,-198630844);
		d = this->ii(d,a,b,c,x->__get(i + 7),10,1126891415);
		c = this->ii(c,d,a,b,x->__get(i + 14),15,-1416354905);
		b = this->ii(b,c,d,a,x->__get(i + 5),21,-57434055);
		a = this->ii(a,b,c,d,x->__get(i + 12),6,1700485571);
		d = this->ii(d,a,b,c,x->__get(i + 3),10,-1894986606);
		c = this->ii(c,d,a,b,x->__get(i + 10),15,-1051523);
		b = this->ii(b,c,d,a,x->__get(i + 1),21,-2054922799);
		a = this->ii(a,b,c,d,x->__get(i + 8),6,1873313359);
		d = this->ii(d,a,b,c,x->__get(i + 15),10,-30611744);
		c = this->ii(c,d,a,b,x->__get(i + 6),15,-1560198380);
		b = this->ii(b,c,d,a,x->__get(i + 13),21,1309151649);
		a = this->ii(a,b,c,d,x->__get(i + 4),6,-145523070);
		d = this->ii(d,a,b,c,x->__get(i + 11),10,-1120210379);
		c = this->ii(c,d,a,b,x->__get(i + 2),15,718787259);
		b = this->ii(b,c,d,a,x->__get(i + 9),21,-343485551);
		a = this->addme(a,olda);
		b = this->addme(b,oldb);
		c = this->addme(c,oldc);
		d = this->addme(d,oldd);
		hxAddEq(i,16);
	}
	return this->rhex(a) + this->rhex(b) + this->rhex(c) + this->rhex(d);
}


DEFINE_DYNAMIC_FUNC1(Md5_obj,doEncode,return )

String Md5_obj::encode( String s){
	return haxe::Md5_obj::inst->doEncode(s);
}


STATIC_DEFINE_DYNAMIC_FUNC1(Md5_obj,encode,return )

haxe::Md5 Md5_obj::inst;


Md5_obj::Md5_obj()
{
}

Dynamic Md5_obj::__Field(const String &inName)
{
	switch(inName.length) {
	case 2:
		if (!memcmp(inName.__s,L"ff",sizeof(wchar_t)*2) ) { return ff_dyn(); }
		if (!memcmp(inName.__s,L"gg",sizeof(wchar_t)*2) ) { return gg_dyn(); }
		if (!memcmp(inName.__s,L"hh",sizeof(wchar_t)*2) ) { return hh_dyn(); }
		if (!memcmp(inName.__s,L"ii",sizeof(wchar_t)*2) ) { return ii_dyn(); }
		break;
	case 3:
		if (!memcmp(inName.__s,L"rol",sizeof(wchar_t)*3) ) { return rol_dyn(); }
		if (!memcmp(inName.__s,L"cmn",sizeof(wchar_t)*3) ) { return cmn_dyn(); }
		break;
	case 4:
		if (!memcmp(inName.__s,L"inst",sizeof(wchar_t)*4) ) { return inst; }
		if (!memcmp(inName.__s,L"rhex",sizeof(wchar_t)*4) ) { return rhex_dyn(); }
		break;
	case 5:
		if (!memcmp(inName.__s,L"bitOR",sizeof(wchar_t)*5) ) { return bitOR_dyn(); }
		if (!memcmp(inName.__s,L"addme",sizeof(wchar_t)*5) ) { return addme_dyn(); }
		break;
	case 6:
		if (!memcmp(inName.__s,L"encode",sizeof(wchar_t)*6) ) { return encode_dyn(); }
		if (!memcmp(inName.__s,L"bitXOR",sizeof(wchar_t)*6) ) { return bitXOR_dyn(); }
		if (!memcmp(inName.__s,L"bitAND",sizeof(wchar_t)*6) ) { return bitAND_dyn(); }
		break;
	case 8:
		if (!memcmp(inName.__s,L"str2blks",sizeof(wchar_t)*8) ) { return str2blks_dyn(); }
		if (!memcmp(inName.__s,L"doEncode",sizeof(wchar_t)*8) ) { return doEncode_dyn(); }
	}
	return super::__Field(inName);
}

static int __id_encode = __hxcpp_field_to_id("encode");
static int __id_inst = __hxcpp_field_to_id("inst");
static int __id_bitOR = __hxcpp_field_to_id("bitOR");
static int __id_bitXOR = __hxcpp_field_to_id("bitXOR");
static int __id_bitAND = __hxcpp_field_to_id("bitAND");
static int __id_addme = __hxcpp_field_to_id("addme");
static int __id_rhex = __hxcpp_field_to_id("rhex");
static int __id_str2blks = __hxcpp_field_to_id("str2blks");
static int __id_rol = __hxcpp_field_to_id("rol");
static int __id_cmn = __hxcpp_field_to_id("cmn");
static int __id_ff = __hxcpp_field_to_id("ff");
static int __id_gg = __hxcpp_field_to_id("gg");
static int __id_hh = __hxcpp_field_to_id("hh");
static int __id_ii = __hxcpp_field_to_id("ii");
static int __id_doEncode = __hxcpp_field_to_id("doEncode");


Dynamic Md5_obj::__IField(int inFieldID)
{
	if (inFieldID==__id_encode) return encode_dyn();
	if (inFieldID==__id_inst) return inst;
	if (inFieldID==__id_bitOR) return bitOR_dyn();
	if (inFieldID==__id_bitXOR) return bitXOR_dyn();
	if (inFieldID==__id_bitAND) return bitAND_dyn();
	if (inFieldID==__id_addme) return addme_dyn();
	if (inFieldID==__id_rhex) return rhex_dyn();
	if (inFieldID==__id_str2blks) return str2blks_dyn();
	if (inFieldID==__id_rol) return rol_dyn();
	if (inFieldID==__id_cmn) return cmn_dyn();
	if (inFieldID==__id_ff) return ff_dyn();
	if (inFieldID==__id_gg) return gg_dyn();
	if (inFieldID==__id_hh) return hh_dyn();
	if (inFieldID==__id_ii) return ii_dyn();
	if (inFieldID==__id_doEncode) return doEncode_dyn();
	return super::__IField(inFieldID);
}

Dynamic Md5_obj::__SetField(const String &inName,const Dynamic &inValue)
{
	switch(inName.length) {
	case 4:
		if (!memcmp(inName.__s,L"inst",sizeof(wchar_t)*4) ) { inst=inValue.Cast<haxe::Md5 >();return inValue; }
	}
	return super::__SetField(inName,inValue);
}

void Md5_obj::__GetFields(Array<String> &outFields)
{
	super::__GetFields(outFields);
};

static wchar_t *sStaticFields[] = {
	L"encode",
	L"inst",
	0 };

static wchar_t *sMemberFields[] = {
	L"bitOR",
	L"bitXOR",
	L"bitAND",
	L"addme",
	L"rhex",
	L"str2blks",
	L"rol",
	L"cmn",
	L"ff",
	L"gg",
	L"hh",
	L"ii",
	L"doEncode",
	0 };

Class Md5_obj::__mClass;

void Md5_obj::__register()
{
	Static(__mClass) = RegisterClass(String(L"haxe.Md5",8), TCanCast<Md5_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0);
}

void Md5_obj::__boot()
{
	Static(inst) = haxe::Md5_obj::__new();
}

} // end namespace haxe
