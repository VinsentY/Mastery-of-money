#include "main.h"

void SearchbyTime ()
{
	HWND window = GetConsoleWindow();
	SetWindowPos(window, HWND_TOP, 575, 225, 0, 0, SWP_NOSIZE);

	SwitchToThisWindow(window,TRUE);

	//小窗口输入界面
	system("color 0e");
	system("mode con cols=30 lines=15");

	int need = 0;
	TIME time;
	
	printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
	printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
	printf(" ║※1.日子查询            ║\n");
	printf(" ║※2.月份查询   　       ║\n");
	printf(" ║※3.年份查询　          ║\n");
	printf(" ╚════════════════════════╝\n");
	printf(">>");

	do 
	{
		fflush(stdin);
		scanf("%d",&need);
	} while (need >3 || need < 1);//输入需求

	switch(need)
	{
	case 1: 
		system("cls");
		printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
		printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
		SetColor(12,0);
		printf(" ║※1.日份查询            ║\n");
		SetColor(14,0);
		printf(" ║※2.月份查询   　       ║\n");
		printf(" ║※3.年份查询　          ║\n");
		printf(" ╚════════════════════════╝\n");
		Sleep(350);
		system("cls");
		printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
		printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
		printf(" ║※1.输入日期(如2018/2/1)║\n");
		printf(" ╚════════════════════════╝\n");
		printf(">>");

		scanf("%d%*c%d",&time.year,&time.month);

		system("cls");
		printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
		printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
		SetColor(12,0);
		printf(" ║※1.输入日期(如2018/2/1)║\n");
		SetColor(14,0);
		printf(" ╚════════════════════════╝\n");
		Sleep(350);
		break;

		break;
	case 2:  
		system("cls");
		printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
		printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
		printf(" ║※1.日子查询　          ║\n");
		SetColor(12,0);
		printf(" ║※2.月份查询            ║\n");
		SetColor(14,0);
		printf(" ║※3.年份查询   　       ║\n");
		printf(" ╚════════════════════════╝\n");
		Sleep(350);
		system("cls");
		printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
		printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
		printf(" ║※1.输入月份 (如2018/2) ║\n");
		printf(" ╚════════════════════════╝\n");
		printf(">>");
		scanf("%d%*c%d",&time.year,&time.month);	
		system("cls");
		printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
		printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
		SetColor(12,0);
		printf(" ║※1.输入月份 (如2018/2) ║\n");
		SetColor(14,0);
		printf(" ╚════════════════════════╝\n");
		Sleep(350);
		break;
	case 3: 
		system("cls");
		printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
		printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");			
		printf(" ║※1.日子查询            ║\n");
		printf(" ║※2.月份查询   　       ║\n");
		SetColor(12,0);
		printf(" ║※3.年份查询   　       ║\n");
		SetColor(14,0);
		printf(" ╚════════════════════════╝\n");
		Sleep(350);
		system("cls");

		printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
		printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
		printf(" ║※1.输入年份 (如2019)   ║\n");
		printf(" ╚════════════════════════╝\n");

		printf(">>");
		scanf("%d",&time.year);	
		system("cls");
		printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
		printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
		SetColor(12,0);
		printf(" ║※1.输入年份 (如2019)   ║\n");
		SetColor(14,0);
		printf(" ╚════════════════════════╝\n");
		Sleep(350);
		break;
	}

	switch(need)
	{
	case 1:ReadSortTime(time,need,CompareTime);
		break;
	case 2:ReadSortTime(time,need,CompareNum);
		break;
	}



}