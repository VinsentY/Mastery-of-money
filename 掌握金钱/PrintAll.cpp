#include "main.h"

void PrintAll (Node *head)
{
	fflush(stdin);
	system("mode con cols=99 lines=1000");
	HWND window = GetConsoleWindow();
	SetWindowPos(window, HWND_TOP, 335, 45, 800, 700, SWP_SHOWWINDOW);

	SwitchToThisWindow(window,TRUE);

	int i = 1;
	Node *p;
	system("cls");
	SetPos(14,i);
	SetColor(11,0);
	printf(" �X�T�T�T�k�k�T�T�T�T�T�T�T�T�T�T�j�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�j�T�T�T�T�T�T�T�j�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�k�k�T�T�T�[ ");
	i++;
	SetPos(14,i);
	SetColor(11,0);
	printf(" �U ");
	SetColor(10,0);
	printf("    ����      ");//15
	SetColor(11,0);
	printf("�U ");
	SetColor(1,0);
	printf("   ��������    ");//16
	SetColor(11,0);
	printf("�U ");
	SetColor(12,0);
	printf(" ���");//6
	SetColor(11,0);
	printf(" �U ");
	SetColor(15,0);
	printf("      ��ע");//20
	SetColor(11,0);
	printf("         �U ");
	for (p=head;p;p=p->next)//Ѱ������ĩ��
	{
		i++;
		SetPos(14,i);
		printf(" �d�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�p�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�p�T�T�T�T�T�T�T�p�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�g ");
		i++;
		SetPos(14,i);
		SetColor(11,0);
		printf(" �U ");
		SetColor(14,0);

		printf("  %4d/",p->money.time.year);
		printf("%02d/",p->money.time.month);
		printf("%02d  ",p->money.time.day);

		SetColor(11,0);
		printf("�U ");
		SetColor(14,0);

		printf("%12s\t",p->money.real_type);

		SetColor(11,0);
		printf("�U ");
		SetColor(14,0);

		printf("%5.1f",p->money.number);

		SetColor(11,0);
		printf(" �U ");
		SetColor(14,0);

		printf("%17s",p->money.remark);

		SetColor(11,0);
		printf("  �U ");


	}
	i++;
	SetPos(14,i);
	printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�m�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�m�T�T�T�T�T�T�T�m�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a ");
	printf("\n                 �������");
	

	getchar();
	
}