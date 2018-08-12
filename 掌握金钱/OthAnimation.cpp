#include "main.h"

void OthAnimation ()
{
	IMAGE animation;
	CO co[35][25];
	int i = 0;
	int j = 0;
	float x = 0;
	float vy = 0.5;
	float y = 0;
	int getting = 0;
	co[i][j].copper_x = AnimaRadius;
	co[i][j].copper_y = AnimaRadius;

	initgraph(800, 600);
	BeginBatchDraw();
	while(true)
	{
		setcolor(WHITE);
		setfillcolor(RGB(255,215,0));
		fillcircle(co[i][j].copper_x,co[i][j].copper_y,AnimaRadius);

		setcolor(BLACK);
		setfillcolor(RGB(227,207,87));
		fillcircle(co[i][j].copper_x,co[i][j].copper_y,SRadius);

		setcolor(RGB(227,207,87));
		setfillcolor(RGB(255,255,0));
		fillrectangle(co[i][j].copper_x-BLength,co[i][j].copper_y-BLength,co[i][j].copper_x+BLength,co[i][j].copper_y+BLength);

		setcolor(RGB(255,215,0));
		setfillcolor(BLACK);
		fillrectangle(co[i][j].copper_x-SLength,co[i][j].copper_y-SLength,co[i][j].copper_x+SLength,co[i][j].copper_y+SLength);

		if (co[i][j].copper_x>=750)
		{				
			co[i+1][0].copper_y = co[i][j].copper_y + AnimaRadius*2-24;			
			co[i+1][0].copper_x = AnimaRadius;
			// 			co[i][j].copper_y = co[i][j].copper_y + co[i][j].copper_vy;
			i++;
			j = 0;

		}
		else
		{		
			co[i][j+1].copper_x = co[i][j].copper_x +AnimaRadius*2-10;//yÎªÊ²Ã´»á±¬Õ¨£¿
			co[i][j+1].copper_y = co[i][j].copper_y;
			j++;
			i=i;
		}
		FlushBatchDraw();

		if (co[i][j].copper_y>=600)
		{
			getimage(&animation,0,0,800,600);
			EndBatchDraw();
			break;
		}
	}
	BeginBatchDraw();
	while(1)
	{
		putimage(x, y, &animation);		

		vy = vy  - 0.003;
		y = y + vy;
		Sleep(0.8);
		FlushBatchDraw();
		setcolor(BLACK);
		setfillcolor(BLACK);
		fillrectangle(0,0,800,600);
		if (y<-600)
		{
			break;
		}
	}
}