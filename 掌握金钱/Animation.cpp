#include "main.h"

void Animation (IMAGE activity,float passspeed)
{
	float x = 0;
	float vy = 2;
	float y = 0;//����ͼƬ��ʼλ��

	int getting = 0; 
	initgraph(800,600);
	BeginBatchDraw();
	while(1)
	{
		putimage(x, y, &activity);			
		if (y>145)//������΢��������Ч��
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
		Sleep(passspeed);//�����ٶȸ���
		FlushBatchDraw();
 		setcolor(BLACK);
		setfillcolor(BLACK);
		fillrectangle(0,0,800,600);//����ˢ��
		if (y<-800)
		{
			break;//��������
		}
	}
	closegraph();

}