#include "main.h"

void SearchbyTime ()
{
	HWND window = GetConsoleWindow();
	SetWindowPos(window, HWND_TOP, 575, 225, 0, 0, SWP_NOSIZE);

	SwitchToThisWindow(window,TRUE);

	//С�����������
	system("color 0e");
	system("mode con cols=30 lines=15");

	int need = 0;
	TIME time;
	
	printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
	printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
	printf(" �U��1.���Ӳ�ѯ            �U\n");
	printf(" �U��2.�·ݲ�ѯ   ��       �U\n");
	printf(" �U��3.��ݲ�ѯ��          �U\n");
	printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
	printf(">>");

	do 
	{
		fflush(stdin);
		scanf("%d",&need);
	} while (need >3 || need < 1);//��������

	switch(need)
	{
	case 1: 
		system("cls");
		printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
		printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
		SetColor(12,0);
		printf(" �U��1.�շݲ�ѯ            �U\n");
		SetColor(14,0);
		printf(" �U��2.�·ݲ�ѯ   ��       �U\n");
		printf(" �U��3.��ݲ�ѯ��          �U\n");
		printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
		Sleep(350);
		system("cls");
		printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
		printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
		printf(" �U��1.��������(��2018/2/1)�U\n");
		printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
		printf(">>");

		scanf("%d%*c%d",&time.year,&time.month);

		system("cls");
		printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
		printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
		SetColor(12,0);
		printf(" �U��1.��������(��2018/2/1)�U\n");
		SetColor(14,0);
		printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
		Sleep(350);
		break;

		break;
	case 2:  
		system("cls");
		printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
		printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
		printf(" �U��1.���Ӳ�ѯ��          �U\n");
		SetColor(12,0);
		printf(" �U��2.�·ݲ�ѯ            �U\n");
		SetColor(14,0);
		printf(" �U��3.��ݲ�ѯ   ��       �U\n");
		printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
		Sleep(350);
		system("cls");
		printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
		printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
		printf(" �U��1.�����·� (��2018/2) �U\n");
		printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
		printf(">>");
		scanf("%d%*c%d",&time.year,&time.month);	
		system("cls");
		printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
		printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
		SetColor(12,0);
		printf(" �U��1.�����·� (��2018/2) �U\n");
		SetColor(14,0);
		printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
		Sleep(350);
		break;
	case 3: 
		system("cls");
		printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
		printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");			
		printf(" �U��1.���Ӳ�ѯ            �U\n");
		printf(" �U��2.�·ݲ�ѯ   ��       �U\n");
		SetColor(12,0);
		printf(" �U��3.��ݲ�ѯ   ��       �U\n");
		SetColor(14,0);
		printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
		Sleep(350);
		system("cls");

		printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
		printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
		printf(" �U��1.������� (��2019)   �U\n");
		printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");

		printf(">>");
		scanf("%d",&time.year);	
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

	switch(need)
	{
	case 1:ReadSortTime(time,need,CompareTime);
		break;
	case 2:ReadSortTime(time,need,CompareNum);
		break;
	}



}