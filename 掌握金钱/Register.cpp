#include "main.h"

// #define copper_x 0
// #define copper_y 100


int Register (float *passspeed)
{
	begin:initgraph(800,600);

	int jump = 0;
	int collision = 0;
	int startthird = 0;
	int startsecond = 0;
	int startfourth = 0;
	int back_startfourth = 0;
	int touch = 0;//状态量

	IMAGE acer;//元宝图片
	WORDS pic;
	IMAGE start;
	IMAGE option;
	IMAGE us;
	IMAGE dstart;
	IMAGE doption;
	IMAGE dus;
	IMAGE animation;
	MOUSEMSG m;//记录鼠标操作
	HCURSOR hcur = LoadCursor(NULL, IDC_ARROW);		// 加载系统预置的鼠标样式
	HWND hwnd = GetHWnd();//获得窗口句柄

	float startspeed = 0.5; //开场动画速度

	CO co1 = {0,0,0.8,0};
	CO co2 = {800,281.9,-1,0};
	CO co3 = {232,0,0,1};
	CO co4 = {232+248,0,0,1};//四枚金钱的状态结构体

	PIXEL first = {0,15,15};
	PIXEL second = {0,785,585}; //两条五彩直线

	//载入图片
	loadimage(&acer, "动画图片\\10.jpg",78,41);
	loadimage(&pic.zhang, "动画图片\\掌.jpg",78,87.5);
	loadimage(&pic.wo, "动画图片\\握.jpg",78,87.5);
	loadimage(&pic.jin, "动画图片\\金.jpg",78,87.5);	
	loadimage(&pic.qian, "动画图片\\钱.jpg",78,87.5);
	loadimage(&start, "动画图片\\开始记账.jpg",172,42);
	loadimage(&option, "动画图片\\动画速度.jpg",172,42);
	loadimage(&us, "动画图片\\关于我们.jpg",172,42);
	loadimage(&dstart, "动画图片\\开始记账(1).jpg",172,42);
	loadimage(&doption, "动画图片\\动画速度(1).jpg",172,42);
	loadimage(&dus, "动画图片\\关于我们(1).jpg",172,42);//加(1)代表变色后的图片

	LoadOption(&startspeed,passspeed);//载入动画速度设置
	while (back_startfourth!=5)//动画第一阶段
	{
		BeginBatchDraw();
		
		CopperJump(&co1,&jump,&collision,&startsecond,&startfourth,back_startfourth);//跳跃金币动画
		CopperAppear(&co2,startsecond,&collision,&startthird,&startfourth,back_startfourth);//右侧出现金币动画
		AcerAppear(&co3,&co4,startthird,acer,&startfourth,back_startfourth);//两枚元宝动画
		Printword (pic,startfourth,&back_startfourth,co1,co2,co3,co4);//掌握金钱动画
		Sleep(startspeed);//速度调节
		FlushBatchDraw();
		setcolor(BLACK);
		setfillcolor(BLACK);
		fillrectangle(0,0,800,600);//黑屏刷新
	}
	while(1)//动画第二阶段
	{
		PrintLine(&first,&second);//五彩线段动画

		putimage(100,100,&pic.zhang);
		putimage(250,100,&pic.wo);
		putimage(440,100,&pic.jin);
		putimage(600,100,&pic.qian);//掌握金钱静态图片

		m = GetMouseMsg();//获得鼠标操作数据

		BeginBatchDraw();
		if (m.x>300&&m.x<472&&m.y>300&&m.y<342)//在指定区域内产生变化
		{
			touch = 1;//更改触摸状态变量
			putimage(300,300,&dstart);//更改颜色
			if (m.mkLButton)
			{	
				EndBatchDraw();
				getimage(&animation,0,0,800,600);
				closegraph();	
				Animation(animation,*passspeed);//过渡动画
				return Menu(*passspeed);//功能函数进入
				
			}
		}
		else if(m.x>300&&m.x<472&&m.y>400&&m.y<442)//同上
		{
			touch = 1;
			putimage(300,400,&doption);
			if (m.mkLButton)
			{
				EndBatchDraw();
				getimage(&animation,0,0,800,600);
				closegraph();	
				Animation(animation,*passspeed);
				GetOption(&startspeed,passspeed);//功能函数进入
				goto begin;
			}	
		}
		else if (m.x>300&&m.x<472&&m.y>500&&m.y<542)//同上
		{
			touch = 2;
			putimage(300,500,&dus);
			if (m.mkLButton&&!_kbhit())
			{
				EndBatchDraw();
				getimage(&animation,0,0,800,600);
				closegraph();	
				Animation(animation,*passspeed);
				AboutUs(*passspeed);//功能函数进入
				goto begin;
			}
		}
		else//加载静态图片
		{
			touch = 0;
			putimage(300,300,&start);
			putimage(300,400,&option);
			putimage(300,500,&us);
		}

		//触摸状态变化
		if (touch==1)
		{
			hcur = LoadCursor(NULL, MAKEINTRESOURCE(32649));//变化成手形鼠标		
			SetClassLong(hwnd, GCL_HCURSOR, (long)hcur); 
		}
		else if (touch==0)
		{
			hcur = LoadCursor(NULL, IDC_ARROW);//变化成指针鼠标		
			SetClassLong(hwnd, GCL_HCURSOR, (long)hcur); 
		}
		else
		{
			hcur = LoadCursor(NULL, IDC_NO);//变化成禁止状鼠标		
			SetClassLong(hwnd, GCL_HCURSOR, (long)hcur); 
		}
	
		FlushBatchDraw();
	}
	
	getch();
	closegraph();

}