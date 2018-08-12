#include "main.h"

void SetColor(unsigned short ForeColor,unsigned short BackGroundColor)
{
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);//获取当前窗口句柄
	SetConsoleTextAttribute(handle,ForeColor+BackGroundColor*0x10);//设置颜色
}