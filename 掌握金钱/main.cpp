#include "main.h"

////////////////////////////////
//图形库使用：easyX
////////////////////////////////

int main ()
{
	
 	HWND window = GetConsoleWindow();
 	SetWindowPos(window, HWND_TOP, 335, 45, 800, 600, SWP_SHOWWINDOW);//固定窗口位置
	float passspeed = 0.5;//定义过渡动画速度变量
	int choice = 0;//选项变量
	choice = Register(&passspeed);//动画系统
	while(1)
	{	
		Function(choice); 
		choice = Menu(passspeed);//程序功能
	}
}