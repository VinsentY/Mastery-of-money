#include "main.h"

void GetOption (float *startspeed,float *passspeed)
{
	initgraph(800,600);

	HCURSOR hcur = LoadCursor(NULL, IDC_ARROW);		// ����ϵͳԤ�õ������ʽ
	HWND hwnd = GetHWnd();

	BeginBatchDraw();

	int touch = 0;//��������

	IMAGE animation;//��ӦͼƬ
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
	float L = 0.5f;//�ʺ���HSL��ɫ

	//����ͼƬ
	loadimage(&begin,"����ͼƬ\\��������.jpg",215,50);
	loadimage(&pass,"����ͼƬ\\��������.jpg",215,50);
	loadimage(&x1,"����ͼƬ\\x1.jpg",75,49);
	loadimage(&dx1,"����ͼƬ\\x1(1).jpg",75,49);
	loadimage(&x2,"����ͼƬ\\x2.jpg",75,49);
	loadimage(&dx2,"����ͼƬ\\x2(1).jpg",75,49);
	loadimage(&x3,"����ͼƬ\\x3.jpg",75,49);
	loadimage(&dx3,"����ͼƬ\\x3(1).jpg",75,49);
	loadimage(&x4,"����ͼƬ\\x4.jpg",75,49);
	loadimage(&dx4,"����ͼƬ\\x4(1).jpg",75,49);

	setlinestyle(PS_SOLID, 2);		// �����߿�Ϊ 2
	for(int r = 220; r > 164; r--) //���½ǲʺ�
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
		if (m.x>290&&m.x<390&&m.y>125&&m.y<174)//���ָ�����򶯻��任
		{
			touch = 1;
			putimage(290,120,&dx1);//��ɫ�任
			if (m.mkLButton)
			{	
				*startspeed = 0.5;//�����ٶ�
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
		else if (m.x>290&&m.x<390&&m.y>300&&m.y<349)//ͳһ�ߴ� 75 x 49
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

		//�����ʽ�任
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

	//�����ݴ����ļ�����
	FILE *fp;
	if (fp=fopen("�����ٶ�����.txt","w+"))
	{
		fprintf(fp,"---------------------------------\n");
		fprintf(fp,"	  ����Ч��\n");
		fprintf(fp,"��������                :");
		fprintf(fp,"%.5f",*startspeed);
		fprintf(fp,";\n");
		fprintf(fp,"���ɶ���                :");
		fprintf(fp,"%.5f",*passspeed);
		fprintf(fp,";\n");
		fprintf(fp,"---------------------------------\n");
		fprintf(fp,"       �����ˣ�Vinsent_Y");
	}
	else
	{
		exit(0);
	}

	fclose(fp);
}