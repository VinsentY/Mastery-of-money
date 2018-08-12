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
	printf(" ╔═══╧╧══════════╦════════════════╦═══════╦═══════════════╧╧═══╗ ");
	i++;
	SetPos(14,i);
	SetColor(11,0);
	printf(" ║ ");
	SetColor(10,0);
	printf("    日期      ");//15
	SetColor(11,0);
	printf("║ ");
	SetColor(1,0);
	printf("   花销类型    ");//16
	SetColor(11,0);
	printf("║ ");
	SetColor(12,0);
	printf(" 金额");//6
	SetColor(11,0);
	printf(" ║ ");
	SetColor(15,0);
	printf("      备注");//20
	SetColor(11,0);
	printf("         ║ ");
	for (p=head;p;p=p->next)//寻至链表末端
	{
		i++;
		SetPos(14,i);
		printf(" ╠═══════════════╬════════════════╬═══════╬════════════════════╣ ");
		i++;
		SetPos(14,i);
		SetColor(11,0);
		printf(" ║ ");
		SetColor(14,0);

		printf("  %4d/",p->money.time.year);
		printf("%02d/",p->money.time.month);
		printf("%02d  ",p->money.time.day);

		SetColor(11,0);
		printf("║ ");
		SetColor(14,0);

		printf("%12s\t",p->money.real_type);

		SetColor(11,0);
		printf("║ ");
		SetColor(14,0);

		printf("%5.1f",p->money.number);

		SetColor(11,0);
		printf(" ║ ");
		SetColor(14,0);

		printf("%17s",p->money.remark);

		SetColor(11,0);
		printf("  ║ ");


	}
	i++;
	SetPos(14,i);
	printf(" ╚═══════════════╩════════════════╩═══════╩════════════════════╝ ");
	printf("\n                 排序完毕");
	

	getchar();
	
}