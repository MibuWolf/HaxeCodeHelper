package config;
import haxe.io.Bytes;
import logs.LogLevel;
import logs.LogManager;
import sys.FileSystem;
import sys.io.File;
import sys.io.FileOutput;

/**
 * ...
 * @author sam
 */

class ConfigManager 
{
	private static var _instance:ConfigManager;
	
	private var bytes:Bytes = null;
	
	public function new() 
	{
		
	}
	

	public static function getInstance():ConfigManager
	{
		if ( _instance == null )
			_instance = new ConfigManager();
			
		return _instance;
	}
	
	
	public  function Init():Bool
	{
		LogManager.getInstance().Trace( LogLevel.LogType_Loging, " 开始加载代码路径配置文件 config.ini ... ... " );
		var realPath:String = FileSystem.fullPath("config.ini");
		
		if ( realPath == null || realPath == "" )
			return false;
		
		bytes = File.getBytes( realPath );
		
		var logText:String = " 读取到的代码路径是: ";
		LogManager.getInstance().Trace( LogLevel.LogType_Loging, logText + bytes.toString() );
		
		if ( bytes == null )
			return false;
		return true;
			
	}
	
	public function getCodePath():String
	{
		if( bytes == null )
			return "";
			
		return bytes.toString();
	}
	
}