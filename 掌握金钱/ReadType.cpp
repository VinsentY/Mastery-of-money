#include "main.h"

Node *ReadType (int cost_type)
{
	FILE *fp = fopen("账单.text","r");
	Node *head = NULL;
	MONEY money;
	char *gettype = PutType(cost_type);//将数字类型转换成文字类型
	if (fp)
	{
		//fscanf(fp,"%*[^\n]%*c");
		while(fscanf(fp,"%d/",&money.time.year)!=EOF)
		{

			fscanf(fp,"%d/",&money.time.month);    
			fscanf(fp,"%d    ",&money.time.day);
			fscanf(fp,"%s    ",&money.real_type);
			fscanf(fp,"%f    ",&money.number);
			fscanf(fp,"%s    ",money.remark);
			if (strcmp(gettype,money.real_type)==0)//按要求进行数据筛选
			{
				Add(&head,&money);
			}

			
		}
	}
	fclose(fp);
	return head;
}