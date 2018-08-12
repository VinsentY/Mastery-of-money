#include "main.h"

void CopperJump (CO *co1,int *jump,int *collision,int *startnext,int *startfourth,int back_startfourth)
{	
	if (*collision==0)
	{
		setcolor(WHITE);
		setfillcolor(RGB(255,215,0));
		fillcircle(co1->copper_x,co1->copper_y,BRadius);

		setcolor(BLACK);
		setfillcolor(RGB(227,207,87));
		fillcircle(co1->copper_x,co1->copper_y,SRadius);

		setcolor(RGB(227,207,87));
		setfillcolor(RGB(255,255,0));
		fillrectangle(co1->copper_x-BLength,co1->copper_y-BLength,co1->copper_x+BLength,co1->copper_y+BLength);

		setcolor(RGB(255,215,0));
		setfillcolor(BLACK);
		fillrectangle(co1->copper_x-SLength,co1->copper_y-SLength,co1->copper_x+SLength,co1->copper_y+SLength);
		
		co1->copper_vy = co1->copper_vy + 9.8*0.001;
		co1->copper_x = co1->copper_x + co1->copper_vx;
		co1->copper_y = co1->copper_y + co1->copper_vy;
		if (co1->copper_y>300)
		{
			co1->copper_vx = (co1->copper_vx)/2;
			co1->copper_vy = -(co1->copper_vy)/1.5;
			co1->copper_y = 300;
// 			*jump++;
// 			if (*jump>1)
// 			{
// 				co1->copper_vx = 0;
// 				co1->copper_vy = 0;
// 			}
		}
	
		if (co1->copper_x>320)
		{
			*startnext = 1;
		}
		if (*collision==1)
		{
			
		}
	}	
	else
	{
		if (*collision==1)
		{
			co1->copper_vx = -0.5;
			*collision = 2;
		}
		setcolor(WHITE);
		setfillcolor(RGB(255,215,0));
		fillcircle(co1->copper_x,co1->copper_y,BRadius);

		setcolor(BLACK);
		setfillcolor(RGB(227,207,87));
		fillcircle(co1->copper_x,co1->copper_y,SRadius);

		setcolor(RGB(227,207,87));
		setfillcolor(RGB(255,255,0));
		fillrectangle(co1->copper_x-BLength,co1->copper_y-BLength,co1->copper_x+BLength,co1->copper_y+BLength);

		setcolor(RGB(255,215,0));
		setfillcolor(BLACK);
		fillrectangle(co1->copper_x-SLength,co1->copper_y-SLength,co1->copper_x+SLength,co1->copper_y+SLength);
		if (co1->copper_vx<0&&*startfourth==0)
		{
			co1->copper_vx = co1->copper_vx + 0.04*9.8*0.001;
			co1->copper_vy = 0;
		}	
		else
		{
			co1->copper_vx = 0;

		}
		co1->copper_x = co1->copper_x + co1->copper_vx;
		co1->copper_y = co1->copper_y + co1->copper_vy;
		if (back_startfourth==1)
		{
			co1->copper_vx = 0;
			co1->copper_vy = 1;
			*startfourth = 2;
		}
	}
}