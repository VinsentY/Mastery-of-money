#include "main.h"

void SetColor(unsigned short ForeColor,unsigned short BackGroundColor)
{
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);//��ȡ��ǰ���ھ��
	SetConsoleTextAttribute(handle,ForeColor+BackGroundColor*0x10);//������ɫ
}