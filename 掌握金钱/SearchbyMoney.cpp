#include "main.h"

void SearchbyMoney ()
{

	HWND window = GetConsoleWindow();
	SetWindowPos(window, HWND_TOP, 545, 220, 0, 0, SWP_NOSIZE);//��С���ڴ�С

	SwitchToThisWindow(window,TRUE);

	system("color 0e");
	system("mode con cols=30 lines=15");

	float little,big;
	int choice = 0;
	printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
	printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
	printf(" �U��1.���뻨����Χ        �U\n");
	printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
	printf("��1����50~500)>>");
	scanf("%f%*c%f",&little,&big);//���뻨����Χ

	system("cls");
	printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
	printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
	SetColor(12,0);
	printf(" �U��1.���뻨����Χ        �U\n");
	SetColor(14,0);
	printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
	Sleep(350);

	system("cls");
	printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
	printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
	printf(" �U��1.ʱ������            �U\n");
	printf(" �U��2.��Ǯ����   ��       �U\n");
	printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
	printf("����>>");
	do 
	{
		fflush(stdin);
		scanf("%d",&choice);
	} while (choice >2 || choice < 1);


	switch(choice)
	{
	case 1: 
		system("cls");
		printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
		printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
		SetColor(12,0);
		printf(" �U��1.ʱ������            �U\n");
		SetColor(14,0);
		printf(" �U��2.��Ǯ����   ��       �U\n");
		printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");

		Sleep(450);
		break;
	case 2:
		system("cls");
		printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
		printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
		printf(" �U��1.ʱ������            �U\n");
		SetColor(12,0);
		printf(" �U��2.��Ǯ����   ��       �U\n");
		SetColor(14,0);
		printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");

		Sleep(450);
		break;

	}

	switch(choice)
	{
	case 1:ReadSortMoney(little,big,CompareTime);
		break;
	case 2:ReadSortMoney(little,big,CompareNum);
		break;
	}
}
	
