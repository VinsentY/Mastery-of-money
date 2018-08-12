#include "main.h"

void SetPos(int x,int y)
{
	COORD pos;
	HANDLE handle;
	pos.X=x;
	pos.Y=y;
	handle=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(handle,pos);
}