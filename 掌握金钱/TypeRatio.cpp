#include "main.h"

#define PI 3.1415926535

void TypeRatio ()
{
	FILE *fp;
	Node *head = NULL;
	MONEY money;
	int need = 0;
	TIME mytime;
	char gettype[12];
	int i = 0;
	float typesum[4] = {0};
	float sum = 0.0;
	char *ridicule []= {"�ǲ��Ǳ����Ҹ���Ů������������","�ǲ���������ʲô���Ӳ�Ʒ����","������ʡǮ����","�ǳ���ʲô������"};

	HWND window = GetConsoleWindow();
	SetWindowPos(window, HWND_TOP, 575, 225, 0, 0, SWP_NOSIZE);

	SwitchToThisWindow(window,TRUE);

	//С�����������
	system("color 0e");
	system("mode con cols=30 lines=15");
	printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
	printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
	printf(" �U��1.�·ݲ�ѯ            �U\n");
	printf(" �U��2.��ݲ�ѯ   ��       �U\n");
	printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
	printf(">>");
	scanf("%d",&need);//��������
	system("cls");
	switch(need)
	{
	case 1: printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
			printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
			SetColor(12,0);
			printf(" �U��1.�·ݲ�ѯ            �U\n");
			SetColor(14,0);
			printf(" �U��2.��ݲ�ѯ   ��       �U\n");
			printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
			Sleep(350);
			system("cls");
			printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
			printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
			printf(" �U��1.�����·� (��2018/2) �U\n");
			printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
			printf(">>");
			scanf("%d%*c%d",&mytime.year,&mytime.month);	
			system("cls");
			printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
			printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
			SetColor(12,0);
			printf(" �U��1.�����·� (��2018/2) �U\n");
			SetColor(14,0);
			printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
			Sleep(350);
		break;
	case 2: printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
			printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");			
			printf(" �U��1.�·ݲ�ѯ            �U\n");
			SetColor(12,0);
			printf(" �U��2.��ݲ�ѯ   ��       �U\n");
			SetColor(14,0);
			printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
			Sleep(350);
			system("cls");

			printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
			printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
			printf(" �U��1.������� (��2019)   �U\n");
			printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
			
			printf(">>");
			scanf("%d",&mytime.year);	
			system("cls");
			printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
			printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
			SetColor(12,0);
			printf(" �U��1.������� (��2019)   �U\n");
			SetColor(14,0);
			printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
			Sleep(350);
		break;
	}
	fp = fopen("�˵�.text","r");
	if (fp)
	{
		//fscanf(fp,"%*[^\n]%*c");
		for (i=0;i<4;i++)
		{
			strcpy(gettype,PutType(i));
			while(fscanf(fp,"%d/",&money.time.year)!=EOF)
			{
				
				fscanf(fp,"%d/",&money.time.month);    
				fscanf(fp,"%d    ",&money.time.day);
				fscanf(fp,"%s    ",&money.real_type);
				fscanf(fp,"%f    ",&money.number);
				fscanf(fp,"%s    ",money.remark);
				if (strcmp(gettype,money.real_type)==0&&ScreenTime(need+1,mytime,money)==1)//��Ҫ���������ɸѡ
				{
					typesum[i] = typesum[i] + money.number;
				}
			}
			rewind(fp);
			sum = sum + typesum[i];

		}
		
	}
	fclose(fp);

	SetWindowPos(window, HWND_TOP, 335, 275, 800, 350, SWP_SHOWWINDOW);
	initgraph(800,350);
	settextcolor(YELLOW);

	BeginBatchDraw();
	char s[8];

	//�����ܶ���ʾ
	if (need==1&&sum>1900)
	{	
		sprintf(s, "%.1f", sum);
		outtextxy(215,330,"������¾�Ȼ����");
		outtextxy(345,330,s);
		srand(time(NULL));
		outtextxy(400,330,ridicule[rand()%3]);	
	}
	else if (need==1)
	{
		sprintf(s, "%.1f", sum);
		outtextxy(215,330,"������㻨��");
		outtextxy(315,330,s);
	}
	else
	{
		sprintf(s, "%.1f", sum);
		outtextxy(215,330,"�����㹲����");
		outtextxy(315,330,s);
	}
	setfillcolor(WHITE);
	line(380,0,380,310);
	line(0,310,800,310);

	setfillcolor(BLUE);
	fillrectangle(650,15,700,30);//��ɫ����
	outtextxy(710,15,"��������");//����
	fillpie(400,100,600,300,0,(float)PI*2*typesum[0]/sum);//����
	fillrectangle(60,300-typesum[0]/sum*100*3,100,300);//��״ͼ

	setfillcolor(GREEN);
	fillrectangle(650,45,700,60);
	outtextxy(710,45,"ѧϰ����");
	if (typesum[0]!=sum)
	{
		fillpie(400,100,600,300,(float)PI*2*typesum[0]/sum,(float)PI*2*(typesum[0]+typesum[1])/sum);
	}	
	fillrectangle(145,300-typesum[1]/sum*100*3,190,300);

	setfillcolor(LIGHTMAGENTA);
	fillrectangle(650,75,700,90);
	outtextxy(710,75,"��������");
	if (typesum[0]!=sum)
	{
		fillpie(400,100,600,300,(float)PI*2*(typesum[0]+typesum[1])/sum,(float)PI*2*(typesum[0]+typesum[1]+typesum[2])/sum);
	}	
	fillrectangle(235,300-typesum[2]/sum*100*3,275,300);

	setfillcolor(RED);
	fillrectangle(650,105,700,120);
	outtextxy(710,105,"�˼ʽ���");
	if (typesum[0]!=sum)
	{
		fillpie(400,100,600,300,(float)PI*2*(typesum[0]+typesum[1]+typesum[2])/sum,(float)PI*2);
	}
	fillrectangle(320,300-typesum[3]/sum*100*3,360,300);
	
	setfillcolor(YELLOW);
	line(15,30,15,300);
	line(15,300,370,300);
	line(12,33,15,30);
	line(18,33,15,30);
	line(367,297,370,300);  //������
	line(367,303,370,300);  
	
	char temp[4][8] ;
	
	for (int i = 0;i<4;i++)
	{
		sprintf(temp[i],"%.1f",typesum[i]);//������ת��Ϊ�ַ���
	}
	outtextxy(60,300-typesum[0]/sum*100*3-20,temp[0]);
	outtextxy(145,300-typesum[1]/sum*100*3-20,temp[1]);
	outtextxy(235,300-typesum[2]/sum*100*3-20,temp[2]);
	outtextxy(320,300-typesum[3]/sum*100*3-20,temp[3]);//��״ͼ�Ϸ�����

	


	FlushBatchDraw();
	getch();
	closegraph();

	
}