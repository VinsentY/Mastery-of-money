#include "main.h"

void CopperAppear (CO *co2,int start,int *collision,int *startthird,int *startfourth,int back_startfourth)
{
	if (start==1)
	{

		setcolor(WHITE);
		setfillcolor(RGB(255,215,0));
		fillcircle(co2->copper_x,co2->copper_y,BRadius);

		setcolor(BLACK);
		setfillcolor(RGB(227,207,87));
		fillcircle(co2->copper_x,co2->copper_y,SRadius);

		setcolor(RGB(227,207,87));
		setfillcolor(RGB(255,255,0));
		fillrectangle(co2->copper_x-BLength,co2->copper_y-BLength,co2->copper_x+BLength,co2->copper_y+BLength);

		setcolor(RGB(255,215,0));
		setfillcolor(BLACK);
		fillrectangle(co2->copper_x-SLength,co2->copper_y-SLength,co2->copper_x+SLength,co2->copper_y+SLength);
		co2->copper_x = co2->copper_x + co2->copper_vx;
		co2->copper_y = co2->copper_y + co2->copper_vy;
		if (co2->copper_x<447)
		{
			co2->copper_vx = -co2->copper_vx/2;
			co2->copper_x = 447;
			*collision = 1;
		}
		if (*collision!=0)
		{
			co2->copper_vx = co2->copper_vx - 0.054*9.8*0.001;
			if (co2->copper_vx<0)
			{

				co2->copper_vx = 0;
			}
		}
		if (co2->copper_x>590&&*collision!=0)
		{
			*startthird = 1;
		}
		if (back_startfourth==4)
		{
			co2->copper_vy = 1;
			*startfourth = 5;
		}
	}
	

}