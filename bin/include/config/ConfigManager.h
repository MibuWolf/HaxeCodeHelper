#ifndef INCLUDED_config_ConfigManager
#define INCLUDED_config_ConfigManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(config,ConfigManager)
HX_DECLARE_CLASS2(haxe,io,Bytes)
namespace config{


class HXCPP_CLASS_ATTRIBUTES  ConfigManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ConfigManager_obj OBJ_;
		ConfigManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ConfigManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ConfigManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ConfigManager"); }

		::haxe::io::Bytes bytes;
		virtual bool Init( );
		Dynamic Init_dyn();

		virtual ::String getCodePath( );
		Dynamic getCodePath_dyn();

		static ::config::ConfigManager _instance;
		static ::config::ConfigManager getInstance( );
		static Dynamic getInstance_dyn();

};

} // end namespace config

#endif /* INCLUDED_config_ConfigManager */ 
