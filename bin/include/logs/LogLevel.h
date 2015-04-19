#ifndef INCLUDED_logs_LogLevel
#define INCLUDED_logs_LogLevel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(logs,LogLevel)
namespace logs{


class HXCPP_CLASS_ATTRIBUTES  LogLevel_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LogLevel_obj OBJ_;
		LogLevel_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< LogLevel_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LogLevel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("LogLevel"); }

		static int LogType_Loging;
		static int LogType_Warring;
		static int LogType_Error;
};

} // end namespace logs

#endif /* INCLUDED_logs_LogLevel */ 
