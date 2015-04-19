#include <hxcpp.h>

#ifndef INCLUDED_config_ConfigManager
#include <config/ConfigManager.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_logs_LogLevel
#include <logs/LogLevel.h>
#endif
#ifndef INCLUDED_logs_LogManager
#include <logs/LogManager.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
namespace config{

Void ConfigManager_obj::__construct()
{
HX_STACK_FRAME("config.ConfigManager","new",0xc2645d71,"config.ConfigManager.new","config/ConfigManager.hx",14,0x9073ad20)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	this->bytes = null();
}
;
	return null();
}

//ConfigManager_obj::~ConfigManager_obj() { }

Dynamic ConfigManager_obj::__CreateEmpty() { return  new ConfigManager_obj; }
hx::ObjectPtr< ConfigManager_obj > ConfigManager_obj::__new()
{  hx::ObjectPtr< ConfigManager_obj > result = new ConfigManager_obj();
	result->__construct();
	return result;}

Dynamic ConfigManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConfigManager_obj > result = new ConfigManager_obj();
	result->__construct();
	return result;}

bool ConfigManager_obj::Init( ){
	HX_STACK_FRAME("config.ConfigManager","Init",0x3cff48ff,"config.ConfigManager.Init","config/ConfigManager.hx",36,0x9073ad20)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	::logs::LogManager_obj::getInstance()->Trace(::logs::LogLevel_obj::LogType_Loging,HX_CSTRING(" \xe5""\xbc""\x80""\xe5""\xa7""\x8b""\xe5""\x8a""\xa0""\xe8""\xbd""\xbd""\xe4""\xbb""\xa3""\xe7""\xa0""\x81""\xe8""\xb7""\xaf""\xe5""\xbe""\x84""\xe9""\x85""\x8d""\xe7""\xbd""\xae""\xe6""\x96""\x87""\xe4""\xbb""\xb6"" config.ini ... ... "));
	HX_STACK_LINE(38)
	::String realPath = ::sys::FileSystem_obj::fullPath(HX_CSTRING("config.ini"));		HX_STACK_VAR(realPath,"realPath");
	HX_STACK_LINE(40)
	if (((bool((realPath == null())) || bool((realPath == HX_CSTRING("")))))){
		HX_STACK_LINE(41)
		return false;
	}
	HX_STACK_LINE(43)
	::haxe::io::Bytes _g = ::sys::io::File_obj::getBytes(realPath);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(43)
	this->bytes = _g;
	HX_STACK_LINE(45)
	::String logText = HX_CSTRING(" \xe8""\xaf""\xbb""\xe5""\x8f""\x96""\xe5""\x88""\xb0""\xe7""\x9a""\x84""\xe4""\xbb""\xa3""\xe7""\xa0""\x81""\xe8""\xb7""\xaf""\xe5""\xbe""\x84""\xe6""\x98""\xaf"": ");		HX_STACK_VAR(logText,"logText");
	HX_STACK_LINE(46)
	::String _g1 = this->bytes->toString();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(46)
	::String _g2 = (logText + _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(46)
	::logs::LogManager_obj::getInstance()->Trace(::logs::LogLevel_obj::LogType_Loging,_g2);
	HX_STACK_LINE(48)
	if (((this->bytes == null()))){
		HX_STACK_LINE(49)
		return false;
	}
	HX_STACK_LINE(50)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(ConfigManager_obj,Init,return )

::String ConfigManager_obj::getCodePath( ){
	HX_STACK_FRAME("config.ConfigManager","getCodePath",0xef85a639,"config.ConfigManager.getCodePath","config/ConfigManager.hx",55,0x9073ad20)
	HX_STACK_THIS(this)
	HX_STACK_LINE(56)
	if (((this->bytes == null()))){
		HX_STACK_LINE(57)
		return HX_CSTRING("");
	}
	HX_STACK_LINE(59)
	return this->bytes->toString();
}


HX_DEFINE_DYNAMIC_FUNC0(ConfigManager_obj,getCodePath,return )

::config::ConfigManager ConfigManager_obj::_instance;

::config::ConfigManager ConfigManager_obj::getInstance( ){
	HX_STACK_FRAME("config.ConfigManager","getInstance",0xcac2685c,"config.ConfigManager.getInstance","config/ConfigManager.hx",27,0x9073ad20)
	HX_STACK_LINE(28)
	if (((::config::ConfigManager_obj::_instance == null()))){
		HX_STACK_LINE(29)
		::config::ConfigManager _g = ::config::ConfigManager_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		::config::ConfigManager_obj::_instance = _g;
	}
	HX_STACK_LINE(31)
	return ::config::ConfigManager_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ConfigManager_obj,getInstance,return )


ConfigManager_obj::ConfigManager_obj()
{
}

void ConfigManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConfigManager);
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_END_CLASS();
}

void ConfigManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
}

Dynamic ConfigManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Init") ) { return Init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return bytes; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		if (HX_FIELD_EQ(inName,"getCodePath") ) { return getCodePath_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ConfigManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< ::haxe::io::Bytes >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::config::ConfigManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConfigManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bytes"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("getInstance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::io::Bytes*/ ,(int)offsetof(ConfigManager_obj,bytes),HX_CSTRING("bytes")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bytes"),
	HX_CSTRING("Init"),
	HX_CSTRING("getCodePath"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConfigManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ConfigManager_obj::_instance,"_instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConfigManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ConfigManager_obj::_instance,"_instance");
};

#endif

Class ConfigManager_obj::__mClass;

void ConfigManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("config.ConfigManager"), hx::TCanCast< ConfigManager_obj> ,sStaticFields,sMemberFields,
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

void ConfigManager_obj::__boot()
{
}

} // end namespace config
