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
	int touch = 0;//״̬��

	IMAGE acer;//Ԫ��ͼƬ
	WORDS pic;
	IMAGE start;
	IMAGE option;
	IMAGE us;
	IMAGE dstart;
	IMAGE doption;
	IMAGE dus;
	IMAGE animation;
	MOUSEMSG m;//��¼������
	HCURSOR hcur = LoadCursor(NULL, IDC_ARROW);		// ����ϵͳԤ�õ������ʽ
	HWND hwnd = GetHWnd();//��ô��ھ��

	float startspeed = 0.5; //���������ٶ�

	CO co1 = {0,0,0.8,0};
	CO co2 = {800,281.9,-1,0};
	CO co3 = {232,0,0,1};
	CO co4 = {232+248,0,0,1};//��ö��Ǯ��״̬�ṹ��

	PIXEL first = {0,15,15};
	PIXEL second = {0,785,585}; //�������ֱ��

	//����ͼƬ
	loadimage(&acer, "����ͼƬ\\10.jpg",78,41);
	loadimage(&pic.zhang, "����ͼƬ\\��.jpg",78,87.5);
	loadimage(&pic.wo, "����ͼƬ\\��.jpg",78,87.5);
	loadimage(&pic.jin, "����ͼƬ\\��.jpg",78,87.5);	
	loadimage(&pic.qian, "����ͼƬ\\Ǯ.jpg",78,87.5);
	loadimage(&start, "����ͼƬ\\��ʼ����.jpg",172,42);
	loadimage(&option, "����ͼƬ\\�����ٶ�.jpg",172,42);
	loadimage(&us, "����ͼƬ\\��������.jpg",172,42);
	loadimage(&dstart, "����ͼƬ\\��ʼ����(1).jpg",172,42);
	loadimage(&doption, "����ͼƬ\\�����ٶ�(1).jpg",172,42);
	loadimage(&dus, "����ͼƬ\\��������(1).jpg",172,42);//��(1)�����ɫ���ͼƬ

	LoadOption(&startspeed,passspeed);//���붯���ٶ�����
	while (back_startfourth!=5)//������һ�׶�
	{
		BeginBatchDraw();
		
		CopperJump(&co1,&jump,&collision,&startsecond,&startfourth,back_startfourth);//��Ծ��Ҷ���
		CopperAppear(&co2,startsecond,&collision,&startthird,&startfourth,back_startfourth);//�Ҳ���ֽ�Ҷ���
		AcerAppear(&co3,&co4,startthird,acer,&startfourth,back_startfourth);//��öԪ������
		Printword (pic,startfourth,&back_startfourth,co1,co2,co3,co4);//���ս�Ǯ����
		Sleep(startspeed);//�ٶȵ���
		FlushBatchDraw();
		setcolor(BLACK);
		setfillcolor(BLACK);
		fillrectangle(0,0,800,600);//����ˢ��
	}
	while(1)//�����ڶ��׶�
	{
		PrintLine(&first,&second);//����߶ζ���

		putimage(100,100,&pic.zhang);
		putimage(250,100,&pic.wo);
		putimage(440,100,&pic.jin);
		putimage(600,100,&pic.qian);//���ս�Ǯ��̬ͼƬ

		m = GetMouseMsg();//�������������

		BeginBatchDraw();
		if (m.x>300&&m.x<472&&m.y>300&&m.y<342)//��ָ�������ڲ����仯
		{
			touch = 1;//���Ĵ���״̬����
			putimage(300,300,&dstart);//������ɫ
			if (m.mkLButton)
			{	
				EndBatchDraw();
				getimage(&animation,0,0,800,600);
				closegraph();	
				Animation(animation,*passspeed);//���ɶ���
				return Menu(*passspeed);//���ܺ�������
				
			}
		}
		else if(m.x>300&&m.x<472&&m.y>400&&m.y<442)//ͬ��
		{
			touch = 1;
			putimage(300,400,&doption);
			if (m.mkLButton)
			{
				EndBatchDraw();
				getimage(&animation,0,0,800,600);
				closegraph();	
				Animation(animation,*passspeed);
				GetOption(&startspeed,passspeed);//���ܺ�������
				goto begin;
			}	
		}
		else if (m.x>300&&m.x<472&&m.y>500&&m.y<542)//ͬ��
		{
			touch = 2;
			putimage(300,500,&dus);
			if (m.mkLButton&&!_kbhit())
			{
				EndBatchDraw();
				getimage(&animation,0,0,800,600);
				closegraph();	
				Animation(animation,*passspeed);
				AboutUs(*passspeed);//���ܺ�������
				goto begin;
			}
		}
		else//���ؾ�̬ͼƬ
		{
			touch = 0;
			putimage(300,300,&start);
			putimage(300,400,&option);
			putimage(300,500,&us);
		}

		//����״̬�仯
		if (touch==1)
		{
			hcur = LoadCursor(NULL, MAKEINTRESOURCE(32649));//�仯���������		
			SetClassLong(hwnd, GCL_HCURSOR, (long)hcur); 
		}
		else if (touch==0)
		{
			hcur = LoadCursor(NULL, IDC_ARROW);//�仯��ָ�����		
			SetClassLong(hwnd, GCL_HCURSOR, (long)hcur); 
		}
		else
		{
			hcur = LoadCursor(NULL, IDC_NO);//�仯�ɽ�ֹ״���		
			SetClassLong(hwnd, GCL_HCURSOR, (long)hcur); 
		}
	
		FlushBatchDraw();
	}
	
	getch();
	closegraph();

}