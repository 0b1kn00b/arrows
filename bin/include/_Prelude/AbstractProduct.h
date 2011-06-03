#ifndef INCLUDED__Prelude_AbstractProduct
#define INCLUDED__Prelude_AbstractProduct

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Product.h>
HX_DECLARE_CLASS0(Product)
HX_DECLARE_CLASS1(_Prelude,AbstractProduct)
HX_DECLARE_CLASS3(haxe,text,json,JValue)
namespace _Prelude{


class AbstractProduct_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AbstractProduct_obj OBJ_;
		AbstractProduct_obj();
		Void __construct(Array< Dynamic > elements);

	public:
		static hx::ObjectPtr< AbstractProduct_obj > __new(Array< Dynamic > elements);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~AbstractProduct_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		inline operator ::Product_obj *()
			{ return new ::Product_delegate_< AbstractProduct_obj >(this); }
		hx::Object *__ToInterface(const type_info &inType);
		::String __ToString() const { return HX_CSTRING("AbstractProduct"); }

		::String productPrefix; /* REM */ 
		int productArity; /* REM */ 
		Array< Dynamic > _productElements; /* REM */ 
		virtual Dynamic productElement( int n);
		Dynamic productElement_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual int hashCode( );
		Dynamic hashCode_dyn();

		virtual int productCompare( ::_Prelude::AbstractProduct other);
		Dynamic productCompare_dyn();

		virtual ::haxe::text::json::JValue productDecompose( );
		Dynamic productDecompose_dyn();

		virtual bool productEquals( ::_Prelude::AbstractProduct other);
		Dynamic productEquals_dyn();

		virtual ::String getProductPrefix( );
		Dynamic getProductPrefix_dyn();

		virtual int getProductArity( );
		Dynamic getProductArity_dyn();

		Array< Dynamic > _orders; /* REM */ 
		Array< Dynamic > _equals; /* REM */ 
		Array< Dynamic > _hashes; /* REM */ 
		Array< Dynamic > _shows; /* REM */ 
		virtual Dynamic getOrder( int i);
		Dynamic getOrder_dyn();

		virtual Dynamic getEqual( int i);
		Dynamic getEqual_dyn();

		virtual Dynamic getHash( int i);
		Dynamic getHash_dyn();

		virtual Dynamic getShow( int i);
		Dynamic getShow_dyn();

		static Array< Array< int > > _baseHashes; /* REM */ 
};

} // end namespace _Prelude

#endif /* INCLUDED__Prelude_AbstractProduct */ 
