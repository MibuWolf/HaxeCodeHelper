#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_codeanalysis_CodeAnalysisManager
#include <codeanalysis/CodeAnalysisManager.h>
#endif
#ifndef INCLUDED_config_ConfigManager
#include <config/ConfigManager.h>
#endif
#ifndef INCLUDED_logs_LogLevel
#include <logs/LogLevel.h>
#endif
#ifndef INCLUDED_logs_LogManager
#include <logs/LogManager.h>
#endif

Void Main_obj::__construct()
{
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",22,0x087e5c05)
		HX_STACK_LINE(23)
		::logs::LogManager_obj::getInstance()->Init();
		HX_STACK_LINE(24)
		bool bSuc = ::config::ConfigManager_obj::getInstance()->Init();		HX_STACK_VAR(bSuc,"bSuc");
		HX_STACK_LINE(27)
		if ((!(bSuc))){
			HX_STACK_LINE(29)
			::logs::LogManager_obj::getInstance()->Trace(::logs::LogLevel_obj::LogType_Error,HX_CSTRING("\xe6""\x9c""\xaa""\xe6""\x89""\xbe""\xe5""\x88""\xb0""\xe4""\xbb""\xa3""\xe7""\xa0""\x81""\xe8""\xb7""\xaf""\xe5""\xbe""\x84""\xe9""\x85""\x8d""\xe7""\xbd""\xae""\xef""\xbc""\x8c""\xe8""\xaf""\xb7""\xe5""\x88""\x9b""\xe5""\xbb""\xba""config.ini\xef""\xbc""\x8c""\xe5""\xb9""\xb6""\xe5""\xb0""\x86""\xe6""\x89""\x80""\xe9""\x9c""\x80""\xe6""\xa3""\x80""\xe6""\xb5""\x8b""\xe7""\x9a""\x84""\xe4""\xbb""\xa3""\xe7""\xa0""\x81""\xe6""\xa0""\xb9""\xe8""\xb7""\xaf""\xe5""\xbe""\x84""\xe9""\x85""\x8d""\xe4""\xba""\x8e""\xe6""\x94""\xb9""\xe6""\x96""\x87""\xe4""\xbb""\xb6""\xe5""\x86""\x85""\xef""\xbc""\x81"""));
			HX_STACK_LINE(31)
			::logs::LogManager_obj::getInstance()->Close();
			HX_STACK_LINE(33)
			return null();
		}
		HX_STACK_LINE(36)
		::String _g = ::config::ConfigManager_obj::getInstance()->getCodePath();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		::codeanalysis::CodeAnalysisManager_obj::getInstance()->Analysis(_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
}

