#include "main.h"

int Menu(float passspeed)
{
	
 	HWND window = GetConsoleWindow();
 	SetWindowPos(window, HWND_TOP, 335, 45, 800, 600, SWP_SHOWWINDOW);//�̶�����λ��

	int touch = 0;
	initgraph(800,675);

	//����ͼƬ
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
	HCURSOR hcur;//�ı������״
	HWND hwnd = GetHWnd();

	//////////////////////////////////////////////////////////////////////////////////////////////////////

	loadimage(&recordtoday,"����ͼƬ\\1.0.jpg",220,45);//��һ���С
	loadimage(&today,"����ͼƬ\\1.1.jpg",220,45);//��һ���С

	loadimage(&recordother,"����ͼƬ\\2.0.jpg",300,45);//�ڶ����С
	loadimage(&other,"����ͼƬ\\2.1.jpg",300,45);//�ڶ����С

	loadimage(&ReadMsort0,"����ͼƬ\\3.0.jpg",350,45);//����1���С
	loadimage(&Msort0,"����ͼƬ\\3.1.jpg",100,45);//����1���С
	loadimage(&ReadMsort1,"����ͼƬ\\3.3.jpg",350,45);//����2���С
	loadimage(&Msort1,"����ͼƬ\\3.4.jpg",100,45);//����2���С	

	loadimage(&ReadTsort0,"����ͼƬ\\4.0.jpg",350,45);//����1���С
	loadimage(&Tsort0,"����ͼƬ\\4.1.jpg",80,45);//����1���С
	loadimage(&ReadTsort1,"����ͼƬ\\4.2.jpg",350,45);//����2���С
	loadimage(&Tsort1,"����ͼƬ\\4.3.jpg",80,45);//����2���С	

	loadimage(&ReadType0,"����ͼƬ\\5.0.jpg",350,45);//����1���С
	loadimage(&Type0,"����ͼƬ\\5.1.jpg",40,45);//����1���С
	loadimage(&ReadType1,"����ͼƬ\\5.2.jpg",350,45);//����2���С
	loadimage(&Type1,"����ͼƬ\\5.3.jpg",40,45);//����2���С	

	loadimage(&ReadIntime0,"����ͼƬ\\6.0.jpg",350,45);//����1���С
	loadimage(&Intime0,"����ͼƬ\\6.1.jpg",100,45);//����1���С
	loadimage(&ReadIntime1,"����ͼƬ\\6.2.jpg",350,45);//����2���С
	loadimage(&Intime1,"����ͼƬ\\6.3.jpg",100,45);//����2���С	

	loadimage(&CorMscope0,"����ͼƬ\\7.0.jpg",350,45);//����1���С
	loadimage(&Mscope0,"����ͼƬ\\7.1.jpg",180,45);//����1���С
	loadimage(&CorMscope1,"����ͼƬ\\7.2.jpg",350,45);//����2���С
	loadimage(&Mscope1,"����ͼƬ\\7.3.jpg",180,45);//����2���С

	loadimage(&ReadRemark0,"����ͼƬ\\8.0.jpg",350,45);//�ڰ�1���С
	loadimage(&Remark0,"����ͼƬ\\8.1.jpg",180,45);//�ڰ�1���С
	loadimage(&ReadReamark1,"����ͼƬ\\8.2.jpg",350,45);//�ڰ�2���С
	loadimage(&Remark1,"����ͼƬ\\8.3.jpg",180,45);//�ڰ�2���С

	loadimage(&Suggest0,"����ͼƬ\\9.0.jpg",350,45);//�ھ�1���С
	loadimage(&Sugt0,"����ͼƬ\\9.1.jpg",100,45);//�ھ�1���С
	loadimage(&Suggest1,"����ͼƬ\\9.2.jpg",350,45);//�ھ�2���С
	loadimage(&Sugt1,"����ͼƬ\\9.3.jpg",100,45);//�ھ�2���С

	loadimage(&Eixt0,"����ͼƬ\\10.0.jpg",100,45);//��ʮ���С
	loadimage(&Eixt1,"����ͼƬ\\10.1.jpg",100,45);//��ʮ���С
	//////////////////////////////////////////////////////////////////////////////////////////////////////

	while (1)
	{
		m = GetMouseMsg();
		BeginBatchDraw();

		putimage(290,20,&recordtoday);//��һ��λ��
		putimage(250,85,&recordother);//�ڶ���λ��

		putimage(175,150,&ReadMsort0);//����1��λ��
		putimage(525,150,&Msort0);//����1��λ��

		putimage(185,215,&ReadTsort0);//����1��λ��
		putimage(535,215,&Tsort0);//����1��λ��

		putimage(205,280,&ReadType0);//����1��λ��
		putimage(555,280,&Type0);//����1��λ��

		putimage(175,345,&ReadIntime0);//����1��λ��
		putimage(525,345,&Intime0);//����1��λ��

		putimage(135,410,&CorMscope0);//����1��λ��
		putimage(485,410,&Mscope0);//����1��λ��

		putimage(135,475,&ReadRemark0);//�ڰ�1��λ��
		putimage(485,475,&Remark0);//�ڰ�1��λ��

		putimage(175,540,&Suggest0);//�ھ�1��λ��
		putimage(525,540,&Sugt0);//�ھ�1��λ��

		putimage(350,605,&Eixt0);//��ʮ1��λ��
		//////////////////////////////////////////////////////////////////////////////////////
		//                      ��������Ϊ��괥����ʱ�ı���ɫ����
		//                          <<<<<<         >>>>>>
		//////////////////////////////////////////////////////////////////////////////////////
		if (m.x>290&&m.x<490&&m.y>20&&m.y<65)//��һ�����λ��
		{
			touch = 1;
			putimage(290,20,&today);//��һ��λ��
			if (m.mkLButton)
			{
				
				getimage(&animation,0,0,800,600);
				Animation(animation,passspeed);
				return 1;
			}	
		}
		else if (m.x>250&&m.x<550&&m.y>85&&m.y<130)//�ڶ������λ��
		{
			touch = 1;
			putimage(250,85,&other);//�ڶ���λ��
			if (m.mkLButton)
			{
				
				getimage(&animation,0,0,800,600);
				Animation(animation,passspeed);
				return 2;
			}	
		}
		else if (m.x>175&&m.x<625&&m.y>150&&m.y<195)//���������λ��
		{
			touch = 1;
			putimage(175,150,&ReadMsort1);//����2��λ��
			putimage(525,150,&Msort1);//����2��λ��
			if (m.mkLButton)
			{
				
				getimage(&animation,0,0,800,600);
				Animation(animation,passspeed);
				return 3;
			}	

		}
		else if (m.x>185&&m.x<615&&m.y>215&&m.y<260)//���ľ����λ��
		{
			touch = 1;
			putimage(185,215,&ReadTsort1);//����2��λ��
			putimage(535,215,&Tsort1);//����2��λ��
			if (m.mkLButton)
			{
				
				getimage(&animation,0,0,800,600);
				Animation(animation,passspeed);
				return 4;
			}	

		}
		else if (m.x>205&&m.x<595&&m.y>280&&m.y<325)//��������λ��
		{
			touch = 1;
			putimage(205,280,&ReadType1);//����2��λ��
			putimage(555,280,&Type1);//����2��λ��
			if (m.mkLButton)
			{
				
				getimage(&animation,0,0,800,600);
				Animation(animation,passspeed);
				return 5;				
			}	

		}
		else if (m.x>175&&m.x<625&&m.y>345&&m.y<390)//���������λ��
		{
			touch = 1;
			putimage(175,345,&ReadIntime1);//����2��λ��
			putimage(525,345,&Intime1);//����2��λ��
			if (m.mkLButton)
			{
				
				getimage(&animation,0,0,800,600);
				Animation(animation,passspeed);
				return 6;				
			}	

		}
		else if (m.x>135&&m.x<665&&m.y>410&&m.y<455)//���߾����λ��
		{
			touch = 1;
			putimage(135,410,&CorMscope1);//����2��λ��
			putimage(485,410,&Mscope1);//����2��λ��
			if (m.mkLButton)
			{
				
				getimage(&animation,0,0,800,600);
				Animation(animation,passspeed);
				return 7;
			}	

		}
		else if (m.x>135&&m.x<665&&m.y>475&&m.y<520)//�ڰ˾����λ��
		{
			touch = 1;
			putimage(135,475,&ReadReamark1);//�ڰ�2��λ��
			putimage(485,475,&Remark1);//�ڰ�2��λ��
			if (m.mkLButton)
			{
				
				getimage(&animation,0,0,800,600);
				Animation(animation,passspeed);
				return 8;
			}	

		}
		else if (m.x>175&&m.x<625&&m.y>540&&m.y<585)//�ھž����λ��
		{
			touch = 1;
			putimage(175,540,&Suggest1);//�ھ�2��λ��
			putimage(525,540,&Sugt1);//�ھ�2��λ��
			if (m.mkLButton)
			{
				
				getimage(&animation,0,0,800,600);
				Animation(animation,passspeed);
				return 9;				
			}	

		}
		else if (m.x>350&&m.x<450&&m.y>605&&m.y<650)//��ʮ�����λ��
		{
			touch = 1;
			putimage(350,605,&Eixt1);//��ʮ��λ��
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
		//	                         ��������Ϊ�޸������״����
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