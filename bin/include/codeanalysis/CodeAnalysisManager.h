#ifndef INCLUDED_codeanalysis_CodeAnalysisManager
#define INCLUDED_codeanalysis_CodeAnalysisManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(codeanalysis,CodeAnalysisManager)
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS2(sys,io,FileOutput)
namespace codeanalysis{


class HXCPP_CLASS_ATTRIBUTES  CodeAnalysisManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CodeAnalysisManager_obj OBJ_;
		CodeAnalysisManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CodeAnalysisManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CodeAnalysisManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CodeAnalysisManager"); }

		::sys::io::FileOutput outSaveFile;
		::String title;
		int nID;
		virtual Void Analysis( ::String path);
		Dynamic Analysis_dyn();

		virtual Void AnalysisFile( ::String fileName);
		Dynamic AnalysisFile_dyn();

		static ::codeanalysis::CodeAnalysisManager _instance;
		static ::codeanalysis::CodeAnalysisManager getInstance( );
		static Dynamic getInstance_dyn();

};

} // end namespace codeanalysis

#endif /* INCLUDED_codeanalysis_CodeAnalysisManager */ 
