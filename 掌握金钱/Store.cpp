#include "main.h"



void Store (MONEY money,int cost_type)
{
	FILE *fp = fopen("账单.text","a");	
	if (fp)
	{
		//fprintf(fp,"日期   花销类型   金额  备注\n");

		fprintf(fp,"%4d/",money.time.year);//写入数据至文件
		fprintf(fp,"%02d/",money.time.month);
		fprintf(fp,"%02d\t",money.time.day);		
		fprintf(fp,"%s\t",PutType(cost_type));//将数字类型转换成文字类型
		fprintf(fp,"%5.1f\t",money.number);
		fprintf(fp,"%s\n",money.remark);
		
		

	}
	else
	{
		printf("   文件打开失败");
	}
	fclose(fp);
}
