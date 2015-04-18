package ;
import config.ConfigManager;
import cpp.Lib;
import haxe.io.Bytes;
import logs.LogLevel;
import logs.LogManager;
import sys.io.FileInput;
import sys.io.FileOutput;

import sys.io.File;

/**
 * ...
 * @author sam
 */

class Main 
{
	
	static function main() 
	{
		LogManager.getInstance().Init();
		var bSuc:Bool = ConfigManager.getInstance().Init();
		

		if ( !bSuc )
		{
			LogManager.getInstance().Trace( LogLevel.LogType_Error, "未找到代码路径配置，请创建config.ini，并将所需检测的代码根路径配于改文件内！" );
		}

		
		LogManager.getInstance().Close();
	}
	
}