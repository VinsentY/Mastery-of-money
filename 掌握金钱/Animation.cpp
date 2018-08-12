#include "main.h"

void Animation (IMAGE activity,float passspeed)
{
	float x = 0;
	float vy = 2;
	float y = 0;//定义图片初始位置

	int getting = 0; 
	initgraph(800,600);
	BeginBatchDraw();
	while(1)
	{
		putimage(x, y, &activity);			
		if (y>145)//做出轻微反弹动画效果
		{
			y = 145;
			vy = 0;
			getting = 1;
		}
		if (getting==1)
		{
			vy = vy  - 0.012;
		}
		y = y + vy;
		Sleep(passspeed);//动画速度更改
		FlushBatchDraw();
 		setcolor(BLACK);
		setfillcolor(BLACK);
		fillrectangle(0,0,800,600);//黑屏刷新
		if (y<-800)
		{
			break;//跳出动画
		}
	}
	closegraph();

}