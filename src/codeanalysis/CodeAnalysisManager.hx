package codeanalysis;
import haxe.io.Bytes;
import sys.FileSystem;
import sys.io.File;
import sys.io.FileOutput;

/**
 * ...
 * @author sam
 */
class CodeAnalysisManager
{
	private static var _instance:CodeAnalysisManager = null;
	
	private var outSaveFile:FileOutput;
	
	private var title:String = "title_";
	private var nID:Int = 0;
	
	public function new() 
	{
		
	}
	
	public static function getInstance():CodeAnalysisManager
	{
		
		if ( _instance == null )
			_instance = new CodeAnalysisManager();
			
		return _instance;
	}
	
	
	public function Analysis( path:String ):Void
	{
		var fileArray:Array<String> = null;
		fileArray = FileSystem.readDirectory( path );
		
		if ( outSaveFile == null )
		{
			outSaveFile = File.write("Analysis.ini", false );
			
			outSaveFile.writeString(path);
		}
		
		var fullPath:String = FileSystem.fullPath(path);
		
		outSaveFile.writeString(fullPath);
		
		if ( FileSystem.exists( fullPath ) )
		{
			outSaveFile.writeString("=====================");
		}
		else
		{
			outSaveFile.writeString("!!!!!!!!!!!!!!!!!!!!!");
		}
		
		if ( fileArray == null || fileArray.length == 0 )
		{
			return;
		}
			
		outSaveFile.writeString("ok");
			
		for (i in 0...fileArray.length)
		{
			var fileName:String = fileArray[i];
			
			if ( FileSystem.isDirectory(fileName) )
			{
				Analysis( fileName );
			}
			else
			{
				AnalysisFile( fileName );
			}
		}
		
	}
	
	
	private function AnalysisFile( fileName:String ):Void
	{
		var bytes:Bytes = File.getBytes(fileName);
		
		if ( bytes == null )
			return;
			
		var content:String = bytes.toString();
		
		var strArray:Array<String> = content.split("'");
		
		for (i in 0...strArray.length)
		{
			outSaveFile.writeString(strArray[i]);
		}
		outSaveFile.close();
	}
	
}