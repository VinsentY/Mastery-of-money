#include "main.h"

void RecordOtherday()
{
	MONEY money ;
	int cost_type;
	int temp;
	Timerecord(&money.time);//��ȡ����ϵͳʱ��

	int ch = 0;
	int ret = 0;

	HWND window = GetConsoleWindow();
	SetWindowPos(window, HWND_TOP, 545, 220, 0, 0, SWP_NOSIZE);//��С���ڴ�С

	SwitchToThisWindow(window,TRUE);

	system("color 0e");
	system("mode con cols=30 lines=15");
	printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
	printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
	SetColor(12,0);
	printf(" �U��1.������Ŀ(����0����) �U\n");
	SetColor(14,0);
	printf(" �U��2.��������   ��       �U\n");
	printf(" �U��3.��������   ��       �U\n");
	printf(" �U��4.���屸ע(15������)  �U\n");
	printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
	SetColor(12,0);
	printf(" ��1.>>");
	scanf("%f",&money.number);//���뻨��
	if (money.number==0)
	{
		goto end;//Ψһ����
	}

	system("color 0e");
	system("mode con cols=30 lines=15");
	printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
	printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
	printf(" �U��1.������Ŀ(����0����) �U\n");
	SetColor(12,0);
	printf(" �U��2.��������(��2018/1/1)�U\n");
	SetColor(14,0);
	printf(" �U��3.��������   ��       �U\n");
	printf(" �U��4.���屸ע(15������)  �U\n");
	printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
	SetColor(12,0);
	printf(" ��2.>>");
	scanf("%d%*c%d%*c%d",&money.time.year,&money.time.month,&money.time.day);

	system("color 0e");
	system("mode con cols=30 lines=15");
	printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
	printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
	printf(" �U��1.������Ŀ(����0����) �U\n");
	printf(" �U��2.��������   ��       �U\n");
	SetColor(12,0);
	printf(" �U��3.��������   ��       �U\n");
	SetColor(14,0);
	printf(" �U��4.���屸ע(15������)  �U\n");
	printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
	SetColor(12,0);
	Sleep(450);

	system("color 0e");
	system("mode con cols=30 lines=15");
	printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
	printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
	printf(" �U��1.��������            �U\n");
	printf(" �U��2.ѧϰ����   ��       �U\n");
	printf(" �U��3.�������֡�          �U\n");
	printf(" �U��4.�˼ʽ�����          �U\n");
	printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");

E :printf(">>");
	fflush(stdin);
	ret = scanf("%d",&temp);
	cost_type = temp-1;
	if (ret != 1 || temp>4&&temp<1)
	{

		goto E;
	}
	switch (temp)
	{
	case 1:
		system("color 0e");
		system("mode con cols=30 lines=15");
		printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
		printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
		SetColor(12,0);
		printf(" �U��1.��������            �U\n");
		SetColor(14,0);
		printf(" �U��2.ѧϰ����   ��       �U\n");
		printf(" �U��3.�������֡�          �U\n");
		printf(" �U��4.�˼ʽ�����          �U\n");
		printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
		SetColor(12,0);
		Sleep(350);
		break;
	case 2:
		system("color 0e");
		system("mode con cols=30 lines=15");
		printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
		printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");				
		printf(" �U��1.��������            �U\n");
		SetColor(12,0);
		printf(" �U��2.ѧϰ����   ��       �U\n");
		SetColor(14,0);
		printf(" �U��3.�������֡�          �U\n");
		printf(" �U��4.�˼ʽ�����          �U\n");
		printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
		SetColor(12,0);
		Sleep(350);
		break;
	case 3:
		system("color 0e");
		system("mode con cols=30 lines=15");
		printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
		printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");				
		printf(" �U��1.��������            �U\n");				
		printf(" �U��2.ѧϰ����   ��       �U\n");
		SetColor(12,0);
		printf(" �U��3.�������֡�          �U\n");
		SetColor(14,0);
		printf(" �U��4.�˼ʽ�����          �U\n");
		printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
		SetColor(12,0);
		Sleep(350);
		break;
	case 4:
		system("color 0e");
		system("mode con cols=30 lines=15");
		printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
		printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");				
		printf(" �U��1.��������            �U\n");				
		printf(" �U��2.ѧϰ����   ��       �U\n");					
		printf(" �U��3.�������֡�          �U\n");
		SetColor(12,0);
		printf(" �U��4.�˼ʽ�����          �U\n");
		SetColor(14,0);
		printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
		SetColor(12,0);
		Sleep(350);
		break;	

	}


Q :system("color 0e");
	system("mode con cols=30 lines=15");
	printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
	printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
	printf(" �U��1.������Ŀ(����0����) �U\n");							
	printf(" �U��2.��������   ��       �U\n");
	printf(" �U��3.��������   ��       �U\n");
	SetColor(12,0);
	printf(" �U��4.���屸ע(15������)  �U\n");
	SetColor(14,0);
	printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
	printf(" ��4.>>");
	scanf(" %s",money.remark);

	Store(money,cost_type);//�����ļ�

end:SetColor(10,0);
	printf("          ��");
	SetColor(1,0);
	printf("��");
	SetColor(12,0);
	printf("��");
	SetColor(11,0);
	printf("��");
	Sleep(500);//����Ч��



}


