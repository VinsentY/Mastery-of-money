#include "main.h"

void TypeSort ()
{
	Node *head;
	Node *p,*q;
	MONEY temp;
	int choice = 0;
	int cost_type = 0;
	int temp_1;

	HWND window = GetConsoleWindow();
	SetWindowPos(window, HWND_TOP, 545, 220, 0, 0, SWP_NOSIZE);//��С���ڴ�С

	SwitchToThisWindow(window,TRUE);

	system("color 0e");
	system("mode con cols=30 lines=15");
	printf("    �n�n�n�n�n�n�k�k�k�k�k�k�k�k�n�n�n�n�n�n\n");
	printf(" �X�T�T�k���ơ��ա����Ǯ���k�k�T�[\n");
	printf(" �U��1.��������            �U\n");
	printf(" �U��2.ѧϰ����   ��       �U\n");
	printf(" �U��3.�������֡�          �U\n");
	printf(" �U��4.�˼ʽ�����          �U\n");
	printf(" �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a\n");
	printf("��������>>");
	do 
	{
		fflush(stdin);
		scanf("%d",&temp_1);//��������
	} while (temp_1 >4 || temp_1 < 1);

	cost_type = temp_1-1;
	head = ReadType(cost_type);//��ȡ�������͵�������������

	switch (temp_1)//������ʾЧ��
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

		Sleep(350);

		break;


	}

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
		scanf("%d",&choice);//����ѡ��
	} while (choice >2 || choice < 1);


	switch(choice)//������ʾЧ��
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

	for (p=head;p->next!=NULL;p=p->next)//���໷��
	{
		for (q=p->next;q;q=q->next)
		{
			if (choice==1)
			{
				if (CompareTime(p,q))
				{
					temp = p->money;
					p->money = q->money;
					q->money = temp;
				}
			}
			else
			{
				if (CompareNum(p,q))
				{
					temp = p->money;
					p->money = q->money;
					q->money = temp;
				}

			}
			
		}
		
	}
	PrintAll(head);//��ӡ����
}