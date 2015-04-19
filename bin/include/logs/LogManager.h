#ifndef INCLUDED_logs_LogManager
#define INCLUDED_logs_LogManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS1(logs,LogManager)
HX_DECLARE_CLASS2(sys,io,FileOutput)
namespace logs{


class HXCPP_CLASS_ATTRIBUTES  LogManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LogManager_obj OBJ_;
		LogManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< LogManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LogManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LogManager"); }

		::sys::io::FileOutput outLog;
		virtual Void Init( );
		Dynamic Init_dyn();

		virtual Void Trace( int nType,::String text);
		Dynamic Trace_dyn();

		virtual Void Close( );
		Dynamic Close_dyn();

		static ::logs::LogManager _instance;
		static ::logs::LogManager getInstance( );
		static Dynamic getInstance_dyn();

};

} // end namespace logs

#endif /* INCLUDED_logs_LogManager */ 
