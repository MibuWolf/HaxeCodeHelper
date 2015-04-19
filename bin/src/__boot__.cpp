#include <hxcpp.h>

#include <sys/io/FileOutput.h>
#include <sys/io/File.h>
#include <sys/FileSystem.h>
#include <sys/_FileSystem/FileKind.h>
#include <logs/LogManager.h>
#include <logs/LogLevel.h>
#include <haxe/io/Path.h>
#include <haxe/io/Error.h>
#include <haxe/io/Eof.h>
#include <haxe/io/Output.h>
#include <haxe/io/Bytes.h>
#include <config/ConfigManager.h>
#include <codeanalysis/CodeAnalysisManager.h>
#include <Std.h>
#include <Main.h>
#include <cpp/Lib.h>

void __files__boot();

void __boot_all()
{
__files__boot();
hx::RegisterResources( hx::GetResources() );
::sys::io::FileOutput_obj::__register();
::sys::io::File_obj::__register();
::sys::FileSystem_obj::__register();
::sys::_FileSystem::FileKind_obj::__register();
::logs::LogManager_obj::__register();
::logs::LogLevel_obj::__register();
::haxe::io::Path_obj::__register();
::haxe::io::Error_obj::__register();
::haxe::io::Eof_obj::__register();
::haxe::io::Output_obj::__register();
::haxe::io::Bytes_obj::__register();
::config::ConfigManager_obj::__register();
::codeanalysis::CodeAnalysisManager_obj::__register();
::Std_obj::__register();
::Main_obj::__register();
::cpp::Lib_obj::__register();
::cpp::Lib_obj::__boot();
::Main_obj::__boot();
::Std_obj::__boot();
::codeanalysis::CodeAnalysisManager_obj::__boot();
::config::ConfigManager_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::haxe::io::Output_obj::__boot();
::haxe::io::Eof_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::io::Path_obj::__boot();
::logs::LogLevel_obj::__boot();
::logs::LogManager_obj::__boot();
::sys::_FileSystem::FileKind_obj::__boot();
::sys::FileSystem_obj::__boot();
::sys::io::File_obj::__boot();
::sys::io::FileOutput_obj::__boot();
}

