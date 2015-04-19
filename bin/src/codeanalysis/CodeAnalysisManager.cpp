#include <hxcpp.h>

#ifndef INCLUDED_codeanalysis_CodeAnalysisManager
#include <codeanalysis/CodeAnalysisManager.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif
namespace codeanalysis{

Void CodeAnalysisManager_obj::__construct()
{
HX_STACK_FRAME("codeanalysis.CodeAnalysisManager","new",0x410b88b1,"codeanalysis.CodeAnalysisManager.new","codeanalysis/CodeAnalysisManager.hx",11,0x1248a0a0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	this->nID = (int)0;
	HX_STACK_LINE(17)
	this->title = HX_CSTRING("title_");
}
;
	return null();
}

//CodeAnalysisManager_obj::~CodeAnalysisManager_obj() { }

Dynamic CodeAnalysisManager_obj::__CreateEmpty() { return  new CodeAnalysisManager_obj; }
hx::ObjectPtr< CodeAnalysisManager_obj > CodeAnalysisManager_obj::__new()
{  hx::ObjectPtr< CodeAnalysisManager_obj > result = new CodeAnalysisManager_obj();
	result->__construct();
	return result;}

Dynamic CodeAnalysisManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CodeAnalysisManager_obj > result = new CodeAnalysisManager_obj();
	result->__construct();
	return result;}

Void CodeAnalysisManager_obj::Analysis( ::String path){
{
		HX_STACK_FRAME("codeanalysis.CodeAnalysisManager","Analysis",0x8174998b,"codeanalysis.CodeAnalysisManager.Analysis","codeanalysis/CodeAnalysisManager.hx",36,0x1248a0a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(37)
		Array< ::String > fileArray = null();		HX_STACK_VAR(fileArray,"fileArray");
		HX_STACK_LINE(38)
		Array< ::String > _g = ::sys::FileSystem_obj::readDirectory(path);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		fileArray = _g;
		HX_STACK_LINE(40)
		if (((this->outSaveFile == null()))){
			HX_STACK_LINE(42)
			::sys::io::FileOutput _g1 = ::sys::io::File_obj::write(HX_CSTRING("Analysis.ini"),false);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(42)
			this->outSaveFile = _g1;
			HX_STACK_LINE(44)
			this->outSaveFile->writeString(path);
		}
		HX_STACK_LINE(47)
		::String fullPath = ::sys::FileSystem_obj::fullPath(path);		HX_STACK_VAR(fullPath,"fullPath");
		HX_STACK_LINE(49)
		this->outSaveFile->writeString(fullPath);
		HX_STACK_LINE(51)
		::String _g2 = ::haxe::io::Path_obj::removeTrailingSlashes(fullPath);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(51)
		if ((::sys::FileSystem_obj::sys_exists(_g2))){
			HX_STACK_LINE(53)
			this->outSaveFile->writeString(HX_CSTRING("====================="));
		}
		else{
			HX_STACK_LINE(57)
			this->outSaveFile->writeString(HX_CSTRING("!!!!!!!!!!!!!!!!!!!!!"));
		}
		HX_STACK_LINE(60)
		if (((bool((fileArray == null())) || bool((fileArray->length == (int)0))))){
			HX_STACK_LINE(62)
			return null();
		}
		HX_STACK_LINE(65)
		this->outSaveFile->writeString(HX_CSTRING("ok"));
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(67)
			int _g3 = fileArray->length;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(67)
			while((true)){
				HX_STACK_LINE(67)
				if ((!(((_g1 < _g3))))){
					HX_STACK_LINE(67)
					break;
				}
				HX_STACK_LINE(67)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(69)
				::String fileName = fileArray->__get(i);		HX_STACK_VAR(fileName,"fileName");
				HX_STACK_LINE(71)
				if ((::sys::FileSystem_obj::isDirectory(fileName))){
					HX_STACK_LINE(73)
					this->Analysis(fileName);
				}
				else{
					HX_STACK_LINE(77)
					this->AnalysisFile(fileName);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CodeAnalysisManager_obj,Analysis,(void))

Void CodeAnalysisManager_obj::AnalysisFile( ::String fileName){
{
		HX_STACK_FRAME("codeanalysis.CodeAnalysisManager","AnalysisFile",0xd17cb5a7,"codeanalysis.CodeAnalysisManager.AnalysisFile","codeanalysis/CodeAnalysisManager.hx",85,0x1248a0a0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fileName,"fileName")
		HX_STACK_LINE(86)
		::haxe::io::Bytes bytes = ::sys::io::File_obj::getBytes(fileName);		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(88)
		if (((bytes == null()))){
			HX_STACK_LINE(89)
			return null();
		}
		HX_STACK_LINE(91)
		::String content = bytes->toString();		HX_STACK_VAR(content,"content");
		HX_STACK_LINE(93)
		Array< ::String > strArray = content.split(HX_CSTRING("'"));		HX_STACK_VAR(strArray,"strArray");
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(95)
			int _g = strArray->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			while((true)){
				HX_STACK_LINE(95)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(95)
					break;
				}
				HX_STACK_LINE(95)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(97)
				this->outSaveFile->writeString(strArray->__get(i));
			}
		}
		HX_STACK_LINE(99)
		this->outSaveFile->close();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CodeAnalysisManager_obj,AnalysisFile,(void))

::codeanalysis::CodeAnalysisManager CodeAnalysisManager_obj::_instance;

::codeanalysis::CodeAnalysisManager CodeAnalysisManager_obj::getInstance( ){
	HX_STACK_FRAME("codeanalysis.CodeAnalysisManager","getInstance",0x1166d39c,"codeanalysis.CodeAnalysisManager.getInstance","codeanalysis/CodeAnalysisManager.hx",26,0x1248a0a0)
	HX_STACK_LINE(28)
	if (((::codeanalysis::CodeAnalysisManager_obj::_instance == null()))){
		HX_STACK_LINE(29)
		::codeanalysis::CodeAnalysisManager _g = ::codeanalysis::CodeAnalysisManager_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		::codeanalysis::CodeAnalysisManager_obj::_instance = _g;
	}
	HX_STACK_LINE(31)
	return ::codeanalysis::CodeAnalysisManager_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CodeAnalysisManager_obj,getInstance,return )


CodeAnalysisManager_obj::CodeAnalysisManager_obj()
{
}

void CodeAnalysisManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CodeAnalysisManager);
	HX_MARK_MEMBER_NAME(outSaveFile,"outSaveFile");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(nID,"nID");
	HX_MARK_END_CLASS();
}

void CodeAnalysisManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outSaveFile,"outSaveFile");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(nID,"nID");
}

Dynamic CodeAnalysisManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"nID") ) { return nID; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return title; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"Analysis") ) { return Analysis_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"outSaveFile") ) { return outSaveFile; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"AnalysisFile") ) { return AnalysisFile_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CodeAnalysisManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"nID") ) { nID=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::codeanalysis::CodeAnalysisManager >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"outSaveFile") ) { outSaveFile=inValue.Cast< ::sys::io::FileOutput >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CodeAnalysisManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outSaveFile"));
	outFields->push(HX_CSTRING("title"));
	outFields->push(HX_CSTRING("nID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("getInstance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::sys::io::FileOutput*/ ,(int)offsetof(CodeAnalysisManager_obj,outSaveFile),HX_CSTRING("outSaveFile")},
	{hx::fsString,(int)offsetof(CodeAnalysisManager_obj,title),HX_CSTRING("title")},
	{hx::fsInt,(int)offsetof(CodeAnalysisManager_obj,nID),HX_CSTRING("nID")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("outSaveFile"),
	HX_CSTRING("title"),
	HX_CSTRING("nID"),
	HX_CSTRING("Analysis"),
	HX_CSTRING("AnalysisFile"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CodeAnalysisManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CodeAnalysisManager_obj::_instance,"_instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CodeAnalysisManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CodeAnalysisManager_obj::_instance,"_instance");
};

#endif

Class CodeAnalysisManager_obj::__mClass;

void CodeAnalysisManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("codeanalysis.CodeAnalysisManager"), hx::TCanCast< CodeAnalysisManager_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void CodeAnalysisManager_obj::__boot()
{
	_instance= null();
}

} // end namespace codeanalysis
