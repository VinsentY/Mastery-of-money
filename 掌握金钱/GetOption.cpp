#include "main.h"

void GetOption (float *startspeed,float *passspeed)
{
	initgraph(800,600);

	HCURSOR hcur = LoadCursor(NULL, IDC_ARROW);		// 加载系统预置的鼠标样式
	HWND hwnd = GetHWnd();

	BeginBatchDraw();

	int touch = 0;//触摸变量

	IMAGE animation;//对应图片
	MOUSEMSG m;
	IMAGE begin;
	IMAGE pass;
	IMAGE x1;
	IMAGE dx1;
	IMAGE x2;
	IMAGE dx2;
	IMAGE x3;
	IMAGE dx3;
	IMAGE x4;
	IMAGE dx4;

	int H = 0;
	int S = 1;
	float L = 0.5f;//彩虹中HSL三色

	//读入图片
	loadimage(&begin,"动画图片\\开场动画.jpg",215,50);
	loadimage(&pass,"动画图片\\过场动画.jpg",215,50);
	loadimage(&x1,"动画图片\\x1.jpg",75,49);
	loadimage(&dx1,"动画图片\\x1(1).jpg",75,49);
	loadimage(&x2,"动画图片\\x2.jpg",75,49);
	loadimage(&dx2,"动画图片\\x2(1).jpg",75,49);
	loadimage(&x3,"动画图片\\x3.jpg",75,49);
	loadimage(&dx3,"动画图片\\x3(1).jpg",75,49);
	loadimage(&x4,"动画图片\\x4.jpg",75,49);
	loadimage(&dx4,"动画图片\\x4(1).jpg",75,49);

	setlinestyle(PS_SOLID, 2);		// 设置线宽为 2
	for(int r = 220; r > 164; r--) //右下角彩虹
	{
		H += 5;
		setlinecolor( HSLtoRGB(H, S, L) );
		circle(800, 600, r);
	}

	while(true)
	{
		putimage(45,125,&begin);
		putimage(45,300,&pass);
		m = GetMouseMsg();
		if (m.x>290&&m.x<390&&m.y>125&&m.y<174)//鼠标指定区域动画变换
		{
			touch = 1;
			putimage(290,120,&dx1);//颜色变换
			if (m.mkLButton)
			{	
				*startspeed = 0.5;//更改速度
				EndBatchDraw();
				getimage(&animation,0,0,800,600);
				closegraph();	
				Animation(animation,*passspeed);
				break;
			}
		}
		else if (m.x>414&&m.x<514&&m.y>125&&m.y<174)
		{
			touch = 1;
			putimage(414,120,&dx2);
			if (m.mkLButton)
			{	
				*startspeed = 1;
				EndBatchDraw();
				getimage(&animation,0,0,800,600);
				closegraph();	
				Animation(animation,*passspeed);
				break;
			}
			// 			putimage(290,125,&x1);
		}
		else if (m.x>542&&m.x<642&&m.y>125&&m.y<174)
		{
			touch = 1;
			putimage(542,120,&dx3);
			if (m.mkLButton)
			{	
				*startspeed = 1.5;
				EndBatchDraw();
				getimage(&animation,0,0,800,600);
				closegraph();	
				Animation(animation,*passspeed);
				break;
			}
			// 			putimage(290,125,&x1);
		}
		else if (m.x>670&&m.x<770&&m.y>125&&m.y<174)
		{
			touch = 1;
			putimage(670,118,&dx4);
			if (m.mkLButton)
			{	
				*startspeed = 2;
				EndBatchDraw();
				getimage(&animation,0,0,800,600);
				closegraph();	
				Animation(animation,*passspeed);
				break;
			}
			// 			putimage(290,125,&x1);
		}
		else if (m.x>290&&m.x<390&&m.y>300&&m.y<349)//统一尺寸 75 x 49
		{
			touch = 1;
			putimage(290,295,&dx1);
			if (m.mkLButton)
			{	
				*passspeed = 0.5;
				EndBatchDraw();
				getimage(&animation,0,0,800,600);
				closegraph();	
				Animation(animation,*passspeed);
				break;
			}
		}
		else if (m.x>414&&m.x<514&&m.y>300&&m.y<349)
		{
			
			touch = 1;
			putimage(414,295,&dx2);
			if (m.mkLButton)
			{	
				*passspeed = 1;
				EndBatchDraw();
				getimage(&animation,0,0,800,600);
				closegraph();	
				Animation(animation,*passspeed);
				break;
			}
			// 			putimage(290,125,&x1);
		}
		else if (m.x>542&&m.x<642&&m.y>300&&m.y<349)
		{
			touch = 1;
			putimage(542,295,&dx3);
			if (m.mkLButton)
			{	
				*passspeed = 1.5;
				EndBatchDraw();
				getimage(&animation,0,0,800,600);
				closegraph();	
				Animation(animation,*passspeed);
				break;
			}
			// 			putimage(290,125,&x1);
		}
		else if (m.x>670&&m.x<770&&m.y>300&&m.y<349)
		{
			touch = 1;
			putimage(670,293,&dx4);
			if (m.mkLButton)
			{	
				*passspeed = 2;
				EndBatchDraw();
				getimage(&animation,0,0,800,600);
				closegraph();	
				Animation(animation,*passspeed);
				break;
			}
			// 			putimage(290,125,&x1);
		}
		else
		{	
			touch = 0;

			putimage(290,125,&x1);
			putimage(414,120,&x2);
			putimage(542,120,&x3);
			putimage(670,118,&x4);
			
			putimage(290,300,&x1);
			putimage(414,295,&x2);
			putimage(542,295,&x3);
			putimage(670,293,&x4);
		}

		//鼠标样式变换
		if (touch==1)
		{
			hcur = LoadCursor(NULL, MAKEINTRESOURCE(32649));		
			SetClassLong(hwnd, GCL_HCURSOR, (long)hcur); 
		}
		else
		{
			hcur = LoadCursor(NULL, IDC_ARROW);
			SetClassLong(hwnd, GCL_HCURSOR, (long)hcur); 
		}

		
		FlushBatchDraw();
	}

	//将数据存入文件当中
	FILE *fp;
	if (fp=fopen("动画速度设置.txt","w+"))
	{
		fprintf(fp,"---------------------------------\n");
		fprintf(fp,"	  动画效果\n");
		fprintf(fp,"开场动画                :");
		fprintf(fp,"%.5f",*startspeed);
		fprintf(fp,";\n");
		fprintf(fp,"过渡动画                :");
		fprintf(fp,"%.5f",*passspeed);
		fprintf(fp,";\n");
		fprintf(fp,"---------------------------------\n");
		fprintf(fp,"       制作人：Vinsent_Y");
	}
	else
	{
		exit(0);
	}

	fclose(fp);
}