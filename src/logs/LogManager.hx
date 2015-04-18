package logs;
import sys.io.File;
import sys.io.FileOutput;

/**
 * ...
 * @author sam
 */

class LogManager 
{
	private static var _instance:LogManager;
	
	private var outLog:FileOutput;
	
	public function new() 
	{
		
	}
	
	public static function getInstance():LogManager
	{
		if ( _instance == null )
		    _instance = new LogManager();
			
		return _instance;
	}
	
	
	public function Init():Void
	{
		outLog = File.write("Log.ini", false );
	}
	
	public function Trace( nType:UInt, text:String ):Void
	{
		if ( outLog == null )
			return;
		
		if ( nType == LogLevel.LogType_Loging )
		{
			outLog.writeString( "LOGING:		" );
			outLog.writeString(text);
			outLog.writeString("\n");
		}
			
		if( nType == LogLevel.LogType_Warring )
		{
			outLog.writeString( "WARRING:		" );
			outLog.writeString(text);
			outLog.writeString("\n");
		}
	
		if( nType == LogLevel.LogType_Error )
		{
			outLog.writeString( "ERROR:		" );
			outLog.writeString(text);
			outLog.writeString("\n");
		}
	}
	
	public function Close():Void
	{
		if ( outLog != null )
		{
			outLog.close();	
		}
	}
	
}