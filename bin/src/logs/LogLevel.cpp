#include <hxcpp.h>

#ifndef INCLUDED_logs_LogLevel
#include <logs/LogLevel.h>
#endif
namespace logs{

Void LogLevel_obj::__construct()
{
HX_STACK_FRAME("logs.LogLevel","new",0x592ea3d1,"logs.LogLevel.new","logs/LogLevel.hx",15,0xde45ee5e)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//LogLevel_obj::~LogLevel_obj() { }

Dynamic LogLevel_obj::__CreateEmpty() { return  new LogLevel_obj; }
hx::ObjectPtr< LogLevel_obj > LogLevel_obj::__new()
{  hx::ObjectPtr< LogLevel_obj > result = new LogLevel_obj();
	result->__construct();
	return result;}

Dynamic LogLevel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LogLevel_obj > result = new LogLevel_obj();
	result->__construct();
	return result;}

int LogLevel_obj::LogType_Loging;

int LogLevel_obj::LogType_Warring;

int LogLevel_obj::LogType_Error;


LogLevel_obj::LogLevel_obj()
{
}

Dynamic LogLevel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"LogType_Error") ) { return LogType_Error; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"LogType_Loging") ) { return LogType_Loging; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"LogType_Warring") ) { return LogType_Warring; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LogLevel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"LogType_Error") ) { LogType_Error=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"LogType_Loging") ) { LogType_Loging=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"LogType_Warring") ) { LogType_Warring=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LogLevel_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LogType_Loging"),
	HX_CSTRING("LogType_Warring"),
	HX_CSTRING("LogType_Error"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LogLevel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LogLevel_obj::LogType_Loging,"LogType_Loging");
	HX_MARK_MEMBER_NAME(LogLevel_obj::LogType_Warring,"LogType_Warring");
	HX_MARK_MEMBER_NAME(LogLevel_obj::LogType_Error,"LogType_Error");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LogLevel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LogLevel_obj::LogType_Loging,"LogType_Loging");
	HX_VISIT_MEMBER_NAME(LogLevel_obj::LogType_Warring,"LogType_Warring");
	HX_VISIT_MEMBER_NAME(LogLevel_obj::LogType_Error,"LogType_Error");
};

#endif

Class LogLevel_obj::__mClass;

void LogLevel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("logs.LogLevel"), hx::TCanCast< LogLevel_obj> ,sStaticFields,sMemberFields,
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

void LogLevel_obj::__boot()
{
	LogType_Loging= (int)0;
	LogType_Warring= (int)1;
	LogType_Error= (int)2;
}

} // end namespace logs
