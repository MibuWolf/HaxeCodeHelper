#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_logs_LogLevel
#include <logs/LogLevel.h>
#endif
#ifndef INCLUDED_logs_LogManager
#include <logs/LogManager.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif
namespace logs{

Void LogManager_obj::__construct()
{
HX_STACK_FRAME("logs.LogManager","new",0x574a15fa,"logs.LogManager.new","logs/LogManager.hx",17,0x24a59a15)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//LogManager_obj::~LogManager_obj() { }

Dynamic LogManager_obj::__CreateEmpty() { return  new LogManager_obj; }
hx::ObjectPtr< LogManager_obj > LogManager_obj::__new()
{  hx::ObjectPtr< LogManager_obj > result = new LogManager_obj();
	result->__construct();
	return result;}

Dynamic LogManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LogManager_obj > result = new LogManager_obj();
	result->__construct();
	return result;}

Void LogManager_obj::Init( ){
{
		HX_STACK_FRAME("logs.LogManager","Init",0xf11b0856,"logs.LogManager.Init","logs/LogManager.hx",31,0x24a59a15)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		::sys::io::FileOutput _g = ::sys::io::File_obj::write(HX_CSTRING("Log.ini"),false);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		this->outLog = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LogManager_obj,Init,(void))

Void LogManager_obj::Trace( int nType,::String text){
{
		HX_STACK_FRAME("logs.LogManager","Trace",0x5e935e7f,"logs.LogManager.Trace","logs/LogManager.hx",36,0x24a59a15)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nType,"nType")
		HX_STACK_ARG(text,"text")
		HX_STACK_LINE(37)
		if (((this->outLog == null()))){
			HX_STACK_LINE(38)
			return null();
		}
		struct _Function_1_1{
			inline static Float Block( int &nType){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","logs/LogManager.hx",40,0x24a59a15)
				{
					HX_STACK_LINE(40)
					int _int = nType;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(40)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","logs/LogManager.hx",40,0x24a59a15)
				{
					HX_STACK_LINE(40)
					int _int = ::logs::LogLevel_obj::LogType_Loging;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(40)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(40)
		if (((_Function_1_1::Block(nType) == _Function_1_2::Block()))){
			HX_STACK_LINE(42)
			this->outLog->writeString(HX_CSTRING("LOGING:\t\t"));
			HX_STACK_LINE(43)
			this->outLog->writeString(text);
			HX_STACK_LINE(44)
			this->outLog->writeString(HX_CSTRING("\n"));
		}
		struct _Function_1_3{
			inline static Float Block( int &nType){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","logs/LogManager.hx",47,0x24a59a15)
				{
					HX_STACK_LINE(47)
					int _int = nType;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(47)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		struct _Function_1_4{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","logs/LogManager.hx",47,0x24a59a15)
				{
					HX_STACK_LINE(47)
					int _int = ::logs::LogLevel_obj::LogType_Warring;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(47)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(47)
		if (((_Function_1_3::Block(nType) == _Function_1_4::Block()))){
			HX_STACK_LINE(49)
			this->outLog->writeString(HX_CSTRING("WARRING:\t\t"));
			HX_STACK_LINE(50)
			this->outLog->writeString(text);
			HX_STACK_LINE(51)
			this->outLog->writeString(HX_CSTRING("\n"));
		}
		struct _Function_1_5{
			inline static Float Block( int &nType){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","logs/LogManager.hx",54,0x24a59a15)
				{
					HX_STACK_LINE(54)
					int _int = nType;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(54)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		struct _Function_1_6{
			inline static Float Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","logs/LogManager.hx",54,0x24a59a15)
				{
					HX_STACK_LINE(54)
					int _int = ::logs::LogLevel_obj::LogType_Error;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(54)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(54)
		if (((_Function_1_5::Block(nType) == _Function_1_6::Block()))){
			HX_STACK_LINE(56)
			this->outLog->writeString(HX_CSTRING("ERROR:\t\t"));
			HX_STACK_LINE(57)
			this->outLog->writeString(text);
			HX_STACK_LINE(58)
			this->outLog->writeString(HX_CSTRING("\n"));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LogManager_obj,Trace,(void))

Void LogManager_obj::Close( ){
{
		HX_STACK_FRAME("logs.LogManager","Close",0x90d6e7b2,"logs.LogManager.Close","logs/LogManager.hx",64,0x24a59a15)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		if (((this->outLog != null()))){
			HX_STACK_LINE(66)
			this->outLog->close();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LogManager_obj,Close,(void))

::logs::LogManager LogManager_obj::_instance;

::logs::LogManager LogManager_obj::getInstance( ){
	HX_STACK_FRAME("logs.LogManager","getInstance",0xb35151e5,"logs.LogManager.getInstance","logs/LogManager.hx",22,0x24a59a15)
	HX_STACK_LINE(23)
	if (((::logs::LogManager_obj::_instance == null()))){
		HX_STACK_LINE(24)
		::logs::LogManager _g = ::logs::LogManager_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(24)
		::logs::LogManager_obj::_instance = _g;
	}
	HX_STACK_LINE(26)
	return ::logs::LogManager_obj::_instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LogManager_obj,getInstance,return )


LogManager_obj::LogManager_obj()
{
}

void LogManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LogManager);
	HX_MARK_MEMBER_NAME(outLog,"outLog");
	HX_MARK_END_CLASS();
}

void LogManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(outLog,"outLog");
}

Dynamic LogManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Init") ) { return Init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"Trace") ) { return Trace_dyn(); }
		if (HX_FIELD_EQ(inName,"Close") ) { return Close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"outLog") ) { return outLog; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { return _instance; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LogManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"outLog") ) { outLog=inValue.Cast< ::sys::io::FileOutput >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_instance") ) { _instance=inValue.Cast< ::logs::LogManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LogManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("outLog"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_instance"),
	HX_CSTRING("getInstance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::sys::io::FileOutput*/ ,(int)offsetof(LogManager_obj,outLog),HX_CSTRING("outLog")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("outLog"),
	HX_CSTRING("Init"),
	HX_CSTRING("Trace"),
	HX_CSTRING("Close"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LogManager_obj::_instance,"_instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LogManager_obj::_instance,"_instance");
};

#endif

Class LogManager_obj::__mClass;

void LogManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("logs.LogManager"), hx::TCanCast< LogManager_obj> ,sStaticFields,sMemberFields,
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

void LogManager_obj::__boot()
{
}

} // end namespace logs
