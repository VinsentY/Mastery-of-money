#include "main.h"

void Function(int choice)
{
		system("cls");
		
		switch(choice)
		{
		case 1: RecordToday();  //读入当天数据
			break;
		case 2: RecordOtherday(); //读入其他时间数据
			break;
		case 3: Sort(CompareNum);//读取所有数据并按金钱数排列
			break;
		case 4: Sort(CompareTime);//读取所有数据并按时间顺序排列
			break;
		case 5: TypeSort();   //读取对应类型数据并排列 输入任务
			break;
		case 6: SearchbyTime();  //读取相应时间内的数据并排列 输入任务
			break;
		case 7: SearchbyMoney();  //读取相应金钱范围内的数据并排列 输入任务
			break;
		case 8: SearchbyRemark();  //读取含有备注关键词的数据并排列 输入任务
			break;
		case 9: TypeRatio();  //类型比例并给予"经济学"建议 输入/输出任务
			break;
		case 10: exit(1);  //退出
			break;
		default: printf("选项输入错误");
			break;

		}
}