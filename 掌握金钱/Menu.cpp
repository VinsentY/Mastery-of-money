#include "main.h"

int Menu(float passspeed)
{
	
 	HWND window = GetConsoleWindow();
 	SetWindowPos(window, HWND_TOP, 335, 45, 800, 600, SWP_SHOWWINDOW);//固定窗口位置

	int touch = 0;
	initgraph(800,675);

	//插入图片
	IMAGE recordtoday;
	IMAGE today;
	IMAGE recordother;
	IMAGE other;
	IMAGE ReadMsort0;
	IMAGE Msort0;
	IMAGE ReadMsort1;
	IMAGE Msort1;
	IMAGE ReadTsort0;
	IMAGE Tsort0;
	IMAGE ReadTsort1;
	IMAGE Tsort1;
	IMAGE ReadType0;
	IMAGE Type0;
	IMAGE ReadType1;
	IMAGE Type1;
	IMAGE ReadIntime0;
	IMAGE Intime0;
	IMAGE ReadIntime1;
	IMAGE Intime1;
	IMAGE CorMscope0;
	IMAGE Mscope0;
	IMAGE CorMscope1;
	IMAGE Mscope1;
	IMAGE ReadRemark0;
	IMAGE Remark0;
	IMAGE ReadReamark1;
	IMAGE Remark1;
	IMAGE Suggest0;
	IMAGE Sugt0;
	IMAGE Suggest1;
	IMAGE Sugt1;
	IMAGE Eixt0;
	IMAGE Eixt1;

	IMAGE animation;

	MOUSEMSG m;
	HCURSOR hcur;//改变鼠标形状
	HWND hwnd = GetHWnd();

	//////////////////////////////////////////////////////////////////////////////////////////////////////

	loadimage(&recordtoday,"动画图片\\1.0.jpg",220,45);//第一句大小
	loadimage(&today,"动画图片\\1.1.jpg",220,45);//第一句大小

	loadimage(&recordother,"动画图片\\2.0.jpg",300,45);//第二句大小
	loadimage(&other,"动画图片\\2.1.jpg",300,45);//第二句大小

	loadimage(&ReadMsort0,"动画图片\\3.0.jpg",350,45);//第三1句大小
	loadimage(&Msort0,"动画图片\\3.1.jpg",100,45);//第三1句大小
	loadimage(&ReadMsort1,"动画图片\\3.3.jpg",350,45);//第三2句大小
	loadimage(&Msort1,"动画图片\\3.4.jpg",100,45);//第三2句大小	

	loadimage(&ReadTsort0,"动画图片\\4.0.jpg",350,45);//第四1句大小
	loadimage(&Tsort0,"动画图片\\4.1.jpg",80,45);//第四1句大小
	loadimage(&ReadTsort1,"动画图片\\4.2.jpg",350,45);//第四2句大小
	loadimage(&Tsort1,"动画图片\\4.3.jpg",80,45);//第四2句大小	

	loadimage(&ReadType0,"动画图片\\5.0.jpg",350,45);//第五1句大小
	loadimage(&Type0,"动画图片\\5.1.jpg",40,45);//第五1句大小
	loadimage(&ReadType1,"动画图片\\5.2.jpg",350,45);//第五2句大小
	loadimage(&Type1,"动画图片\\5.3.jpg",40,45);//第五2句大小	

	loadimage(&ReadIntime0,"动画图片\\6.0.jpg",350,45);//第六1句大小
	loadimage(&Intime0,"动画图片\\6.1.jpg",100,45);//第六1句大小
	loadimage(&ReadIntime1,"动画图片\\6.2.jpg",350,45);//第六2句大小
	loadimage(&Intime1,"动画图片\\6.3.jpg",100,45);//第六2句大小	

	loadimage(&CorMscope0,"动画图片\\7.0.jpg",350,45);//第七1句大小
	loadimage(&Mscope0,"动画图片\\7.1.jpg",180,45);//第七1句大小
	loadimage(&CorMscope1,"动画图片\\7.2.jpg",350,45);//第七2句大小
	loadimage(&Mscope1,"动画图片\\7.3.jpg",180,45);//第七2句大小

	loadimage(&ReadRemark0,"动画图片\\8.0.jpg",350,45);//第八1句大小
	loadimage(&Remark0,"动画图片\\8.1.jpg",180,45);//第八1句大小
	loadimage(&ReadReamark1,"动画图片\\8.2.jpg",350,45);//第八2句大小
	loadimage(&Remark1,"动画图片\\8.3.jpg",180,45);//第八2句大小

	loadimage(&Suggest0,"动画图片\\9.0.jpg",350,45);//第九1句大小
	loadimage(&Sugt0,"动画图片\\9.1.jpg",100,45);//第九1句大小
	loadimage(&Suggest1,"动画图片\\9.2.jpg",350,45);//第九2句大小
	loadimage(&Sugt1,"动画图片\\9.3.jpg",100,45);//第九2句大小

	loadimage(&Eixt0,"动画图片\\10.0.jpg",100,45);//第十句大小
	loadimage(&Eixt1,"动画图片\\10.1.jpg",100,45);//第十句大小
	//////////////////////////////////////////////////////////////////////////////////////////////////////

	while (1)
	{
		m = GetMouseMsg();
		BeginBatchDraw();

		putimage(290,20,&recordtoday);//第一句位置
		putimage(250,85,&recordother);//第二句位置

		putimage(175,150,&ReadMsort0);//第三1句位置
		putimage(525,150,&Msort0);//第三1句位置

		putimage(185,215,&ReadTsort0);//第四1句位置
		putimage(535,215,&Tsort0);//第四1句位置

		putimage(205,280,&ReadType0);//第五1句位置
		putimage(555,280,&Type0);//第五1句位置

		putimage(175,345,&ReadIntime0);//第六1句位置
		putimage(525,345,&Intime0);//第六1句位置

		putimage(135,410,&CorMscope0);//第七1句位置
		putimage(485,410,&Mscope0);//第七1句位置

		putimage(135,475,&ReadRemark0);//第八1句位置
		putimage(485,475,&Remark0);//第八1句位置

		putimage(175,540,&Suggest0);//第九1句位置
		putimage(525,540,&Sugt0);//第九1句位置

		putimage(350,605,&Eixt0);//第十1句位置
		//////////////////////////////////////////////////////////////////////////////////////
		//                      以下内容为鼠标触碰到时改变颜色代码
		//                          <<<<<<         >>>>>>
		//////////////////////////////////////////////////////////////////////////////////////
		if (m.x>290&&m.x<490&&m.y>20&&m.y<65)//第一句鼠标位置
		{
			touch = 1;
			putimage(290,20,&today);//第一句位置
			if (m.mkLButton)
			{
				
				getimage(&animation,0,0,800,600);
				Animation(animation,passspeed);
				return 1;
			}	
		}
		else if (m.x>250&&m.x<550&&m.y>85&&m.y<130)//第二句鼠标位置
		{
			touch = 1;
			putimage(250,85,&other);//第二句位置
			if (m.mkLButton)
			{
				
				getimage(&animation,0,0,800,600);
				Animation(animation,passspeed);
				return 2;
			}	
		}
		else if (m.x>175&&m.x<625&&m.y>150&&m.y<195)//第三句鼠标位置
		{
			touch = 1;
			putimage(175,150,&ReadMsort1);//第三2句位置
			putimage(525,150,&Msort1);//第三2句位置
			if (m.mkLButton)
			{
				
				getimage(&animation,0,0,800,600);
				Animation(animation,passspeed);
				return 3;
			}	

		}
		else if (m.x>185&&m.x<615&&m.y>215&&m.y<260)//第四句鼠标位置
		{
			touch = 1;
			putimage(185,215,&ReadTsort1);//第四2句位置
			putimage(535,215,&Tsort1);//第四2句位置
			if (m.mkLButton)
			{
				
				getimage(&animation,0,0,800,600);
				Animation(animation,passspeed);
				return 4;
			}	

		}
		else if (m.x>205&&m.x<595&&m.y>280&&m.y<325)//第五句鼠标位置
		{
			touch = 1;
			putimage(205,280,&ReadType1);//第五2句位置
			putimage(555,280,&Type1);//第五2句位置
			if (m.mkLButton)
			{
				
				getimage(&animation,0,0,800,600);
				Animation(animation,passspeed);
				return 5;				
			}	

		}
		else if (m.x>175&&m.x<625&&m.y>345&&m.y<390)//第六句鼠标位置
		{
			touch = 1;
			putimage(175,345,&ReadIntime1);//第六2句位置
			putimage(525,345,&Intime1);//第六2句位置
			if (m.mkLButton)
			{
				
				getimage(&animation,0,0,800,600);
				Animation(animation,passspeed);
				return 6;				
			}	

		}
		else if (m.x>135&&m.x<665&&m.y>410&&m.y<455)//第七句鼠标位置
		{
			touch = 1;
			putimage(135,410,&CorMscope1);//第七2句位置
			putimage(485,410,&Mscope1);//第七2句位置
			if (m.mkLButton)
			{
				
				getimage(&animation,0,0,800,600);
				Animation(animation,passspeed);
				return 7;
			}	

		}
		else if (m.x>135&&m.x<665&&m.y>475&&m.y<520)//第八句鼠标位置
		{
			touch = 1;
			putimage(135,475,&ReadReamark1);//第八2句位置
			putimage(485,475,&Remark1);//第八2句位置
			if (m.mkLButton)
			{
				
				getimage(&animation,0,0,800,600);
				Animation(animation,passspeed);
				return 8;
			}	

		}
		else if (m.x>175&&m.x<625&&m.y>540&&m.y<585)//第九句鼠标位置
		{
			touch = 1;
			putimage(175,540,&Suggest1);//第九2句位置
			putimage(525,540,&Sugt1);//第九2句位置
			if (m.mkLButton)
			{
				
				getimage(&animation,0,0,800,600);
				Animation(animation,passspeed);
				return 9;				
			}	

		}
		else if (m.x>350&&m.x<450&&m.y>605&&m.y<650)//第十句鼠标位置
		{
			touch = 1;
			putimage(350,605,&Eixt1);//第十句位置
			if (m.mkLButton)
			{
				
				getimage(&animation,0,0,800,600);
				Animation(animation,passspeed);
				return 10;				
			}	

		}
		else
		{
			touch = 0;
		}
		/////////////////////////////////////////////////////////////////////////////////////////	
		//	                         以下内容为修改鼠标形状代码
		//		                         <<<<<     >>>>>
		/////////////////////////////////////////////////////////////////////////////////////////
		if(touch == 1)
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

	//getch();
	//closegraph();


}