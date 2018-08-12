#include "main.h"

void RecordOtherday()
{
	MONEY money ;
	int cost_type;
	int temp;
	Timerecord(&money.time);//读取当天系统时间

	int ch = 0;
	int ret = 0;

	HWND window = GetConsoleWindow();
	SetWindowPos(window, HWND_TOP, 545, 220, 0, 0, SWP_NOSIZE);//缩小窗口大小

	SwitchToThisWindow(window,TRUE);

	system("color 0e");
	system("mode con cols=30 lines=15");
	printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
	printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
	SetColor(12,0);
	printf(" ║※1.花销数目(输入0结束) ║\n");
	SetColor(14,0);
	printf(" ║※2.花销日期   　       ║\n");
	printf(" ║※3.花销类型   　       ║\n");
	printf(" ║※4.具体备注(15字以内)  ║\n");
	printf(" ╚════════════════════════╝\n");
	SetColor(12,0);
	printf(" ※1.>>");
	scanf("%f",&money.number);//输入花销
	if (money.number==0)
	{
		goto end;//唯一出口
	}

	system("color 0e");
	system("mode con cols=30 lines=15");
	printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
	printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
	printf(" ║※1.花销数目(输入0结束) ║\n");
	SetColor(12,0);
	printf(" ║※2.花销日期(如2018/1/1)║\n");
	SetColor(14,0);
	printf(" ║※3.花销类型   　       ║\n");
	printf(" ║※4.具体备注(15字以内)  ║\n");
	printf(" ╚════════════════════════╝\n");
	SetColor(12,0);
	printf(" ※2.>>");
	scanf("%d%*c%d%*c%d",&money.time.year,&money.time.month,&money.time.day);

	system("color 0e");
	system("mode con cols=30 lines=15");
	printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
	printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
	printf(" ║※1.花销数目(输入0结束) ║\n");
	printf(" ║※2.花销日期   　       ║\n");
	SetColor(12,0);
	printf(" ║※3.花销类型   　       ║\n");
	SetColor(14,0);
	printf(" ║※4.具体备注(15字以内)  ║\n");
	printf(" ╚════════════════════════╝\n");
	SetColor(12,0);
	Sleep(450);

	system("color 0e");
	system("mode con cols=30 lines=15");
	printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
	printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
	printf(" ║※1.基本消费            ║\n");
	printf(" ║※2.学习消费   　       ║\n");
	printf(" ║※3.休闲娱乐　          ║\n");
	printf(" ║※4.人际交往　          ║\n");
	printf(" ╚════════════════════════╝\n");

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
		printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
		printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
		SetColor(12,0);
		printf(" ║※1.基本消费            ║\n");
		SetColor(14,0);
		printf(" ║※2.学习消费   　       ║\n");
		printf(" ║※3.休闲娱乐　          ║\n");
		printf(" ║※4.人际交往　          ║\n");
		printf(" ╚════════════════════════╝\n");
		SetColor(12,0);
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
		SetColor(12,0);
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
		SetColor(12,0);
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
		SetColor(12,0);
		Sleep(350);
		break;	

	}


Q :system("color 0e");
	system("mode con cols=30 lines=15");
	printf("    ╪╪╪╪╪╪╧╧╧╧╧╧╧╧╪╪╪╪╪╪\n");
	printf(" ╔══╧◆掌◆握◆金◆钱◆╧╧═╗\n");
	printf(" ║※1.花销数目(输入0结束) ║\n");							
	printf(" ║※2.花销日期   　       ║\n");
	printf(" ║※3.花销类型   　       ║\n");
	SetColor(12,0);
	printf(" ║※4.具体备注(15字以内)  ║\n");
	SetColor(14,0);
	printf(" ╚════════════════════════╝\n");
	printf(" ※4.>>");
	scanf(" %s",money.remark);

	Store(money,cost_type);//存入文件

end:SetColor(10,0);
	printf("          输");
	SetColor(1,0);
	printf("入");
	SetColor(12,0);
	printf("结");
	SetColor(11,0);
	printf("束");
	Sleep(500);//结束效果



}


