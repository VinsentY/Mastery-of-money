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
	SetWindowPos(window, HWND_TOP, 545, 220, 0, 0, SWP_NOSIZE);//缩小窗口大小

	SwitchToThisWindow(window,TRUE);

	system("color 0e");
	system("mode con cols=30 lines=15");
	printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
	printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
	printf(" ║※1.基本消费            ║\n");
	printf(" ║※2.学习消费   　       ║\n");
	printf(" ║※3.休闲娱乐　          ║\n");
	printf(" ║※4.人际交往　          ║\n");
	printf(" ╚════════════════════════╝\n");
	printf("查找类型>>");
	do 
	{
		fflush(stdin);
		scanf("%d",&temp_1);//输入类型
	} while (temp_1 >4 || temp_1 < 1);

	cost_type = temp_1-1;
	head = ReadType(cost_type);//读取出该类型的数据至链表中

	switch (temp_1)//高亮显示效果
	{
	case 1:
		system("color 0e");
		system("mode con cols=30 lines=15");
		printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
		printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
		SetColor(12,0);
		printf(" ║※1.基本消费            ║\n");
		SetColor(14,0);
		printf(" ║※2.学习消费   　       ║\n");
		printf(" ║※3.休闲娱乐　          ║\n");
		printf(" ║※4.人际交往　          ║\n");
		printf(" ╚════════════════════════╝\n");

		Sleep(350);
		break;

	case 2:
		system("color 0e");
		system("mode con cols=30 lines=15");
		printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
		printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
		printf(" ║※1.基本消费            ║\n");
		SetColor(12,0);
		printf(" ║※2.学习消费   　       ║\n");
		SetColor(14,0);
		printf(" ║※3.休闲娱乐　          ║\n");
		printf(" ║※4.人际交往　          ║\n");
		printf(" ╚════════════════════════╝\n");

		Sleep(350);
		break;


	case 3:
		system("color 0e");
		system("mode con cols=30 lines=15");
		printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
		printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
		printf(" ║※1.基本消费            ║\n");	
		printf(" ║※2.学习消费   　       ║\n");
		SetColor(12,0);
		printf(" ║※3.休闲娱乐　          ║\n");
		SetColor(14,0);
		printf(" ║※4.人际交往　          ║\n");
		printf(" ╚════════════════════════╝\n");

		Sleep(350);
		break;
	case 4:
		system("color 0e");
		system("mode con cols=30 lines=15");
		printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
		printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
		printf(" ║※1.基本消费            ║\n");	
		printf(" ║※2.学习消费   　       ║\n");
		printf(" ║※3.休闲娱乐　          ║\n");
		SetColor(12,0);
		printf(" ║※4.人际交往　          ║\n");
		SetColor(14,0);
		printf(" ╚════════════════════════╝\n");

		Sleep(350);

		break;


	}

	system("cls");
	printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
	printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
	printf(" ║※1.时间排序            ║\n");
	printf(" ║※2.金钱排序   　       ║\n");
	printf(" ╚════════════════════════╝\n");
	printf("排序>>");
	do 
	{
		fflush(stdin);
		scanf("%d",&choice);//输入选择
	} while (choice >2 || choice < 1);


	switch(choice)//高亮显示效果
	{
	case 1: 
		system("cls");
		printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
		printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
		SetColor(12,0);
		printf(" ║※1.时间排序            ║\n");
		SetColor(14,0);
		printf(" ║※2.金钱排序   　       ║\n");
		printf(" ╚════════════════════════╝\n");

		Sleep(450);
		break;
	case 2:
		system("cls");
		printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
		printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
		printf(" ║※1.时间排序            ║\n");
		SetColor(12,0);
		printf(" ║※2.金钱排序   　       ║\n");
		SetColor(14,0);
		printf(" ╚════════════════════════╝\n");

		Sleep(450);
		break;

	}

	for (p=head;p->next!=NULL;p=p->next)//分类环节
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
	PrintAll(head);//打印环节
}